/*
 * XREFs of ?ndisNicQuietWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C0069C10
 * Callers:
 *     <none>
 * Callees:
 *     ?NdisTraceLoggingCompletedDxState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@JW4_DEVICE_POWER_STATE@@E@Z @ 0x1C0012DD8 (-NdisTraceLoggingCompletedDxState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@JW4_DEVICE_POWER_STATE@@E@Z.c)
 *     ndisCompleteWaitWake @ 0x1C001316C (ndisCompleteWaitWake.c)
 *     ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0068970 (-ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 */

void __fastcall ndisNicQuietWaitWakeCallback(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        struct _NDIS_MINIPORT_BLOCK *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  enum _DEVICE_POWER_STATE SystemState; // [rsp+40h] [rbp+18h]

  SystemState = PowerState.SystemState;
  if ( IoStatus->Status >= 0 )
  {
    ndisAoAcScheduleWakeWorkItem(Context, NdisMEventD0_AoAcWake);
    PowerState.SystemState = SystemState;
  }
  NdisTraceLoggingCompletedDxState(
    (const struct _TlgProvider_t *)Context,
    (unsigned int)IoStatus->Status,
    PowerState.DeviceState);
  ndisCompleteWaitWake((__int64)Context);
}
