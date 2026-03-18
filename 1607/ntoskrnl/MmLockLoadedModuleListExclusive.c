/*
 * XREFs of MmLockLoadedModuleListExclusive @ 0x140084CB8
 * Callers:
 *     RtlInsertInvertedFunctionTable @ 0x140084A5C (RtlInsertInvertedFunctionTable.c)
 *     MiProcessLoaderEntry @ 0x140084B4C (MiProcessLoaderEntry.c)
 *     RtlRemoveInvertedFunctionTable @ 0x14012E504 (RtlRemoveInvertedFunctionTable.c)
 *     MiSessionInsertImage @ 0x14012FB6C (MiSessionInsertImage.c)
 *     MiSessionRemoveImage @ 0x140130440 (MiSessionRemoveImage.c)
 *     MiShowBadMapper @ 0x1401E14D4 (MiShowBadMapper.c)
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
