/*
 * XREFs of CanAddThisColumnVectorToMatrix @ 0x18012D8D8
 * Callers:
 *     ?ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA?AUD2DMatrix@@PEAV?$DynArray@UD2DVector3@@$0A@@@@Z @ 0x18012DDD4 (-ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA-AUD2DMatrix@@PEAV-$DynArray@UD2DVec.c)
 * Callees:
 *     ?D3DXVectorAreClose@@YAHAEBUD2DVector3@@0@Z @ 0x180149A04 (-D3DXVectorAreClose@@YAHAEBUD2DVector3@@0@Z.c)
 *     ?D3DXVectorAreCloseToZero@@YAHAEBUD2DVector3@@@Z @ 0x180149A70 (-D3DXVectorAreCloseToZero@@YAHAEBUD2DVector3@@@Z.c)
 *     IsWithinThresholdF @ 0x180149AD4 (IsWithinThresholdF.c)
 */

char __fastcall CanAddThisColumnVectorToMatrix(__int64 a1, int a2, const struct D2DVector3 *a3)
{
  const struct D2DVector3 *v4; // r8
  const struct D2DVector3 *v5; // r10
  const struct D2DVector3 *v6; // rdx
  __int64 v7; // r10
  const struct D2DVector3 *v8; // rdx
  __int64 v9; // r10
  char v10; // r9

  if ( (unsigned int)D3DXVectorAreCloseToZero(a3)
    || (unsigned int)D3DXVectorAreClose(v5, v4)
    || (unsigned int)D3DXVectorAreClose((const struct D2DVector3 *)(v7 + 12), v6)
    || (unsigned int)D3DXVectorAreClose((const struct D2DVector3 *)(v9 + 24), v8)
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
  return v10;
}
