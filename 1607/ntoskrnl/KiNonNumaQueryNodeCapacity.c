/*
 * XREFs of KiNonNumaQueryNodeCapacity @ 0x1401D336C
 * Callers:
 *     KiPerformGroupConfiguration @ 0x140793198 (KiPerformGroupConfiguration.c)
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
