/*
 * XREFs of ndisInvokeUninstall @ 0x1C00C9AC4
 * Callers:
 *     ndisHandleProtocolUnloadNotification @ 0x1C00C6C20 (ndisHandleProtocolUnloadNotification.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

void __fastcall ndisInvokeUninstall(__int64 a1)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x63u, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, a1);
  (*(void (**)(void))(a1 + 144))();
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x64u, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, a1);
}
