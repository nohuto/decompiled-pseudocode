/*
 * XREFs of ?GetTransform@CRenderTargetImageSource@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180131DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTargetImageSource::GetTransform(__int64 a1, __int64 a2, __int64 a3)
{
  return CRenderTargetBitmap::GetTransform(a1 + 120, a2, a3);
}
