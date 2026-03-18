/*
 * XREFs of ?Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C0045578
 * Callers:
 *     ?VidMmFlushPagingQueue@@YAXPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C0011CB0 (-VidMmFlushPagingQueue@@YAXPEAVVIDMM_PAGING_QUEUE@@@Z.c)
 *     ?Destroy@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C0045770 (-Destroy@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 *     ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1C005B580 (--1VIDMM_DEVICE@@QEAA@XZ.c)
 *     ?VidMmTerminateCompanionContext@VIDMM_GLOBAL@@SAXPEAUVIDMM_COMPANION_CONTEXT@@@Z @ 0x1C008C93C (-VidMmTerminateCompanionContext@VIDMM_GLOBAL@@SAXPEAUVIDMM_COMPANION_CONTEXT@@@Z.c)
 * Callees:
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C005BB70 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?IsIdle@VIDMM_PAGING_QUEUE@@QEAA_NXZ @ 0x1C0091D44 (-IsIdle@VIDMM_PAGING_QUEUE@@QEAA_NXZ.c)
 */

void __fastcall VIDMM_PAGING_QUEUE::Flush(VIDMM_PAGING_QUEUE *this)
{
  __int64 v2; // rbx
  bool IsIdle; // al
  __int64 v4; // rcx

  if ( *((_QWORD *)this + 10) )
  {
    VIDMM_DEVICE::EnsureSchedulable(*((VIDMM_DEVICE **)this + 18), 0);
    while ( 1 )
    {
      v2 = *((_QWORD *)this + 10) + 128LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v2, 0LL);
      *(_QWORD *)(v2 + 8) = KeGetCurrentThread();
      IsIdle = VIDMM_PAGING_QUEUE::IsIdle(this);
      v4 = *((_QWORD *)this + 10) + 128LL;
      LOBYTE(v2) = IsIdle;
      *(_QWORD *)(v4 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v4, 0LL);
      KeLeaveCriticalRegion();
      if ( (_BYTE)v2 )
        break;
      KeWaitForSingleObject(*((PVOID *)this + 15), Executive, 0, 0, 0LL);
    }
  }
}
