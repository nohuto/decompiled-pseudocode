/*
 * XREFs of GetMonitorDC @ 0x1C0038300
 * Callers:
 *     UserGetMonitorDC @ 0x1C0054ECC (UserGetMonitorDC.c)
 *     xxxEnumDisplayMonitors @ 0x1C0058B60 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     GreSelectRedirectionBitmap_0 @ 0x1C0001018 (GreSelectRedirectionBitmap_0.c)
 *     IsGreSelectRedirectionBitmapSupported_0 @ 0x1C0001030 (IsGreSelectRedirectionBitmapSupported_0.c)
 *     IsGreHintDCWndSupported_0 @ 0x1C0001040 (IsGreHintDCWndSupported_0.c)
 *     GreHintDCWnd_0 @ 0x1C0001048 (GreHintDCWnd_0.c)
 *     IsGetRedirectionBitmapSupported_0 @ 0x1C0002418 (IsGetRedirectionBitmapSupported_0.c)
 *     GetRedirectionBitmap_0 @ 0x1C0002420 (GetRedirectionBitmap_0.c)
 *     IsGetStyleWindowSupported_0 @ 0x1C0002438 (IsGetStyleWindowSupported_0.c)
 *     GetStyleWindow_0 @ 0x1C0002440 (GetStyleWindow_0.c)
 *     IsSpbCheckDceSupported_0 @ 0x1C0002468 (IsSpbCheckDceSupported_0.c)
 *     SpbCheckDce_0 @ 0x1C0002470 (SpbCheckDce_0.c)
 *     CreateCacheDC @ 0x1C0020830 (CreateCacheDC.c)
 *     GreSetDCOwnerEx @ 0x1C0023A20 (GreSetDCOwnerEx.c)
 *     GreCombineRgn @ 0x1C002FB30 (GreCombineRgn.c)
 *     GreCreateRectRgnIndirect @ 0x1C0034480 (GreCreateRectRgnIndirect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00352B8 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GreSetDCOrg @ 0x1C0035760 (GreSetDCOrg.c)
 *     GreOffsetRgn @ 0x1C0036A90 (GreOffsetRgn.c)
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 *     GreSelectVisRgnShared @ 0x1C00382B0 (GreSelectVisRgnShared.c)
 *     GreIsRendering @ 0x1C0039210 (GreIsRendering.c)
 *     GreSetRectRgn @ 0x1C0039670 (GreSetRectRgn.c)
 *     GreGetBounds @ 0x1C0039760 (GreGetBounds.c)
 *     IntersectRect @ 0x1C005903C (IntersectRect.c)
 *     GreGetDCOrgEx @ 0x1C0075B20 (GreGetDCOrgEx.c)
 *     GreCopyVisRgn @ 0x1C00767F0 (GreCopyVisRgn.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0078F90 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 */

