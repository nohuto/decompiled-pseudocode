/*
 * XREFs of ?Stop@CTextTetherVisual@@UEAAXXZ @ 0x180089110
 * Callers:
 *     ?SnapToAnchor@CTextTetherVisual@@QEAAJXZ @ 0x18006FC90 (-SnapToAnchor@CTextTetherVisual@@QEAAJXZ.c)
 *     ?OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z @ 0x1800875D8 (-OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z.c)
 *     ??1CTextTetherVisual@@MEAA@XZ @ 0x1800887F8 (--1CTextTetherVisual@@MEAA@XZ.c)
 *     ?UpdateTransition@CTextTetherVisual@@MEAAJXZ @ 0x180089600 (-UpdateTransition@CTextTetherVisual@@MEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180022540 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180023350 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     TemplateEventDescriptor @ 0x180073BC8 (TemplateEventDescriptor.c)
 *     ?StopTimer@CTextTetherVisual@@MEAAJXZ @ 0x180089170 (-StopTimer@CTextTetherVisual@@MEAAJXZ.c)
 */

void __fastcall CTextTetherVisual::Stop(CTextTetherVisual *this)
{
  __int64 v2; // rcx

  CVisual::ClearInstructions(this);
  CTextTetherVisual::StopTimer(this);
  CVisual::SetOpacity(this, 0.0);
  if ( *((_BYTE *)this + 456) && (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    TemplateEventDescriptor(v2, (__int64)&UdwmTextTetherVisual_End);
  *((_BYTE *)this + 456) = 0;
}
