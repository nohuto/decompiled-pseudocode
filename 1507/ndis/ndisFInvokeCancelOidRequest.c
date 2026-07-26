/*
 * XREFs of ndisFInvokeCancelOidRequest @ 0x1C005396C
 * Callers:
 *     ndisCancelOidRequestInternal @ 0x1C003F6F0 (ndisCancelOidRequestInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

void __fastcall ndisFInvokeCancelOidRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi

  v2 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_q(0x7Du, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, a1);
  (*(void (__fastcall **)(_QWORD, __int64))(v2 + 264))(*(_QWORD *)(a1 + 24), a2);
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_q(0x7Eu, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, a1);
}
