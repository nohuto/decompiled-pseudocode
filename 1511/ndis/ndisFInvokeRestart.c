/*
 * XREFs of ndisFInvokeRestart @ 0x1C00A0FC4
 * Callers:
 *     ?ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00E3CF8 (-ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisFInvokeRestart(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v5; // eax
  unsigned int v6; // edi

  v2 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_q(0x74u, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, a1);
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(v2 + 192))(*(_QWORD *)(a1 + 24), a2);
  v6 = v5;
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_qD(0x75u, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, a1, v5);
  return v6;
}
