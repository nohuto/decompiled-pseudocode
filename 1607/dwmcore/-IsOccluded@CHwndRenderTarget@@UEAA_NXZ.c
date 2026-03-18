/*
 * XREFs of ?IsOccluded@CHwndRenderTarget@@UEAA_NXZ @ 0x180073BB0
 * Callers:
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x1800441D0 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CHwndRenderTarget::IsOccluded(CHwndRenderTarget *this)
{
  return *((_BYTE *)this + 752);
}
