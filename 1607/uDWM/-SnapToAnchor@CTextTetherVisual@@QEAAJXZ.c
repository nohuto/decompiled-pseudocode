/*
 * XREFs of ?SnapToAnchor@CTextTetherVisual@@QEAAJXZ @ 0x18006FD44
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18004DBCC (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 *     ?OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z @ 0x180087808 (-OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z.c)
 * Callees:
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180017B34 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18006FE2C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?Stop@CTextTetherVisual@@UEAAXXZ @ 0x180088B00 (-Stop@CTextTetherVisual@@UEAAXXZ.c)
 */

__int64 __fastcall CTextTetherVisual::SnapToAnchor(CTextTetherVisual *this)
{
  __int64 v2; // rax
  bool v3; // zf
  char v4; // al
  _QWORD *v5; // rax
  unsigned int v6; // edi
  int v7; // eax

  v2 = *((_QWORD *)this + 35);
  *((_BYTE *)this + 409) = 1;
  if ( v2 )
  {
    v3 = (*(_DWORD *)(v2 + 8))-- == 1;
    v4 = CDesktopManager::s_fTimelineDirty;
    if ( v3 )
      v4 = 1;
    CDesktopManager::s_fTimelineDirty = v4;
  }
  v5 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                   WPF::g_pProcessHeap,
                   80LL);
  if ( v5 )
    v5 = CTimeline<float>::CTimeline<float>((__int64)v5, *((float *)this + 72), 1.0, 0.0, 2);
  *((_QWORD *)this + 35) = v5;
  if ( !v5 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0xF3u);
LABEL_11:
    CTextTetherVisual::Stop(this);
    return v6;
  }
  v7 = CTouchVisual::RegisterGlobalTimer(this);
  v6 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0xF5u);
    goto LABEL_11;
  }
  return v6;
}
