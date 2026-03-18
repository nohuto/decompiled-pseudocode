/*
 * XREFs of ?VectorInsideAngleThreshold@?A0xe8837992@@YA_NAEBUD2DVector3@@0@Z @ 0x180142F80
 * Callers:
 *     ?CanAddThisColumnVectorToMatrix@?A0xe8837992@@YA_NPEAUD2DVector3@@IAEBU2@@Z @ 0x18014187C (-CanAddThisColumnVectorToMatrix@-A0xe8837992@@YA_NPEAUD2DVector3@@IAEBU2@@Z.c)
 *     ?ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x1801428B0 (-ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@.c)
 * Callees:
 *     ?D3DXVector3Angle@@YAMAEBUD2DVector3@@0@Z @ 0x180157F44 (-D3DXVector3Angle@@YAMAEBUD2DVector3@@0@Z.c)
 */

_BOOL8 __fastcall `anonymous namespace'::VectorInsideAngleThreshold(
        _anonymous_namespace_ *this,
        const struct D2DVector3 *a2,
        const struct D2DVector3 *a3)
{
  float v3; // xmm0_4
  float v4; // xmm2_4
  float v5; // xmm1_4
  _BOOL8 result; // rax

  v3 = D3DXVector3Angle(this, a2);
  v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v3) & _xmm);
  result = 1;
  if ( v4 >= 0.17453 && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v3 - 3.1415927)) & _xmm) >= 0.17453 )
  {
    v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v3 + 3.1415927)) & _xmm);
    if ( v5 >= 0.17453 )
      return 0;
  }
  return result;
}
