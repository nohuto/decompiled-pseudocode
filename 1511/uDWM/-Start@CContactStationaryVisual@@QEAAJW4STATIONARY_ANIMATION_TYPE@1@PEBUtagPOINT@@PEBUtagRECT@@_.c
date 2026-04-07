/*
 * XREFs of ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x1800881C0
 * Callers:
 *     ?StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K_N@Z @ 0x1800707DC (-StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x18001AC50 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x180021DA0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180022540 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x180023E90 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180023EDC (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180036768 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x18003C890 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x180041274 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z @ 0x1800475DC (-GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Stop@CContactStationaryVisual@@UEAAXXZ @ 0x18006F5F0 (-Stop@CContactStationaryVisual@@UEAAXXZ.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18006FEDC (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     Template_q @ 0x18007CFB4 (Template_q.c)
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
  int v16; // edi
  float v17; // xmm0_4
  __int64 v18; // rcx
  bool v19; // al
  __int64 v20; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  int v23; // eax
  int v24; // ecx
  struct tagPOINT v25; // r8
  struct tagSIZE *v26; // rbx
  float v27; // xmm1_4
  int v28; // ecx
  float v29; // xmm0_4
  float v30; // xmm0_4
  CContactManager *v31; // rcx
  int v32; // edx
  int BoundedContactWidth; // eax
  int v34; // eax
  LONG cx; // kr00_4
  int v36; // ebx
  struct CBitmapSource **v37; // rdx
  struct CBitmapSource *v38; // rdx
  double v39; // xmm1_8
  unsigned int v41; // [rsp+20h] [rbp-28h]

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
    && *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 20) + 324LL) )
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
                                 (struct CBitmapSource ***)(a1 + 368));
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
    --*(_DWORD *)(v18 + 8);
    v19 = CDesktopManager::s_fTimelineDirty;
    if ( !*(_DWORD *)(v18 + 8) )
      v19 = 1;
    *(_QWORD *)(a1 + 336) = 0LL;
    CDesktopManager::s_fTimelineDirty = v19;
  }
  else
  {
    v19 = CDesktopManager::s_fTimelineDirty;
  }
  v20 = *(_QWORD *)(a1 + 344);
  if ( v20 )
  {
    if ( !--*(_DWORD *)(v20 + 8) )
      v19 = 1;
    *(_QWORD *)(a1 + 344) = 0LL;
    CDesktopManager::s_fTimelineDirty = v19;
  }
  if ( a5 )
  {
    v21 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                      WPF::g_pProcessHeap,
                      80LL);
    if ( v21 )
      v21 = CTimeline<float>::CTimeline<float>((__int64)v21, *(float *)(a1 + 404), 0.0, 1.0, 0);
    *(_QWORD *)(a1 + 344) = v21;
    if ( !v21 )
    {
      v41 = 145;
LABEL_26:
      v16 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, v41);
      goto LABEL_59;
    }
  }
  else
  {
    v22 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                      WPF::g_pProcessHeap,
                      80LL);
    if ( v22 )
      v22 = CTimeline<float>::CTimeline<float>((__int64)v22, *(float *)(a1 + 300), 0.0, 1.0, *(_DWORD *)(a1 + 328));
    *(_QWORD *)(a1 + 336) = v22;
    if ( !v22 )
    {
      v41 = 150;
      goto LABEL_26;
    }
  }
  v23 = CTouchVisual::RegisterGlobalTimer((CTouchVisual *)a1);
  v16 = v23;
  if ( v23 >= 0 )
  {
    v24 = *(_DWORD *)(a1 + 332);
    v25 = *a3;
    *(struct tagPOINT *)(a1 + 280) = *a3;
    if ( (v24 & 8) != 0 )
    {
      v26 = (struct tagSIZE *)(a1 + 360);
      v27 = *(float *)(a1 + 320);
      *(_QWORD *)(a1 + 360) = *((_QWORD *)**v13 + 3);
      v28 = (int)(float)((float)*(int *)(a1 + 360) * v27);
      v29 = (float)*(int *)(a1 + 364);
      if ( v28 < 1 )
        v28 = 1;
      v26->cx = v28;
      v30 = v29 * v27;
      *(_DWORD *)(a1 + 364) = (int)v30;
      if ( (int)v30 < 1 )
        *(_DWORD *)(a1 + 364) = 1;
    }
    else
    {
      v31 = (CContactManager *)(v24 & 4);
      if ( (_BYTE)v31 )
      {
        if ( !a4 )
        {
          v16 = -2147024809;
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024809, 0xB1u);
LABEL_59:
          CContactStationaryVisual::Stop((CContactStationaryVisual *)a1);
          return (unsigned int)v16;
        }
        v32 = a4[2] - *a4;
        if ( v32 > a4[3] - a4[1] )
          v32 = a4[3] - a4[1];
        BoundedContactWidth = CContactManager::GetBoundedContactWidth(v31, v32, v25);
        *(_DWORD *)(a1 + 288) = BoundedContactWidth;
        v26 = (struct tagSIZE *)(a1 + 360);
        v34 = (int)(float)((float)BoundedContactWidth * *(float *)(a1 + 320));
        if ( v34 < 1 )
          v34 = 1;
        v26->cx = v34;
        *(_DWORD *)(a1 + 364) = v34;
      }
      else
      {
        v26 = (struct tagSIZE *)(a1 + 360);
        *(_QWORD *)(a1 + 360) = *((_QWORD *)**v13 + 3);
      }
    }
    CVisual::SetSize(*(struct tagSIZE **)(a1 + 352), v26);
    cx = v26->cx;
    v36 = a3->y - *(_DWORD *)(a1 + 364) / 2;
    CVisual::SetInsetFromParentLeft(*(CVisual **)(a1 + 352), a3->x - cx / 2);
    CVisual::SetInsetFromParentTop(*(CVisual **)(a1 + 352), v36);
    v37 = *v13;
    if ( (*(_BYTE *)(a1 + 332) & 1) != 0 )
      v38 = *v37;
    else
      v38 = v37[*(unsigned int *)(a1 + 308)];
    CImage::SetBitmapSource(*(CImage **)(a1 + 352), v38);
    if ( a5 )
    {
      v39 = 0.0;
    }
    else if ( (*(_BYTE *)(a1 + 332) & 2) != 0 )
    {
      v39 = *(float *)(a1 + 312);
    }
    else
    {
      v39 = DOUBLE_1_0;
    }
    CVisual::SetOpacity((CVisual *)a1, v39);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v23, 0x99u);
  }
LABEL_58:
  if ( v16 < 0 )
    goto LABEL_59;
  return (unsigned int)v16;
}
