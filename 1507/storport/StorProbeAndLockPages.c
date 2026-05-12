/*
 * XREFs of StorProbeAndLockPages @ 0x1C00307F0
 * Callers:
 *     StorBuildSynchronousScsiRequest @ 0x1C00303A4 (StorBuildSynchronousScsiRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorProbeAndLockPages(struct _MDL *a1, __int64 a2, LOCK_OPERATION a3)
{
  MmProbeAndLockPages(a1, 0, a3);
  return 0LL;
}
