/*
 * XREFs of ?Invert@CMILMatrix@@QEAAHXZ @ 0x18013A4FC
 * Callers:
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x180131084 (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 *     ?DecomposeMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEAH@Z @ 0x18013A430 (-DecomposeMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEAH@Z.c)
 * Callees:
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x1800AABC4 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 */

_BOOL8 __fastcall CMILMatrix::Invert(CMILMatrix *this)
{
  float v2; // [rsp+38h] [rbp+10h] BYREF

  return D2DMatrixInverse(this, &v2, this) != 0LL;
}
