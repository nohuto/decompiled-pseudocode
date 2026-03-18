/*
 * XREFs of ?GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU_TL@@PEAUtagKL@@@Z @ 0x1C013B05C
 * Callers:
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C013AE4C (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 *     ?xxxFreeImeKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C013AEF8 (-xxxFreeImeKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
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
  _QWORD *v13; // rdx
  __int64 k; // rsi
  __int64 v16; // rax
  __int64 v17; // rax

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
          v12 = j - 83;
          if ( j != (_QWORD *)664 && (!a3 || a3 == (struct tagKL *)v12[50]) )
          {
            v13 = (_QWORD *)v12[48];
            if ( *v13 == gpepCSRSS || *(_QWORD *)v12[48] == PsGetCurrentProcess(gpepCSRSS, v13) )
            {
              if ( (_DWORD)v6 == v7 )
              {
                v7 += 128;
                v16 = UserReAllocPool(v8, 8LL * (unsigned int)v6, 8LL * v7, 1769239381LL);
                if ( !v16 )
                  goto LABEL_28;
                v8 = v16;
              }
              *(_QWORD *)(v8 + 8 * v6) = v12;
              v6 = (unsigned int)(v6 + 1);
            }
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
  for ( k = *(_QWORD *)(PsGetProcessWin32Process(gpepCSRSS) + 296); k; k = *(_QWORD *)(k + 592) )
  {
    if ( !v5 || v5 == *(struct tagKL **)(k + 400) )
    {
      if ( (_DWORD)v6 == v7 )
      {
        v7 += 128;
        v17 = UserReAllocPool(v8, 8LL * (unsigned int)v6, 8LL * v7, 1769239381LL);
        if ( !v17 )
        {
LABEL_28:
          Win32FreePool(v8);
          return 0LL;
        }
        v8 = v17;
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
