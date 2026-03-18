/*
 * XREFs of MmUnlockLoadedModuleListExclusive @ 0x140084C98
 * Callers:
 *     RtlInsertInvertedFunctionTable @ 0x140084A5C (RtlInsertInvertedFunctionTable.c)
 *     MiProcessLoaderEntry @ 0x140084B4C (MiProcessLoaderEntry.c)
 *     RtlRemoveInvertedFunctionTable @ 0x14012E504 (RtlRemoveInvertedFunctionTable.c)
 *     MiSessionInsertImage @ 0x14012FB6C (MiSessionInsertImage.c)
 *     MiSessionRemoveImage @ 0x140130440 (MiSessionRemoveImage.c)
 *     MiShowBadMapper @ 0x1401E14D4 (MiShowBadMapper.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E9E0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MmUnlockLoadedModuleListExclusive(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1;
  ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
  __writecr8(v1);
}
