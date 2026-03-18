/*
 * XREFs of MiComputeCommitThresholds @ 0x14016BDA4
 * Callers:
 *     MiIncreaseCommitLimits @ 0x14016BCC8 (MiIncreaseCommitLimits.c)
 *     MiInsertPartitionPages @ 0x14021D494 (MiInsertPartitionPages.c)
 *     MiReduceCommitLimits @ 0x140220C38 (MiReduceCommitLimits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiComputeCommitThresholds(_QWORD *a1)
{
  unsigned __int64 v1; // r8
  unsigned __int64 v2; // rdx
  __int64 v3; // rax

  v1 = a1[717];
  v2 = v1 / 0xA;
  if ( v1 / 0xA > 0x10000 )
    v2 = 0x10000LL;
  a1[596] = v1 - v2;
  v3 = v1 >> 2;
  if ( v1 >> 2 > 0x100000 )
    v3 = 0x100000LL;
  a1[595] = v1 - v3;
  return MiSyncCommitSignals(a1, 1LL);
}
