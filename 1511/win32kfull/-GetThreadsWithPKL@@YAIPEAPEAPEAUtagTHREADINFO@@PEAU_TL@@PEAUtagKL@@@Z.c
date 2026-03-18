/*
 * XREFs of ?GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU_TL@@PEAUtagKL@@@Z @ 0x1C0098D10
 * Callers:
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C0098B00 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 *     ?xxxFreeImeKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0098BAC (-xxxFreeImeKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 */

__int64 __fastcall GetThreadsWithPKL(struct tagTHREADINFO ***a1, struct _TL *a2, struct tagKL *a3)
{
  struct _TL *v3; // r13
  struct tagTHREADINFO ***v4; // r15
  struct tagKL *v5; // r14
  __int64 v6; // rdi
  unsigned int v7; // r12d
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbp
  __int64 i; // rsi
  _QWORD *j; // r14
  _QWORD *v14; // r15
  _QWORD *v15; // rdx
  __int64 k; // rsi
  __int64 v18; // rax
  __int64 v19; // rax

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = 0LL;
  v7 = 128;
  v8 = Win32AllocPool(1024LL);
  if ( !v8 )
    return 0LL;
  v11 = grpWinStaList;
  if ( grpWinStaList )
  {
    do
    {
      for ( i = *(_QWORD *)(v11 + 16); i; i = *(_QWORD *)(i + 16) )
      {
        for ( j = *(_QWORD **)(i + 160); j != (_QWORD *)(i + 160); j = (_QWORD *)*j )
        {
          v14 = j - 82;
          if ( j != (_QWORD *)656 && (!a3 || a3 == (struct tagKL *)v14[49]) )
          {
            v15 = (_QWORD *)v14[47];
            if ( *v15 == gpepCSRSS || *(_QWORD *)v14[47] == PsGetCurrentProcess(gpepCSRSS, v15, v9, v10) )
            {
              if ( (_DWORD)v6 == v7 )
              {
                v7 += 128;
                v18 = UserReAllocPool(v8, 8LL * (unsigned int)v6, 8LL * v7, 1769239381LL);
                if ( !v18 )
                  goto LABEL_28;
                v8 = v18;
              }
              *(_QWORD *)(v8 + 8 * v6) = v14;
              v6 = (unsigned int)(v6 + 1);
            }
          }
        }
      }
      v11 = *(_QWORD *)(v11 + 8);
    }
    while ( v11 );
    v5 = a3;
    v4 = a1;
    v3 = a2;
  }
  for ( k = *(_QWORD *)(PsGetProcessWin32Process(gpepCSRSS) + 296); k; k = *(_QWORD *)(k + 584) )
  {
    if ( !v5 || v5 == *(struct tagKL **)(k + 392) )
    {
      if ( (_DWORD)v6 == v7 )
      {
        v7 += 128;
        v19 = UserReAllocPool(v8, 8LL * (unsigned int)v6, 8LL * v7, 1769239381LL);
        if ( !v19 )
        {
LABEL_28:
          Win32FreePool(v8);
          return 0LL;
        }
        v8 = v19;
      }
      *(_QWORD *)(v8 + 8 * v6) = k;
      v6 = (unsigned int)(v6 + 1);
    }
  }
  if ( (_DWORD)v6 && v4 )
  {
    *v4 = (struct tagTHREADINFO **)v8;
    PushW32ThreadLock(v8, v3, (__int64)Win32FreePool);
  }
  else
  {
    Win32FreePool(v8);
  }
  return (unsigned int)v6;
}
