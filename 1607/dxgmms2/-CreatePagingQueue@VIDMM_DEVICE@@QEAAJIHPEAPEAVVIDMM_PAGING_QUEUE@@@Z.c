/*
 * XREFs of ?CreatePagingQueue@VIDMM_DEVICE@@QEAAJIHPEAPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C005B808
 * Callers:
 *     ?VidMmCreatePagingQueue@@YAJPEAVVIDMM_DEVICE@@IHPEAPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C0011C60 (-VidMmCreatePagingQueue@@YAJPEAVVIDMM_DEVICE@@IHPEAPEAVVIDMM_PAGING_QUEUE@@@Z.c)
 * Callees:
 *     ??_GVIDMM_PAGING_QUEUE@@QEAAPEAXI@Z @ 0x1C000F74C (--_GVIDMM_PAGING_QUEUE@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000F920 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0VIDMM_PAGING_QUEUE@@QEAA@XZ @ 0x1C00458A8 (--0VIDMM_PAGING_QUEUE@@QEAA@XZ.c)
 *     ?InitializePagingQueue@VIDMM_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IPEAVVIDMM_GLOBAL@@W4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1C0045914 (-InitializePagingQueue@VIDMM_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IPEAVVIDMM_GLOBAL@@W4VIDMM_PAG.c)
 */

__int64 __fastcall VIDMM_DEVICE::CreatePagingQueue(
        VIDMM_DEVICE *this,
        int a2,
        __int64 a3,
        struct VIDMM_PAGING_QUEUE **a4)
{
  VIDMM_PAGING_QUEUE *v7; // rax
  __int64 v8; // rcx
  int v9; // edi
  __int64 v11; // rax

  v7 = (VIDMM_PAGING_QUEUE *)operator new(0xA0uLL, 0x38346956u, PagedPool);
  if ( v7 )
    v7 = VIDMM_PAGING_QUEUE::VIDMM_PAGING_QUEUE(v7);
  *a4 = v7;
  if ( v7 )
  {
    v9 = VIDMM_PAGING_QUEUE::InitializePagingQueue((__int64)v7, (__int64)this, a2, *(_QWORD *)this, 0);
    if ( v9 < 0 )
    {
      if ( *a4 )
        VIDMM_PAGING_QUEUE::`scalar deleting destructor'(*a4);
      *a4 = 0LL;
    }
    return (unsigned int)v9;
  }
  else
  {
    _InterlockedIncrement(&dword_1C003567C);
    v11 = WdLogNewEntry5_WdLowResource(v8);
    *(_QWORD *)(v11 + 24) = 459LL;
    WdLogEvent5_WdLowResource(v11);
    return 3221225495LL;
  }
}
