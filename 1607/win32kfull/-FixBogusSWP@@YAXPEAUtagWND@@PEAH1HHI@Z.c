/*
 * XREFs of ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01C3F44
 * Callers:
 *     xxxSetWindowPosAndBand @ 0x1C00A652C (xxxSetWindowPosAndBand.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IntersectRect @ 0x1C005D934 (IntersectRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _MonitorFromWindow @ 0x1C00AFFA0 (_MonitorFromWindow.c)
 *     ?IsRectBogus@@YAHHHHH@Z @ 0x1C01C41A0 (-IsRectBogus@@YAHHHHH@Z.c)
 */

void __fastcall FixBogusSWP(struct tagWND *a1, int *a2, int *a3, int a4, int a5, char a6)
{
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int *v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  int *v37; // r8
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  int v44; // ecx
  int v45; // edx
  int v46; // edx
  int v47; // eax
  int v48; // eax
  int v49; // [rsp+20h] [rbp-28h] BYREF
  int v50; // [rsp+24h] [rbp-24h]
  int v51; // [rsp+28h] [rbp-20h]
  int v52; // [rsp+2Ch] [rbp-1Ch]

  v10 = MonitorFromWindow(*((_QWORD *)a1 + 13), 2u);
  if ( v10 != *(_QWORD *)(GetDispInfo(v11) + 88) )
  {
    if ( (a6 & 1) != 0 )
    {
      a4 = *((_DWORD *)a1 + 30) - *((_DWORD *)a1 + 28);
      v12 = *((_DWORD *)a1 + 31) - *((_DWORD *)a1 + 29);
    }
    else
    {
      v12 = a5;
    }
    if ( (unsigned int)IsRectBogus(*a2, *a3, a4, v12) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v14, v13, v15, v16) & 0xF) != 0
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v19, v20) + 408)
          ? (v18 = 0LL)
          : (v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v17,
                                                         v19,
                                                         v20)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            !(_DWORD)v18) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v18, v17, v19, v20) & 0xF) != 1
          || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23, v24) + 408)
            ? (v28 = 0)
            : (v28 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v25,
                                                           v26,
                                                           v27)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v21 = (int *)(v10 + 60),
              !v28) )
        {
          v21 = (int *)(v10 + 28);
        }
      }
      else
      {
        v21 = (int *)(v10 + 44);
      }
      IntersectRect(&v49, v21, (int *)(*((_QWORD *)a1 + 13) + 112LL));
      if ( (W32GetCurrentThreadDpiAwarenessContext(v30, v29, v31, v32) & 0xF) != 0
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33, v35, v36) + 408)
          ? (v34 = 0LL)
          : (v34 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v33,
                                                         v35,
                                                         v36)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            !(_DWORD)v34) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v34, v33, v35, v36) & 0xF) != 1
          || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v38, v39, v40) + 408)
            ? (v44 = 0)
            : (v44 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v41,
                                                           v42,
                                                           v43)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v37 = (int *)(v10 + 108),
              !v44) )
        {
          v37 = (int *)(v10 + 76);
        }
      }
      else
      {
        v37 = (int *)(v10 + 92);
      }
      *a2 = v49 + (v51 - v49 - a4) / 2;
      *a3 = v50 + (v52 - v50 - v12) / 2;
      v45 = v37[2];
      if ( a4 + *a2 > v45 )
        *a2 = v45 - a4;
      v46 = v37[3];
      if ( v12 + *a3 > v46 )
        *a3 = v46 - v12;
      v47 = *a2;
      if ( *a2 < *v37 )
        v47 = *v37;
      *a2 = v47;
      v48 = *a3;
      if ( *a3 < v37[1] )
        v48 = v37[1];
      *a3 = v48;
    }
  }
}
