/*
 * XREFs of EvaluateCurrentState @ 0x1800E2A90
 * Callers:
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x180004424 (PsspDuplicateSnapshotRemoteToRemote.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180004D44 (PsspDuplicateSnapshotLocalToRemote.c)
 *     RtlQueryAtomInAtomTable @ 0x1800678B0 (RtlQueryAtomInAtomTable.c)
 * Callees:
 *     EvaluateFeature @ 0x1800E2B38 (EvaluateFeature.c)
 */

_BOOL8 __fastcall EvaluateCurrentState(_DWORD **a1)
{
  EvaluateFeature();
  return **a1 != 1;
}
