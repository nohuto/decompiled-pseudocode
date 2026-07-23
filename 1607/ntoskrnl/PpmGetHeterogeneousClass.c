/*
 * XREFs of PpmGetHeterogeneousClass @ 0x1400D1E68
 * Callers:
 *     PpmPerfApplyDomainState @ 0x1400D1F60 (PpmPerfApplyDomainState.c)
 *     PpmPerfApplyLatencyHint @ 0x140110B88 (PpmPerfApplyLatencyHint.c)
 *     PpmPerfCalculateMinMaxStates @ 0x14014471C (PpmPerfCalculateMinMaxStates.c)
 *     PpmPerfResizeHistoryAll @ 0x14056B1B4 (PpmPerfResizeHistoryAll.c)
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
