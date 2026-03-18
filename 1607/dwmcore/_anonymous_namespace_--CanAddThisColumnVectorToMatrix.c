/*
 * XREFs of _anonymous_namespace_::CanAddThisColumnVectorToMatrix @ 0x18016D42C
 * Callers:
 *     ?ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA?AUD2DMatrix@@PEAV?$DynArray@UD2DVector3@@$0A@@@@Z @ 0x18016DA0C (-ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA-AUD2DMatrix@@PEAV-$DynArray@UD2DVec.c)
 * Callees:
 *     _anonymous_namespace_::VectorInsideAngleThreshold @ 0x18016F9F4 (_anonymous_namespace_--VectorInsideAngleThreshold.c)
 *     ?D3DXVectorAreCloseToZero@@YAHAEBUD2DVector3@@@Z @ 0x180188D60 (-D3DXVectorAreCloseToZero@@YAHAEBUD2DVector3@@@Z.c)
 *     IsWithinThresholdF @ 0x180188DC4 (IsWithinThresholdF.c)
 */

char __fastcall anonymous_namespace_::CanAddThisColumnVectorToMatrix(__int64 a1, int a2, const struct D2DVector3 *a3)
{
  char v6; // si
  __int64 v7; // r8

  v6 = 1;
  if ( (unsigned int)D3DXVectorAreCloseToZero(a3)
    || (unsigned __int8)anonymous_namespace_::VectorInsideAngleThreshold(a1, v7)
    || (unsigned __int8)anonymous_namespace_::VectorInsideAngleThreshold(a1 + 12, a3)
    || (unsigned __int8)anonymous_namespace_::VectorInsideAngleThreshold(a1 + 24, a3)
    || a2 == 2
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
  return v6;
}
