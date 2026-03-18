/*
 * XREFs of ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C004BB00
 * Callers:
 *     ?CommitAllocationList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1C0043A78 (-CommitAllocationList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_ALLOC@@_KPEA_K@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0044208 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C004C664 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 *     ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C004C7CC (-PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAH@Z @ 0x1C004CBB0 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAH@Z.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C004D7B0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_DXGK_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0051730 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K@Z @ 0x1C0051E8C (-Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K@Z.c)
 *     ?Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C0051FD0 (-Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z.c)
 *     ?EvictionTest@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C007AC00 (-EvictionTest@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOB.c)
 *     ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C007AD24 (-ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?SetOneAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@I@Z @ 0x1C007BF04 (-SetOneAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@I@Z.c)
 *     ?VidMmiUpdateGpuVirtualAddress@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C007E2C0 (-VidMmiUpdateGpuVirtualAddress@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     ?GetNewPacket@VIDMM_PAGING_QUEUE@@QEAAPEAUVIDMM_PAGING_QUEUE_PACKET@@XZ @ 0x1C003AFF4 (-GetNewPacket@VIDMM_PAGING_QUEUE@@QEAAPEAUVIDMM_PAGING_QUEUE_PACKET@@XZ.c)
 *     ?AppendReadyPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z @ 0x1C003B0B0 (-AppendReadyPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0051B80 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueueDeferredCommand(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct _VIDMM_DEFERRED_COMMAND *a3,
        char a4,
        unsigned __int64 *a5)
{
  struct _VIDSCH_SYNC_OBJECT *v5; // r13
  __int64 v7; // rbx
  struct VIDMM_PAGING_QUEUE_PACKET *v11; // rbx
  __int64 v12; // r15
  struct VIDMM_PAGING_QUEUE_PACKET *NewPacket; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int64 v22; // rbx
  unsigned __int64 v23; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-50h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v25; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v26; // [rsp+48h] [rbp-40h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v27; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v28; // [rsp+98h] [rbp+10h] BYREF

  v5 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)a2 + 11);
  v7 = *((_QWORD *)a2 + 10);
  v28 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v7 + 104, 0LL);
  *(_QWORD *)(v7 + 112) = KeGetCurrentThread();
  v11 = (struct VIDMM_PAGING_QUEUE *)((char *)a2 + 16);
  v12 = *((_QWORD *)a2 + 13);
  *((_QWORD *)a2 + 13) = v12 + 1;
  NewPacket = (struct VIDMM_PAGING_QUEUE_PACKET *)*((_QWORD *)a2 + 2);
  v14 = *(_QWORD *)NewPacket;
  if ( *((struct VIDMM_PAGING_QUEUE **)NewPacket + 1) != (struct VIDMM_PAGING_QUEUE *)((char *)a2 + 16)
    || *(struct VIDMM_PAGING_QUEUE_PACKET **)(v14 + 8) != NewPacket )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v11 = v14;
  *(_QWORD *)(v14 + 8) = v11;
  v15 = *((_QWORD *)a2 + 10) + 104LL;
  *(_QWORD *)(v15 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v15, 0LL);
  KeLeaveCriticalRegion();
  if ( NewPacket != v11
    || (NewPacket = (struct VIDMM_PAGING_QUEUE_PACKET *)operator new(0x98uLL, 0x38346956u, PagedPool)) != 0LL )
  {
    memset(NewPacket, 0, 0x98uLL);
    *((_QWORD *)NewPacket + 5) = v12;
  }
  if ( !*((_QWORD *)a3 + 1) )
    *((_QWORD *)a3 + 1) = *(_QWORD *)(*((_QWORD *)a3 + 2) + 8LL);
  for ( ; !NewPacket; NewPacket = VIDMM_PAGING_QUEUE::GetNewPacket(a2) )
  {
    v24 = *((_QWORD *)a2 + 12);
    v25 = v5;
    VIDMM_GLOBAL::WaitForFences(this, &v25, &v24, 1u, 0LL);
  }
  v16 = *(_OWORD *)a3;
  v17 = *((_OWORD *)a3 + 1);
  *((_WORD *)NewPacket + 12) = 257;
  *((_OWORD *)NewPacket + 3) = v16;
  v18 = *((_OWORD *)a3 + 2);
  *((_OWORD *)NewPacket + 4) = v17;
  v19 = *((_OWORD *)a3 + 3);
  *((_OWORD *)NewPacket + 5) = v18;
  v20 = *((_OWORD *)a3 + 4);
  *((_OWORD *)NewPacket + 6) = v19;
  *((_OWORD *)NewPacket + 7) = v20;
  if ( a4 )
    *((_QWORD *)NewPacket + 9) = &v28;
  if ( *(_DWORD *)a3 == 206 )
  {
    v22 = MEMORY[0xFFFFF78000000320];
    *((_QWORD *)NewPacket + 16) = v22 * KeQueryTimeIncrement();
  }
  VIDMM_PAGING_QUEUE::AppendReadyPacket(a2, NewPacket, &v23);
  if ( a4 )
  {
    v26 = v23;
    v27 = v5;
    VIDMM_GLOBAL::WaitForFences(this, &v27, &v26, 1u, 0LL);
  }
  else if ( a5 )
  {
    *a5 = v23;
    return 259LL;
  }
  return v28;
}
