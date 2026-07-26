/*
 * XREFs of ndisFInvokeStatus @ 0x1C0017268
 * Callers:
 *     ndisFIndicateStatusToFilter @ 0x1C0016BF0 (ndisFIndicateStatusToFilter.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0016C08 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisFInvokeStatus(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int v4; // edi
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  v4 = *(_DWORD *)(a2 + 20);
  if ( (unsigned __int8)byte_1C008531F >= 4u )
    WPP_SF_qD(131LL, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, a1, v4);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(v2 + 288))(*(_QWORD *)(a1 + 24), a2);
  if ( (unsigned __int8)byte_1C008531F >= 4u )
    return WPP_SF_qD(132LL, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, a1, v4);
  return result;
}
