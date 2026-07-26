/*
 * XREFs of ndisFInvokeCancelOidRequest @ 0x1C0053D5C
 * Callers:
 *     ndisCancelOidRequestInternal @ 0x1C0040DEC (ndisCancelOidRequestInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

void __fastcall ndisFInvokeCancelOidRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi

  v2 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_q(0x7Du, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, a1);
  (*(void (__fastcall **)(_QWORD, __int64))(v2 + 264))(*(_QWORD *)(a1 + 24), a2);
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_q(0x7Eu, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, a1);
}
