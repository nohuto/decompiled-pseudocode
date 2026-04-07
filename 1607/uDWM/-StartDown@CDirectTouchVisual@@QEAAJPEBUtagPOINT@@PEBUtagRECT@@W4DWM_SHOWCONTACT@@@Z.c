/*
 * XREFs of ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x18006F338
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18004DBCC (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 *     ?NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z @ 0x180070A2C (-NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z.c)
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x180086864 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x180087498 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 *     ?OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z @ 0x180087808 (-OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z.c)
 * Callees:
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180017B34 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x18001F7E4 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x180039B20 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?StopDownTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x180048004 (-StopDownTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 *     ?Stop@CDirectTouchVisual@@UEAAXXZ @ 0x180048080 (-Stop@CDirectTouchVisual@@UEAAXXZ.c)
 *     ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x1800480A4 (-UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18006FE2C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     TemplateEventDescriptor @ 0x180075A10 (TemplateEventDescriptor.c)
 */

__int64 __fastcall CDirectTouchVisual::StartDown(
        __int64 a1,
        const struct tagPOINT *a2,
        const struct tagRECT *a3,
        int a4)
{
  __int64 v7; // rax
  bool v8; // zf
  char v9; // al
  __int64 v10; // rax
  char v11; // al
  _QWORD *v12; // rax
  int v13; // edi
  int v14; // eax
  double v15; // xmm1_8

  *(_BYTE *)(a1 + 384) = 0;
  *(_DWORD *)(a1 + 352) = a4;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    TemplateEventDescriptor(a1, &UdwmDirectTouchDownAnimation_BeginDraw_Info);
  v7 = *(_QWORD *)(a1 + 368);
  if ( v7 )
  {
    v8 = (*(_DWORD *)(v7 + 8))-- == 1;
    v9 = CDesktopManager::s_fTimelineDirty;
    if ( v8 )
      v9 = 1;
    *(_QWORD *)(a1 + 368) = 0LL;
    CDesktopManager::s_fTimelineDirty = v9;
  }
  CDirectTouchVisual::StopDownTimeline((CDirectTouchVisual *)a1);
  v10 = *(_QWORD *)(a1 + 376);
  if ( v10 )
  {
    v8 = (*(_DWORD *)(v10 + 8))-- == 1;
    v11 = CDesktopManager::s_fTimelineDirty;
    if ( v8 )
      v11 = 1;
    *(_QWORD *)(a1 + 376) = 0LL;
    CDesktopManager::s_fTimelineDirty = v11;
  }
  v12 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                    WPF::g_pProcessHeap,
                    80LL);
  if ( v12 )
    v12 = CTimeline<float>::CTimeline<float>((__int64)v12, *(float *)(a1 + 348), 0.0, 0.0, 0);
  *(_QWORD *)(a1 + 376) = v12;
  if ( !v12 )
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x67u);
LABEL_22:
    CDirectTouchVisual::Stop((CDirectTouchVisual *)a1);
    return (unsigned int)v13;
  }
  v14 = CTouchVisual::RegisterGlobalTimer((CTouchVisual *)a1);
  v13 = v14;
  if ( v14 >= 0 )
  {
    CDirectTouchVisual::UpdateLocationWithScalar((CDirectTouchVisual *)a1, a2, a3, *(float *)(a1 + 336));
    CImage::SetBitmapSource(*(CImage **)(a1 + 392), *(struct CBitmapSource **)(a1 + 400));
    if ( (*(_BYTE *)(a1 + 352) & 1) != 0 )
      v15 = *(float *)(a1 + 328);
    else
      v15 = 0.0;
    CVisual::SetOpacity((CVisual *)a1, v15);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0x69u);
  }
  if ( v13 < 0 )
    goto LABEL_22;
  return (unsigned int)v13;
}
