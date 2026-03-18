/*
 * XREFs of ?CanAddThisColumnVectorToMatrix@?A0xe8837992@@YA_NPEAUD2DVector3@@IAEBU2@@Z @ 0x18014187C
 * Callers:
 *     ?ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA?AUD2DMatrix@@PEAV?$DynArray@UD2DVector3@@$0A@@@@Z @ 0x180141D70 (-ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA-AUD2DMatrix@@PEAV-$DynArray@UD2DVec.c)
 * Callees:
 *     ?VectorInsideAngleThreshold@?A0xe8837992@@YA_NAEBUD2DVector3@@0@Z @ 0x180142F80 (-VectorInsideAngleThreshold@-A0xe8837992@@YA_NAEBUD2DVector3@@0@Z.c)
 *     ?D3DXVectorAreCloseToZero@@YAHAEBUD2DVector3@@@Z @ 0x18015801C (-D3DXVectorAreCloseToZero@@YAHAEBUD2DVector3@@@Z.c)
 *     IsWithinThresholdF @ 0x180158080 (IsWithinThresholdF.c)
 */

char __fastcall `anonymous namespace'::CanAddThisColumnVectorToMatrix(
        _anonymous_namespace_ *this,
        struct D2DVector3 *a2,
        const struct D2DVector3 *a3,
        const struct D2DVector3 *a4)
{
  int v6; // ebp
  char v7; // si
  const struct D2DVector3 *v8; // r8
  const struct D2DVector3 *v9; // r8
  const struct D2DVector3 *v10; // r8

  v6 = (int)a2;
  v7 = 1;
  if ( (unsigned int)D3DXVectorAreCloseToZero(a3)
    || `anonymous namespace'::VectorInsideAngleThreshold(this, v8, v8)
    || `anonymous namespace'::VectorInsideAngleThreshold((_anonymous_namespace_ *)((char *)this + 12), a3, v9)
    || `anonymous namespace'::VectorInsideAngleThreshold((_anonymous_namespace_ *)((char *)this + 24), a3, v10)
    || v6 == 2
    && ((unsigned __int8)IsWithinThresholdF()
     && (unsigned __int8)IsWithinThresholdF()
     && (unsigned __int8)IsWithinThresholdF()
     || (unsigned __int8)IsWithinThresholdF()
     && (unsigned __int8)IsWithinThresholdF()
     && (unsigned __int8)IsWithinThresholdF()
     || (unsigned __int8)IsWithinThresholdF()
     && (unsigned __int8)IsWithinThresholdF()
     && (unsigned __int8)IsWithinThresholdF()) )
  {
    return 0;
  }
  return v7;
}
