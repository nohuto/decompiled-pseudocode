/*
 * XREFs of ndisFInvokeStatus @ 0x1C00162D0
 * Callers:
 *     ndisFIndicateStatusToFilter @ 0x1C00162B8 (ndisFIndicateStatusToFilter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

__int64 __fastcall ndisFInvokeStatus(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int v4; // edi
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  v4 = *(_DWORD *)(a2 + 20);
  if ( (unsigned __int8)byte_1C00895DF >= 4u )
    WPP_SF_qD(131LL, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, a1, v4);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(v2 + 288))(*(_QWORD *)(a1 + 24), a2);
  if ( (unsigned __int8)byte_1C00895DF >= 4u )
    return WPP_SF_qD(132LL, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, a1, v4);
  return result;
}
