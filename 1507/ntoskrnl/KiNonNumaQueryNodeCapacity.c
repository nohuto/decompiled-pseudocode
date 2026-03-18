/*
 * XREFs of KiNonNumaQueryNodeCapacity @ 0x1402007EC
 * Callers:
 *     KiPerformGroupConfiguration @ 0x1407E3360 (KiPerformGroupConfiguration.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiNonNumaQueryNodeCapacity(__int16 a1, _DWORD *a2)
{
  if ( a1 )
    return 3221226021LL;
  *a2 = KiMaximumGroupSize;
  return 0LL;
}
