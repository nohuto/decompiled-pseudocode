/*
 * XREFs of ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x18008A9C4
 * Callers:
 *     ?OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z @ 0x180086784 (-OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z.c)
 * Callees:
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x1800151B4 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180017B34 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18001F090 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x18001F7E4 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x180020C8C (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180020CC0 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x180039B20 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z @ 0x18004883C (-MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180048B3C (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18006FE2C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     Template_q @ 0x180075A2C (Template_q.c)
 *     ?PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z @ 0x180087BB0 (-PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z.c)
 *     ?Stop@CFlickVisual@@UEAAXXZ @ 0x18008AE10 (-Stop@CFlickVisual@@UEAAXXZ.c)
 */

__int64 __fastcall CFlickVisual::Start(__int64 a1, POINT *a2, int a3, int a4)
{
  __int64 v7; // rax
  bool v8; // zf
  char v9; // al
  _QWORD *v10; // rax
  int v11; // esi
  int v12; // eax
  __int64 v13; // rcx
  int v14; // esi
  int *v15; // rax
  struct CBitmapSource **v16; // rbx
  CBaseObject *v17; // rcx
  void *Theme; // rax
  int BitmapFromAtlas; // eax
  _DWORD *v20; // r13
  LONG left; // r15d
  LONG top; // r12d
  HMONITOR v23; // rax
  int v24; // ecx
  int v25; // eax
  CDesktopManager *v26; // rcx
  unsigned int v27; // r8d
  unsigned int v28; // edx
  unsigned int nNumerator; // [rsp+30h] [rbp-D0h]
  struct tagMONITORINFO mi; // [rsp+38h] [rbp-C8h] BYREF
  int v32; // [rsp+60h] [rbp-A0h]
  _DWORD v33[43]; // [rsp+64h] [rbp-9Ch] BYREF

  *(POINT *)(a1 + 288) = *a2;
  *(_DWORD *)(a1 + 284) = a3;
  *(_DWORD *)(a1 + 280) = a4;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_q(a1, (__int64)&UdwmFlickVisual_Start, a3);
  v7 = *(_QWORD *)(a1 + 336);
  if ( v7 )
  {
    v8 = (*(_DWORD *)(v7 + 8))-- == 1;
    v9 = CDesktopManager::s_fTimelineDirty;
    if ( v8 )
      v9 = 1;
    CDesktopManager::s_fTimelineDirty = v9;
  }
  v10 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                    WPF::g_pProcessHeap,
                    80LL);
  if ( v10 )
    v10 = CTimeline<float>::CTimeline<float>((__int64)v10, *(float *)(a1 + 332), 0.0, 1.0, 0);
  *(_QWORD *)(a1 + 336) = v10;
  if ( !v10 )
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x40u);
    goto LABEL_39;
  }
  v12 = CTouchVisual::RegisterGlobalTimer((CTouchVisual *)a1);
  v11 = v12;
  if ( v12 >= 0 )
  {
    v32 = 0;
    v33[0] = 6;
    v33[11] = 6;
    v33[1] = 1;
    v33[3] = 2;
    v33[6] = 9;
    v33[17] = 9;
    v33[10] = 11;
    v33[21] = 11;
    v33[2] = 7;
    v33[13] = 7;
    v33[8] = 10;
    v33[19] = 10;
    v33[18] = 15;
    v33[29] = 15;
    v33[4] = 8;
    v13 = 21LL;
    v33[26] = 19;
    v33[37] = 19;
    v14 = 0;
    v33[30] = 21;
    v15 = v33;
    v33[32] = 21;
    v33[38] = 21;
    v33[5] = 3;
    v33[7] = 4;
    v33[9] = 5;
    v33[12] = 12;
    v33[14] = 13;
    v33[15] = 8;
    v33[16] = 14;
    v33[20] = 16;
    v33[22] = 17;
    v33[23] = 12;
    v33[24] = 18;
    v33[25] = 13;
    v33[27] = 14;
    v33[28] = 20;
    v33[31] = 16;
    v33[33] = 17;
    v33[34] = 22;
    v33[35] = 18;
    v33[36] = 23;
    v33[39] = 20;
    v33[40] = 24;
    do
    {
      if ( *(v15 - 1) == a3 )
        v14 = *v15;
      v15 += 2;
      --v13;
    }
    while ( v13 );
    if ( !v14 )
    {
      v11 = -2147467259;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147467259, 0x6Eu);
LABEL_39:
      CFlickVisual::Stop((CFlickVisual *)a1);
      return (unsigned int)v11;
    }
    v16 = (struct CBitmapSource **)(a1 + 304);
    v17 = *(CBaseObject **)(a1 + 304);
    if ( v17 )
      CBaseObject::Release(v17);
    Theme = (void *)CDesktopManager::GetTheme(2);
    BitmapFromAtlas = CTopLevelWindow::CreateBitmapFromAtlas(Theme, v14, 0LL, (struct CBitmapSource **)(a1 + 304));
    v11 = BitmapFromAtlas;
    if ( BitmapFromAtlas >= 0 )
    {
      v20 = (_DWORD *)(a1 + 320);
      *(_QWORD *)(a1 + 320) = *((_QWORD *)*v16 + 3);
      nNumerator = CDesktopManager::MonitorDpiFromPoint(*a2);
      if ( nNumerator < 0x90 )
      {
        *v20 = 32;
        *(_DWORD *)(a1 + 324) = 32;
      }
      CVisual::SetSize(*(struct tagSIZE **)(a1 + 312), (const struct tagSIZE *)(a1 + 320));
      left = *(_DWORD *)(a1 + 288) - *v20 / 2;
      top = *(_DWORD *)(a1 + 292) - *(_DWORD *)(a1 + 324) / 2;
      v23 = MonitorFromPoint(*(POINT *)(a1 + 288), 0);
      if ( v23 )
      {
        mi.cbSize = 40;
        if ( GetMonitorInfoW(v23, &mi) )
        {
          if ( left >= mi.rcMonitor.left )
          {
            if ( *v20 + left > mi.rcMonitor.right )
              left = mi.rcMonitor.right - *v20;
          }
          else
          {
            left = mi.rcMonitor.left;
          }
          if ( top >= mi.rcMonitor.top )
          {
            v24 = *(_DWORD *)(a1 + 324);
            if ( v24 + top > mi.rcMonitor.bottom )
              top = mi.rcMonitor.bottom - v24;
          }
          else
          {
            top = mi.rcMonitor.top;
          }
        }
      }
      CVisual::SetInsetFromParentLeft(*(CVisual **)(a1 + 312), left);
      CVisual::SetInsetFromParentTop(*(CVisual **)(a1 + 312), top);
      CImage::SetBitmapSource(*(CImage **)(a1 + 312), *v16);
      CVisual::SetOpacity((CVisual *)a1, 1.0);
      *(_DWORD *)(a1 + 296) = left + *v20 / 2;
      v25 = MulDiv(20, nNumerator, 96);
      v26 = CDesktopManager::s_pDesktopManagerInstance;
      v27 = *(_DWORD *)(a1 + 284);
      v28 = *(_DWORD *)(a1 + 280);
      *(_DWORD *)(a1 + 300) = top + *(_DWORD *)(a1 + 324) + v25;
      CContactManager::PostFlickFeedbackUpdate(*((_QWORD *)v26 + 18), v28, v27, (_QWORD *)(a1 + 296), 1u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, BitmapFromAtlas, 0x75u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x42u);
  }
  if ( v11 < 0 )
    goto LABEL_39;
  return (unsigned int)v11;
}
