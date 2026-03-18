/*
 * XREFs of ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C00128D0
 * Callers:
 *     VidSchiCompleteFlipEntry @ 0x1C00046F0 (VidSchiCompleteFlipEntry.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C00056C0 (VidSchiProcessDpcVSyncCookie.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009CB0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C000E980 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchSubmitDeviceCommand @ 0x1C00121A0 (VidSchSubmitDeviceCommand.c)
 *     VidSchCancelDeviceCommand @ 0x1C0022490 (VidSchCancelDeviceCommand.c)
 *     ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C004CF30 (-OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::VidMmiOfferAllocationCallback(_QWORD *a1)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1[12] + 8LL), 0xFFFFFFFF) == 1
    && _InterlockedCompareExchange((volatile signed __int32 *)(a1[12] + 4LL), 2, 1) == 1
    && bTracingEnabled
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
  {
    Template_p(a1, &EventCompleteOfferAllocation, 2LL, a1);
  }
}
