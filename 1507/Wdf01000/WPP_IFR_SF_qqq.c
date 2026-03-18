/*
 * XREFs of WPP_IFR_SF_qqq @ 0x1C006437C
 * Callers:
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x1C0007D00 (-Stop@FxTimer@@QEAAEE@Z.c)
 *     ?DispatchDeviceSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0011DB8 (-DispatchDeviceSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchDeviceSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0013978 (-DispatchDeviceSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?Cancel@FxRequestBase@@QEAAEXZ @ 0x1C0013F60 (-Cancel@FxRequestBase@@QEAAEXZ.c)
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C001C080 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C001D290 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?ReleaseLock@FxSpinLock@@QEAAXXZ @ 0x1C002DD58 (-ReleaseLock@FxSpinLock@@QEAAXXZ.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ??1FxVerifierLock@@QEAA@XZ @ 0x1C00604E8 (--1FxVerifierLock@@QEAA@XZ.c)
 *     ?PreMapTransfer@FxDmaSystemTransaction@@MEAAEXZ @ 0x1C0061A70 (-PreMapTransfer@FxDmaSystemTransaction@@MEAAEXZ.c)
 *     ?StageTransfer@FxDmaPacketTransaction@@UEAAJXZ @ 0x1C00623E0 (-StageTransfer@FxDmaPacketTransaction@@UEAAJXZ.c)
 *     ?CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C0066D54 (-CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     ?NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z @ 0x1C00674E4 (-NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z.c)
 *     ?Destroy@FxDevice@@QEAAXXZ @ 0x1C0075D20 (-Destroy@FxDevice@@QEAAXXZ.c)
 *     ?FxPoolDump@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@@Z @ 0x1C007ABC0 (-FxPoolDump@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@@Z.c)
 *     ?FxMdlDump@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C007C274 (-FxMdlDump@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForControlTransfer @ 0x1C0086E30 (imp_WdfUsbTargetDeviceFormatRequestForControlTransfer.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForUrb @ 0x1C0089180 (imp_WdfUsbTargetDeviceFormatRequestForUrb.c)
 *     imp_WdfUsbTargetPipeFormatRequestForRead @ 0x1C008A120 (imp_WdfUsbTargetPipeFormatRequestForRead.c)
 *     imp_WdfUsbTargetPipeFormatRequestForUrb @ 0x1C008A330 (imp_WdfUsbTargetPipeFormatRequestForUrb.c)
 *     imp_WdfUsbTargetPipeFormatRequestForWrite @ 0x1C008A640 (imp_WdfUsbTargetPipeFormatRequestForWrite.c)
 *     ?ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C009B1F8 (-ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTER.c)
 *     ?PowerMakeWakeRequestNonCancelable@FxPkgPnp@@IEAAEJ@Z @ 0x1C009C174 (-PowerMakeWakeRequestNonCancelable@FxPkgPnp@@IEAAEJ@Z.c)
 *     ?ForceDisconnect@FxInterrupt@@QEAAJXZ @ 0x1C00A1F44 (-ForceDisconnect@FxInterrupt@@QEAAJXZ.c)
 *     ?ForceReconnect@FxInterrupt@@QEAAJXZ @ 0x1C00A1FDC (-ForceReconnect@FxInterrupt@@QEAAJXZ.c)
 *     ?PowerPolicyUpdateSystemWakeSource@FxPkgPnp@@IEAAXPEAVFxIrp@@@Z @ 0x1C00A3AAC (-PowerPolicyUpdateSystemWakeSource@FxPkgPnp@@IEAAXPEAVFxIrp@@@Z.c)
 *     ?Vf_VerifyRemoveIrpFromQueueByContext@FxIrpQueue@@AEAAXPEAU_FX_DRIVER_GLOBALS@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C00D1698 (-Vf_VerifyRemoveIrpFromQueueByContext@FxIrpQueue@@AEAAXPEAU_FX_DRIVER_GLOBALS@@PEAU_IO_CSQ_IRP_C.c)
 * Callees:
 *     FxIFR @ 0x1C00015E0 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C0066AD0 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qqq(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 level,
        unsigned int flags,
        unsigned __int16 id,
        const _GUID *traceGuid,
        const void *_a1,
        const void *_a2,
        const void *_a3)
{
  int v12; // eax
  unsigned __int64 v13; // rbx

  v12 = *(&WPP_GLOBAL_WDF_Control.Characteristics + 16 * ((unsigned __int64)flags >> 16) + (((flags - 1) >> 5) & 0x7FF));
  if ( _bittest(&v12, (flags - 1) & 0x1F) )
  {
    v13 = (unsigned __int64)flags >> 16 << 6;
    if ( *((_BYTE *)&WPP_GLOBAL_WDF_Control.Flags + v13 + 1) >= level )
      FxWmiTraceMessage(
        *(unsigned __int64 *)((char *)&WPP_GLOBAL_WDF_Control.CurrentIrp + v13),
        0x2Bu,
        traceGuid,
        id,
        &_a1,
        8LL,
        &_a2,
        8LL,
        &_a3,
        8LL,
        0LL);
  }
  FxIFR(globals, level, flags, traceGuid, id, &_a1, 8LL, &_a2, 8LL, &_a3, 8LL, 0LL);
}
