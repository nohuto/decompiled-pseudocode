/*
 * XREFs of WPP_IFR_SF_dq @ 0x1C0064AC8
 * Callers:
 *     imp_WdfDmaEnablerWdmGetDmaAdapter @ 0x1C002F620 (imp_WdfDmaEnablerWdmGetDmaAdapter.c)
 *     imp_WdfDmaEnablerGetFragmentLength @ 0x1C0030230 (imp_WdfDmaEnablerGetFragmentLength.c)
 *     ?AllocateAdapterChannel@FxDmaPacketTransaction@@IEAAJE@Z @ 0x1C0067398 (-AllocateAdapterChannel@FxDmaPacketTransaction@@IEAAJE@Z.c)
 *     ?FreeMapRegistersAndAdapter@FxDmaPacketTransaction@@MEAAXXZ @ 0x1C0067560 (-FreeMapRegistersAndAdapter@FxDmaPacketTransaction@@MEAAXXZ.c)
 *     UnlockVerifierSection @ 0x1C007C388 (UnlockVerifierSection.c)
 *     ?QueueDrainSynchronously@FxIoQueue@@QEAAJXZ @ 0x1C00907AC (-QueueDrainSynchronously@FxIoQueue@@QEAAJXZ.c)
 *     ?QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z @ 0x1C0090C30 (-QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z.c)
 *     ?QueuePurgeSynchronously@FxIoQueue@@QEAAJXZ @ 0x1C0090D24 (-QueuePurgeSynchronously@FxIoQueue@@QEAAJXZ.c)
 * Callees:
 *     FxIFR @ 0x1C000A230 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C006CD0C (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_dq(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 level,
        unsigned int flags,
        unsigned __int16 id,
        const _GUID *traceGuid,
        int _a1,
        const void *_a2)
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
        4LL,
        &_a2,
        8LL,
        0LL);
  }
  FxIFR(globals, level, flags, traceGuid, id, &_a1, 4LL, &_a2, 8LL, 0LL);
}
