/*
 * XREFs of ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x18008B704
 * Callers:
 *     ?OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z @ 0x180086290 (-OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x18001AC50 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x180021DA0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180022540 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x180023E90 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180023EDC (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180036768 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x18003C890 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z @ 0x180047650 (-MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180047950 (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18006FEDC (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     Template_q @ 0x18007CFB4 (Template_q.c)
 *     ?PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z @ 0x1800879D4 (-PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z.c)
 *     ?Stop@CFlickVisual@@UEAAXXZ @ 0x18008BB60 (-Stop@CFlickVisual@@UEAAXXZ.c)
 */

__int64 __fastcall CFlickVisual::Start(__int64 a1, POINT *a2, int a3, int a4)
{
  __int64 v7; // rcx
  char v8; // al
  _QWORD *v9; // rax
  int v10; // edi
  int v11; // eax
  __int64 v12; // rcx
  int v13; // ebx
  int *v14; // rax
  CBaseObject *v15; // rcx
  void *Theme; // rax
  int BitmapFromAtlas; // eax
  _DWORD *v18; // r13
  LONG left; // r15d
  LONG top; // r12d
  HMONITOR v21; // rax
  int v22; // ecx
  int v23; // eax
  CDesktopManager *v24; // rcx
  unsigned int v25; // r8d
  unsigned int v26; // edx
  unsigned int nNumerator; // [rsp+30h] [rbp-D0h]
  struct tagMONITORINFO mi; // [rsp+38h] [rbp-C8h] BYREF
  int v30; // [rsp+60h] [rbp-A0h]
  _DWORD v31[43]; // [rsp+64h] [rbp-9Ch] BYREF

  *(POINT *)(a1 + 288) = *a2;
  *(_DWORD *)(a1 + 284) = a3;
  *(_DWORD *)(a1 + 280) = a4;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_q(a1, (__int64)&UdwmFlickVisual_Start, a3);
  v7 = *(_QWORD *)(a1 + 336);
  if ( v7 )
  {
    v8 = CDesktopManager::s_fTimelineDirty;
    if ( !--*(_DWORD *)(v7 + 8) )
      v8 = 1;
    CDesktopManager::s_fTimelineDirty = v8;
  }
  v9 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                   WPF::g_pProcessHeap,
                   80LL);
  if ( v9 )
    v9 = CTimeline<float>::CTimeline<float>((__int64)v9, *(float *)(a1 + 332), 0.0, 1.0, 0);
  *(_QWORD *)(a1 + 336) = v9;
  if ( !v9 )
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x40u);
    goto LABEL_39;
  }
  v11 = CTouchVisual::RegisterGlobalTimer((CTouchVisual *)a1);
  v10 = v11;
  if ( v11 >= 0 )
  {
    v30 = 0;
    v31[0] = 6;
    v31[11] = 6;
    v31[1] = 1;
    v31[3] = 2;
    v31[6] = 9;
    v31[17] = 9;
    v31[10] = 11;
    v31[21] = 11;
    v31[2] = 7;
    v31[13] = 7;
    v31[8] = 10;
    v31[19] = 10;
    v31[18] = 15;
    v31[29] = 15;
    v31[4] = 8;
    v12 = 21LL;
    v31[26] = 19;
    v31[37] = 19;
    v13 = 0;
    v31[30] = 21;
    v14 = v31;
    v31[32] = 21;
    v31[38] = 21;
    v31[5] = 3;
    v31[7] = 4;
    v31[9] = 5;
    v31[12] = 12;
    v31[14] = 13;
    v31[15] = 8;
    v31[16] = 14;
    v31[20] = 16;
    v31[22] = 17;
    v31[23] = 12;
    v31[24] = 18;
    v31[25] = 13;
    v31[27] = 14;
    v31[28] = 20;
    v31[31] = 16;
    v31[33] = 17;
    v31[34] = 22;
    v31[35] = 18;
    v31[36] = 23;
    v31[39] = 20;
    v31[40] = 24;
    do
    {
      if ( *(v14 - 1) == a3 )
        v13 = *v14;
      v14 += 2;
      --v12;
    }
    while ( v12 );
    if ( !v13 )
    {
      v10 = -2147467259;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147467259, 0x6Eu);
LABEL_39:
      CFlickVisual::Stop((CFlickVisual *)a1);
      return (unsigned int)v10;
    }
    v15 = *(CBaseObject **)(a1 + 304);
    if ( v15 )
      CBaseObject::Release(v15);
    Theme = (void *)CDesktopManager::GetTheme(2);
    BitmapFromAtlas = CTopLevelWindow::CreateBitmapFromAtlas(Theme, v13, 0LL, (struct CBitmapSource **)(a1 + 304));
    v10 = BitmapFromAtlas;
    if ( BitmapFromAtlas >= 0 )
    {
      v18 = (_DWORD *)(a1 + 320);
      *(_QWORD *)(a1 + 320) = *(_QWORD *)(*(_QWORD *)(a1 + 304) + 24LL);
      nNumerator = CDesktopManager::MonitorDpiFromPoint(*a2);
      if ( nNumerator < 0x90 )
      {
        *v18 = 32;
        *(_DWORD *)(a1 + 324) = 32;
      }
      CVisual::SetSize(*(struct tagSIZE **)(a1 + 312), (const struct tagSIZE *)(a1 + 320));
      left = *(_DWORD *)(a1 + 288) - *v18 / 2;
      top = *(_DWORD *)(a1 + 292) - *(_DWORD *)(a1 + 324) / 2;
      v21 = MonitorFromPoint(*(POINT *)(a1 + 288), 0);
      if ( v21 )
      {
        mi.cbSize = 40;
        if ( GetMonitorInfoW(v21, &mi) )
        {
          if ( left >= mi.rcMonitor.left )
          {
            if ( *v18 + left > mi.rcMonitor.right )
              left = mi.rcMonitor.right - *v18;
          }
          else
          {
            left = mi.rcMonitor.left;
          }
          if ( top >= mi.rcMonitor.top )
          {
            v22 = *(_DWORD *)(a1 + 324);
            if ( v22 + top > mi.rcMonitor.bottom )
              top = mi.rcMonitor.bottom - v22;
          }
          else
          {
            top = mi.rcMonitor.top;
          }
        }
      }
      CVisual::SetInsetFromParentLeft(*(CVisual **)(a1 + 312), left);
      CVisual::SetInsetFromParentTop(*(CVisual **)(a1 + 312), top);
      CImage::SetBitmapSource(*(CImage **)(a1 + 312), *(struct CBitmapSource **)(a1 + 304));
      CVisual::SetOpacity((CVisual *)a1, 1.0);
      *(_DWORD *)(a1 + 296) = left + *v18 / 2;
      v23 = MulDiv(20, nNumerator, 96);
      v24 = CDesktopManager::s_pDesktopManagerInstance;
      v25 = *(_DWORD *)(a1 + 284);
      v26 = *(_DWORD *)(a1 + 280);
      *(_DWORD *)(a1 + 300) = top + *(_DWORD *)(a1 + 324) + v23;
      CContactManager::PostFlickFeedbackUpdate(*((_QWORD *)v24 + 20), v26, v25, (_QWORD *)(a1 + 296), 1u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, BitmapFromAtlas, 0x75u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x42u);
  }
  if ( v10 < 0 )
    goto LABEL_39;
  return (unsigned int)v10;
}
