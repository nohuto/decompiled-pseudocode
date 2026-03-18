/*
 * XREFs of GetMonitorDC @ 0x1C0053E98
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0052BD0 (xxxEnumDisplayMonitors.c)
 *     UserGetMonitorDC @ 0x1C0053DE0 (UserGetMonitorDC.c)
 * Callees:
 *     GreSelectRedirectionBitmap_0 @ 0x1C0001018 (GreSelectRedirectionBitmap_0.c)
 *     IsGreSelectRedirectionBitmapSupported_0 @ 0x1C0001030 (IsGreSelectRedirectionBitmapSupported_0.c)
 *     IsGreHintDCWndSupported_0 @ 0x1C0001040 (IsGreHintDCWndSupported_0.c)
 *     GreHintDCWnd_0 @ 0x1C0001048 (GreHintDCWnd_0.c)
 *     IsGetRedirectionBitmapSupported_0 @ 0x1C0002410 (IsGetRedirectionBitmapSupported_0.c)
 *     GetRedirectionBitmap_0 @ 0x1C0002418 (GetRedirectionBitmap_0.c)
 *     IsGetStyleWindowSupported_0 @ 0x1C0002430 (IsGetStyleWindowSupported_0.c)
 *     GetStyleWindow_0 @ 0x1C0002438 (GetStyleWindow_0.c)
 *     IsSpbCheckDceSupported_0 @ 0x1C0002460 (IsSpbCheckDceSupported_0.c)
 *     SpbCheckDce_0 @ 0x1C0002468 (SpbCheckDce_0.c)
 *     GreSetDCOwnerEx @ 0x1C0035D30 (GreSetDCOwnerEx.c)
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 *     GreCombineRgn @ 0x1C0040310 (GreCombineRgn.c)
 *     GreCreateRectRgnIndirect @ 0x1C0042990 (GreCreateRectRgnIndirect.c)
 *     GreSetRectRgn @ 0x1C0042B20 (GreSetRectRgn.c)
 *     GreSelectVisRgn @ 0x1C0044570 (GreSelectVisRgn.c)
 *     GreIsRendering @ 0x1C00546A0 (GreIsRendering.c)
 *     GreOffsetRgn @ 0x1C0054700 (GreOffsetRgn.c)
 *     GreSetDCOrg @ 0x1C00547B0 (GreSetDCOrg.c)
 *     GreCopyVisRgn @ 0x1C0054850 (GreCopyVisRgn.c)
 *     CreateCacheDC @ 0x1C0054910 (CreateCacheDC.c)
 *     GreGetDCOrgEx @ 0x1C0054B70 (GreGetDCOrgEx.c)
 *     GreGetBounds @ 0x1C0054F60 (GreGetBounds.c)
 *     IntersectRect @ 0x1C00553DC (IntersectRect.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0056A9C (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 */

