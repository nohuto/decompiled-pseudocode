/*
 * XREFs of IoInitializeCrashDump @ 0x1405B51F4
 * Callers:
 *     MiCreatePagingFile @ 0x1405B4240 (MiCreatePagingFile.c)
 *     IopInitCrashDumpDuringSysInit @ 0x1407D546C (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     IopRemoveDumpCapsuleSupport @ 0x14016C07C (IopRemoveDumpCapsuleSupport.c)
 *     IopInitDumpCapsuleSupport @ 0x14016FFFC (IopInitDumpCapsuleSupport.c)
 *     IopInitializeCrashDump @ 0x1405B5294 (IopInitializeCrashDump.c)
 */

char __fastcall IoInitializeCrashDump(HANDLE Handle)
{
  struct _KTHREAD *CurrentThread; // rsi
  char v3; // bl
  __int16 v4; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u);
  v3 = IopInitializeCrashDump(Handle);
  if ( v3 )
    IopRemoveDumpCapsuleSupport();
  else
    IopInitDumpCapsuleSupport();
  ExReleaseResourceLite(&IopCrashDumpLock);
  v4 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v4;
  if ( !v4
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v3;
}
