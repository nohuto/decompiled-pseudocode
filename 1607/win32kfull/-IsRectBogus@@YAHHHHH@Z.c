/*
 * XREFs of ?IsRectBogus@@YAHHHHH@Z @ 0x1C01C41A0
 * Callers:
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01C3F44 (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?TestRectBogus@@YAHPEAUtagRECT@@HHHH@Z @ 0x1C01C4678 (-TestRectBogus@@YAHPEAUtagRECT@@HHHH@Z.c)
 */

__int64 __fastcall IsRectBogus(__int64 a1, int a2, int a3, int a4)
{
  int v7; // r15d
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // ebx
  struct tagRECT *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // ecx
  bool v26; // zf
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  struct tagRECT *v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  int v42; // ecx

  v7 = a1;
  v8 = *(_QWORD *)(GetDispInfo(a1) + 88);
  v17 = 0;
  if ( (W32GetCurrentThreadDpiAwarenessContext(v10, v9, v11, v12) & 0xF) != 0
    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v15, v16) + 408)
      ? (v14 = 0LL)
      : (v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v15, v16)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        !(_DWORD)v14) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v14, v13, v15, v16) & 0xF) != 1
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19, v20, v21) + 408)
        ? (v25 = 0)
        : (v25 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v22,
                                                       v23,
                                                       v24)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v26 = v25 == 0,
          v18 = (struct tagRECT *)(v8 + 108),
          v26) )
    {
      v18 = (struct tagRECT *)(v8 + 76);
    }
  }
  else
  {
    v18 = (struct tagRECT *)(v8 + 92);
  }
  if ( (unsigned int)TestRectBogus(v18, v7, a2, a3, a4) )
    return 1;
  if ( (W32GetCurrentThreadDpiAwarenessContext(v28, v27, v29, v30) & 0xF) != 0
    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v33, v34) + 408)
      ? (v32 = 0LL)
      : (v32 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v33, v34)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        !(_DWORD)v32) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v32, v31, v33, v34) & 0xF) != 1
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v36, v37, v38) + 408)
        ? (v42 = 0)
        : (v42 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v39,
                                                       v40,
                                                       v41)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v26 = v42 == 0,
          v35 = (struct tagRECT *)(v8 + 60),
          v26) )
    {
      v35 = (struct tagRECT *)(v8 + 28);
    }
  }
  else
  {
    v35 = (struct tagRECT *)(v8 + 44);
  }
  if ( (unsigned int)TestRectBogus(v35, v7, a2, a3, a4) )
    return 1;
  return v17;
}
