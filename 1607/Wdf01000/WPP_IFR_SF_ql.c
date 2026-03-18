/*
 * XREFs of WPP_IFR_SF_ql @ 0x1C00650B0
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000A400 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0021E50 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     imp_WdfDmaTransactionFreeResources @ 0x1C0065870 (imp_WdfDmaTransactionFreeResources.c)
 *     imp_WdfDmaTransactionSetChannelConfigurationCallback @ 0x1C0066020 (imp_WdfDmaTransactionSetChannelConfigurationCallback.c)
 *     imp_WdfDmaTransactionSetDeviceAddressOffset @ 0x1C00660D0 (imp_WdfDmaTransactionSetDeviceAddressOffset.c)
 *     imp_WdfDmaTransactionSetSingleTransferRequirement @ 0x1C0066260 (imp_WdfDmaTransactionSetSingleTransferRequirement.c)
 *     imp_WdfDmaTransactionSetTransferCompleteCallback @ 0x1C0066360 (imp_WdfDmaTransactionSetTransferCompleteCallback.c)
 *     imp_WdfDmaTransactionStopSystemTransfer @ 0x1C0066410 (imp_WdfDmaTransactionStopSystemTransfer.c)
 *     imp_WdfDmaTransactionWdmGetTransferContext @ 0x1C00664A0 (imp_WdfDmaTransactionWdmGetTransferContext.c)
 *     ?ReleaseAdapter@FxDmaPacketTransaction@@QEAAXXZ @ 0x1C0067774 (-ReleaseAdapter@FxDmaPacketTransaction@@QEAAXXZ.c)
 *     ?ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@@PEAX@Z2@Z @ 0x1C00678FC (-ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@.c)
 *     ?CancelResourceAllocation@FxDmaTransactionBase@@QEAAEXZ @ 0x1C006A55C (-CancelResourceAllocation@FxDmaTransactionBase@@QEAAEXZ.c)
 *     ?Dispose@FxDmaTransactionBase@@UEAAEXZ @ 0x1C006A6A0 (-Dispose@FxDmaTransactionBase@@UEAAEXZ.c)
 *     ?DmaCompleted@FxDmaTransactionBase@@QEAAE_KPEAJW4FxDmaCompletionType@@@Z @ 0x1C006A7CC (-DmaCompleted@FxDmaTransactionBase@@QEAAE_KPEAJW4FxDmaCompletionType@@@Z.c)
 *     ?Execute@FxDmaTransactionBase@@QEAAJPEAX@Z @ 0x1C006AAD0 (-Execute@FxDmaTransactionBase@@QEAAJPEAX@Z.c)
 *     ?GetTransferInfo@FxDmaTransactionBase@@QEAAXPEAK0@Z @ 0x1C006AC24 (-GetTransferInfo@FxDmaTransactionBase@@QEAAXPEAK0@Z.c)
 *     ?Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z3PEAU_MDL@@_KK@Z @ 0x1C006ADD0 (-Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_.c)
 *     ?ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z @ 0x1C006B330 (-ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z.c)
 *     ?SetImmediateExecution@FxDmaTransactionBase@@QEAAXE@Z @ 0x1C006B4C4 (-SetImmediateExecution@FxDmaTransactionBase@@QEAAXE@Z.c)
 *     ?GotoPurgeState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x1C00838F0 (-GotoPurgeState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_.c)
 *     ?GotoStopState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x1C0083C10 (-GotoStopState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z.c)
 * Callees:
 *     FxIFR @ 0x1C000A230 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C006CD0C (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_ql(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 level,
        unsigned int flags,
        unsigned __int16 id,
        const _GUID *traceGuid,
        const void *_a1,
        int _a2)
{
  int v11; // eax
  unsigned __int64 v12; // rbx

  v11 = *(&WPP_GLOBAL_WDF_Control.Characteristics + 16 * ((unsigned __int64)flags >> 16) + (((flags - 1) >> 5) & 0x7FF));
  if ( _bittest(&v11, ((_BYTE)flags - 1) & 0x1F) )
  {
    v12 = (unsigned __int64)flags >> 16 << 6;
    if ( *((_BYTE *)&WPP_GLOBAL_WDF_Control.Flags + v12 + 1) >= level )
      FxWmiTraceMessage(
        *(unsigned __int64 *)((char *)&WPP_GLOBAL_WDF_Control.CurrentIrp + v12),
        0x2Bu,
        traceGuid,
        id,
        &_a1,
        8LL,
        &_a2,
        4LL,
        0LL);
  }
  FxIFR(globals, level, flags, traceGuid, id, &_a1, 8LL, &_a2, 4LL, 0LL);
}
