/*
 * XREFs of ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C000F300
 * Callers:
 *     VidSchSubmitDeviceCommand @ 0x1C0001048 (VidSchSubmitDeviceCommand.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C0002C34 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchCancelDeviceCommand @ 0x1C001C18C (VidSchCancelDeviceCommand.c)
 *     ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C00509D0 (-OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER.c)
 * Callees:
 *     Template_p @ 0x1C0006E98 (Template_p.c)
 */

void __fastcall VIDMM_GLOBAL::VidMmiOfferAllocationCallback(_QWORD *a1)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1[12] + 8LL), 0xFFFFFFFF) == 1
    && _InterlockedCompareExchange((volatile signed __int32 *)(a1[12] + 4LL), 2, 1) == 1
    && bTracingEnabled
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
  {
    Template_p((__int64)a1, &EventCompleteOfferAllocation, 2LL, a1);
  }
}
