/*
 * XREFs of ?D3DXVectorAreCloseToZero@@YAHAEBUD2DVector3@@@Z @ 0x180149A70
 * Callers:
 *     CanAddThisColumnVectorToMatrix @ 0x18012D8D8 (CanAddThisColumnVectorToMatrix.c)
 *     ReverseAndLeftShift @ 0x18012E7FC (ReverseAndLeftShift.c)
 * Callees:
 *     IsWithinThresholdF @ 0x180149AD4 (IsWithinThresholdF.c)
 */

__int64 __fastcall D3DXVectorAreCloseToZero(const struct D2DVector3 *a1, __int64 a2, __int64 a3)
{
  char v3; // al
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8

  v3 = IsWithinThresholdF(a1, a2, a3);
  LODWORD(v6) = 0;
  if ( v3 && (unsigned __int8)IsWithinThresholdF(v4, 0LL, v5) && (unsigned __int8)IsWithinThresholdF(v7, v6, v8) )
    LODWORD(v6) = 1;
  return (unsigned int)v6;
}
