/*
 * XREFs of MmUnlockLoadedModuleListExclusive @ 0x14001A804
 * Callers:
 *     RtlInsertInvertedFunctionTable @ 0x14001A188 (RtlInsertInvertedFunctionTable.c)
 *     MiProcessLoaderEntry @ 0x14001A270 (MiProcessLoaderEntry.c)
 *     RtlRemoveInvertedFunctionTable @ 0x1400EFBC4 (RtlRemoveInvertedFunctionTable.c)
 *     MiSessionRemoveImage @ 0x14011F8FC (MiSessionRemoveImage.c)
 *     MiSessionInsertImage @ 0x14012599C (MiSessionInsertImage.c)
 *     MiShowBadMapper @ 0x1401CEA7C (MiShowBadMapper.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MmUnlockLoadedModuleListExclusive(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1;
  ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
  __writecr8(v1);
}
