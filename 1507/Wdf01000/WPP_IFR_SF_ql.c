/*
 * XREFs of WPP_IFR_SF_ql @ 0x1C005DAD0
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004B50 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C001D7E0 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     imp_WdfDmaTransactionFreeResources @ 0x1C005E700 (imp_WdfDmaTransactionFreeResources.c)
 *     imp_WdfDmaTransactionSetChannelConfigurationCallback @ 0x1C005F2A0 (imp_WdfDmaTransactionSetChannelConfigurationCallback.c)
 *     imp_WdfDmaTransactionSetDeviceAddressOffset @ 0x1C005F3D0 (imp_WdfDmaTransactionSetDeviceAddressOffset.c)
 *     imp_WdfDmaTransactionSetTransferCompleteCallback @ 0x1C005F690 (imp_WdfDmaTransactionSetTransferCompleteCallback.c)
 *     imp_WdfDmaTransactionStopSystemTransfer @ 0x1C005F7C0 (imp_WdfDmaTransactionStopSystemTransfer.c)
 *     imp_WdfDmaTransactionWdmGetTransferContext @ 0x1C005F8D0 (imp_WdfDmaTransactionWdmGetTransferContext.c)
 *     ?CancelResourceAllocation@FxDmaTransactionBase@@QEAAEXZ @ 0x1C0060A08 (-CancelResourceAllocation@FxDmaTransactionBase@@QEAAEXZ.c)
 *     ?Dispose@FxDmaTransactionBase@@UEAAEXZ @ 0x1C0060BF0 (-Dispose@FxDmaTransactionBase@@UEAAEXZ.c)
 *     ?DmaCompleted@FxDmaTransactionBase@@QEAAE_KPEAJW4FxDmaCompletionType@@@Z @ 0x1C0060D1C (-DmaCompleted@FxDmaTransactionBase@@QEAAE_KPEAJW4FxDmaCompletionType@@@Z.c)
 *     ?Execute@FxDmaTransactionBase@@QEAAJPEAX@Z @ 0x1C006100C (-Execute@FxDmaTransactionBase@@QEAAJPEAX@Z.c)
 *     ?GetTransferInfo@FxDmaTransactionBase@@QEAAXPEAK0@Z @ 0x1C0061488 (-GetTransferInfo@FxDmaTransactionBase@@QEAAXPEAK0@Z.c)
 *     ?Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z3PEAU_MDL@@_KK@Z @ 0x1C0061630 (-Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_.c)
 *     ?ReleaseAdapter@FxDmaPacketTransaction@@QEAAXXZ @ 0x1C0061BC8 (-ReleaseAdapter@FxDmaPacketTransaction@@QEAAXXZ.c)
 *     ?ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z @ 0x1C0061CE0 (-ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z.c)
 *     ?ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@@PEAX@Z2@Z @ 0x1C0061F90 (-ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@.c)
 *     ?SetImmediateExecution@FxDmaTransactionBase@@QEAAXE@Z @ 0x1C0062314 (-SetImmediateExecution@FxDmaTransactionBase@@QEAAXE@Z.c)
 *     ?GotoPurgeState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x1C0083B40 (-GotoPurgeState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_.c)
 *     ?GotoStopState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x1C0083F00 (-GotoStopState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z.c)
 * Callees:
 *     FxIFR @ 0x1C00015E0 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C0066AD0 (FxWmiTraceMessage.c)
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