__int64 __fastcall GetMonitorDC(__int64 a1, __int64 a2, int a3)
{
  __int64 *i; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // r15
  __int64 StyleWindow_0; // rax
  HRGN v10; // r8
  int v11; // r10d
  int v12; // r9d
  __int64 v13; // r8
  int v14; // r8d
  int v15; // eax
  int v16; // edx
  int v17; // r8d
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v23; // ecx
  int v24; // ecx
  __int128 *v25; // rax
  __int64 v26; // rsi
  int *v27; // rdi
  int v28; // eax
  int v29; // r8d
  int v30; // eax
  __int64 v31; // rcx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  struct HOBJ__ *RectRgnIndirect; // rax
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  __int128 v41; // [rsp+30h] [rbp-10h] BYREF

  v41 = 0LL;
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
          v7 = *(_QWORD *)(a1 + 40);
          if ( v7 > 1 )
          {
            RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
            i[5] = (__int64)RectRgnIndirect;
            SetMonitorRegion((struct tagMONITOR *)a2, (HRGN)RectRgnIndirect, *(HRGN *)(a1 + 40));
          }
          else
          {
            i[5] = v7;
          }
          v8 = 0LL;
          if ( (i[8] & 0x4000) != 0
            && (int)IsGetStyleWindowSupported_0() >= 0
            && (StyleWindow_0 = GetStyleWindow_0(), (v8 = StyleWindow_0) != 0) )
          {
            if ( (*(_BYTE *)(StyleWindow_0 + 50) & 0x20) == 0 && (int)IsGetRedirectionBitmapSupported_0() >= 0 )
            {
              GetRedirectionBitmap_0();
              if ( (int)IsGreSelectRedirectionBitmapSupported_0() >= 0 && !(unsigned int)GreSelectRedirectionBitmap_0() )
                GreSelectVisRgnShared((HDC)i[1], 0LL, 1);
            }
            GreCopyVisRgn(*(HDC *)(a1 + 8), ghrgnGDC);
            GreOffsetRgn(ghrgnGDC, *(_DWORD *)(v8 + 112), *(_DWORD *)(v8 + 116));
            if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0
              || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                ? (v23 = 0)
                : (v23 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                  !v23) )
            {
              if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  ? (v32 = 0)
                  : (v32 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                    v32) )
              {
                v10 = *(HRGN *)(a2 + 144);
              }
              else
              {
                v10 = *(HRGN *)(a2 + 128);
              }
            }
            else
            {
              v10 = *(HRGN *)(a2 + 136);
            }
            if ( !(unsigned int)GreCombineRgn(ghrgnGDC, ghrgnGDC, v10, 1) )
              GreSetRectRgn(ghrgnGDC, 0);
            GreOffsetRgn(ghrgnGDC, -*(_DWORD *)(v8 + 112), -*(_DWORD *)(v8 + 116));
            GreSelectVisRgnShared((HDC)i[1], ghrgnGDC, 2);
            GreGetDCOrgEx(*(HDC *)(a1 + 8));
            if ( a3 )
            {
              v11 = *(_DWORD *)(v8 + 116);
              v12 = *(_DWORD *)(v8 + 112);
              LODWORD(v41) = v12 + v12 + v41;
              DWORD2(v41) += v12 + v12;
              HIDWORD(v41) += v11 + v11;
              DWORD1(v41) += v11 + v11;
              if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0
                || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  ? (v24 = 0)
                  : (v24 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                    !v24) )
              {
                if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 1
                  || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                    ? (v33 = 0)
                    : (v33 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                               + 408)
                                                   + 8LL)
                                       + 244LL) & 1),
                      v13 = a2 + 60,
                      !v33) )
                {
                  v13 = a2 + 28;
                }
              }
              else
              {
                v13 = a2 + 44;
              }
              IntersectRect(&v41, &v41, v13);
              v14 = *(_DWORD *)(v8 + 116);
              v15 = -*(_DWORD *)(v8 + 112);
              DWORD2(v41) -= *(_DWORD *)(v8 + 112);
              v16 = v15 + v41;
              v17 = -v14;
              HIDWORD(v41) += v17;
              v18 = v17 + DWORD1(v41);
              LODWORD(v41) = v16;
              DWORD1(v41) += v17;
            }
            else
            {
              v18 = DWORD1(v41);
              v16 = v41;
            }
            GreSetDCOrg(i[1], v16, v18, &v41);
            GreGetBounds(i[1], 0LL, 5LL);
          }
          else
          {
            GreCopyVisRgn(*(HDC *)(a1 + 8), ghrgnGDC);
            SetMonitorRegion((struct tagMONITOR *)a2, ghrgnGDC, ghrgnGDC);
            GreSelectVisRgnShared((HDC)i[1], ghrgnGDC, 2);
            if ( a3 )
            {
              if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0
                || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  ? (v34 = 0)
                  : (v34 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                    !v34) )
              {
                if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 1
                  || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                    ? (v38 = 0)
                    : (v38 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                               + 408)
                                                   + 8LL)
                                       + 244LL) & 1),
                      v25 = (__int128 *)(a2 + 60),
                      !v38) )
                {
                  v25 = (__int128 *)(a2 + 28);
                }
              }
              else
              {
                v25 = (__int128 *)(a2 + 44);
              }
              v41 = *v25;
            }
            else
            {
              GreGetDCOrgEx(*(HDC *)(a1 + 8));
            }
            if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0
              || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                ? (v35 = 0)
                : (v35 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                  !v35) )
            {
              if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 1
                || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  ? (v39 = 0)
                  : (v39 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                    v26 = a2 + 60,
                    !v39) )
              {
                v26 = a2 + 28;
              }
            }
            else
            {
              v26 = a2 + 44;
            }
            if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0
              || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                ? (v36 = 0)
                : (v36 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                  !v36) )
            {
              if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  ? (v40 = 0)
                  : (v40 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                    v40) )
              {
                v27 = (int *)(a2 + 60);
              }
              else
              {
                v27 = (int *)(a2 + 28);
              }
            }
            else
            {
              v27 = (int *)(a2 + 44);
            }
            v28 = *v27;
            v29 = DWORD1(v41) - *(_DWORD *)(v26 + 4);
            HIDWORD(v41) -= *(_DWORD *)(v26 + 4);
            v30 = -v28;
            v31 = i[1];
            DWORD2(v41) += v30;
            LODWORD(v41) = v30 + v41;
            DWORD1(v41) = v29;
            GreSetDCOrg(v31, v41, v29, &v41);
          }
          if ( (int)IsGreHintDCWndSupported_0() >= 0 )
            GreHintDCWnd_0();
          if ( v8 && (*(_BYTE *)(v8 + 50) & 8) != 0 && (int)IsGreHintDCWndSupported_0() >= 0 )
            GreHintDCWnd_0();
          --gnDCECount;
          if ( a3 )
          {
            *((_DWORD *)i + 16) |= 0x80000000;
            i[9] = 0LL;
            i[10] = PsGetCurrentProcessWin32Process(v19);
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v20);
            *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200u;
          }
          return i[1];
        }
      }
    }
    if ( CreateCacheDC(0LL, *(_DWORD *)(a1 + 64) & 0x4000 | 0x802u, a2) )
      continue;
    break;
  }
  return 0LL;
}
