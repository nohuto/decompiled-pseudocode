/*
 * XREFs of HUBDSM_ReEnumeratingOnClientRequestInUnconfigured @ 0x1C00190C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_ReEnumeratingOnClientRequestInUnconfigured(__int64 a1)
{
  _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(a1 + 960) + 1620LL), 4u);
  return 1000LL;
}
