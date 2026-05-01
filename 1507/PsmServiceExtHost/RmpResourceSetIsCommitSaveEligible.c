/*
 * XREFs of RmpResourceSetIsCommitSaveEligible @ 0x180008178
 * Callers:
 *     RmpActivityHostGetStateDigest @ 0x18000CD68 (RmpActivityHostGetStateDigest.c)
 * Callees:
 *     ?IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x18000AE28 (-IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ.c)
 */

bool __fastcall RmpResourceSetIsCommitSaveEligible(ExecutionModel::_ResourceSetInfo *a1)
{
  bool IsFrozen; // al
  __int64 v2; // r8
  char v3; // dl

  IsFrozen = ExecutionModel::_ResourceSetInfo::IsFrozen(a1);
  v3 = 0;
  if ( IsFrozen )
    return *(_BYTE *)(v2 + 26) >= 0;
  return v3;
}
