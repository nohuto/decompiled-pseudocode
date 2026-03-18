/*
 * XREFs of ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0035A78
 * Callers:
 *     ?VidMmWaitForFences@@YAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z @ 0x1C000E4D0 (-VidMmWaitForFences@@YAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C002F454 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00341E0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1C003B4F8 (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGIN.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00400F4 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C004D95C (-ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C00518BC (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAH@Z @ 0x1C0051AF8 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAH@Z.c)
 *     ?VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C0055290 (-VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@.c)
 * Callees:
 *     VidSchIsMonitoredFenceSignaled @ 0x1C000614C (VidSchIsMonitoredFenceSignaled.c)
 *     VidSchSubmitWaitFromCpu @ 0x1C0006CC0 (VidSchSubmitWaitFromCpu.c)
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$01$0GOHJFDFG@@@QEAAPEA_KI@Z @ 0x1C000EA98 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$01$0GOHJFDFG@@@QEAAPEA_KI@Z.c)
 */

void __fastcall VIDMM_GLOBAL::WaitForFences(
        VIDMM_GLOBAL *this,
        struct _VIDSCH_SYNC_OBJECT **a2,
        char *a3,
        unsigned int a4,
        char *a5)
{
  struct _VIDSCH_SYNC_OBJECT **v5; // rax
  char *v7; // rbx
  char *v8; // rcx
  __int64 v10; // r14
  __int64 v12; // rdi
  unsigned int v13; // r14d
  unsigned __int64 *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r15
  __int64 v17; // rax
  signed __int64 v18; // rsi
  __int64 v19; // r8
  signed __int64 v20; // r12
  unsigned __int64 v21; // rdx
  PRKEVENT Event; // [rsp+50h] [rbp-61h] BYREF
  struct _VIDSCH_SYNC_OBJECT **v23; // [rsp+58h] [rbp-59h] BYREF
  char v24; // [rsp+60h] [rbp-51h] BYREF
  int v25; // [rsp+70h] [rbp-41h]
  int v26; // [rsp+78h] [rbp-39h] BYREF
  __int64 v27; // [rsp+80h] [rbp-31h]
  __int64 v28; // [rsp+88h] [rbp-29h]
  int v29; // [rsp+90h] [rbp-21h]
  __int128 v30; // [rsp+98h] [rbp-19h]
  PVOID P; // [rsp+A8h] [rbp-9h] BYREF
  char v32; // [rsp+B0h] [rbp-1h] BYREF
  int v33; // [rsp+C0h] [rbp+Fh]

  Event = 0LL;
  v5 = 0LL;
  v25 = 0;
  v7 = a5;
  v8 = 0LL;
  v33 = 0;
  v10 = a4;
  P = 0LL;
  LODWORD(v12) = a4;
  v23 = 0LL;
  if ( a5 && !*((_BYTE *)this + 4616) )
  {
    v16 = NonPagedPoolZeroedArray<unsigned __int64,2,1853444950>::AllocateElements(&P, a4);
    v17 = NonPagedPoolZeroedArray<unsigned __int64,2,1853444950>::AllocateElements(&v23, v10);
    if ( !v16 || !v17 )
      goto LABEL_18;
    v12 = 0LL;
    if ( (_DWORD)v10 )
    {
      v18 = a3 - a5;
      v19 = v10;
      v20 = (char *)a2 - a5;
      do
      {
        v21 = *(_QWORD *)&v7[v18];
        if ( *(_QWORD *)v7 <= v21 || *(_QWORD *)v7 - v21 < 0x7FFFFFFF )
        {
          *(_QWORD *)(v16 + 8 * v12) = v21;
          *(_QWORD *)(v17 + 8 * v12) = *(_QWORD *)&v7[v20];
          v12 = (unsigned int)(v12 + 1);
        }
        v7 += 8;
        --v19;
      }
      while ( v19 );
    }
    v8 = (char *)P;
    v5 = v23;
    a3 = (char *)P;
    a2 = v23;
  }
  v13 = 0;
  if ( !(_DWORD)v12 )
    goto LABEL_9;
  v14 = (unsigned __int64 *)a3;
  while ( 1 )
  {
    v15 = *(unsigned __int64 *)((char *)v14 + (char *)a2 - a3);
    if ( v15 )
    {
      if ( !VidSchIsMonitoredFenceSignaled(v15, *v14) )
        break;
    }
    ++v13;
    ++v14;
    if ( v13 >= (unsigned int)v12 )
      goto LABEL_8;
  }
  v27 = 0LL;
  v28 = 0LL;
  v26 = 48;
  v29 = 512;
  v30 = 0LL;
  if ( (int)ObCreateObject(0LL, ExEventObjectType, &v26, 0LL, 0LL, 24, 0, 0, &Event) >= 0 )
  {
    KeInitializeEvent(Event, SynchronizationEvent, 0);
    ObfReferenceObject(Event);
    if ( (int)VidSchSubmitWaitFromCpu(
                v12,
                (__int64)a2,
                (__int64 *)a3,
                (__int64)Event,
                0,
                1,
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 384LL) + 184LL)) < 0 )
      ObfDereferenceObject(Event);
    else
      KeWaitForSingleObject(Event, Executive, 0, 0, 0LL);
  }
LABEL_18:
  if ( Event )
    ObfDereferenceObject(Event);
LABEL_8:
  v5 = v23;
  v8 = (char *)P;
LABEL_9:
  if ( v5 != (struct _VIDSCH_SYNC_OBJECT **)&v24 && v5 )
  {
    ExFreePoolWithTag(v5, 0);
    v8 = (char *)P;
  }
  if ( v8 != &v32 )
  {
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
  }
}
