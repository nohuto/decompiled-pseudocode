/*
 * XREFs of PpReleaseBootDDB @ 0x14056ECF4
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x1401457A8 (PnpCompleteSystemStartProcess.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     SdbReleaseDatabase @ 0x1404CEA90 (SdbReleaseDatabase.c)
 */

__int64 PpReleaseBootDDB()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rdx
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiDDBLock, 1u);
  v2 = 0;
  if ( *(_QWORD *)&PpDDBHandle )
  {
    SdbReleaseDatabase(*(__int64 *)&PpDDBHandle, v1);
    *(_QWORD *)&PpDDBHandle = 0LL;
    ExFreePoolWithTag(PpBootDDB, 0);
    PpBootDDB = 0LL;
  }
  else
  {
    v2 = -1073741823;
  }
  ExReleaseResourceLite(&PiDDBLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v3, v4, v5);
  return v2;
}
