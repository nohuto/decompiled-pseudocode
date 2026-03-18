/*
 * XREFs of MmUnloadSystemImage @ 0x140545D68
 * Callers:
 *     NtSetSystemInformation @ 0x1403E9F6C (NtSetSystemInformation.c)
 *     IopLoadDriver @ 0x14049E388 (IopLoadDriver.c)
 *     MiSessionUnloadAllImages @ 0x140531F68 (MiSessionUnloadAllImages.c)
 *     MiLoadImportDll @ 0x140544204 (MiLoadImportDll.c)
 *     IopDeleteDriver @ 0x140545C94 (IopDeleteDriver.c)
 *     PnpReplacePartitionUnit @ 0x1406430D4 (PnpReplacePartitionUnit.c)
 *     PnprLoadPluginDriver @ 0x140644B80 (PnprLoadPluginDriver.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x140483400 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x14048342C (MmAcquireLoadLock.c)
 *     MiUnloadSystemImage @ 0x140483468 (MiUnloadSystemImage.c)
 */

__int64 __fastcall MmUnloadSystemImage(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *Lock; // rbx

  Lock = MmAcquireLoadLock();
  MiUnloadSystemImage(BugCheckParameter2, -1);
  MmReleaseLoadLock((__int64)Lock);
  return 0LL;
}