__int64 __fastcall GetMonitorDC(__int64 a1, __int64 a2, int a3)
{
  __int64 *i; // rbx
  __int64 result; // rax
  unsigned __int64 v8; // rax
  struct HOBJ__ *RectRgnIndirect; // rax
  __int64 v10; // r14
  __int64 StyleWindow_0; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  HRGN v20; // r8
  int v21; // ecx
  int v22; // r10d
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r8
  int v29; // ecx
  int v30; // r8d
  int v31; // eax
  int v32; // r8d
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int128 *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  int *v51; // rdi
  int v52; // ecx
  int v53; // eax
  int v54; // r8d
  int v55; // eax
  HDC v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v66; // [rsp+20h] [rbp-20h]
  __int64 v67; // [rsp+20h] [rbp-20h]
  __int64 v68; // [rsp+20h] [rbp-20h]
  __int64 v69; // [rsp+20h] [rbp-20h]
  __int64 v70; // [rsp+28h] [rbp-18h]
  __int64 v71; // [rsp+28h] [rbp-18h]
  __int64 v72; // [rsp+28h] [rbp-18h]
  __int64 v73; // [rsp+28h] [rbp-18h]
  __int128 v74; // [rsp+30h] [rbp-10h] BYREF

  v74 = 0LL;
  while ( 2 )
  {
    for ( i = *(__int64 **)(gpDispInfo + 64); i; i = (__int64 *)*i )
    {
      if ( (i[8] & 0x401000) == 0 && !(unsigned int)GreIsRendering((HDC)i[1]) && i[11] == a2 )
      {
        if ( (i[8] & 0x800) == 0 && (int)IsSpbCheckDceSupported_0() >= 0 )
          SpbCheckDce_0();
        if ( (unsigned int)GreSetDCOwnerEx(i[1], 0x80000002, 0, 1) )
        {
          i[2] = *(_QWORD *)(a1 + 16);
          i[3] = *(_QWORD *)(a1 + 24);
          i[4] = *(_QWORD *)(a1 + 32);
          i[9] = *(_QWORD *)(a1 + 72);
          i[10] = *(_QWORD *)(a1 + 80);
          *((_DWORD *)i + 16) = *(_DWORD *)(a1 + 64) & 0x947F9 | 0x1002;
          v8 = *(_QWORD *)(a1 + 40);
          if ( v8 <= 1 )
          {
            i[5] = v8;
          }
          else
          {
            RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
            i[5] = (__int64)RectRgnIndirect;
            SetMonitorRegion((struct tagMONITOR *)a2, (HRGN)RectRgnIndirect, *(HRGN *)(a1 + 40));
          }
          v10 = 0LL;
          if ( (i[8] & 0x4000) != 0
            && (int)IsGetStyleWindowSupported_0() >= 0
            && (StyleWindow_0 = GetStyleWindow_0(), (v10 = StyleWindow_0) != 0) )
          {
            if ( (*(_BYTE *)(StyleWindow_0 + 50) & 0x20) == 0 && (int)IsGetRedirectionBitmapSupported_0() >= 0 )
            {
              GetRedirectionBitmap_0();
              if ( (int)IsGreSelectRedirectionBitmapSupported_0() >= 0 && !(unsigned int)GreSelectRedirectionBitmap_0() )
                GreSelectVisRgn(i[1], 0LL, 1);
            }
            GreCopyVisRgn(*(HDC *)(a1 + 8), ghrgnGDC);
            GreOffsetRgn(ghrgnGDC);
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13, v12, v14, v15, v66, v70) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17, v16, v18, v19, v67, v71) + 776) & 0x4000) != 0
              || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v17 = 0LL)
                : (v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                               + 8LL)
                                   + 260LL) & 1),
                  !(_DWORD)v17) )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17, v16, v18, v19, v67, v71) + 776) & 0x2000) != 0
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                  ? (v21 = 0)
                  : (v21 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 416)
                                                 + 8LL)
                                     + 260LL) & 1),
                    v21) )
              {
                v20 = *(HRGN *)(a2 + 144);
              }
              else
              {
                v20 = *(HRGN *)(a2 + 128);
              }
            }
            else
            {
              v20 = *(HRGN *)(a2 + 136);
            }
            if ( !(unsigned int)GreCombineRgn(ghrgnGDC, ghrgnGDC, v20, 1) )
              GreSetRectRgn(ghrgnGDC, 0, 0, 0, 0);
            GreOffsetRgn(ghrgnGDC);
            GreSelectVisRgn(i[1], ghrgnGDC, 2);
            GreGetDCOrgEx(*(HDC *)(a1 + 8));
            if ( a3 )
            {
              v22 = *(_DWORD *)(v10 + 116);
              v23 = *(unsigned int *)(v10 + 112);
              LODWORD(v74) = v23 + v23 + v74;
              DWORD2(v74) += v23 + v23;
              HIDWORD(v74) += v22 + v22;
              DWORD1(v74) += v22 + v22;
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(DWORD2(v74), HIDWORD(v74), DWORD1(v74), v23, v67, v71)
                              + 776) & 0x2000) != 0
                || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25, v24, v26, v27, v67, v71) + 776) & 0x4000) != 0
                || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                  ? (v25 = 0LL)
                  : (v25 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 416)
                                                 + 8LL)
                                     + 260LL) & 1),
                    !(_DWORD)v25) )
              {
                if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25, v24, v26, v27, v67, v71) + 776) & 0x2000) == 0
                  || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                    ? (v29 = 0)
                    : (v29 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                               + 416)
                                                   + 8LL)
                                       + 260LL) & 1),
                      v28 = a2 + 60,
                      !v29) )
                {
                  v28 = a2 + 28;
                }
              }
              else
              {
                v28 = a2 + 44;
              }
              IntersectRect(&v74, &v74, v28);
              v30 = *(_DWORD *)(v10 + 116);
              v31 = -*(_DWORD *)(v10 + 112);
              DWORD2(v74) -= *(_DWORD *)(v10 + 112);
              v32 = -v30;
              HIDWORD(v74) += v32;
              LODWORD(v74) = v31 + v74;
              DWORD1(v74) += v32;
            }
            GreSetDCOrg((HDC)i[1]);
            GreGetBounds(i[1], 0LL, 5LL);
          }
          else
          {
            GreCopyVisRgn(*(HDC *)(a1 + 8), ghrgnGDC);
            SetMonitorRegion((struct tagMONITOR *)a2, ghrgnGDC, ghrgnGDC);
            GreSelectVisRgn(i[1], ghrgnGDC, 2);
            if ( a3 )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34, v33, v35, v36, v66, v70) + 776) & 0x2000) != 0
                || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v38, v37, v39, v40, v66, v70) + 776) & 0x4000) != 0
                || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                  ? (v38 = 0LL)
                  : (v38 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 416)
                                                 + 8LL)
                                     + 260LL) & 1),
                    !(_DWORD)v38) )
              {
                if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v38, v37, v39, v40, v66, v70) + 776) & 0x2000) == 0
                  || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                    ? (v38 = 0LL)
                    : (v38 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                               + 416)
                                                   + 8LL)
                                       + 260LL) & 1),
                      v41 = (__int128 *)(a2 + 60),
                      !(_DWORD)v38) )
                {
                  v41 = (__int128 *)(a2 + 28);
                }
              }
              else
              {
                v41 = (__int128 *)(a2 + 44);
              }
              v74 = *v41;
            }
            else
            {
              GreGetDCOrgEx(*(HDC *)(a1 + 8));
            }
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v38, v37, v39, v40, v66, v70) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v43, v42, v44, v45, v68, v72) + 776) & 0x4000) != 0
              || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v43 = 0LL)
                : (v43 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                               + 8LL)
                                   + 260LL) & 1),
                  !(_DWORD)v43) )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v43, v42, v44, v45, v68, v72) + 776) & 0x2000) == 0
                || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                  ? (v43 = 0LL)
                  : (v43 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 416)
                                                 + 8LL)
                                     + 260LL) & 1),
                    v46 = a2 + 60,
                    !(_DWORD)v43) )
              {
                v46 = a2 + 28;
              }
            }
            else
            {
              v46 = a2 + 44;
            }
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v43, v42, v44, v45, v68, v72) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v48, v47, v49, v50, v67, v71) + 776) & 0x4000) != 0
              || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v48 = 0LL)
                : (v48 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                               + 8LL)
                                   + 260LL) & 1),
                  !(_DWORD)v48) )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v48, v47, v49, v50, v67, v71) + 776) & 0x2000) != 0
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                  ? (v52 = 0)
                  : (v52 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 416)
                                                 + 8LL)
                                     + 260LL) & 1),
                    v52) )
              {
                v51 = (int *)(a2 + 60);
              }
              else
              {
                v51 = (int *)(a2 + 28);
              }
            }
            else
            {
              v51 = (int *)(a2 + 44);
            }
            v53 = *v51;
            v54 = DWORD1(v74) - *(_DWORD *)(v46 + 4);
            HIDWORD(v74) -= *(_DWORD *)(v46 + 4);
            v55 = -v53;
            v56 = (HDC)i[1];
            DWORD2(v74) += v55;
            LODWORD(v74) = v55 + v74;
            DWORD1(v74) = v54;
            GreSetDCOrg(v56);
          }
          if ( (int)IsGreHintDCWndSupported_0() >= 0 )
          {
            LODWORD(v67) = 0;
            GreHintDCWnd_0();
          }
          if ( v10 && (*(_BYTE *)(v10 + 50) & 8) != 0 && (int)IsGreHintDCWndSupported_0() >= 0 )
          {
            LODWORD(v67) = (*(_WORD *)(v10 + 66) & 0x3FFF) == 669;
            GreHintDCWnd_0();
          }
          --gnDCECount;
          if ( a3 )
          {
            *((_DWORD *)i + 16) |= 0x80000000;
            i[9] = 0LL;
            i[10] = PsGetCurrentProcessWin32Process(v58, v57, v59, v60, v67, v71);
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v62, v61, v63, v64, v69, v73);
            *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200u;
          }
          return i[1];
        }
      }
    }
    result = CreateCacheDC(0LL, *(_DWORD *)(a1 + 64) & 0x4000 | 0x802u, a2);
    if ( result )
      continue;
    break;
  }
  return result;
}
