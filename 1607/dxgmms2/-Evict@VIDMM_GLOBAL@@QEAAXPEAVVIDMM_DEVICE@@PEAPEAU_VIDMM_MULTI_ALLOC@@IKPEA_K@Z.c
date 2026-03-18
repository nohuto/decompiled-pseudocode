/*
 * XREFs of ?Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K@Z @ 0x1C005942C
 * Callers:
 *     ?VidMmEvict@@YAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K@Z @ 0x1C0011960 (-VidMmEvict@@YAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K@Z.c)
 *     ?VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C008C400 (-VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00102A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C001033C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     Template_pq @ 0x1C001E5A8 (Template_pq.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0053A70 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1C005C5E8 (-UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z.c)
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
  struct _VIDMM_MULTI_ALLOC **i; // r15
  struct _VIDMM_MULTI_ALLOC *v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rcx
  char v14; // r9
  struct _KTHREAD **v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
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
      DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v12 + 320));
      v15 = *(struct _KTHREAD ***)(v12 + 320);
      *(_BYTE *)(v12 + 98) = 1;
      DXGFASTMUTEX::Release(v15, v16, v17, v18);
    }
    v13 = *((_BYTE *)v11 + 25) & 1;
    if ( !((unsigned int)v13 | *((_DWORD *)v11 + 42)) && !*((_DWORD *)v11 + 43) )
    {
      _InterlockedIncrement((volatile signed __int32 *)v11 + 45);
      memset(v20, 0, sizeof(v20));
      LODWORD(v20[0]) = 207;
      v20[2] = v11;
      LODWORD(v20[4]) = a5;
      v14 = dword_1C00353D8 || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 1) + 8LL) + 64LL) & 1) != 0;
      VIDMM_GLOBAL::QueueDeferredCommand(
        this,
        (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(*((_QWORD *)v11 + 1) + 80LL) + 168LL * (*(_DWORD *)(v12 + 76) & 0x3F)),
        (struct _VIDMM_DEFERRED_COMMAND *)v20,
        v14,
        0LL);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
    {
      LODWORD(v19) = *((_DWORD *)v11 + 42);
      Template_pq(v13, &EventVidMmEvict, v9, v11, v19);
    }
  }
}
