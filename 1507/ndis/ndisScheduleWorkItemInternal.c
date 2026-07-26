/*
 * XREFs of ndisScheduleWorkItemInternal @ 0x1C001455C
 * Callers:
 *     ?ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0010CB0 (-ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ndisInitModeTimeoutDpc @ 0x1C00138F0 (ndisInitModeTimeoutDpc.c)
 *     ndisNsiScheduleIfBlockRodChangeNotification @ 0x1C00144A0 (ndisNsiScheduleIfBlockRodChangeNotification.c)
 *     ndisIndicateStatusInternal @ 0x1C00152FC (ndisIndicateStatusInternal.c)
 *     ndisSetBusyAsync @ 0x1C0023238 (ndisSetBusyAsync.c)
 *     ndisUpdateAndIndicatePMCapabilities @ 0x1C004584C (ndisUpdateAndIndicatePMCapabilities.c)
 *     NdisScheduleWorkItem @ 0x1C004B950 (NdisScheduleWorkItem.c)
 *     NdisMResetMiniport @ 0x1C00589F0 (NdisMResetMiniport.c)
 *     NdisMReenumerateFailedAdapter @ 0x1C005ECA0 (NdisMReenumerateFailedAdapter.c)
 *     ndisMediaDisconnectTimeout @ 0x1C005FA00 (ndisMediaDisconnectTimeout.c)
 *     ndisScheduleD0CompleteSignalWorkItem @ 0x1C005FBA4 (ndisScheduleD0CompleteSignalWorkItem.c)
 *     ndisIdleWaitWakeCallback @ 0x1C0067690 (ndisIdleWaitWakeCallback.c)
 *     ndisSSIdleTimerDpc @ 0x1C0068410 (ndisSSIdleTimerDpc.c)
 *     ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0069890 (-ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisTempRefTimerDpc@@YAXPEAX000@Z @ 0x1C006AF40 (-ndisTempRefTimerDpc@@YAXPEAX000@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisScheduleWorkItemInternal(__int64 a1)
{
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = ndisWorkItemHandler;
  *(_QWORD *)(a1 + 40) = a1;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 16), CriticalWorkQueue);
}
