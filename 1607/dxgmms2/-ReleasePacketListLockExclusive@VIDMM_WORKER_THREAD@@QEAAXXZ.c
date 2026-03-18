/*
 * XREFs of ?ReleasePacketListLockExclusive@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C001D07C
 * Callers:
 *     ?Destroy@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C0045770 (-Destroy@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_WORKER_THREAD::ReleasePacketListLockExclusive(VIDMM_WORKER_THREAD *this)
{
  char *v1; // rcx

  v1 = (char *)this + 128;
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
}
