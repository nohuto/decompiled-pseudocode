/*
 * XREFs of ?D3DXVectorAreClose@@YAHAEBUD2DVector3@@0@Z @ 0x180149A04
 * Callers:
 *     CanAddThisColumnVectorToMatrix @ 0x18012D8D8 (CanAddThisColumnVectorToMatrix.c)
 * Callees:
 *     IsWithinThresholdF @ 0x180149AD4 (IsWithinThresholdF.c)
 */

__int64 __fastcall D3DXVectorAreClose(const struct D2DVector3 *a1, const struct D2DVector3 *a2)
{
  char v2; // al
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx

  v2 = ((__int64 (*)(void))IsWithinThresholdF)();
  LODWORD(v5) = 0;
  if ( v2 && (unsigned __int8)IsWithinThresholdF(v4, v3, 0LL) && (unsigned __int8)IsWithinThresholdF(v7, v6, v5) )
    LODWORD(v5) = 1;
  return (unsigned int)v5;
}
