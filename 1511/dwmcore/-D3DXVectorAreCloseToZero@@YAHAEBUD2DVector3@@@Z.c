/*
 * XREFs of ?D3DXVectorAreCloseToZero@@YAHAEBUD2DVector3@@@Z @ 0x18015801C
 * Callers:
 *     ?CanAddThisColumnVectorToMatrix@?A0xe8837992@@YA_NPEAUD2DVector3@@IAEBU2@@Z @ 0x18014187C (-CanAddThisColumnVectorToMatrix@-A0xe8837992@@YA_NPEAUD2DVector3@@IAEBU2@@Z.c)
 *     ?ReverseAndLeftShift@?A0xe8837992@@YA?AUD2DMatrix@@AEBU2@@Z @ 0x180142C90 (-ReverseAndLeftShift@-A0xe8837992@@YA-AUD2DMatrix@@AEBU2@@Z.c)
 * Callees:
 *     IsWithinThresholdF @ 0x180158080 (IsWithinThresholdF.c)
 */

__int64 __fastcall D3DXVectorAreCloseToZero(const struct D2DVector3 *a1)
{
  char v1; // al
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx

  v1 = ((__int64 (*)(void))IsWithinThresholdF)();
  LODWORD(v3) = 0;
  if ( v1 && (unsigned __int8)IsWithinThresholdF(v2, 0LL) && (unsigned __int8)IsWithinThresholdF(v4, v3) )
    LODWORD(v3) = 1;
  return (unsigned int)v3;
}
