/*
 * XREFs of VidSchiTryEnterIndependentFlip @ 0x1C0011CE8
 * Callers:
 *     VidSchiCompleteFlipEntry @ 0x1C0003BA0 (VidSchiCompleteFlipEntry.c)
 *     VidSchiUpdatePresentParameters @ 0x1C0005520 (VidSchiUpdatePresentParameters.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008B80 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchConfirmToken @ 0x1C00263E0 (VidSchConfirmToken.c)
 * Callees:
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x1C0011D0C (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 *     VidSchiFlushPendingTokenList @ 0x1C0024478 (VidSchiFlushPendingTokenList.c)
 */

char __fastcall VidSchiTryEnterIndependentFlip(struct _VIDSCH_GLOBAL *a1, unsigned int a2, unsigned int a3)
{
  char result; // al
  unsigned int v4; // r10d
  __int64 v5; // r11

  result = VidSchiCheckPlaneIndependentFlipCondition(a1, a2, a3);
  if ( result )
    return VidSchiFlushPendingTokenList(v5, v4);
  return result;
}
