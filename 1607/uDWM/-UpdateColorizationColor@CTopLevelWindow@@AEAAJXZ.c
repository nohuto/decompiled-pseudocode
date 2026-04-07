/*
 * XREFs of ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x1800268E0
 * Callers:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x180020E2C (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180022070 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180023C8C (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x180023FA0 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180027C90 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002AE50 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18004F7C0 (IsOpenThemeDataPresent.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     floorf_0 @ 0x180050576 (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateColorizationColor(CTopLevelWindow *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rcx
  _DWORD *v6; // rax
  __int64 v7; // r9
  float *v8; // rsi
  bool v9; // zf
  __int128 v10; // xmm0
  __int64 v11; // xmm1_8
  int v12; // eax
  float v13; // xmm6_4
  float v14; // xmm7_4
  float v15; // xmm0_4
  __int64 v16; // r8
  float v17; // xmm0_4
  float v18; // xmm1_4
  unsigned int v19; // ebx
  __int128 v20; // xmm0
  float *v21; // rdi
  __int64 v22; // xmm1_8
  int v23; // eax
  float v24; // xmm6_4
  float v25; // xmm7_4
  float v26; // xmm0_4
  float v27; // xmm0_4
  float v28; // xmm1_4
  void *(__fastcall *v30)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  _DWORD *v31; // rax
  void *(__fastcall *v32)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  _DWORD *v33; // rax
  int v34; // [rsp+30h] [rbp-49h] BYREF
  __int128 v35; // [rsp+38h] [rbp-41h] BYREF
  __int64 v36; // [rsp+48h] [rbp-31h]
  int v37; // [rsp+50h] [rbp-29h]

  if ( (*((_DWORD *)this + 152) & 0x40) != 0 || (*(_BYTE *)(*((_QWORD *)this + 93) + 579LL) & 0x20) != 0 )
    v2 = 1;
  else
    v2 = 2;
  v3 = *((_QWORD *)this + 93);
  if ( *(_QWORD *)(v3 + 80) == 0x7FFFFFFF7FFFFFFFLL
    && *(_DWORD *)(v3 + 88) == 0x7FFFFFFF
    && *(_DWORD *)(v3 + 92) == 0x7FFFFFFF )
  {
    v2 |= 0x40u;
  }
  IsOpenThemeDataPresent();
  if ( !*((_QWORD *)this + 74) )
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
    *((_QWORD *)this + 74) = v31;
    if ( !v31 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x62Eu);
      return 2147942414LL;
    }
  }
  if ( !*((_QWORD *)this + 75) )
  {
    v32 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v32 == WPF::ProcessHeapImpl::Alloc )
      v33 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x28uLL);
    else
      v33 = (_DWORD *)v32(WPF::g_pProcessHeap, 40uLL);
    if ( v33 )
    {
      v33[2] = 1;
      *(_QWORD *)v33 = &CGlassColorizationResources::`vftable';
    }
    *((_QWORD *)this + 75) = v33;
    if ( !v33 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x633u);
      return 2147942414LL;
    }
  }
  v5 = *((_QWORD *)this + 93);
  if ( (*(_BYTE *)(v5 + 580) & 0x40) != 0 )
    v2 |= 0x10u;
  if ( (v2 & 1) == 0
    && !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 1392)
    && !(unsigned int)IsWindowArranged(*(_QWORD *)(v5 + 40))
    && (*((_BYTE *)this + 608) & 0x20) == 0 )
  {
    v6 = (_DWORD *)*((_QWORD *)this + 93);
    if ( v6[20] || v6[22] || v6[21] || v6[23] )
      v2 |= 8u;
  }
  v7 = v2;
  v8 = (float *)*((_QWORD *)this + 74);
  v9 = *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 24) == 0;
  v10 = *(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 1364);
  v37 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 347);
  v11 = *(_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 1380);
  v12 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 332);
  v35 = v10;
  v34 = v12;
  v36 = v11;
  if ( !v9 )
    v7 = v2 | 4;
  if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 1392) )
    v7 = (unsigned int)v7 | 0x20;
  CGlassColorizationParameters::AdjustWindowColorization(&v35, &v34, v4, v7);
  v13 = (float)BYTE1(v35);
  v14 = (float)(unsigned __int8)v35;
  v15 = (float)((float)((float)BYTE2(v35) / 255.0) * 255.0) + 0.5;
  v8[7] = (float)BYTE3(v35) / 255.0;
  v8[4] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(floorf_0(v15), 255.0)] / 255.0;
  v8[5] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(
                                                         floorf_0((float)((float)(v13 / 255.0) * 255.0) + 0.5),
                                                         255.0)]
        / 255.0;
  v17 = floorf_0((float)((float)(v14 / 255.0) * 255.0) + 0.5);
  v18 = (float)SDWORD2(v35) / 100.0;
  v8[6] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(v17, 255.0)] / 255.0;
  v8[8] = v18;
  v19 = v2 & 0xFFFFFFE7 | 8;
  v9 = *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 24) == 0;
  v20 = *(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 1364);
  v21 = (float *)*((_QWORD *)this + 75);
  v22 = *(_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 1380);
  v37 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 347);
  v23 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 332);
  v35 = v20;
  v34 = v23;
  v36 = v22;
  if ( !v9 )
    v19 |= 4u;
  if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 1392) )
    v19 |= 0x20u;
  CGlassColorizationParameters::AdjustWindowColorization(&v35, &v34, v16, v19);
  v24 = (float)BYTE1(v35);
  v25 = (float)(unsigned __int8)v35;
  v26 = (float)((float)((float)BYTE2(v35) / 255.0) * 255.0) + 0.5;
  v21[7] = (float)BYTE3(v35) / 255.0;
  v21[4] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(floorf_0(v26), 255.0)] / 255.0;
  v21[5] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(
                                                          floorf_0((float)((float)(v24 / 255.0) * 255.0) + 0.5),
                                                          255.0)]
         / 255.0;
  v27 = floorf_0((float)((float)(v25 / 255.0) * 255.0) + 0.5);
  v28 = (float)SDWORD2(v35) / 100.0;
  v21[6] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(v27, 255.0)] / 255.0;
  v21[8] = v28;
  return 0LL;
}
