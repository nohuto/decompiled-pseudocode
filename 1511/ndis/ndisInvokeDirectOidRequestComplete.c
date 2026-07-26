/*
 * XREFs of ndisInvokeDirectOidRequestComplete @ 0x1C0056710
 * Callers:
 *     ndisOidRequestComplete @ 0x1C0008250 (ndisOidRequestComplete.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qLqL @ 0x1C0053664 (WPP_SF_qLqL.c)
 */

void __fastcall ndisInvokeDirectOidRequestComplete(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp

  v3 = *(_QWORD *)(a1 + 24);
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qLqL(0x69u, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, a1, *(_DWORD *)(a2 + 32));
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(v3 + 872))(*(_QWORD *)(a1 + 32), a2, a3);
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qq(0x6Au, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, a1, a2);
}
