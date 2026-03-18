/*
 * XREFs of IoInitializeCrashDump @ 0x1405388F4
 * Callers:
 *     MiCreatePagingFile @ 0x140537A84 (MiCreatePagingFile.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140760E7C (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     IopRemoveDumpCapsuleSupport @ 0x14013A67C (IopRemoveDumpCapsuleSupport.c)
 *     IopInitDumpCapsuleSupport @ 0x140141FF0 (IopInitDumpCapsuleSupport.c)
 *     IopInitializeCrashDump @ 0x140538978 (IopInitializeCrashDump.c)
 */

char __fastcall IoInitializeCrashDump(HANDLE Handle)
{
  struct _KTHREAD *CurrentThread; // rsi
  char v3; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u);
  v3 = IopInitializeCrashDump(Handle);
  if ( v3 )
    IopRemoveDumpCapsuleSupport();
  else
    IopInitDumpCapsuleSupport();
  ExReleaseResourceLite(&IopCrashDumpLock);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return v3;
}
