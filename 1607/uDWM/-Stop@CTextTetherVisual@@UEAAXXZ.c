/*
 * XREFs of ?Stop@CTextTetherVisual@@UEAAXXZ @ 0x180088B00
 * Callers:
 *     ?SnapToAnchor@CTextTetherVisual@@QEAAJXZ @ 0x18006FD44 (-SnapToAnchor@CTextTetherVisual@@QEAAJXZ.c)
 *     ?OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z @ 0x180087808 (-OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z.c)
 *     ??1CTextTetherVisual@@MEAA@XZ @ 0x1800887A8 (--1CTextTetherVisual@@MEAA@XZ.c)
 *     ?UpdateTransition@CTextTetherVisual@@MEAAJXZ @ 0x180088C00 (-UpdateTransition@CTextTetherVisual@@MEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x18001F7E4 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180020310 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     TemplateEventDescriptor @ 0x180075A10 (TemplateEventDescriptor.c)
 *     ?StopTimer@CTextTetherVisual@@MEAAJXZ @ 0x180088B60 (-StopTimer@CTextTetherVisual@@MEAAJXZ.c)
 */

void __fastcall CTextTetherVisual::Stop(CTextTetherVisual *this)
{
  __int64 v2; // rcx

  CVisual::ClearInstructions(this);
  CTextTetherVisual::StopTimer(this);
  CVisual::SetOpacity(this, 0.0);
  if ( *((_BYTE *)this + 408) && (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    TemplateEventDescriptor(v2, (__int64)&UdwmTextTetherVisual_End);
  *((_BYTE *)this + 408) = 0;
}
