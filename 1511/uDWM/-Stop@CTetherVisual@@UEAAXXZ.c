/*
 * XREFs of ?Stop@CTetherVisual@@UEAAXXZ @ 0x18008A9C0
 * Callers:
 *     ?SnapToAnchor@CTetherVisual@@QEAAJXZ @ 0x18006FDE4 (-SnapToAnchor@CTetherVisual@@QEAAJXZ.c)
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x180087210 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 *     ??1CTetherVisual@@MEAA@XZ @ 0x18008A238 (--1CTetherVisual@@MEAA@XZ.c)
 *     ?UpdateTransition@CTetherVisual@@MEAAJXZ @ 0x18008AEF0 (-UpdateTransition@CTetherVisual@@MEAAJXZ.c)
 * Callees:
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180023350 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     TemplateEventDescriptor @ 0x180073BC8 (TemplateEventDescriptor.c)
 *     ?StopTimer@CTetherVisual@@MEAAJXZ @ 0x18008AA60 (-StopTimer@CTetherVisual@@MEAAJXZ.c)
 */

void __fastcall CTetherVisual::Stop(CTetherVisual *this)
{
  __int64 v2; // rcx

  CVisual::ClearInstructions(this);
  CTetherVisual::StopTimer(this);
  if ( *((_BYTE *)this + 400) && (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    TemplateEventDescriptor(v2, (__int64)&UdwmTetherVisual_End);
  *((_BYTE *)this + 400) = 0;
}
