/*
 * XREFs of PsGetServerSiloState @ 0x1400D5430
 * Callers:
 *     SepQueueWorkItem @ 0x1400D52DC (SepQueueWorkItem.c)
 *     PspIsServerSiloTerminating @ 0x1401F58EC (PspIsServerSiloTerminating.c)
 *     PspTerminateAllThreads @ 0x1403F2750 (PspTerminateAllThreads.c)
 *     PspStartMonitorDeferred @ 0x140526910 (PspStartMonitorDeferred.c)
 *     PspUnregisterMonitorDeferred @ 0x140640C04 (PspUnregisterMonitorDeferred.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     PsIsHostSilo @ 0x140079E50 (PsIsHostSilo.c)
 */

__int64 __fastcall PsGetServerSiloState(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v4; // rcx
  unsigned int v5; // ebx

  if ( PsIsHostSilo(a1) )
    return 1LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 1248), 1u);
  v4 = *(struct _ERESOURCE **)(a1 + 1248);
  v5 = *((_DWORD *)v4[1].SharedWaiters + 28);
  ExReleaseResourceLite(v4);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return v5;
}
