/*
 * XREFs of ?AcquirePacketListLockExclusive@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C001D048
 * Callers:
 *     ?Destroy@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C0045770 (-Destroy@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_WORKER_THREAD::AcquirePacketListLockExclusive(VIDMM_WORKER_THREAD *this)
{
  char *v1; // rbx

  v1 = (char *)this + 128;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1, 0LL);
  *((_QWORD *)v1 + 1) = KeGetCurrentThread();
}
