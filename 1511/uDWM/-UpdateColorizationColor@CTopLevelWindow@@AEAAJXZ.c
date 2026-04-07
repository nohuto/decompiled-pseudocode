/*
 * XREFs of ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x180029970
 * Callers:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18000F4D8 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180025200 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x1800269A0 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x180026C90 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18002AB90 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002B4D0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x18003A8B0 (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     floorf_0 @ 0x18004FF36 (floorf_0.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateColorizationColor(CTopLevelWindow *this)
{
  unsigned int v2; // ecx
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rcx
  float *v6; // rsi
  __int128 v7; // xmm0
  __int64 v8; // xmm1_8
  int v9; // eax
  float v10; // xmm8_4
  float v11; // xmm7_4
  float v12; // xmm8_4
  float v13; // xmm7_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  __int128 v18; // xmm0
  float *v19; // rdi
  __int64 v20; // xmm1_8
  int v21; // eax
  float v22; // xmm8_4
  float v23; // xmm7_4
  float v24; // xmm8_4
  float v25; // xmm7_4
  float v26; // xmm0_4
  float v27; // xmm0_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  void *(__fastcall *v31)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // r14
  _DWORD *v32; // rax
  void *(__fastcall *v33)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // r14
  _DWORD *v34; // rax
  int v35; // [rsp+30h] [rbp-49h] BYREF
  __int128 v36; // [rsp+38h] [rbp-41h] BYREF
  __int64 v37; // [rsp+48h] [rbp-31h]
  int v38; // [rsp+50h] [rbp-29h]

  v2 = *((_DWORD *)this + 152);
  if ( (v2 & 0x40) != 0 || (*(_BYTE *)(*((_QWORD *)this + 93) + 571LL) & 0x20) != 0 )
    v3 = 1;
  else
    v3 = 2;
  v4 = *((_QWORD *)this + 93);
  if ( *(_DWORD *)(v4 + 80) == 0x7FFFFFFF
    && *(_DWORD *)(v4 + 84) == 0x7FFFFFFF
    && *(_DWORD *)(v4 + 88) == 0x7FFFFFFF
    && *(_DWORD *)(v4 + 92) == 0x7FFFFFFF )
  {
    v3 |= 0x40u;
  }
  CTopLevelWindow::s_ChooseWindowFrameFromStyle(v2, 1, (*(_BYTE *)(v4 + 571) & 0x20) != 0);
  if ( !*((_QWORD *)this + 74) )
  {
    v31 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v31 == WPF::ProcessHeapImpl::Alloc )
      v32 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x28uLL);
    else
      v32 = (_DWORD *)v31(WPF::g_pProcessHeap, 40uLL);
    if ( v32 )
    {
      v32[2] = 1;
      *(_QWORD *)v32 = &CGlassColorizationResources::`vftable';
    }
    *((_QWORD *)this + 74) = v32;
    if ( !v32 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x727u);
      return 2147942414LL;
    }
  }
  if ( !*((_QWORD *)this + 75) )
  {
    v33 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v33 == WPF::ProcessHeapImpl::Alloc )
      v34 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x28uLL);
    else
      v34 = (_DWORD *)v33(WPF::g_pProcessHeap, 40uLL);
    if ( v34 )
    {
      v34[2] = 1;
      *(_QWORD *)v34 = &CGlassColorizationResources::`vftable';
    }
    *((_QWORD *)this + 75) = v34;
    if ( !v34 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x72Cu);
      return 2147942414LL;
    }
  }
  v5 = *((_QWORD *)this + 93);
  if ( (*(_BYTE *)(v5 + 572) & 0x40) != 0 )
    v3 |= 0x10u;
  if ( (v3 & 1) == 0 && !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 1408) )
    IsWindowArranged(*(_QWORD *)(v5 + 40));
  v6 = (float *)*((_QWORD *)this + 74);
  v7 = *(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 1380);
  v38 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 351);
  v8 = *(_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 1396);
  v9 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 336);
  v36 = v7;
  v35 = v9;
  v37 = v8;
  CGlassColorizationParameters::AdjustWindowColorization(&v36, &v35);
  v10 = (float)BYTE1(v36);
  v11 = (float)(unsigned __int8)v36;
  *(float *)&v7 = (float)((float)((float)BYTE2(v36) / 255.0) * 255.0) + 0.5;
  v6[7] = (float)BYTE3(v36) / 255.0;
  v12 = v10 / 255.0;
  v13 = v11 / 255.0;
  v14 = floorf_0(*(float *)&v7);
  if ( v14 >= 255.0 )
    v14 = FLOAT_255_0;
  v6[4] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)v14] / 255.0;
  v15 = floorf_0((float)(v12 * 255.0) + 0.5);
  if ( v15 >= 255.0 )
    v15 = FLOAT_255_0;
  v6[5] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)v15] / 255.0;
  v16 = floorf_0((float)(v13 * 255.0) + 0.5);
  if ( v16 >= 255.0 )
    v16 = FLOAT_255_0;
  v17 = (float)SDWORD2(v36) / 100.0;
  v6[6] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)v16] / 255.0;
  v6[8] = v17;
  v18 = *(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 1380);
  v19 = (float *)*((_QWORD *)this + 75);
  v20 = *(_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 1396);
  v38 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 351);
  v21 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 336);
  v36 = v18;
  v35 = v21;
  v37 = v20;
  CGlassColorizationParameters::AdjustWindowColorization(&v36, &v35);
  v22 = (float)BYTE1(v36);
  v23 = (float)(unsigned __int8)v36;
  *(float *)&v18 = (float)((float)((float)BYTE2(v36) / 255.0) * 255.0) + 0.5;
  v19[7] = (float)BYTE3(v36) / 255.0;
  v24 = v22 / 255.0;
  v25 = v23 / 255.0;
  v26 = floorf_0(*(float *)&v18);
  if ( v26 >= 255.0 )
    v26 = FLOAT_255_0;
  v19[4] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)v26] / 255.0;
  v27 = floorf_0((float)(v24 * 255.0) + 0.5);
  if ( v27 >= 255.0 )
    v27 = FLOAT_255_0;
  v19[5] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)v27] / 255.0;
  v28 = floorf_0((float)(v25 * 255.0) + 0.5);
  if ( v28 >= 255.0 )
    v28 = FLOAT_255_0;
  v29 = (float)SDWORD2(v36) / 100.0;
  v19[6] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)v28] / 255.0;
  v19[8] = v29;
  return 0LL;
}
