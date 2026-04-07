/*
 * XREFs of ?s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@_NPEAUtagSIZE@@PEAU_MARGINS@@@Z @ 0x180035574
 * Callers:
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x180034D34 (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 * Callees:
 *     ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x180027B88 (-GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800303B4 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 */

char __fastcall CSecondaryWindowRepresentation::s_CalculateWindowMetrics(
        __int64 a1,
        __int16 a2,
        char a3,
        int *a4,
        struct _MARGINS *a5)
{
  __int64 v5; // rdi
  HWND v9; // r15
  struct CWindowData *WindowDataByHwnd; // rax
  struct _RTL_GENERIC_TABLE *v11; // rcx
  _QWORD *v12; // rax
  HWND v13; // rax
  int v14; // eax
  int v15; // eax
  struct _MARGINS v16; // xmm0
  HMONITOR v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  int v21; // ecx
  int v22; // ecx
  int v23; // eax
  struct _MARGINS v24; // [rsp+20h] [rbp-71h] BYREF
  _QWORD Buffer[2]; // [rsp+30h] [rbp-61h] BYREF
  __int128 v26; // [rsp+40h] [rbp-51h]
  __int128 v27; // [rsp+50h] [rbp-41h]
  __int64 v28; // [rsp+60h] [rbp-31h]
  char v29; // [rsp+68h] [rbp-29h]
  struct tagMONITORINFO mi; // [rsp+80h] [rbp-11h] BYREF
  char v31; // [rsp+F8h] [rbp+67h]

  v31 = a2;
  v5 = *(_QWORD *)(a1 + 384);
  if ( v5 )
  {
    if ( (a2 & 0x100) == 0 )
    {
      v9 = *(HWND *)(a1 + 40);
      WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165),
                           v9);
      if ( WindowDataByHwnd )
      {
        v28 = -1LL;
        Buffer[1] = 0LL;
        v26 = 0LL;
        v11 = (struct _RTL_GENERIC_TABLE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 165) + 8LL);
        Buffer[0] = *((_QWORD *)WindowDataByHwnd + 15);
        v29 = 0;
        v27 = 0LL;
        v12 = RtlLookupElementGenericTable(v11, Buffer);
        v13 = v12 ? (HWND)v12[6] : 0LL;
        if ( v9 == v13 )
        {
          v18 = MonitorFromWindow(0LL, 1u);
          mi.cbSize = 40;
          if ( GetMonitorInfoW(v18, &mi) )
          {
            v19 = mi.rcMonitor.right - mi.rcMonitor.left;
            if ( mi.rcMonitor.right - mi.rcMonitor.left < 0 )
              v19 = 0;
            v20 = HIDWORD(*(_QWORD *)&mi.rcMonitor.right);
            *a4 = v19;
            v21 = v20 - mi.rcMonitor.top;
            if ( v21 < 0 )
              v21 = 0;
            a4[1] = v21;
LABEL_26:
            v16 = (struct _MARGINS)xmmword_1800A4DB8;
            goto LABEL_15;
          }
        }
      }
      LOBYTE(a2) = v31;
    }
    v14 = *(_DWORD *)(a1 + 56) - *(_DWORD *)(a1 + 48);
    if ( v14 < 0 )
      v14 = 0;
    *a4 = v14;
    v15 = *(_DWORD *)(a1 + 60) - *(_DWORD *)(a1 + 52);
    if ( v15 < 0 )
      v15 = 0;
    a4[1] = v15;
    if ( (a2 & 4) != 0 )
    {
      if ( !a3 )
      {
        v22 = *(_DWORD *)(a1 + 196) - *(_DWORD *)(a1 + 188);
        if ( v22 < 0 )
          v22 = 0;
        *a4 = v22;
        v23 = *(_DWORD *)(a1 + 200) - *(_DWORD *)(a1 + 192);
        if ( v23 < 0 )
          v23 = 0;
        a4[1] = v23;
        *a4 = v22 - *(_DWORD *)(a1 + 240) - *(_DWORD *)(a1 + 236);
        a4[1] = v23 - *(_DWORD *)(a1 + 248) - *(_DWORD *)(a1 + 244);
        goto LABEL_26;
      }
      v16 = *(struct _MARGINS *)(a1 + 64);
    }
    else
    {
      if ( (a2 & 0x80u) == 0 )
      {
        v24 = (struct _MARGINS)0LL;
        CTopLevelWindow::GetOutsideMargins((CTopLevelWindow *)v5, &v24);
        *a5 = v24;
        return 1;
      }
      v24 = *(struct _MARGINS *)(v5 + 644);
      v24.cxLeftWidth = _mm_cvtsi128_si32((__m128i)v24) - *(_DWORD *)(v5 + 676);
      v24.cxRightWidth -= *(_DWORD *)(v5 + 680);
      v24.cyTopHeight -= *(_DWORD *)(v5 + 684);
      v24.cyBottomHeight -= *(_DWORD *)(v5 + 688);
      v16 = v24;
    }
LABEL_15:
    *a5 = v16;
    return 1;
  }
  return 0;
}
