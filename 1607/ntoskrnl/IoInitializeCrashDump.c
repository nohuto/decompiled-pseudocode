/*
 * XREFs of IoInitializeCrashDump @ 0x1405696AC
 * Callers:
 *     MiCreatePagingFile @ 0x140568764 (MiCreatePagingFile.c)
 *     IopInitCrashDumpDuringSysInit @ 0x1407AB1C0 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     IopRemoveDumpCapsuleSupport @ 0x140143590 (IopRemoveDumpCapsuleSupport.c)
 *     IopInitDumpCapsuleSupport @ 0x14014BDF0 (IopInitDumpCapsuleSupport.c)
 *     IopInitializeCrashDump @ 0x140569748 (IopInitializeCrashDump.c)
 */

char __fastcall IoInitializeCrashDump(HANDLE Handle)
{
  struct _KTHREAD *CurrentThread; // rbx
  char v4; // di
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  if ( ForceDumpDisabled )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u);
  v4 = IopInitializeCrashDump(Handle);
  if ( v4 )
  {
    IopRemoveDumpCapsuleSupport();
  }
  else if ( CapsuleDumpAllowed )
  {
    IopInitDumpCapsuleSupport();
  }
  ExReleaseResourceLite(&IopCrashDumpLock);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v5, v6, v7);
  return v4;
}
