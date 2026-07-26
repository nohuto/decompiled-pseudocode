/*
 * XREFs of ndisInvokeUninstall @ 0x1C00D06B4
 * Callers:
 *     ndisHandleProtocolUnloadNotification @ 0x1C00CD6EC (ndisHandleProtocolUnloadNotification.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

void __fastcall ndisInvokeUninstall(__int64 a1)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x63u, &WPP_0009299248ba37495192320194ebfcad_Traceguids, a1);
  (*(void (**)(void))(a1 + 144))();
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x64u, &WPP_0009299248ba37495192320194ebfcad_Traceguids, a1);
}
