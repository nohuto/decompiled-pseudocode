/*
 * XREFs of ?GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU_TL@@PEAUtagKL@@@Z @ 0x1C00E749C
 * Callers:
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C00E728C (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 *     ?xxxFreeImeKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00E7338 (-xxxFreeImeKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 */

__int64 __fastcall GetThreadsWithPKL(struct tagTHREADINFO ***a1, struct _TL *a2, struct tagKL *a3)
{
  struct _TL *v3; // r13
  struct tagTHREADINFO ***v4; // r15
  struct tagKL *v5; // r14
  __int64 v6; // rdi
  unsigned int v7; // r12d
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 i; // rsi
  _QWORD *j; // r14
  _QWORD *v12; // r15
  __int64 v13; // rdx
  __int64 k; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // rax
  __int64 v19; // rax

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = 0LL;
  v7 = 128;
  v8 = Win32AllocPool(1024LL, 1769239381LL);
  if ( !v8 )
    return 0LL;
  v9 = grpWinStaList;
  if ( grpWinStaList )
  {
    do
    {
      for ( i = *(_QWORD *)(v9 + 16); i; i = *(_QWORD *)(i + 16) )
      {
        for ( j = *(_QWORD **)(i + 160); j != (_QWORD *)(i + 160); j = (_QWORD *)*j )
        {
          v12 = j - 82;
          if ( j != (_QWORD *)656
            && (!a3 || a3 == (struct tagKL *)v12[49])
            && (*(_QWORD *)v12[47] == gpepCSRSS || *(_QWORD *)v12[47] == PsGetCurrentProcess(gpepCSRSS)) )
          {
            if ( (_DWORD)v6 == v7 )
            {
              v7 += 128;
              v18 = UserReAllocPool(v8, 8LL * (unsigned int)v6, 8LL * v7, 1769239381LL);
              if ( !v18 )
                goto LABEL_28;
              v8 = v18;
            }
            *(_QWORD *)(v8 + 8 * v6) = v12;
            v6 = (unsigned int)(v6 + 1);
          }
        }
      }
      v9 = *(_QWORD *)(v9 + 8);
    }
    while ( v9 );
    v5 = a3;
    v4 = a1;
    v3 = a2;
  }
  for ( k = *(_QWORD *)(PsGetProcessWin32Process(gpepCSRSS) + 288); k; k = *(_QWORD *)(k + 584) )
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
          Win32FreePool(v8, v13, v15);
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
    PushW32ThreadLock(v8, v3, (__int64)Win32FreePool, v16);
  }
  else
  {
    Win32FreePool(v8, v13, v15);
  }
  return (unsigned int)v6;
}
