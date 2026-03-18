/*
 * XREFs of MmUnlockLoadedModuleListShared @ 0x140014A04
 * Callers:
 *     MiLockPagableImageSection @ 0x140014884 (MiLockPagableImageSection.c)
 *     RtlpxLookupFunctionTable @ 0x140051540 (RtlpxLookupFunctionTable.c)
 *     RtlPcToFileName @ 0x1401486E8 (RtlPcToFileName.c)
 *     MiSplitDriverPage @ 0x1401E1A20 (MiSplitDriverPage.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400EA3E0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

void __fastcall MmUnlockLoadedModuleListShared(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1;
  ExReleaseSpinLockSharedFromDpcLevel(&PsLoadedModuleSpinLock);
  __writecr8(v1);
}
