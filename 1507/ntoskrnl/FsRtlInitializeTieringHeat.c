/*
 * XREFs of FsRtlInitializeTieringHeat @ 0x1405B9438
 * Callers:
 *     FsRtlInitSystem @ 0x1407E124C (FsRtlInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS FsRtlInitializeTieringHeat()
{
  qword_14034D228 = (__int64)&FsRtlTieringHeatData;
  FsRtlTieringHeatData = (__int64)&FsRtlTieringHeatData;
  return ExInitializeResourceLite(&Resource);
}
