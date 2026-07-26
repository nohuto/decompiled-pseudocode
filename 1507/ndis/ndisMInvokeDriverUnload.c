/*
 * XREFs of ndisMInvokeDriverUnload @ 0x1C009C318
 * Callers:
 *     ndisMUnloadEx @ 0x1C009C260 (ndisMUnloadEx.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

void __fastcall ndisMInvokeDriverUnload(__int64 a1, __int64 a2)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xCCu, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1);
  (*(void (__fastcall **)(__int64))(a1 + 152))(a2);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xCDu, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1);
}
