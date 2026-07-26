/*
 * XREFs of ndisMInvokeCancelOidRequest @ 0x1C005E0F0
 * Callers:
 *     ndisCancelOidRequestInternal @ 0x1C00448D4 (ndisCancelOidRequestInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

void __fastcall ndisMInvokeCancelOidRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi

  v2 = *(_QWORD *)(a1 + 3816);
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_q(0xE4u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1);
  (*(void (__fastcall **)(_QWORD, __int64))(v2 + 240))(*(_QWORD *)(a1 + 24), a2);
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_q(0xE5u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1);
}
