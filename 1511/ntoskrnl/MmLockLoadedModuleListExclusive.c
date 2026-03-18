/*
 * XREFs of MmLockLoadedModuleListExclusive @ 0x14001A824
 * Callers:
 *     RtlInsertInvertedFunctionTable @ 0x14001A188 (RtlInsertInvertedFunctionTable.c)
 *     MiProcessLoaderEntry @ 0x14001A270 (MiProcessLoaderEntry.c)
 *     RtlRemoveInvertedFunctionTable @ 0x1400EFBC4 (RtlRemoveInvertedFunctionTable.c)
 *     MiSessionRemoveImage @ 0x14011F8FC (MiSessionRemoveImage.c)
 *     MiSessionInsertImage @ 0x14012599C (MiSessionInsertImage.c)
 *     MiShowBadMapper @ 0x1401CEA7C (MiShowBadMapper.c)
 * Callees:
 *     <none>
 */

void __fastcall MmLockLoadedModuleListExclusive(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // al

  CurrentIrql = KeGetCurrentIrql();
  *a1 = CurrentIrql;
  if ( CurrentIrql < 0xFu )
    __writecr8(0xFuLL);
  ExAcquireSpinLockExclusiveAtDpcLevel(&PsLoadedModuleSpinLock);
}
