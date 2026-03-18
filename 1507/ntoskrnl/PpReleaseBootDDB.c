/*
 * XREFs of PpReleaseBootDDB @ 0x1405B2758
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x1401699B4 (PnpCompleteSystemStartProcess.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     SdbReleaseDatabase @ 0x140578BDC (SdbReleaseDatabase.c)
 */

__int64 PpReleaseBootDDB()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rdx
  unsigned int v2; // ebx
  struct _KTHREAD *v3; // rdx
  __int16 v4; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiDDBLock, 1u);
  if ( *(_QWORD *)&PpDDBHandle )
  {
    SdbReleaseDatabase(*(__int64 *)&PpDDBHandle, v1);
    *(_QWORD *)&PpDDBHandle = 0LL;
    ExFreePoolWithTag(PpBootDDB, 0);
    PpBootDDB = 0LL;
    v2 = 0;
  }
  else
  {
    v2 = -1073741823;
  }
  ExReleaseResourceLite(&PiDDBLock);
  v3 = KeGetCurrentThread();
  v4 = v3->KernelApcDisable + 1;
  v3->KernelApcDisable = v4;
  if ( !v4
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v3->ApcState.ApcListHead[0].Flink != &v3->152
    && !v3->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v2;
}
