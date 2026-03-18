/*
 * XREFs of PpReleaseBootDDB @ 0x14056E7B4
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x140145238 (PnpCompleteSystemStartProcess.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     SdbReleaseDatabase @ 0x140499BF8 (SdbReleaseDatabase.c)
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
