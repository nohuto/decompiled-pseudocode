/*
 * XREFs of ndisMInvokeDriverUnload @ 0x1C00B07D8
 * Callers:
 *     ndisMUnloadEx @ 0x1C00B0720 (ndisMUnloadEx.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

void __fastcall ndisMInvokeDriverUnload(__int64 a1, __int64 a2)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xCFu, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1);
  (*(void (__fastcall **)(__int64))(a1 + 152))(a2);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xD0u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1);
}
