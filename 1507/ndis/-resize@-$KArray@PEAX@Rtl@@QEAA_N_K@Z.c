/*
 * XREFs of ?resize@?$KArray@PEAX@Rtl@@QEAA_N_K@Z @ 0x1C00A5948
 * Callers:
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00A177C (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00A65A4 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 * Callees:
 *     ?reserve@?$KArray@PEAX@Rtl@@QEAA_N_K@Z @ 0x1C00A5880 (-reserve@-$KArray@PEAX@Rtl@@QEAA_N_K@Z.c)
 */

char __fastcall Rtl::KArray<void *>::resize(__int64 a1)
{
  if ( !Rtl::KArray<void *>::reserve(a1, 0LL) )
    return 0;
  *(_DWORD *)(a1 + 8) = 0;
  return 1;
}
