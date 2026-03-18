/*
 * XREFs of MmUnlockLoadedModuleListShared @ 0x140035BB8
 * Callers:
 *     RtlpxLookupFunctionTable @ 0x140028170 (RtlpxLookupFunctionTable.c)
 *     MiLockPagableImageSection @ 0x140035BD8 (MiLockPagableImageSection.c)
 *     MiSplitDriverPage @ 0x1401CEF98 (MiSplitDriverPage.c)
 *     RtlPcToFileName @ 0x1401FB4AC (RtlPcToFileName.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140077FB0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

void __fastcall MmUnlockLoadedModuleListShared(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1;
  ExReleaseSpinLockSharedFromDpcLevel(&PsLoadedModuleSpinLock);
  __writecr8(v1);
}
