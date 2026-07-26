/*
 * XREFs of ndisMInvokeDriverUnload @ 0x1C00996E8
 * Callers:
 *     ndisMUnloadEx @ 0x1C0099630 (ndisMUnloadEx.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

void __fastcall ndisMInvokeDriverUnload(__int64 a1, __int64 a2)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xCFu, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1);
  (*(void (__fastcall **)(__int64))(a1 + 152))(a2);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xD0u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1);
}
