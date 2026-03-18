/*
 * XREFs of ?CalcRotationTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z @ 0x18015E558
 * Callers:
 *     ?GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18015E8D0 (-GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?CalcRotationTransform@CBitmapRealization@@QEBA_NMMPEAVCMILMatrix@@@Z @ 0x1800F9CB4 (-CalcRotationTransform@CBitmapRealization@@QEBA_NMMPEAVCMILMatrix@@@Z.c)
 */

char __fastcall CBitmapRealization::CalcRotationTransform(CBitmapRealization *this, struct CMILMatrix *a2)
{
  int v5; // [rsp+40h] [rbp+8h] BYREF
  int v6; // [rsp+50h] [rbp+18h] BYREF

  (*(void (__fastcall **)(char *, int *, int *))(*((_QWORD *)this + 14) + 24LL))((char *)this + 112, &v6, &v5);
  return CBitmapRealization::CalcRotationTransform(this, (float)v6, (float)v5, a2);
}
