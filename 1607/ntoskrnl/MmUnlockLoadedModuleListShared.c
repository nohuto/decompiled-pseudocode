/*
 * XREFs of MmUnlockLoadedModuleListShared @ 0x140014584
 * Callers:
 *     MiLockPagableImageSection @ 0x140014404 (MiLockPagableImageSection.c)
 *     RtlpxLookupFunctionTable @ 0x1400510C0 (RtlpxLookupFunctionTable.c)
 *     RtlPcToFileName @ 0x140148C58 (RtlPcToFileName.c)
 *     MiSplitDriverPage @ 0x1401E184C (MiSplitDriverPage.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400E8250 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

void __fastcall MmUnlockLoadedModuleListShared(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1;
  ExReleaseSpinLockSharedFromDpcLevel(&PsLoadedModuleSpinLock);
  __writecr8(v1);
}
