/*
 * XREFs of ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x180088280
 * Callers:
 *     ?StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K_N@Z @ 0x18007056C (-StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 * Callees:
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x1800151B4 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180017B34 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18001F090 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x18001F7E4 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x180020C8C (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180020CC0 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x180039B20 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x180042AF4 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z @ 0x1800487C8 (-GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?Stop@CContactStationaryVisual@@UEAAXXZ @ 0x18006F5D0 (-Stop@CContactStationaryVisual@@UEAAXXZ.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18006FE2C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     Template_q @ 0x180075A2C (Template_q.c)
 */

__int64 __fastcall CContactStationaryVisual::Start(__int64 a1, int a2, struct tagPOINT *a3, _DWORD *a4, char a5)
{
  __int64 v5; // r10
  __int128 v9; // xmm1
  __int64 v10; // xmm0_8
  int v11; // eax
  int v12; // ecx
  struct CBitmapSource ***v13; // r14
  void *Theme; // rax
  int BitmapsFromAtlasImageStrip; // eax
  int v16; // esi
  float v17; // xmm0_4
  __int64 v18; // rax
  bool v19; // zf
  bool v20; // al
  __int64 v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  int v24; // eax
  int v25; // ecx
  struct tagPOINT v26; // r8
  struct tagSIZE *v27; // rbx
  float v28; // xmm1_4
  int v29; // ecx
  float v30; // xmm0_4
  float v31; // xmm0_4
  CContactManager *v32; // rcx
  int v33; // edx
  int BoundedContactWidth; // eax
  int v35; // eax
  __int64 cx; // kr00_8
  int v37; // ebx
  struct CBitmapSource **v38; // rdx
  struct CBitmapSource *v39; // rdx
  double v40; // xmm1_8
  unsigned int v42; // [rsp+20h] [rbp-28h]

  v5 = 44LL * a2;
  *(_DWORD *)(a1 + 400) = a2;
  v9 = *(_OWORD *)((char *)&csadAnimData + v5 + 16);
  *(_OWORD *)(a1 + 292) = *(_OWORD *)((char *)&csadAnimData + v5);
  v10 = *(_QWORD *)((char *)&csadAnimData + v5 + 32);
  v11 = *(_DWORD *)((char *)&csadAnimData + v5 + 40);
  *(_OWORD *)(a1 + 308) = v9;
  *(_QWORD *)(a1 + 324) = v10;
  *(_DWORD *)(a1 + 332) = v11;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_q(a1, (__int64)&UdwmContactStationaryVisual_Start, a2);
  v12 = *(_DWORD *)(a1 + 292);
  if ( v12 == 1
    && *(_DWORD *)(a1 + 296) == 2
    && *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 18) + 324LL) )
  {
    *(_DWORD *)(a1 + 296) = 7;
    *(_DWORD *)(a1 + 304) = 1;
  }
  v13 = (struct CBitmapSource ***)(a1 + 368);
  Theme = (void *)CDesktopManager::GetTheme(v12);
  BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                 Theme,
                                 *(_DWORD *)(a1 + 296),
                                 *(_DWORD *)(a1 + 304),
                                 0LL,
                                 a1 + 368);
  v16 = BitmapsFromAtlasImageStrip;
  if ( BitmapsFromAtlasImageStrip < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, BitmapsFromAtlasImageStrip, 0x63u);
    goto LABEL_58;
  }
  if ( a5 )
    v17 = FLOAT_0_050000001;
  else
    v17 = 0.0;
  v18 = *(_QWORD *)(a1 + 336);
  *(float *)(a1 + 404) = v17;
  if ( v18 )
  {
    v19 = (*(_DWORD *)(v18 + 8))-- == 1;
    v20 = CDesktopManager::s_fTimelineDirty;
    if ( v19 )
      v20 = 1;
    *(_QWORD *)(a1 + 336) = 0LL;
    CDesktopManager::s_fTimelineDirty = v20;
  }
  else
  {
    v20 = CDesktopManager::s_fTimelineDirty;
  }
  v21 = *(_QWORD *)(a1 + 344);
  if ( v21 )
  {
    v19 = (*(_DWORD *)(v21 + 8))-- == 1;
    if ( v19 )
      v20 = 1;
    *(_QWORD *)(a1 + 344) = 0LL;
    CDesktopManager::s_fTimelineDirty = v20;
  }
  if ( a5 )
  {
    v22 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                      WPF::g_pProcessHeap,
                      80LL);
    if ( v22 )
      v22 = CTimeline<float>::CTimeline<float>((__int64)v22, *(float *)(a1 + 404), 0.0, 1.0, 0);
    *(_QWORD *)(a1 + 344) = v22;
    if ( !v22 )
    {
      v42 = 117;
LABEL_27:
      v16 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, v42);
      goto LABEL_59;
    }
  }
  else
  {
    v23 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                      WPF::g_pProcessHeap,
                      80LL);
    if ( v23 )
      v23 = CTimeline<float>::CTimeline<float>((__int64)v23, *(float *)(a1 + 300), 0.0, 1.0, *(_DWORD *)(a1 + 328));
    *(_QWORD *)(a1 + 336) = v23;
    if ( !v23 )
    {
      v42 = 122;
      goto LABEL_27;
    }
  }
  v24 = CTouchVisual::RegisterGlobalTimer((CTouchVisual *)a1);
  v16 = v24;
  if ( v24 >= 0 )
  {
    v25 = *(_DWORD *)(a1 + 332);
    v26 = *a3;
    *(struct tagPOINT *)(a1 + 280) = *a3;
    if ( (v25 & 8) != 0 )
    {
      v27 = (struct tagSIZE *)(a1 + 360);
      v28 = *(float *)(a1 + 320);
      *(_QWORD *)(a1 + 360) = *((_QWORD *)**v13 + 3);
      v29 = (int)(float)((float)*(int *)(a1 + 360) * v28);
      v30 = (float)*(int *)(a1 + 364);
      if ( v29 < 1 )
        v29 = 1;
      v27->cx = v29;
      v31 = v30 * v28;
      *(_DWORD *)(a1 + 364) = (int)v31;
      if ( (int)v31 < 1 )
        *(_DWORD *)(a1 + 364) = 1;
    }
    else
    {
      v32 = (CContactManager *)(v25 & 4);
      if ( (_BYTE)v32 )
      {
        if ( !a4 )
        {
          v16 = -2147024809;
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024809, 0x95u);
LABEL_59:
          CContactStationaryVisual::Stop((CContactStationaryVisual *)a1);
          return (unsigned int)v16;
        }
        v33 = a4[2] - *a4;
        if ( v33 > a4[3] - a4[1] )
          v33 = a4[3] - a4[1];
        BoundedContactWidth = CContactManager::GetBoundedContactWidth(v32, v33, v26);
        *(_DWORD *)(a1 + 288) = BoundedContactWidth;
        v27 = (struct tagSIZE *)(a1 + 360);
        v35 = (int)(float)((float)BoundedContactWidth * *(float *)(a1 + 320));
        if ( v35 < 1 )
          v35 = 1;
        v27->cx = v35;
        *(_DWORD *)(a1 + 364) = v35;
      }
      else
      {
        v27 = (struct tagSIZE *)(a1 + 360);
        *(_QWORD *)(a1 + 360) = *((_QWORD *)**v13 + 3);
      }
    }
    CVisual::SetSize(*(struct tagSIZE **)(a1 + 352), v27);
    cx = v27->cx;
    v37 = a3->y - *(_DWORD *)(a1 + 364) / 2;
    CVisual::SetInsetFromParentLeft(*(CVisual **)(a1 + 352), a3->x - cx / 2);
    CVisual::SetInsetFromParentTop(*(CVisual **)(a1 + 352), v37);
    v38 = *v13;
    if ( (*(_BYTE *)(a1 + 332) & 1) != 0 )
      v39 = *v38;
    else
      v39 = v38[*(unsigned int *)(a1 + 308)];
    CImage::SetBitmapSource(*(CImage **)(a1 + 352), v39);
    if ( a5 )
    {
      v40 = 0.0;
    }
    else if ( (*(_BYTE *)(a1 + 332) & 2) != 0 )
    {
      v40 = *(float *)(a1 + 312);
    }
    else
    {
      v40 = DOUBLE_1_0;
    }
    CVisual::SetOpacity((CVisual *)a1, v40);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v24, 0x7Du);
  }
LABEL_58:
  if ( v16 < 0 )
    goto LABEL_59;
  return (unsigned int)v16;
}
