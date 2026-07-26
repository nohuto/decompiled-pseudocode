/*
 * XREFs of ndisInvokeUninstall @ 0x1C00CF4E4
 * Callers:
 *     ndisHandleProtocolUnloadNotification @ 0x1C00CC6C0 (ndisHandleProtocolUnloadNotification.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

void __fastcall ndisInvokeUninstall(__int64 a1)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x63u, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, a1);
  (*(void (**)(void))(a1 + 144))();
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x64u, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, a1);
}
