/*
 * XREFs of FsRtlInitializeTieringHeat @ 0x140577358
 * Callers:
 *     FsRtlInitSystem @ 0x1407B6884 (FsRtlInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS FsRtlInitializeTieringHeat()
{
  qword_140322368 = (__int64)&FsRtlTieringHeatData;
  FsRtlTieringHeatData = (__int64)&FsRtlTieringHeatData;
  return ExInitializeResourceLite(&Resource);
}
