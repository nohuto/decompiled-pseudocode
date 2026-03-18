/*
 * XREFs of ?Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C003AF80
 * Callers:
 *     ?VidMmFlushPagingQueue@@YAXPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C001C4F0 (-VidMmFlushPagingQueue@@YAXPEAVVIDMM_PAGING_QUEUE@@@Z.c)
 *     ?Destroy@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C003B3F4 (-Destroy@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 *     ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1C0053BA4 (--1VIDMM_DEVICE@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PAGING_QUEUE::Flush(VIDMM_PAGING_QUEUE *this)
{
  __int64 v2; // rbx
  __int64 v3; // rcx

  if ( *((_QWORD *)this + 10) )
  {
    while ( 1 )
    {
      v2 = *((_QWORD *)this + 10);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v2 + 104, 0LL);
      *(_QWORD *)(v2 + 112) = KeGetCurrentThread();
      v3 = *((_QWORD *)this + 10);
      LOBYTE(v2) = *((_DWORD *)this + 28) == 0;
      *(_QWORD *)(v3 + 112) = 0LL;
      ExReleasePushLockExclusiveEx(v3 + 104, 0LL);
      KeLeaveCriticalRegion();
      if ( (_BYTE)v2 )
        break;
      KeWaitForSingleObject(*((PVOID *)this + 15), Executive, 0, 0, 0LL);
    }
  }
}
