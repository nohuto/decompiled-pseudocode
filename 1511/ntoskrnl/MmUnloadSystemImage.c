/*
 * XREFs of MmUnloadSystemImage @ 0x1403CBF50
 * Callers:
 *     IopLoadDriver @ 0x1403BB9F8 (IopLoadDriver.c)
 *     IopDeleteDriver @ 0x1404C5944 (IopDeleteDriver.c)
 *     NtSetSystemInformation @ 0x1404D4654 (NtSetSystemInformation.c)
 *     MiSessionUnloadAllImages @ 0x1404F3B90 (MiSessionUnloadAllImages.c)
 *     MiLoadImportDll @ 0x14050A29C (MiLoadImportDll.c)
 *     PnpReplacePartitionUnit @ 0x14060ECC8 (PnpReplacePartitionUnit.c)
 *     PnprLoadPluginDriver @ 0x140610774 (PnprLoadPluginDriver.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x1403CF8C4 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1403CF8F0 (MmAcquireLoadLock.c)
 *     MiUnloadSystemImage @ 0x1403CF92C (MiUnloadSystemImage.c)
 */

__int64 __fastcall MmUnloadSystemImage(ULONG_PTR BugCheckParameter2)
{
  __int64 Lock; // rbx

  Lock = MmAcquireLoadLock();
  MiUnloadSystemImage(BugCheckParameter2);
  MmReleaseLoadLock(Lock);
  return 0LL;
}
