/*
 * XREFs of MiComputeCommitThresholds @ 0x14013A420
 * Callers:
 *     MiIncreaseCommitLimits @ 0x14013A344 (MiIncreaseCommitLimits.c)
 *     MiInsertPartitionPages @ 0x1401D9510 (MiInsertPartitionPages.c)
 *     MiReduceCommitLimits @ 0x1401DBF84 (MiReduceCommitLimits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiComputeCommitThresholds(_QWORD *a1)
{
  unsigned __int64 v1; // r8
  unsigned __int64 v2; // rdx
  __int64 v3; // rax
  unsigned __int64 v4; // r8

  v1 = a1[765];
  v2 = v1 / 0xA;
  if ( v1 / 0xA > 0x10000 )
    v2 = 0x10000LL;
  a1[628] = v1 - v2;
  v3 = v1 >> 2;
  if ( v1 >> 2 > 0x100000 )
    v3 = 0x100000LL;
  v4 = v1 - v3;
  a1[627] = v4;
  return MiSyncCommitSignals(a1, 1LL, v4);
}
