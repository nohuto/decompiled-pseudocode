/*
 * XREFs of sub_180019550 @ 0x180019550
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001012C @ 0x18001012C (sub_18001012C.c)
 */

__int64 __fastcall sub_180019550(__int64 a1, PVOID a2)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = *(RTL_SRWLOCK **)(a1 + 40);
  if ( a2 == v2[12].Ptr )
    sub_18001012C(v2);
  return 0LL;
}
