/*
 * XREFs of ndisFInvokeCancelOidRequest @ 0x1C005878C
 * Callers:
 *     ndisCancelOidRequestInternal @ 0x1C00448D4 (ndisCancelOidRequestInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

void __fastcall ndisFInvokeCancelOidRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi

  v2 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_q(0x7Du, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, a1);
  (*(void (__fastcall **)(_QWORD, __int64))(v2 + 264))(*(_QWORD *)(a1 + 24), a2);
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_q(0x7Eu, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, a1);
}
