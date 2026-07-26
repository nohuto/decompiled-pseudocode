/*
 * XREFs of ndisMInvokeCancelOidRequest @ 0x1C0059C50
 * Callers:
 *     ndisCancelOidRequestInternal @ 0x1C0040DEC (ndisCancelOidRequestInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

void __fastcall ndisMInvokeCancelOidRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi

  v2 = *(_QWORD *)(a1 + 3816);
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_q(0xE4u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1);
  (*(void (__fastcall **)(_QWORD, __int64))(v2 + 240))(*(_QWORD *)(a1 + 24), a2);
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_q(0xE5u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1);
}
