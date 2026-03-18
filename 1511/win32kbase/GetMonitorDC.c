/*
 * XREFs of GetMonitorDC @ 0x1C0043A70
 * Callers:
 *     UserGetMonitorDC @ 0x1C0043940 (UserGetMonitorDC.c)
 *     xxxEnumDisplayMonitors @ 0x1C005E4F0 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     GreSelectRedirectionBitmap_0 @ 0x1C0001018 (GreSelectRedirectionBitmap_0.c)
 *     IsGreSelectRedirectionBitmapSupported_0 @ 0x1C0001030 (IsGreSelectRedirectionBitmapSupported_0.c)
 *     IsGreHintDCWndSupported_0 @ 0x1C0001040 (IsGreHintDCWndSupported_0.c)
 *     GreHintDCWnd_0 @ 0x1C0001048 (GreHintDCWnd_0.c)
 *     IsGetRedirectionBitmapSupported_0 @ 0x1C0002440 (IsGetRedirectionBitmapSupported_0.c)
 *     GetRedirectionBitmap_0 @ 0x1C0002448 (GetRedirectionBitmap_0.c)
 *     IsGetStyleWindowSupported_0 @ 0x1C0002460 (IsGetStyleWindowSupported_0.c)
 *     GetStyleWindow_0 @ 0x1C0002468 (GetStyleWindow_0.c)
 *     IsSpbCheckDceSupported_0 @ 0x1C0002490 (IsSpbCheckDceSupported_0.c)
 *     SpbCheckDce_0 @ 0x1C0002498 (SpbCheckDce_0.c)
 *     GreSelectVisRgn @ 0x1C0023950 (GreSelectVisRgn.c)
 *     GreCreateRectRgnIndirect @ 0x1C0023BD0 (GreCreateRectRgnIndirect.c)
 *     GreSetRectRgn @ 0x1C0025020 (GreSetRectRgn.c)
 *     GreCombineRgn @ 0x1C0026E40 (GreCombineRgn.c)
 *     GreGetBounds @ 0x1C0030A80 (GreGetBounds.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0030EE4 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     GreSetDCOwnerEx @ 0x1C0034DF0 (GreSetDCOwnerEx.c)
 *     GreGetDCOrgEx @ 0x1C0042250 (GreGetDCOrgEx.c)
 *     GreOffsetRgn @ 0x1C00441E0 (GreOffsetRgn.c)
 *     GreSetDCOrg @ 0x1C0044280 (GreSetDCOrg.c)
 *     GreCopyVisRgn @ 0x1C0044310 (GreCopyVisRgn.c)
 *     CreateCacheDC @ 0x1C00443D0 (CreateCacheDC.c)
 *     IntersectRect @ 0x1C00446B8 (IntersectRect.c)
 *     HmgShareLock @ 0x1C005C9B0 (HmgShareLock.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0075658 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 */

