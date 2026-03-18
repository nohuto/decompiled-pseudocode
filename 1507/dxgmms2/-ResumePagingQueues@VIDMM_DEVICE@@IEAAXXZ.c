/*
 * XREFs of ?ResumePagingQueues@VIDMM_DEVICE@@IEAAXXZ @ 0x1C0059518
 * Callers:
 *     ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005936C (-Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z @ 0x1C003E0BC (-SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::ResumePagingQueues(VIDMM_DEVICE *this)
{
  char *v2; // rsi
  char *v3; // r15
  char *v4; // r14
  __int64 *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rcx

  if ( *((_BYTE *)this + 49) == 1 )
  {
    v2 = (char *)this + 104;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v2, 0LL);
    v3 = (char *)this + 88;
    *((_QWORD *)v2 + 1) = KeGetCurrentThread();
    v4 = (char *)*((_QWORD *)this + 11);
    *((_BYTE *)this + 49) = 0;
    while ( v4 != v3 )
    {
      v5 = (__int64 *)(v4 - 48);
      v4 = *(char **)v4;
      v6 = v5[10];
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v6 + 104, 0LL);
      *(_QWORD *)(v6 + 112) = KeGetCurrentThread();
      if ( *((_DWORD *)v5 + 26) )
        VIDMM_PAGING_QUEUE::SetStatus(v5, v5[4] != (_QWORD)(v5 + 4));
      v7 = v5[10];
      *(_QWORD *)(v7 + 112) = 0LL;
      ExReleasePushLockExclusiveEx(v7 + 104, 0LL);
      KeLeaveCriticalRegion();
    }
    *((_QWORD *)v2 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
}
