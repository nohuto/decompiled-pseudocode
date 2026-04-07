/*
 * XREFs of ?SnapToAnchor@CTextTetherVisual@@QEAAJXZ @ 0x18006FC90
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18004BB7C (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 *     ?OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z @ 0x1800875D8 (-OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x18001AC50 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18006FEDC (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?Stop@CTextTetherVisual@@UEAAXXZ @ 0x180089110 (-Stop@CTextTetherVisual@@UEAAXXZ.c)
 */

__int64 __fastcall CTextTetherVisual::SnapToAnchor(CTextTetherVisual *this)
{
  __int64 v2; // rcx
  char v3; // al
  _QWORD *v4; // rax
  unsigned int v5; // ebx
  int v6; // eax

  *((_BYTE *)this + 457) = 1;
  v2 = *((_QWORD *)this + 35);
  if ( v2 )
  {
    v3 = CDesktopManager::s_fTimelineDirty;
    if ( !--*(_DWORD *)(v2 + 8) )
      v3 = 1;
    CDesktopManager::s_fTimelineDirty = v3;
  }
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                   WPF::g_pProcessHeap,
                   80LL);
  if ( v4 )
    v4 = CTimeline<float>::CTimeline<float>((__int64)v4, *((float *)this + 72), 1.0, 0.0, 2);
  *((_QWORD *)this + 35) = v4;
  if ( !v4 )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x1BBu);
LABEL_11:
    CTextTetherVisual::Stop(this);
    return v5;
  }
  v6 = CTouchVisual::RegisterGlobalTimer(this);
  v5 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x1BDu);
    goto LABEL_11;
  }
  return v5;
}
