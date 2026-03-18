/*
 * XREFs of MmLockLoadedModuleListShared @ 0x140032BA0
 * Callers:
 *     RtlpxLookupFunctionTable @ 0x140028170 (RtlpxLookupFunctionTable.c)
 *     MiLockPagableImageSection @ 0x140035BD8 (MiLockPagableImageSection.c)
 *     MiSplitDriverPage @ 0x1401CEF98 (MiSplitDriverPage.c)
 *     RtlPcToFileName @ 0x1401FB4AC (RtlPcToFileName.c)
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
