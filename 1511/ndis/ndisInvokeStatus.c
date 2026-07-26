/*
 * XREFs of ndisInvokeStatus @ 0x1C001D604
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C001CD04 (ndisIndicateStatusInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisInvokeStatus(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 result; // rax

  v2 = *(_DWORD *)(a2 + 20);
  if ( (unsigned __int8)byte_1C008371F >= 4u )
    WPP_SF_qD(103LL, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, a1, v2);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(a1 + 208))(*(_QWORD *)(a1 + 32), a2);
  if ( (unsigned __int8)byte_1C008371F >= 4u )
    return WPP_SF_qD(104LL, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, a1, v2);
  return result;
}
