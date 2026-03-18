/*
 * XREFs of ?Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K@Z @ 0x1C0051E8C
 * Callers:
 *     ?VidMmEvict@@YAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K@Z @ 0x1C0014040 (-VidMmEvict@@YAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K@Z.c)
 *     ?VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C007D218 (-VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011E30 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011EF0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     Template_pq @ 0x1C001D234 (Template_pq.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C004BB00 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1C0053680 (-UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::Evict(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        struct _VIDMM_MULTI_ALLOC **a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  struct _VIDMM_MULTI_ALLOC **v6; // rdi
  __int64 v7; // rbx
  __int64 v9; // r8
  struct _VIDMM_MULTI_ALLOC **i; // r14
  struct _VIDMM_MULTI_ALLOC *v11; // rbx
  __int64 v12; // rsi
  DXGFASTMUTEX *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // [rsp+20h] [rbp-78h]
  _QWORD v20[10]; // [rsp+30h] [rbp-68h] BYREF

  v6 = a3;
  v7 = a4;
  VIDMM_DEVICE::UnreferenceAllocationList(a2, a3, a4, a6);
  for ( i = &v6[v7]; v6 != i; ++v6 )
  {
    v11 = *v6;
    v12 = **(_QWORD **)*v6;
    if ( (a5 & 2) != 0 )
    {
      DXGFASTMUTEX::Acquire(*(union _LARGE_INTEGER **)(v12 + 312));
      v13 = *(DXGFASTMUTEX **)(v12 + 312);
      *(_BYTE *)(v12 + 95) = 1;
      DXGFASTMUTEX::Release(v13, v14, v15, v16);
    }
    v17 = *((_BYTE *)v11 + 25) & 1;
    if ( !((unsigned int)v17 | *((_DWORD *)v11 + 38)) && !*((_DWORD *)v11 + 39) )
    {
      _InterlockedIncrement((volatile signed __int32 *)v11 + 41);
      memset(v20, 0, sizeof(v20));
      v18 = *(_DWORD *)(v12 + 76);
      LODWORD(v20[0]) = 207;
      v20[2] = v11;
      LODWORD(v20[4]) = a5;
      VIDMM_GLOBAL::QueueDeferredCommand(
        this,
        (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(*((_QWORD *)v11 + 1) + 72LL) + 160LL * (v18 & 0x3F)),
        (struct _VIDMM_DEFERRED_COMMAND *)v20,
        dword_1C002F3CC != 0,
        0LL);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
    {
      LODWORD(v19) = *((_DWORD *)v11 + 38);
      Template_pq(v17, &EventVidMmEvict, v9, v11, v19);
    }
  }
}
