/*
 * XREFs of HUBDSM_CheckingIfExitLatencyNeedsToBeIncreased @ 0x1C001B140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfExitLatencyNeedsToBeIncreased(__int64 a1)
{
  return *(_WORD *)(*(_QWORD *)(a1 + 960) + 2192LL) < *(_WORD *)(*(_QWORD *)(a1 + 960) + 2194LL) ? 4089 : 4061;
}
