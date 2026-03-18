/*
 * XREFs of ?CalcRotationTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z @ 0x18014FA88
 * Callers:
 *     ?GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014FE00 (-GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?CalcRotationTransform@CBitmapRealization@@QEBA_NMMPEAVCMILMatrix@@@Z @ 0x1800DD064 (-CalcRotationTransform@CBitmapRealization@@QEBA_NMMPEAVCMILMatrix@@@Z.c)
 */

char __fastcall CBitmapRealization::CalcRotationTransform(CBitmapRealization *this, struct CMILMatrix *a2)
{
  int v5; // [rsp+40h] [rbp+8h] BYREF
  int v6; // [rsp+50h] [rbp+18h] BYREF

  (*(void (__fastcall **)(char *, int *, int *))(*((_QWORD *)this + 14) + 24LL))((char *)this + 112, &v6, &v5);
  return CBitmapRealization::CalcRotationTransform(this, (float)v6, (float)v5, a2);
}
