/*
 * XREFs of ndisGetTimeInterval @ 0x1C00124CC
 * Callers:
 *     ndisMPowerPolicy @ 0x1C00DFB64 (ndisMPowerPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGetTimeInterval(_QWORD *a1)
{
  return (MEMORY[0xFFFFF78000000014] - *a1) / 10000LL;
}
