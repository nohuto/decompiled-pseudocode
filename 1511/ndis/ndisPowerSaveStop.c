/*
 * XREFs of ndisPowerSaveStop @ 0x1C0099100
 * Callers:
 *     ndisSetSystemPower @ 0x1C0097BD0 (ndisSetSystemPower.c)
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C0098598 (ndisPnPIrpSurpriseRemovalInner.c)
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00CABE8 (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ndisPnPIrpQueryRemove @ 0x1C00CE3A8 (ndisPnPIrpQueryRemove.c)
 *     ndisPnPIrpQueryStop @ 0x1C00CE484 (ndisPnPIrpQueryStop.c)
 *     ndisPnPIrpStopDevice @ 0x1C00CE52C (ndisPnPIrpStopDevice.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00E0108 (ndisPnPIrpRemoveDevice.c)
 * Callees:
 *     ndisSelectiveSuspendStop @ 0x1C0067AB8 (ndisSelectiveSuspendStop.c)
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C0068A9C (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 */

void __fastcall ndisPowerSaveStop(struct _NDIS_MINIPORT_BLOCK *a1, __int32 a2)
{
  if ( a1->SelectiveSuspend )
    ndisSelectiveSuspendStop(a1, a2);
  if ( a1->AoAc )
    ndisAoAcStop(a1, (enum _NDIS_SS_STOP_REASON)a2, RunSynchronous);
}