__int64 __fastcall GetMonitorDC(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdi
  __int64 *i; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // r14d
  unsigned __int64 v10; // rax
  __int64 v11; // r14
  __int64 StyleWindow_0; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  HRGN v19; // r8
  int v20; // r10d
  int v21; // r9d
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r8
  int v28; // r8d
  int v29; // eax
  int v30; // r8d
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // r8
  __int128 *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // rsi
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // rdx
  __int64 v56; // r8
  int *v57; // rdi
  int v58; // eax
  int v59; // r8d
  int v60; // eax
  HDC v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // r8
  int v64; // ecx
  __int64 v65; // rdx
  __int64 v66; // r8
  int v67; // ecx
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // rdx
  __int64 v73; // r8
  HRGN RectRgnIndirect; // rax
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // rdx
  __int64 v80; // r8
  int v81; // ecx
  __int128 v82; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v83[2]; // [rsp+40h] [rbp-10h] BYREF
  char v84; // [rsp+98h] [rbp+48h] BYREF

  v82 = 0LL;
  v4 = a2;
  while ( 2 )
  {
    for ( i = *(__int64 **)(gpDispInfo + 64); i; i = (__int64 *)*i )
    {
      if ( (i[8] & 0x401000) == 0 )
      {
        v7 = i[1];
        LOBYTE(a2) = 1;
        v83[1] = 0LL;
        v8 = HmgShareLock(v7, a2);
        v83[0] = v8;
        if ( v8 )
        {
          v9 = *(_DWORD *)(v8 + 40) & 1;
          XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v83);
        }
        else
        {
          v9 = 0;
        }
        if ( !v9 && i[11] == v4 )
        {
          if ( (i[8] & 0x800) == 0 && (int)IsSpbCheckDceSupported_0() >= 0 )
            SpbCheckDce_0();
          if ( (unsigned int)GreSetDCOwnerEx(i[1], 2147483650LL, 0LL, 1) )
          {
            i[2] = *(_QWORD *)(a1 + 16);
            i[3] = *(_QWORD *)(a1 + 24);
            i[4] = *(_QWORD *)(a1 + 32);
            i[9] = *(_QWORD *)(a1 + 72);
            i[10] = *(_QWORD *)(a1 + 80);
            *((_DWORD *)i + 16) = *(_DWORD *)(a1 + 64) & 0x947F9 | 0x1002;
            v10 = *(_QWORD *)(a1 + 40);
            if ( v10 > 1 )
            {
              RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
              i[5] = (__int64)RectRgnIndirect;
              SetMonitorRegion((struct tagMONITOR *)v4, RectRgnIndirect, *(HRGN *)(a1 + 40));
            }
            else
            {
              i[5] = v10;
            }
            v11 = 0LL;
            if ( (i[8] & 0x4000) != 0
              && (int)IsGetStyleWindowSupported_0() >= 0
              && (StyleWindow_0 = GetStyleWindow_0(), (v11 = StyleWindow_0) != 0) )
            {
              if ( (*(_BYTE *)(StyleWindow_0 + 50) & 0x20) == 0 && (int)IsGetRedirectionBitmapSupported_0() >= 0 )
              {
                GetRedirectionBitmap_0();
                if ( (int)IsGreSelectRedirectionBitmapSupported_0() >= 0
                  && !(unsigned int)GreSelectRedirectionBitmap_0() )
                {
                  GreSelectVisRgn(i[1], 0LL, 1u);
                }
              }
              GreCopyVisRgn(*(HDC *)(a1 + 8), ghrgnGDC);
              GreOffsetRgn(ghrgnGDC);
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) != 0
                || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x4000) != 0
                || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v16) + 408)
                  ? (v14 = 0LL)
                  : (v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                 (__int64)KeGetCurrentThread(),
                                                                 v35,
                                                                 v36)
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                    !(_DWORD)v14) )
              {
                if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x2000) != 0
                  && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18) + 408)
                    ? (v64 = 0)
                    : (v64 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                   (__int64)KeGetCurrentThread(),
                                                                   v62,
                                                                   v63)
                                                               + 408)
                                                   + 8LL)
                                       + 244LL) & 1),
                      v64) )
                {
                  v19 = *(HRGN *)(v4 + 144);
                }
                else
                {
                  v19 = *(HRGN *)(v4 + 128);
                }
              }
              else
              {
                v19 = *(HRGN *)(v4 + 136);
              }
              if ( !(unsigned int)GreCombineRgn(ghrgnGDC, ghrgnGDC, v19, 1) )
                GreSetRectRgn(ghrgnGDC, 0, 0, 0, 0);
              GreOffsetRgn(ghrgnGDC);
              GreSelectVisRgn(i[1], (__int64)ghrgnGDC, 2u);
              GreGetDCOrgEx(*(HDC *)(a1 + 8), (__int64)&v84, &v82);
              if ( a3 )
              {
                v20 = *(_DWORD *)(v11 + 116);
                v21 = *(_DWORD *)(v11 + 112);
                LODWORD(v82) = v21 + v21 + v82;
                DWORD2(v82) += v21 + v21;
                HIDWORD(v82) += v20 + v20;
                DWORD1(v82) += v20 + v20;
                if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(DWORD2(v82)) + 776) & 0x2000) != 0
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x4000) != 0
                  || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24) + 408)
                    ? (v22 = 0LL)
                    : (v22 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                   (__int64)KeGetCurrentThread(),
                                                                   v37,
                                                                   v38)
                                                               + 408)
                                                   + 8LL)
                                       + 244LL) & 1),
                      !(_DWORD)v22) )
                {
                  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x2000) == 0
                    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v26) + 408)
                      ? (v67 = 0)
                      : (v67 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                     (__int64)KeGetCurrentThread(),
                                                                     v65,
                                                                     v66)
                                                                 + 408)
                                                     + 8LL)
                                         + 244LL) & 1),
                        v27 = v4 + 60,
                        !v67) )
                  {
                    v27 = v4 + 28;
                  }
                }
                else
                {
                  v27 = v4 + 44;
                }
                IntersectRect(&v82, &v82, v27);
                v28 = *(_DWORD *)(v11 + 116);
                v29 = -*(_DWORD *)(v11 + 112);
                DWORD2(v82) -= *(_DWORD *)(v11 + 112);
                v30 = -v28;
                HIDWORD(v82) += v30;
                LODWORD(v82) = v29 + v82;
                DWORD1(v82) += v30;
              }
              GreSetDCOrg((HDC)i[1]);
              GreGetBounds(i[1], 0LL, 5);
            }
            else
            {
              GreCopyVisRgn(*(HDC *)(a1 + 8), ghrgnGDC);
              SetMonitorRegion((struct tagMONITOR *)v4, ghrgnGDC, ghrgnGDC);
              GreSelectVisRgn(i[1], (__int64)ghrgnGDC, 2u);
              if ( a3 )
              {
                if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v39) + 776) & 0x2000) != 0
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v40) + 776) & 0x4000) != 0
                  || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v41, v42) + 408)
                    ? (v40 = 0LL)
                    : (v40 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                   (__int64)KeGetCurrentThread(),
                                                                   v68,
                                                                   v69)
                                                               + 408)
                                                   + 8LL)
                                       + 244LL) & 1),
                      !(_DWORD)v40) )
                {
                  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v40) + 776) & 0x2000) == 0
                    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43, v44) + 408)
                      ? (v40 = 0LL)
                      : (v40 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                     (__int64)KeGetCurrentThread(),
                                                                     v75,
                                                                     v76)
                                                                 + 408)
                                                     + 8LL)
                                         + 244LL) & 1),
                        v45 = (__int128 *)(v4 + 60),
                        !(_DWORD)v40) )
                  {
                    v45 = (__int128 *)(v4 + 28);
                  }
                }
                else
                {
                  v45 = (__int128 *)(v4 + 44);
                }
                v82 = *v45;
              }
              else
              {
                GreGetDCOrgEx(*(HDC *)(a1 + 8), (__int64)&v84, &v82);
              }
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v40) + 776) & 0x2000) != 0
                || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v46) + 776) & 0x4000) != 0
                || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v47, v48) + 408)
                  ? (v46 = 0LL)
                  : (v46 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                 (__int64)KeGetCurrentThread(),
                                                                 v70,
                                                                 v71)
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                    !(_DWORD)v46) )
              {
                if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v46) + 776) & 0x2000) == 0
                  || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v49, v50) + 408)
                    ? (v46 = 0LL)
                    : (v46 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                   (__int64)KeGetCurrentThread(),
                                                                   v77,
                                                                   v78)
                                                               + 408)
                                                   + 8LL)
                                       + 244LL) & 1),
                      v51 = v4 + 60,
                      !(_DWORD)v46) )
                {
                  v51 = v4 + 28;
                }
              }
              else
              {
                v51 = v4 + 44;
              }
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v46) + 776) & 0x2000) != 0
                || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v52) + 776) & 0x4000) != 0
                || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v53, v54) + 408)
                  ? (v52 = 0LL)
                  : (v52 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                 (__int64)KeGetCurrentThread(),
                                                                 v72,
                                                                 v73)
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                    !(_DWORD)v52) )
              {
                if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v52) + 776) & 0x2000) != 0
                  && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v55, v56) + 408)
                    ? (v81 = 0)
                    : (v81 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                   (__int64)KeGetCurrentThread(),
                                                                   v79,
                                                                   v80)
                                                               + 408)
                                                   + 8LL)
                                       + 244LL) & 1),
                      v81) )
                {
                  v57 = (int *)(v4 + 60);
                }
                else
                {
                  v57 = (int *)(v4 + 28);
                }
              }
              else
              {
                v57 = (int *)(v4 + 44);
              }
              v58 = *v57;
              v59 = DWORD1(v82) - *(_DWORD *)(v51 + 4);
              HIDWORD(v82) -= *(_DWORD *)(v51 + 4);
              v60 = -v58;
              v61 = (HDC)i[1];
              DWORD2(v82) += v60;
              LODWORD(v82) = v60 + v82;
              DWORD1(v82) = v59;
              GreSetDCOrg(v61);
            }
            if ( (int)IsGreHintDCWndSupported_0() >= 0 )
              GreHintDCWnd_0();
            if ( v11 && (*(_BYTE *)(v11 + 50) & 8) != 0 && (int)IsGreHintDCWndSupported_0() >= 0 )
              GreHintDCWnd_0();
            --gnDCECount;
            if ( a3 )
            {
              *((_DWORD *)i + 16) |= 0x80000000;
              i[9] = 0LL;
              i[10] = PsGetCurrentProcessWin32Process(v31);
              CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v32);
              *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200u;
            }
            return i[1];
          }
        }
      }
    }
    if ( CreateCacheDC(0LL, *(_DWORD *)(a1 + 64) & 0x4000 | 0x802u, v4) )
      continue;
    break;
  }
  return 0LL;
}
