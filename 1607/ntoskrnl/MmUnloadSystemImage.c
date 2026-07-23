/*
 * XREFs of MmUnloadSystemImage @ 0x1405462A8
 * Callers:
 *     NtSetSystemInformation @ 0x1403EB59C (NtSetSystemInformation.c)
 *     IopLoadDriver @ 0x140516794 (IopLoadDriver.c)
 *     MiSessionUnloadAllImages @ 0x1405324A8 (MiSessionUnloadAllImages.c)
 *     MiLoadImportDll @ 0x140544744 (MiLoadImportDll.c)
 *     IopDeleteDriver @ 0x1405461D4 (IopDeleteDriver.c)
 *     PnpReplacePartitionUnit @ 0x1406431B8 (PnpReplacePartitionUnit.c)
 *     PnprLoadPluginDriver @ 0x140644C64 (PnprLoadPluginDriver.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x140482154 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140482180 (MmAcquireLoadLock.c)
 *     MiUnloadSystemImage @ 0x1404821BC (MiUnloadSystemImage.c)
 */

__int64 __fastcall MmUnloadSystemImage(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *Lock; // rbx

  Lock = MmAcquireLoadLock();
  MiUnloadSystemImage(BugCheckParameter2, -1);
  MmReleaseLoadLock((__int64)Lock);
  return 0LL;
}
