/*
 * XREFs of MiComputeCommitThresholds @ 0x140142AD4
 * Callers:
 *     MiIncreaseCommitLimits @ 0x1401429F8 (MiIncreaseCommitLimits.c)
 *     MiReduceCommitLimits @ 0x1401ED148 (MiReduceCommitLimits.c)
 *     MiInsertPartitionPages @ 0x1401F1B74 (MiInsertPartitionPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiComputeCommitThresholds(_QWORD *a1)
{
  unsigned __int64 v1; // r8
  unsigned __int64 v2; // rdx
  __int64 v3; // rax

  v1 = a1[917];
  v2 = v1 / 0xA;
  if ( v1 / 0xA > 0x10000 )
    v2 = 0x10000LL;
  a1[708] = v1 - v2;
  v3 = v1 >> 2;
  if ( v1 >> 2 > 0x100000 )
    v3 = 0x100000LL;
  a1[707] = v1 - v3;
  return MiSyncCommitSignals(a1, 1LL);
}
