/*
 * XREFs of VidSchiTryEnterIndependentFlip @ 0x1C001B084
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0002690 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiCompleteFlipEntry @ 0x1C00157C8 (VidSchiCompleteFlipEntry.c)
 *     VidSchiUpdatePresentParameters @ 0x1C001B590 (VidSchiUpdatePresentParameters.c)
 *     VidSchConfirmToken @ 0x1C001C3C0 (VidSchConfirmToken.c)
 * Callees:
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x1C0012658 (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 *     VidSchiFlushPendingTokenList @ 0x1C00175D4 (VidSchiFlushPendingTokenList.c)
 */

void __fastcall VidSchiTryEnterIndependentFlip(struct _VIDSCH_GLOBAL *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r8d
  unsigned int v4; // r10d
  __int64 v5; // r11

  if ( VidSchiCheckPlaneIndependentFlipCondition(a1, a2, a3) )
    VidSchiFlushPendingTokenList(v5, v4, v3);
}
