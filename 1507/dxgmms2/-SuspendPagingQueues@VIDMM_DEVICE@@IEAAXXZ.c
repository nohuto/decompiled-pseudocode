/*
 * XREFs of ?SuspendPagingQueues@VIDMM_DEVICE@@IEAAXXZ @ 0x1C0059608
 * Callers:
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C0058B5C (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x1C0059930 (-Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z.c)
 * Callees:
 *     ?SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z @ 0x1C003E0BC (-SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::SuspendPagingQueues(VIDMM_DEVICE *this)
{
  VIDMM_DEVICE *v2; // r15
  __int64 *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rcx

  if ( !*((_BYTE *)this + 49) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 104, 0LL);
    *((_QWORD *)this + 14) = KeGetCurrentThread();
    v2 = (VIDMM_DEVICE *)*((_QWORD *)this + 11);
    while ( v2 != (VIDMM_DEVICE *)((char *)this + 88) )
    {
      v3 = (__int64 *)((char *)v2 - 48);
      v2 = *(VIDMM_DEVICE **)v2;
      v4 = v3[10];
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v4 + 104, 0LL);
      *(_QWORD *)(v4 + 112) = KeGetCurrentThread();
      VIDMM_PAGING_QUEUE::SetStatus(v3, 2);
      v5 = v3[10];
      *(_QWORD *)(v5 + 112) = 0LL;
      ExReleasePushLockExclusiveEx(v5 + 104, 0LL);
      KeLeaveCriticalRegion();
    }
    *((_BYTE *)this + 49) = 1;
    *((_QWORD *)this + 14) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 104, 0LL);
    KeLeaveCriticalRegion();
  }
}
