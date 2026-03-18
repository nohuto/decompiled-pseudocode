/*
 * XREFs of PpmGetHeterogeneousClass @ 0x1400D3FC8
 * Callers:
 *     PpmPerfApplyDomainState @ 0x1400D40C0 (PpmPerfApplyDomainState.c)
 *     PpmPerfApplyLatencyHint @ 0x140110624 (PpmPerfApplyLatencyHint.c)
 *     PpmPerfCalculateMinMaxStates @ 0x1401441AC (PpmPerfCalculateMinMaxStates.c)
 *     PpmPerfResizeHistoryAll @ 0x14056AC74 (PpmPerfResizeHistoryAll.c)
 * Callees:
 *     <none>
 */

bool __fastcall PpmGetHeterogeneousClass(__int64 a1)
{
  char v1; // dl
  __int64 v2; // rax

  v1 = *(_BYTE *)(a1 + 23858);
  if ( !v1 )
  {
    v2 = *(_QWORD *)(a1 + 24176);
    return v2 && *(_BYTE *)(v2 + 197) != 0;
  }
  return v1;
}
