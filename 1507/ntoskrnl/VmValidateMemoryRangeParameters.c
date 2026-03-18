/*
 * XREFs of VmValidateMemoryRangeParameters @ 0x1406DEB60
 * Callers:
 *     VmCreateMemoryRange @ 0x1406DE920 (VmCreateMemoryRange.c)
 *     VmDeleteMemoryRange @ 0x1406DEA9C (VmDeleteMemoryRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VmValidateMemoryRangeParameters(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4)
{
  unsigned __int64 v5; // r8

  if ( a4 == -1 )
    return 10LL;
  if ( !a3 )
    return 20LL;
  if ( a3 > 0xFFFFFFFFFFFFFLL )
    return 30LL;
  if ( ((a2 | a1) & 0xFFF) != 0 )
    return 40LL;
  v5 = a3 << 12;
  if ( v5 + a2 <= a2 )
    return 50LL;
  if ( v5 + a1 > a1 )
    return (unsigned __int64)MmHighestUserAddress < v5 + a2 - 1 ? 0x46 : 0;
  return 60LL;
}
