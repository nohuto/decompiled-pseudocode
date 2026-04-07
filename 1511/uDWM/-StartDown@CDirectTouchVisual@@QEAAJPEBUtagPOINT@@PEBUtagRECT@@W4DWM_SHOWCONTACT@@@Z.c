/*
 * XREFs of ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x18006F33C
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18004BB7C (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 *     ?NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z @ 0x180070C48 (-NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z.c)
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x1800863AC (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x180087210 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 *     ?OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z @ 0x1800875D8 (-OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x18001AC50 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180022540 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x18003C890 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?StopDownTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x180046DC8 (-StopDownTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 *     ?Stop@CDirectTouchVisual@@UEAAXXZ @ 0x180046E50 (-Stop@CDirectTouchVisual@@UEAAXXZ.c)
 *     ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x180046E74 (-UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18006FEDC (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     TemplateEventDescriptor @ 0x180073BC8 (TemplateEventDescriptor.c)
 */

__int64 __fastcall CDirectTouchVisual::StartDown(
        __int64 a1,
        const struct tagPOINT *a2,
        const struct tagRECT *a3,
        int a4)
{
  __int64 v7; // rcx
  char v8; // al
  __int64 v9; // rcx
  char v10; // al
  _QWORD *v11; // rax
  int v12; // ebx
  int v13; // eax
  double v14; // xmm1_8

  *(_BYTE *)(a1 + 384) = 0;
  *(_DWORD *)(a1 + 352) = a4;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    TemplateEventDescriptor(a1, &UdwmDirectTouchDownAnimation_BeginDraw_Info);
  v7 = *(_QWORD *)(a1 + 368);
  if ( v7 )
  {
    --*(_DWORD *)(v7 + 8);
    v8 = CDesktopManager::s_fTimelineDirty;
    if ( !*(_DWORD *)(v7 + 8) )
      v8 = 1;
    *(_QWORD *)(a1 + 368) = 0LL;
    CDesktopManager::s_fTimelineDirty = v8;
  }
  CDirectTouchVisual::StopDownTimeline((CDirectTouchVisual *)a1);
  v9 = *(_QWORD *)(a1 + 376);
  if ( v9 )
  {
    --*(_DWORD *)(v9 + 8);
    v10 = CDesktopManager::s_fTimelineDirty;
    if ( !*(_DWORD *)(v9 + 8) )
      v10 = 1;
    *(_QWORD *)(a1 + 376) = 0LL;
    CDesktopManager::s_fTimelineDirty = v10;
  }
  v11 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                    WPF::g_pProcessHeap,
                    80LL);
  if ( v11 )
    v11 = CTimeline<float>::CTimeline<float>((__int64)v11, *(float *)(a1 + 348), 0.0, 0.0, 0);
  *(_QWORD *)(a1 + 376) = v11;
  if ( !v11 )
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x93u);
LABEL_22:
    CDirectTouchVisual::Stop((CDirectTouchVisual *)a1);
    return (unsigned int)v12;
  }
  v13 = CTouchVisual::RegisterGlobalTimer((CTouchVisual *)a1);
  v12 = v13;
  if ( v13 >= 0 )
  {
    CDirectTouchVisual::UpdateLocationWithScalar((CDirectTouchVisual *)a1, a2, a3, *(float *)(a1 + 336));
    CImage::SetBitmapSource(*(CImage **)(a1 + 392), *(struct CBitmapSource **)(a1 + 400));
    if ( (*(_BYTE *)(a1 + 352) & 1) != 0 )
      v14 = *(float *)(a1 + 328);
    else
      v14 = 0.0;
    CVisual::SetOpacity((CVisual *)a1, v14);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0x95u);
  }
  if ( v12 < 0 )
    goto LABEL_22;
  return (unsigned int)v12;
}
