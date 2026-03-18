/*
 * XREFs of FsRtlInitializeTieringHeat @ 0x140542F60
 * Callers:
 *     FsRtlInitSystem @ 0x14076C038 (FsRtlInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS FsRtlInitializeTieringHeat()
{
  qword_1402FCDC8 = (__int64)&FsRtlTieringHeatData;
  FsRtlTieringHeatData = (__int64)&FsRtlTieringHeatData;
  return ExInitializeResourceLite(&Resource);
}
