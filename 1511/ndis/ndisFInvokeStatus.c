/*
 * XREFs of ndisFInvokeStatus @ 0x1C001C748
 * Callers:
 *     ndisFIndicateStatusToFilter @ 0x1C001C730 (ndisFIndicateStatusToFilter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisFInvokeStatus(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int v4; // edi
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  v4 = *(_DWORD *)(a2 + 20);
  if ( (unsigned __int8)byte_1C008371F >= 4u )
    WPP_SF_qD(131LL, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, a1, v4);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(v2 + 288))(*(_QWORD *)(a1 + 24), a2);
  if ( (unsigned __int8)byte_1C008371F >= 4u )
    return WPP_SF_qD(132LL, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, a1, v4);
  return result;
}
