/*
 * XREFs of HUBDSM_CheckingForZeroBwPipeOnClientClearStall @ 0x1C0016DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingForZeroBwPipeOnClientClearStall(__int64 a1)
{
  return (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 1640LL) + 12LL) & 1) != 0 ? 4089 : 4061;
}
