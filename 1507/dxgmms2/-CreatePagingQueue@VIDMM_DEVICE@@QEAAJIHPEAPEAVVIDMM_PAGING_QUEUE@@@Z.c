/*
 * XREFs of ?CreatePagingQueue@VIDMM_DEVICE@@QEAAJIHPEAPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C0058838
 * Callers:
 *     ?VidMmCreatePagingQueue@@YAJPEAVVIDMM_DEVICE@@IHPEAPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C000E220 (-VidMmCreatePagingQueue@@YAJPEAVVIDMM_DEVICE@@IHPEAPEAVVIDMM_PAGING_QUEUE@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_GVIDMM_PAGING_QUEUE@@QEAAPEAXI@Z @ 0x1C00102F8 (--_GVIDMM_PAGING_QUEUE@@QEAAPEAXI@Z.c)
 *     ??0VIDMM_PAGING_QUEUE@@QEAA@XZ @ 0x1C0036154 (--0VIDMM_PAGING_QUEUE@@QEAA@XZ.c)
 *     ?InitializePagingQueue@VIDMM_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IPEAVVIDMM_GLOBAL@@W4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1C00361B4 (-InitializePagingQueue@VIDMM_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IPEAVVIDMM_GLOBAL@@W4VIDMM_PAG.c)
 */

__int64 __fastcall VIDMM_DEVICE::CreatePagingQueue(
        VIDMM_DEVICE *this,
        int a2,
        __int64 a3,
        struct VIDMM_PAGING_QUEUE **a4)
{
  VIDMM_PAGING_QUEUE *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  int v11; // edi

  v7 = (VIDMM_PAGING_QUEUE *)operator new(0x90uLL, 0x38346956u, PagedPool);
  if ( v7 )
    v7 = VIDMM_PAGING_QUEUE::VIDMM_PAGING_QUEUE(v7);
  *a4 = v7;
  if ( v7 )
  {
    v11 = VIDMM_PAGING_QUEUE::InitializePagingQueue((__int64)v7, (__int64)this, a2, *(_QWORD *)this, 0);
    if ( v11 < 0 )
    {
      if ( *a4 )
        VIDMM_PAGING_QUEUE::`scalar deleting destructor'(*a4);
      *a4 = 0LL;
    }
    return (unsigned int)v11;
  }
  else
  {
    _InterlockedIncrement(&dword_1C00275EC);
    v9 = WdLogNewEntry5_WdLowResource(v8);
    *(_QWORD *)(v9 + 24) = 435LL;
    WdLogEvent5_WdLowResource(v9);
    return 3221225495LL;
  }
}
