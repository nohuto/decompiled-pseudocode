/*
 * XREFs of ndisFInvokeRestart @ 0x1C00A2D3C
 * Callers:
 *     ?ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00E7974 (-ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

__int64 __fastcall ndisFInvokeRestart(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v5; // eax
  unsigned int v6; // edi

  v2 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_q(0x74u, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, a1);
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(v2 + 192))(*(_QWORD *)(a1 + 24), a2);
  v6 = v5;
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_qD(0x75u, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, a1, v5);
  return v6;
}
