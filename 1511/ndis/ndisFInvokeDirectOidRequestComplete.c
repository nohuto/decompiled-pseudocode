/*
 * XREFs of ndisFInvokeDirectOidRequestComplete @ 0x1C0053EEC
 * Callers:
 *     ndisOidRequestComplete @ 0x1C0008250 (ndisOidRequestComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qLq @ 0x1C00409D8 (WPP_SF_qLq.c)
 *     WPP_SF_qLqL @ 0x1C0053664 (WPP_SF_qLqL.c)
 */

void __fastcall ndisFInvokeDirectOidRequestComplete(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  int v5; // esi

  v3 = *(_QWORD *)(a1 + 16);
  v5 = *(_DWORD *)(a2 + 32);
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qLqL(0x88u, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, a1, v5);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(v3 + 304))(*(_QWORD *)(a1 + 24), a2, a3);
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qLq(0x89u, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, a1, v5);
}
