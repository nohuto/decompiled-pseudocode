/*
 * XREFs of KiNonNumaQueryNodeDistance @ 0x1401D3384
 * Callers:
 *     KiPerformGroupConfiguration @ 0x140793198 (KiPerformGroupConfiguration.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiNonNumaQueryNodeDistance(__int16 a1, __int16 a2, _DWORD *a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 || a2 )
    return 3221226021LL;
  *a3 = 0;
  return result;
}
