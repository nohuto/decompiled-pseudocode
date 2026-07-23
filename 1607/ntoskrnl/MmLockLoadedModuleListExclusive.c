/*
 * XREFs of MmLockLoadedModuleListExclusive @ 0x140082E18
 * Callers:
 *     RtlInsertInvertedFunctionTable @ 0x140082BBC (RtlInsertInvertedFunctionTable.c)
 *     MiProcessLoaderEntry @ 0x140082CAC (MiProcessLoaderEntry.c)
 *     RtlRemoveInvertedFunctionTable @ 0x14012EA74 (RtlRemoveInvertedFunctionTable.c)
 *     MiSessionInsertImage @ 0x1401300DC (MiSessionInsertImage.c)
 *     MiSessionRemoveImage @ 0x1401309B0 (MiSessionRemoveImage.c)
 *     MiShowBadMapper @ 0x1401E1300 (MiShowBadMapper.c)
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
