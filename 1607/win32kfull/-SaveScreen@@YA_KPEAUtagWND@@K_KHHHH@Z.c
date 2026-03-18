/*
 * XREFs of ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C0226A34
 * Callers:
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C0226BB8 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IntersectRect @ 0x1C005D934 (IntersectRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     GreSaveScreenBits @ 0x1C028FA38 (GreSaveScreenBits.c)
 */

__int64 __fastcall SaveScreen(struct tagWND *a1, unsigned int a2, __int64 a3, __int64 a4, int a5, int a6, int a7)
{
  __int64 v9; // r8
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD **v16; // rbx
  int *v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // ecx
  int v26[4]; // [rsp+20h] [rbp-38h] BYREF

  if ( (*((_WORD *)a1 + 33) & 0x3FFF) == 0x29D )
  {
    v9 = 1LL;
    v10 = 0;
  }
  else
  {
    v10 = *((_DWORD *)a1 + 28);
    v9 = 0LL;
  }
  v26[0] = a4 + v10;
  v26[2] = a4 + a6;
  if ( (_DWORD)v9 )
    v11 = 0;
  else
    v11 = *((_DWORD *)a1 + 29);
  v26[3] = a7 + a5;
  v26[1] = a5 + v11;
  if ( (W32GetCurrentThreadDpiAwarenessContext((unsigned int)(a7 + a5), (__int64)a1, v9, a4) & 0xF) != 0
    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v14, v15) + 408)
      ? (v13 = 0LL)
      : (v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v14, v15)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        !(_DWORD)v13) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v13, v12, v14, v15) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v19, v20) + 408)
        ? (v24 = 0)
        : (v24 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v21,
                                                       v22,
                                                       v23)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v24) )
    {
      v16 = (_QWORD **)gpDispInfo;
      v17 = (int *)(gpDispInfo + 136LL);
    }
    else
    {
      v16 = (_QWORD **)gpDispInfo;
      v17 = (int *)(gpDispInfo + 104LL);
    }
  }
  else
  {
    v16 = (_QWORD **)gpDispInfo;
    v17 = (int *)(gpDispInfo + 120LL);
  }
  if ( (unsigned int)IntersectRect(v26, v26, v17) )
    return GreSaveScreenBits(**v16, a2, a3);
  else
    return 0LL;
}
