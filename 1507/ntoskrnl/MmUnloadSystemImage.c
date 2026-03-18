/*
 * XREFs of MmUnloadSystemImage @ 0x140452B3C
 * Callers:
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 *     IopDeleteDriver @ 0x1404F380C (IopDeleteDriver.c)
 *     MiSessionUnloadAllImages @ 0x140567E70 (MiSessionUnloadAllImages.c)
 *     MiLoadImportDll @ 0x140571A68 (MiLoadImportDll.c)
 *     IopLoadDriver @ 0x140572EA0 (IopLoadDriver.c)
 *     PnpReplacePartitionUnit @ 0x14068E9D4 (PnpReplacePartitionUnit.c)
 *     PnprLoadPluginDriver @ 0x1406904E8 (PnprLoadPluginDriver.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x1404523E8 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140452794 (MmAcquireLoadLock.c)
 *     MiUnloadSystemImage @ 0x140452B74 (MiUnloadSystemImage.c)
 */

__int64 __fastcall MmUnloadSystemImage(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *Lock; // rbx

  Lock = MmAcquireLoadLock();
  MiUnloadSystemImage(BugCheckParameter2);
  MmReleaseLoadLock((__int64)Lock);
  return 0LL;
}
