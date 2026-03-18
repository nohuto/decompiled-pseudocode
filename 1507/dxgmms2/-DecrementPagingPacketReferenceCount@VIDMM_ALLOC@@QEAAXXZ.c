/*
 * XREFs of ?DecrementPagingPacketReferenceCount@VIDMM_ALLOC@@QEAAXXZ @ 0x1C000EBC0
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C002F6E0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ??1VIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAA@XZ @ 0x1C004B2E4 (--1VIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_ALLOC::DecrementPagingPacketReferenceCount(VIDMM_ALLOC *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 40, 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)this + 7, 0, 0);
}
