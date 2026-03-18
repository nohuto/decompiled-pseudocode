/*
 * XREFs of MmLockLoadedModuleListShared @ 0x14001F5A0
 * Callers:
 *     MiLockPagableImageSection @ 0x140014884 (MiLockPagableImageSection.c)
 *     RtlpxLookupFunctionTable @ 0x140051540 (RtlpxLookupFunctionTable.c)
 *     RtlPcToFileName @ 0x1401486E8 (RtlPcToFileName.c)
 *     MiSplitDriverPage @ 0x1401E1A20 (MiSplitDriverPage.c)
 * Callees:
 *     <none>
 */

void __fastcall MmLockLoadedModuleListShared(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // al

  CurrentIrql = KeGetCurrentIrql();
  *a1 = CurrentIrql;
  if ( CurrentIrql < 0xFu )
    __writecr8(0xFuLL);
  ExAcquireSpinLockSharedAtDpcLevel(&PsLoadedModuleSpinLock);
}
