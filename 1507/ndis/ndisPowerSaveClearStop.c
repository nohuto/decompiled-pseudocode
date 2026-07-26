/*
 * XREFs of ndisPowerSaveClearStop @ 0x1C009AB48
 * Callers:
 *     ndisSignalD0RequestComplete @ 0x1C000EA90 (ndisSignalD0RequestComplete.c)
 *     ndisPnPIrpCancelRemove @ 0x1C00D49C4 (ndisPnPIrpCancelRemove.c)
 *     ndisPnPIrpCancelStop @ 0x1C00D4A98 (ndisPnPIrpCancelStop.c)
 * Callees:
 *     ndisSelectiveSuspendClearStop @ 0x1C0068720 (ndisSelectiveSuspendClearStop.c)
 *     ?ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00694C0 (-ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 */

void __fastcall ndisPowerSaveClearStop(struct _NDIS_MINIPORT_BLOCK *a1, __int32 a2)
{
  if ( a1->SelectiveSuspend )
    ndisSelectiveSuspendClearStop((__int64)a1, a2);
  if ( a1->AoAc )
    ndisAoAcClearStop(a1, (enum _NDIS_SS_STOP_REASON)a2);
}
