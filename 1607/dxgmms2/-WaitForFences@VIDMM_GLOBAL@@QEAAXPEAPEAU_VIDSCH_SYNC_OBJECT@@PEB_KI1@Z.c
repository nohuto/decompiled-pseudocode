/*
 * XREFs of ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0059120
 * Callers:
 *     ?VidMmWaitForFences@@YAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z @ 0x1C00135F0 (-VidMmWaitForFences@@YAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00418A8 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C004FBC4 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004FC60 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0053A70 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1C0054610 (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGIN.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C0054A50 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C0055C30 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00629C0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00891C0 (-ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C008C400 (-VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@.c)
 * Callees:
 *     VidSchSubmitWaitFromCpu @ 0x1C000CA60 (VidSchSubmitWaitFromCpu.c)
 *     VidSchIsMonitoredFenceSignaled @ 0x1C000FE58 (VidSchIsMonitoredFenceSignaled.c)
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     memset @ 0x1C0014E40 (memset.c)
 */

void __fastcall VIDMM_GLOBAL::WaitForFences(
        VIDMM_GLOBAL *this,
        struct _VIDSCH_SYNC_OBJECT **a2,
        unsigned __int64 *a3,
        unsigned int a4,
        char *a5)
{
  unsigned int v5; // esi
  char *v6; // rdi
  __int64 *v9; // r14
  unsigned __int64 v10; // rbx
  _BYTE *PoolWithTag; // rax
  char *v12; // r15
  _BYTE *v13; // rax
  char *v14; // r9
  signed __int64 v15; // r14
  signed __int64 v16; // r12
  unsigned __int64 v17; // rdx
  unsigned int v18; // ebx
  unsigned __int64 *v19; // r15
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  PRKEVENT Event; // [rsp+58h] [rbp-61h] BYREF
  PVOID P; // [rsp+60h] [rbp-59h]
  _BYTE v25[16]; // [rsp+68h] [rbp-51h] BYREF
  int v26; // [rsp+78h] [rbp-41h]
  int v27; // [rsp+80h] [rbp-39h] BYREF
  __int64 v28; // [rsp+88h] [rbp-31h]
  __int64 v29; // [rsp+90h] [rbp-29h]
  int v30; // [rsp+98h] [rbp-21h]
  __int128 v31; // [rsp+A0h] [rbp-19h]
  PVOID v32; // [rsp+B0h] [rbp-9h]
  _BYTE v33[16]; // [rsp+B8h] [rbp-1h] BYREF
  int v34; // [rsp+C8h] [rbp+Fh]

  v5 = a4;
  v6 = a5;
  v9 = (__int64 *)a3;
  LODWORD(a3) = 0;
  v10 = a4;
  Event = 0LL;
  v32 = 0LL;
  v34 = 0;
  P = 0LL;
  v26 = 0;
  if ( !a5 || *((_BYTE *)this + 4616) )
    goto LABEL_21;
  if ( a4 > 2 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a4 < 8 )
    {
      v12 = 0LL;
      goto LABEL_8;
    }
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * a4, 0x6E795356u);
    LODWORD(a3) = 0;
  }
  else
  {
    PoolWithTag = v33;
  }
  v32 = PoolWithTag;
  v34 = v10;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 8 * v10);
    LODWORD(a3) = 0;
  }
  v12 = (char *)v32;
LABEL_8:
  if ( (unsigned int)v10 <= 2 )
  {
    v13 = v25;
LABEL_10:
    P = v13;
    v26 = v10;
    if ( v13 )
      memset(v13, 0, 8 * v10);
    v14 = (char *)P;
    LODWORD(a3) = 0;
    goto LABEL_13;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v10 >= 8 )
  {
    v13 = ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v10, 0x6E795356u);
    goto LABEL_10;
  }
  v14 = 0LL;
LABEL_13:
  if ( !v12 || !v14 )
    goto LABEL_31;
  v5 = 0;
  if ( (_DWORD)v10 )
  {
    v15 = (char *)v9 - a5;
    a3 = (unsigned __int64 *)v10;
    v16 = (char *)a2 - a5;
    do
    {
      v17 = *(_QWORD *)&v6[v15];
      if ( *(_QWORD *)v6 <= v17 || *(_QWORD *)v6 - v17 < 0x7FFFFFFF )
      {
        v21 = v5++;
        v22 = 8 * v21;
        *(_QWORD *)&v12[v22] = v17;
        *(_QWORD *)&v14[v22] = *(_QWORD *)&v6[v16];
      }
      v6 += 8;
      a3 = (unsigned __int64 *)((char *)a3 - 1);
    }
    while ( a3 );
  }
  v9 = (__int64 *)v32;
  a2 = (struct _VIDSCH_SYNC_OBJECT **)P;
LABEL_21:
  v18 = (unsigned int)a3;
  if ( !v5 )
    goto LABEL_22;
  v19 = (unsigned __int64 *)v9;
  while ( 1 )
  {
    v20 = *(unsigned __int64 *)((char *)v19 + (char *)a2 - (char *)v9);
    if ( v20 )
    {
      if ( !VidSchIsMonitoredFenceSignaled(v20, *v19) )
        break;
    }
    ++v18;
    ++v19;
    if ( v18 >= v5 )
      goto LABEL_22;
  }
  v27 = 48;
  v28 = 0LL;
  v30 = 512;
  v29 = 0LL;
  v31 = 0LL;
  if ( (int)ObCreateObject(0LL, ExEventObjectType, &v27, 0LL, 0LL, 24, 0, 0, &Event) >= 0 )
  {
    KeInitializeEvent(Event, SynchronizationEvent, 0);
    ObfReferenceObject(Event);
    if ( (int)VidSchSubmitWaitFromCpu(
                v5,
                (__int64)a2,
                v9,
                (__int64)Event,
                0,
                1,
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 384LL) + 216LL)) < 0 )
      ObfDereferenceObject(Event);
    else
      KeWaitForSingleObject(Event, Executive, 0, 0, 0LL);
  }
LABEL_31:
  if ( Event )
    ObfDereferenceObject(Event);
LABEL_22:
  if ( P != v25 && P )
    ExFreePoolWithTag(P, 0);
  if ( v32 != v33 )
  {
    if ( v32 )
      ExFreePoolWithTag(v32, 0);
  }
}
