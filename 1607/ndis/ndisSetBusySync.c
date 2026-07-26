/*
 * XREFs of ndisSetBusySync @ 0x1C006C7E0
 * Callers:
 *     ndisMDoOidRequest @ 0x1C000B230 (ndisMDoOidRequest.c)
 *     ndisMResetMiniportInternal @ 0x1C0023880 (ndisMResetMiniportInternal.c)
 *     ndisDevicePnPEventNotifyMiniport @ 0x1C00AB154 (ndisDevicePnPEventNotifyMiniport.c)
 *     ndisFDevicePnPEventNotifyInternal @ 0x1C00CDF90 (ndisFDevicePnPEventNotifyInternal.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C00E8738 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00EA1F0 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisSetBusySync(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2, unsigned int a3)
{
  if ( (a1->Flags & 0x80u) != 0 )
    ndisWdfSetBusySync(a1, a2, a3);
  else
    ndisWdmSetBusySync(a1, a2, a3);
}
