/*
 * XREFs of ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x180072EF8
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18002FEE0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnSetDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x18006D628 (-OnSetDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z @ 0x18006D688 (-OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z.c)
 *     ?OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z @ 0x1800722C4 (-OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z.c)
 *     ?OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800725DC (-OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x180072800 (-OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z.c)
 *     ?OnSetSlicer@CMagnifier@@QEAAJPEBUMAGN_SLICER_PARAM@@@Z @ 0x180072C1C (-OnSetSlicer@CMagnifier@@QEAAJPEBUMAGN_SLICER_PARAM@@@Z.c)
 *     ?LookupAndValidateMagnifier@CMagnifierControl@@AEAAJ_KPEAPEAVCMagnifier@@@Z @ 0x180072E7C (-LookupAndValidateMagnifier@CMagnifierControl@@AEAAJ_KPEAPEAVCMagnifier@@@Z.c)
 *     ?OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z @ 0x1800731A4 (-OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z.c)
 *     ?OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z @ 0x18007337C (-OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z.c)
 *     ?RenderAndCommit@CMagnifierControl@@AEAAJXZ @ 0x180073588 (-RenderAndCommit@CMagnifierControl@@AEAAJXZ.c)
 */

__int64 __fastcall CMagnifierControl::OnMagnifierApiMessage(CVisual ***a1, int a2, __int64 a3)
{
  unsigned int v3; // edi
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  __int64 v14; // rdx
  int v15; // eax
  int v16; // ebx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // rdx
  int v22; // eax
  int v23; // eax
  __int64 v24; // rdx
  int v25; // eax
  int v26; // eax
  __int64 v27; // rdx
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  CMagnifier *v33; // [rsp+30h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v34; // [rsp+38h] [rbp-8h] BYREF

  v3 = 0;
  if ( (dword_1800BD400 & 1) == 0 )
  {
    dword_1800BD34C = -2147023728;
    dword_1800BD400 |= 1u;
  }
  v34 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v7 = a2 - 1073741918;
  if ( !v7 )
  {
    v31 = CMagnifierControl::OnMagnifierCreate((CMagnifierControl *)a1, *(HWND *)(a3 + 4), *(_DWORD *)(a3 + 20));
    v16 = v31;
    if ( v31 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1800BD34C, 1LL, v31, 0xC1u);
    goto LABEL_37;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v30 = CMagnifierControl::OnMagnifierDestroy((CMagnifierControl *)a1, *(HWND *)(a3 + 4));
    v16 = v30;
    if ( v30 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1800BD34C, 1LL, v30, 0xC9u);
    goto LABEL_37;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v27 = *(_QWORD *)(a3 + 4);
    v33 = 0LL;
    v28 = CMagnifierControl::LookupAndValidateMagnifier((CMagnifierControl *)a1, v27, &v33);
    v16 = v28;
    if ( v28 >= 0 )
    {
      v29 = CMagnifier::OnSetColorEffect(v33, (const struct MilColorTransform *)(a3 + 20));
      v16 = v29;
      if ( v29 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1800BD34C, 1LL, v29, 0xD5u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, &dword_1800BD34C, 1LL, v28, 0xD3u);
    }
    goto LABEL_37;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v24 = *(_QWORD *)(a3 + 8);
    v33 = 0LL;
    v25 = CMagnifierControl::LookupAndValidateMagnifier((CMagnifierControl *)a1, v24, &v33);
    v16 = v25;
    if ( v25 >= 0 )
    {
      v26 = CMagnifier::OnModifyWindowFilterList(v33, (const struct MAGN_FILTERLIST *)(a3 + 16));
      v16 = v26;
      if ( v26 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1800BD34C, 1LL, v26, 0xE3u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, &dword_1800BD34C, 1LL, v25, 0xDFu);
    }
    goto LABEL_37;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v21 = *(_QWORD *)(a3 + 8);
    v33 = 0LL;
    v22 = CMagnifierControl::LookupAndValidateMagnifier((CMagnifierControl *)a1, v21, &v33);
    v16 = v22;
    if ( v22 >= 0 )
    {
      v23 = CMagnifier::OnSetRenderTargetTextures(v33, (const struct MAGN_ADAPTERTEXTURES *)(a3 + 16));
      v16 = v23;
      if ( v23 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1800BD34C, 1LL, v23, 0xF1u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, &dword_1800BD34C, 1LL, v22, 0xEDu);
    }
    goto LABEL_37;
  }
  v12 = v11 - 3;
  if ( !v12 )
  {
    v19 = CFullScreenMagnifier::OnSetDesktopColorEffect(a1[7], (const struct MilColorTransform *)(a3 + 12));
    v16 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1800BD34C, 1LL, v19, 0x107u);
      goto LABEL_37;
    }
    goto LABEL_19;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v18 = CFullScreenMagnifier::OnSetDesktopMagnificationFactor(
            (CFullScreenMagnifier *)a1[7],
            *(double *)(a3 + 12),
            *(_DWORD *)(a3 + 20),
            *(_DWORD *)(a3 + 24));
    v16 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1800BD34C, 1LL, v18, 0x113u);
      goto LABEL_37;
    }
LABEL_19:
    v20 = CMagnifierControl::RenderAndCommit((CMagnifierControl *)a1);
    v16 = v20;
    if ( v20 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1800BD34C, 1LL, v20, 0x11Cu);
    goto LABEL_37;
  }
  if ( v13 != 2 )
    goto LABEL_40;
  v14 = *(_QWORD *)(a3 + 4);
  v33 = 0LL;
  v15 = CMagnifierControl::LookupAndValidateMagnifier((CMagnifierControl *)a1, v14, &v33);
  v16 = v15;
  if ( v15 >= 0 )
  {
    v17 = CMagnifier::OnSetSlicer(v33, (const struct MAGN_SLICER_PARAM *)(a3 + 20));
    v16 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1800BD34C, 1LL, v17, 0xFFu);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &dword_1800BD34C, 1LL, v15, 0xFBu);
  }
LABEL_37:
  if ( v16 == -2147023728 )
    v16 = 0;
  v3 = v16;
LABEL_40:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v34);
  return v3;
}
