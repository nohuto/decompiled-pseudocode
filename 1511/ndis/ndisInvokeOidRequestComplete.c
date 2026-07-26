/*
 * XREFs of ndisInvokeOidRequestComplete @ 0x1C000FEC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qLqL @ 0x1C0053664 (WPP_SF_qLqL.c)
 */

__int64 __fastcall ndisInvokeOidRequestComplete(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 24);
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qLqL(101LL, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, a1, *(unsigned int *)(a2 + 32), a2, a3);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v3 + 320))(*(_QWORD *)(a1 + 32), a2, a3);
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    return WPP_SF_qq(102LL, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, a1, a2);
  return result;
}
