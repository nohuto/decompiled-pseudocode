/*
 * XREFs of ?ndisNicQuietWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C006AB20
 * Callers:
 *     <none>
 * Callees:
 *     ?NdisTraceLoggingCompletedDxState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C001089C (-NdisTraceLoggingCompletedDxState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ndisCompleteWaitWake @ 0x1C0010E6C (ndisCompleteWaitWake.c)
 *     ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0069890 (-ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 */

void __fastcall ndisNicQuietWaitWakeCallback(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        struct _NDIS_MINIPORT_BLOCK *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  if ( IoStatus->Status >= 0 )
    ndisAoAcScheduleWakeWorkItem(Context, NdisMEventD0_AoAcWake);
  NdisTraceLoggingCompletedDxState((const struct _TlgProvider_t *)Context);
  ndisCompleteWaitWake((__int64)Context);
}
