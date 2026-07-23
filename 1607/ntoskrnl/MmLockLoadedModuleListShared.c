/*
 * XREFs of MmLockLoadedModuleListShared @ 0x14001F120
 * Callers:
 *     MiLockPagableImageSection @ 0x140014404 (MiLockPagableImageSection.c)
 *     RtlpxLookupFunctionTable @ 0x1400510C0 (RtlpxLookupFunctionTable.c)
 *     RtlPcToFileName @ 0x140148C58 (RtlPcToFileName.c)
 *     MiSplitDriverPage @ 0x1401E184C (MiSplitDriverPage.c)
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
