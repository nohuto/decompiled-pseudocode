/*
 * XREFs of ?SnapToAnchor@CTetherVisual@@QEAAJXZ @ 0x180086BB0
 * Callers:
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x18007FDA8 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180080A2C (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x1800159C0 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Stop@CTetherVisual@@UEAAXXZ @ 0x180086CA0 (-Stop@CTetherVisual@@UEAAXXZ.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x180088E8C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CTetherVisual::SnapToAnchor(CTetherVisual *this)
{
  __int64 v2; // rcx
  char v3; // al
  _QWORD *v4; // rax
  unsigned int v5; // ebx
  int v6; // eax

  v2 = *((_QWORD *)this + 47);
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
    v4 = CTimeline<float>::CTimeline<float>((__int64)v4, *((float *)this + 98), 1.0, 0.0, 2);
  *((_QWORD *)this + 47) = v4;
  if ( !v4 )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x170u);
LABEL_11:
    CTetherVisual::Stop(this);
    return v5;
  }
  v6 = CTouchVisual::RegisterGlobalTimer(this);
  v5 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x172u);
    goto LABEL_11;
  }
  return v5;
}
