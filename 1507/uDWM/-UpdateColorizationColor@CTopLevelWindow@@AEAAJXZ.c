/*
 * XREFs of ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x180024200
 * Callers:
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180021314 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x1800213C0 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x180025024 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     NormalizesRGBColor @ 0x180006888 (NormalizesRGBColor.c)
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x1800252C0 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800284D0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     floorf_0 @ 0x180049896 (floorf_0.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateColorizationColor(CTopLevelWindow *this, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // r9
  __int64 v6; // rsi
  bool v7; // zf
  __int128 v8; // xmm0
  __int64 v9; // xmm1_8
  int v10; // eax
  float v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  __int64 v14; // r8
  float v15; // xmm0_4
  float v16; // xmm1_4
  __int64 v17; // rdi
  unsigned int v18; // ebx
  __int128 v19; // xmm0
  __int64 v20; // xmm1_8
  int v21; // eax
  float v22; // xmm0_4
  float v23; // xmm0_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  float v26; // xmm1_4
  void *(__fastcall *v28)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // r14
  _DWORD *v29; // rax
  void *(__fastcall *v30)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // r14
  _DWORD *v31; // rax
  int v32; // [rsp+30h] [rbp-49h] BYREF
  float v33; // [rsp+38h] [rbp-41h] BYREF
  float v34; // [rsp+3Ch] [rbp-3Dh]
  float v35; // [rsp+40h] [rbp-39h]
  int v36; // [rsp+44h] [rbp-35h]
  __int128 v37; // [rsp+48h] [rbp-31h] BYREF
  __int64 v38; // [rsp+58h] [rbp-21h]
  int v39; // [rsp+60h] [rbp-19h]

  v3 = 0;
  if ( !*((_QWORD *)this + 74) )
  {
    v28 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v28 == WPF::ProcessHeapImpl::Alloc )
      v29 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x28uLL);
    else
      v29 = (_DWORD *)v28(WPF::g_pProcessHeap, 40uLL);
    if ( v29 )
    {
      v29[2] = 1;
      *(_QWORD *)v29 = &CGlassColorizationResources::`vftable';
    }
    *((_QWORD *)this + 74) = v29;
    if ( !v29 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x71Fu);
      return 2147942414LL;
    }
  }
  if ( !*((_QWORD *)this + 75) )
  {
    v30 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v30 == WPF::ProcessHeapImpl::Alloc )
      v31 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x28uLL);
    else
      v31 = (_DWORD *)v30(WPF::g_pProcessHeap, 40uLL);
    if ( v31 )
    {
      v31[2] = 1;
      *(_QWORD *)v31 = &CGlassColorizationResources::`vftable';
    }
    *((_QWORD *)this + 75) = v31;
    if ( !v31 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x724u);
      return 2147942414LL;
    }
  }
  if ( (*((_BYTE *)this + 608) & 0x40) != 0 || (*(_BYTE *)(*((_QWORD *)this + 93) + 555LL) & 0x20) != 0 )
    v3 = 1;
  if ( (*(_BYTE *)(*((_QWORD *)this + 93) + 557LL) & 1) != 0 )
    v3 |= 0x10u;
  v5 = v3;
  v6 = *((_QWORD *)this + 74);
  v7 = *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 24) == 0;
  v8 = *(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 1380);
  v39 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 351);
  v9 = *(_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 1396);
  v10 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 336);
  v37 = v8;
  v32 = v10;
  v38 = v9;
  if ( !v7 )
    v5 = v3 | 4;
  if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 1408) )
    v5 = (unsigned int)v5 | 0x20;
  CGlassColorizationParameters::AdjustWindowColorization(&v37, &v32, a3, v5);
  NormalizesRGBColor((unsigned __int8 *)&v37, &v33);
  v11 = v33 * 255.0;
  *(_DWORD *)(v6 + 28) = v36;
  v12 = floorf_0(v11 + 0.5);
  if ( v12 >= 255.0 )
    v12 = FLOAT_255_0;
  *(float *)(v6 + 16) = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)v12] / 255.0;
  v13 = floorf_0((float)(v34 * 255.0) + 0.5);
  if ( v13 >= 255.0 )
    v13 = FLOAT_255_0;
  *(float *)(v6 + 20) = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)v13] / 255.0;
  v15 = floorf_0((float)(v35 * 255.0) + 0.5);
  if ( v15 >= 255.0 )
    v15 = FLOAT_255_0;
  v16 = (float)SDWORD2(v37) / 100.0;
  *(float *)(v6 + 24) = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)v15] / 255.0;
  *(float *)(v6 + 32) = v16;
  v17 = *((_QWORD *)this + 75);
  v18 = v3 & 0xFFFFFFE7 | 8;
  v7 = *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 24) == 0;
  v19 = *(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 1380);
  v39 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 351);
  v20 = *(_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 1396);
  v21 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 336);
  v37 = v19;
  v32 = v21;
  v38 = v20;
  if ( !v7 )
    v18 |= 4u;
  if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 1408) )
    v18 |= 0x20u;
  CGlassColorizationParameters::AdjustWindowColorization(&v37, &v32, v14, v18);
  NormalizesRGBColor((unsigned __int8 *)&v37, &v33);
  v22 = v33 * 255.0;
  *(_DWORD *)(v17 + 28) = v36;
  v23 = floorf_0(v22 + 0.5);
  if ( v23 >= 255.0 )
    v23 = FLOAT_255_0;
  *(float *)(v17 + 16) = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)v23] / 255.0;
  v24 = floorf_0((float)(v34 * 255.0) + 0.5);
  if ( v24 >= 255.0 )
    v24 = FLOAT_255_0;
  *(float *)(v17 + 20) = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)v24] / 255.0;
  v25 = floorf_0((float)(v35 * 255.0) + 0.5);
  if ( v25 >= 255.0 )
    v25 = FLOAT_255_0;
  v26 = (float)SDWORD2(v37) / 100.0;
  *(float *)(v17 + 24) = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)v25] / 255.0;
  *(float *)(v17 + 32) = v26;
  return 0LL;
}
