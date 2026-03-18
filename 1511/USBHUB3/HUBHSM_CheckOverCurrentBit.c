/*
 * XREFs of HUBHSM_CheckOverCurrentBit @ 0x1C0007190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBHSM_CheckOverCurrentBit(__int64 a1)
{
  return (*(_BYTE *)(*(_QWORD *)(a1 + 960) + 724LL) & 2) != 0 ? 2041 : 2057;
}
