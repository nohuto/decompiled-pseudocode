/*
 * XREFs of ndisScheduleWorkItemInternal @ 0x1C0019FE8
 * Callers:
 *     ndisScheduleD0CompleteSignalWorkItem @ 0x1C001165C (ndisScheduleD0CompleteSignalWorkItem.c)
 *     ndisIndicateStatusInternal @ 0x1C0016D10 (ndisIndicateStatusInternal.c)
 *     ndisNsiScheduleIfBlockRodChangeNotification @ 0x1C0019F2C (ndisNsiScheduleIfBlockRodChangeNotification.c)
 *     ndisInitModeTimeoutDpc @ 0x1C0020690 (ndisInitModeTimeoutDpc.c)
 *     NdisScheduleWorkItem @ 0x1C0026730 (NdisScheduleWorkItem.c)
 *     ndisPdcTaskClientDisableTimeoutDpc @ 0x1C004A5F0 (ndisPdcTaskClientDisableTimeoutDpc.c)
 *     ndisUpdateAndIndicatePMCapabilities @ 0x1C004AE24 (ndisUpdateAndIndicatePMCapabilities.c)
 *     NdisMResetMiniport @ 0x1C005CD30 (NdisMResetMiniport.c)
 *     NdisMReenumerateFailedAdapter @ 0x1C0062600 (NdisMReenumerateFailedAdapter.c)
 *     ndisMediaDisconnectTimeout @ 0x1C00635E0 (ndisMediaDisconnectTimeout.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C006ADF0 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ndisIdleWaitWakeCallback @ 0x1C006B7E0 (ndisIdleWaitWakeCallback.c)
 *     ndisSSIdleTimerDpc @ 0x1C006BF40 (ndisSSIdleTimerDpc.c)
 *     ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C006D3AC (-ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisTempRefTimerDpc@@YAXPEAX000@Z @ 0x1C006EB40 (-ndisTempRefTimerDpc@@YAXPEAX000@Z.c)
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
