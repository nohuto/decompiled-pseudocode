/*
 * XREFs of MmUnlockLoadedModuleListExclusive @ 0x140082DF8
 * Callers:
 *     RtlInsertInvertedFunctionTable @ 0x140082BBC (RtlInsertInvertedFunctionTable.c)
 *     MiProcessLoaderEntry @ 0x140082CAC (MiProcessLoaderEntry.c)
 *     RtlRemoveInvertedFunctionTable @ 0x14012EA74 (RtlRemoveInvertedFunctionTable.c)
 *     MiSessionInsertImage @ 0x1401300DC (MiSessionInsertImage.c)
 *     MiSessionRemoveImage @ 0x1401309B0 (MiSessionRemoveImage.c)
 *     MiShowBadMapper @ 0x1401E1300 (MiShowBadMapper.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MmUnlockLoadedModuleListExclusive(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1;
  ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
  __writecr8(v1);
}
