/*
 * XREFs of ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x1C01C4368
 * Callers:
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C00796A4 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0035534 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IntersectRect @ 0x1C005D934 (IntersectRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

void __fastcall PreventInterMonitorBlts(struct tagCVR *a1)
{
  __int64 v2; // r9
  int v3; // r8d
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 i; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int *v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int *v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // [rsp+30h] [rbp-50h] BYREF
  __int64 v35; // [rsp+38h] [rbp-48h]
  __int64 v36; // [rsp+40h] [rbp-40h] BYREF
  __int64 v37; // [rsp+48h] [rbp-38h]
  __int64 v38; // [rsp+50h] [rbp-30h] BYREF
  __int64 v39; // [rsp+58h] [rbp-28h]
  __int64 v40; // [rsp+60h] [rbp-20h] BYREF
  __int64 v41; // [rsp+68h] [rbp-18h]

  if ( !IsRectEmptyInl((const struct tagRECT *)((char *)a1 + 56)) )
  {
    v3 = *((_DWORD *)a1 + 19);
    v4 = (unsigned int)-*((_DWORD *)a1 + 18);
    LODWORD(v38) = *((_DWORD *)a1 + 14) - *((_DWORD *)a1 + 18);
    v5 = (unsigned int)-v3;
    LODWORD(v39) = v4 + *((_DWORD *)a1 + 16);
    HIDWORD(v38) = v5 + *((_DWORD *)a1 + 15);
    HIDWORD(v39) = v5 + *((_DWORD *)a1 + 17);
    v6 = gpDispInfo;
    for ( i = *(_QWORD *)(gpDispInfo + 96LL); i; i = *(_QWORD *)(i + 16) )
    {
      if ( (*(_DWORD *)(i + 24) & 1) != 0 )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v6, v4, v5, v2) & 0xF) != 0
          || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v10, v11) + 408)
            ? (v9 = 0LL)
            : (v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v8,
                                                          v10,
                                                          v11)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
              !(_DWORD)v9) )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v9, v8, v10, v11) & 0xF) != 1
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15) + 408)
              ? (v19 = 0)
              : (v19 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v16,
                                                             v17,
                                                             v18)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v12 = (int *)(i + 60),
                !v19) )
          {
            v12 = (int *)(i + 28);
          }
        }
        else
        {
          v12 = (int *)(i + 44);
        }
        if ( (unsigned int)IntersectRect(&v36, (int *)&v38, v12) )
        {
          LODWORD(v34) = *((_DWORD *)a1 + 18) + v36;
          LODWORD(v35) = *((_DWORD *)a1 + 18) + v37;
          HIDWORD(v34) = *((_DWORD *)a1 + 19) + HIDWORD(v36);
          HIDWORD(v35) = *((_DWORD *)a1 + 19) + HIDWORD(v37);
          if ( (W32GetCurrentThreadDpiAwarenessContext(HIDWORD(v35), v4, v5, v2) & 0xF) != 0
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v22, v23) + 408)
              ? (v21 = 0LL)
              : (v21 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v20,
                                                             v22,
                                                             v23)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                !(_DWORD)v21) )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(v21, v20, v22, v23) & 0xF) != 1
              || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v26, v27) + 408)
                ? (v31 = 0)
                : (v31 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v28,
                                                               v29,
                                                               v30)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                  v24 = (int *)(i + 60),
                  !v31) )
            {
              v24 = (int *)(i + 28);
            }
          }
          else
          {
            v24 = (int *)(i + 44);
          }
          IntersectRect(&v40, (int *)&v34, v24);
          v32 = v40 - v34;
          if ( v40 == v34 )
            v32 = v41 - v35;
          if ( v32 )
          {
            if ( !*((_QWORD *)a1 + 15) )
              *((_QWORD *)a1 + 15) = CreateEmptyRgn(v6, v4, v5, v2);
            GreSetRectRgn(ghrgnInv2, (unsigned int)v34, HIDWORD(v34), (unsigned int)v35, HIDWORD(v35));
            GreSetRectRgn(ghrgnGDC, (unsigned int)v40, HIDWORD(v40), (unsigned int)v41, HIDWORD(v41));
            GreCombineRgn(ghrgnInv2, ghrgnInv2, ghrgnGDC, 4LL);
            GreCombineRgn(*((_QWORD *)a1 + 15), *((_QWORD *)a1 + 15), ghrgnInv2, 2LL);
          }
          else
          {
            v33 = v36 - v38;
            if ( v36 == v38 )
              v33 = v37 - v39;
            if ( !v33 )
              return;
          }
        }
      }
    }
  }
}
