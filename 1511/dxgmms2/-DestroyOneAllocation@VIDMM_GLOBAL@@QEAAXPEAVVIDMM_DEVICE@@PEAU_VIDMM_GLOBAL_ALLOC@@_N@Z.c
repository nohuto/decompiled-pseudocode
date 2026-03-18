/*
 * XREFs of ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C004DF58
 * Callers:
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C003D578 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C003E220 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?DestroyAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C004FC0C (-DestroyAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_DXGK_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0051730 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C00519C0 (-DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C006025C (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C0060494 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0011580 (--3@YAXPEAX@Z.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0011DB8 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011E30 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011EF0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     Template_pppqxqqqqqqqpppqqqqqqqqqqtp @ 0x1C0015608 (Template_pppqxqqqqqqqpppqqqqqqqqqqtp.c)
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     Template_pcc @ 0x1C001CE14 (Template_pcc.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00461E4 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00472F0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C004C618 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C004D1F0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C005E70C (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005F5FC (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 */

void __fastcall VIDMM_GLOBAL::DestroyOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        char a4)
{
  int v4; // r13d
  VIDMM_GLOBAL *v7; // rdi
  __int64 v8; // rbp
  int v9; // eax
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  char *v17; // rax
  __int64 *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r10
  int v24; // esi
  int v25; // r14d
  int v26; // r15d
  int v27; // r12d
  int v28; // edi
  __int64 v29; // rax
  void *v30; // rdi
  __int64 v31; // rcx
  void *v32; // rcx
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v33[2]; // [rsp+20h] [rbp-1E8h]
  struct _KEVENT **v34; // [rsp+28h] [rbp-1E0h]
  int v35; // [rsp+48h] [rbp-1C0h]
  int v36; // [rsp+60h] [rbp-1A8h]
  int v37; // [rsp+F0h] [rbp-118h]
  char v38; // [rsp+F4h] [rbp-114h]
  int v39; // [rsp+F8h] [rbp-110h]
  char v40; // [rsp+FCh] [rbp-10Ch]
  int v41; // [rsp+100h] [rbp-108h]
  _QWORD v43[10]; // [rsp+140h] [rbp-C8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+190h] [rbp-78h] BYREF

  LOBYTE(v4) = 0;
  v7 = this;
  if ( a2 )
    v8 = *((_QWORD *)a2 + 3);
  else
    v8 = 0LL;
  if ( (*((_DWORD *)a3 + 21) & 4) != 0 )
  {
    if ( *((_QWORD *)a3 + 16) || *((_QWORD *)a3 + 32) )
    {
      memset(v43, 0, sizeof(v43));
      v9 = *((_DWORD *)a3 + 19) & 0x3F;
      LODWORD(v43[0]) = 112;
      HIDWORD(v43[0]) = v9;
      v43[5] = a3;
      LODWORD(v43[6]) = 0;
      VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(v7, (struct _VIDMM_SYSTEM_COMMAND *)v43);
    }
    v10 = *(_QWORD *)(*((_QWORD *)a3 + 12) + 40LL);
    if ( (*((_DWORD *)a3 + 21) & 2) != 0 )
    {
      VIDMM_SEGMENT::UnlockAllocationBackingStore(v7, a3, 0LL);
      VIDMM_GLOBAL::ReturnPinnedBackingStore(v7, *((_QWORD *)a3 + 1));
      *((_DWORD *)a3 + 21) &= ~2u;
    }
    KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a3 + 12) + 8LL), &ApcState);
    VIDMM_GLOBAL::CloseOneAllocation(v7, (struct _KEVENT *)(v10 - 40), 0LL, 0, 0, 0LL);
    KeUnstackDetachProcess(&ApcState);
    *((_QWORD *)a3 + 12) = 0LL;
  }
  if ( a4 )
    VIDMM_GLOBAL::WaitForAllPagingEngines(v7, a3);
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v7 + 39840, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v13 = *((_DWORD *)v7 + 9964);
      if ( v13 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v11, &EventBlockThread, v12, v13);
    }
    ExAcquirePushLockExclusiveEx((char *)v7 + 39840, 0LL);
  }
  *((_QWORD *)v7 + 4981) = KeGetCurrentThread();
  DXGFASTMUTEX::Acquire(*((union _LARGE_INTEGER **)a3 + 39));
  v17 = (char *)a3 + 400;
  if ( *((_QWORD *)a3 + 50) )
  {
    v14 = *(_QWORD *)v17;
    v18 = (__int64 *)*((_QWORD *)a3 + 51);
    if ( *(char **)(*(_QWORD *)v17 + 8LL) != v17 || (char *)*v18 != v17 )
      __fastfail(3u);
    *v18 = v14;
    *(_QWORD *)(v14 + 8) = v18;
    *(_QWORD *)v17 = 0LL;
  }
  DXGFASTMUTEX::Release(*((DXGFASTMUTEX **)a3 + 39), v14, v15, v16);
  *((_QWORD *)v7 + 4981) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v7 + 39840, 0LL);
  KeLeaveCriticalRegion();
  v22 = **((unsigned int **)a3 + 59);
  if ( (v22 & 0x30000008) != 0 && ((v22 & 0x4000000) == 0 || !*((_DWORD *)a3 + 95)) )
  {
    if ( (v22 & 0x10000008) != 0 )
      MmUnmapViewInSystemSpace(*((PVOID *)a3 + 45));
    if ( (*((_BYTE *)a3 + 88) & 1) != 0 )
      ObfDereferenceObject(*((PVOID *)a3 + 44));
    VidMmDereferenceObjectAsync(*((PVOID *)a3 + 44));
    *((_QWORD *)a3 + 44) = 0LL;
  }
  if ( (*((_DWORD *)a3 + 21) & 0x10) != 0 )
  {
    v22 = (unsigned int)(*((_DWORD *)a3 + 104) - 1);
    v19 = *(_QWORD *)(*((_QWORD *)v7 + 3) + 3152LL);
    ++*(_QWORD *)(56 * v22 + v19 + 80);
  }
  LOBYTE(v22) = bTracingEnabled;
  if ( bTracingEnabled )
  {
    v19 = *((_QWORD *)a3 + 59);
    if ( *(_DWORD *)(v19 + 4) && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    {
      LOBYTE(v34) = *((_BYTE *)a3 + 416);
      *(_BYTE *)&v33[0].0 = *(_BYTE *)(v19 + 4);
      Template_pcc(v22, &EventReportOfferAllocation, v20, a3, *(_QWORD *)&v33[0].0, v34);
      LOBYTE(v22) = bTracingEnabled;
    }
    if ( (_BYTE)v22 )
    {
      v20 = *((_QWORD *)a3 + 5);
      if ( v20 )
        v19 = *(_QWORD *)(v20 + 24);
      else
        v19 = 0LL;
      if ( v8 )
        v23 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 16LL);
      else
        LOBYTE(v23) = 0;
      if ( v8 )
        v21 = *(_QWORD *)(*(_QWORD *)(v8 + 40) + 64LL);
      else
        v21 = 0LL;
      LOBYTE(v24) = 0;
      LOBYTE(v25) = 0;
      LOBYTE(v26) = 0;
      LOBYTE(v27) = 0;
      LOBYTE(v41) = 0;
      LOBYTE(v39) = 0;
      LOBYTE(v37) = 0;
      v40 = 0;
      v38 = 0;
      v7 = this;
      if ( v19 )
      {
        v24 = *(_DWORD *)v19;
        v25 = *(_DWORD *)(v19 + 4);
        v26 = *(_DWORD *)(v19 + 8);
        v27 = *(_DWORD *)(v19 + 12);
        v4 = *(_DWORD *)(v19 + 16);
        v41 = *(_DWORD *)(v19 + 20);
        v39 = *(_DWORD *)(v19 + 24);
        v37 = *(_DWORD *)(v19 + 28);
        v28 = *(_DWORD *)(v19 + 32);
        v19 = *(unsigned int *)(v19 + 36);
        v40 = v28;
        v7 = this;
        v38 = v19;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        Template_pppqxqqqqqqqpppqqqqqqqqqqtp(
          **((unsigned int **)a3 + 59),
          &EventDestroyAdapterAllocation,
          v20,
          v21,
          v8,
          v23,
          **((_DWORD **)a3 + 59),
          *((_QWORD *)a3 + 2),
          *((_DWORD *)a3 + 8),
          v35,
          *((_DWORD *)a3 + 17),
          *((_DWORD *)a3 + 18),
          v36,
          *((_DWORD *)a3 + 16),
          *((_DWORD *)a3 + 94),
          (char)a3,
          v20,
          0,
          v24,
          v25,
          v26,
          v27,
          v4,
          v41,
          v39,
          v37,
          v40,
          v38,
          (*((_DWORD *)a3 + 21) & 2) != 0,
          *((_QWORD *)a3 + 44));
    }
  }
  *((_QWORD *)v7 + 952) += *((_QWORD *)a3 + 2);
  ++*((_DWORD *)v7 + 1902);
  v29 = *((_QWORD *)a3 + 2);
  if ( (**((_DWORD **)a3 + 59) & 0x20000000) != 0 )
  {
    ++*((_DWORD *)v7 + 1934);
    *((_QWORD *)v7 + 968) += v29;
  }
  else
  {
    ++*((_DWORD *)v7 + 1938);
    *((_QWORD *)v7 + 970) += v29;
  }
  *((_QWORD *)v7 + 5002) -= *((_QWORD *)a3 + 2);
  v30 = (void *)*((_QWORD *)a3 + 39);
  if ( v30 )
  {
    DXGFASTMUTEX::~DXGFASTMUTEX(*((DXGFASTMUTEX **)a3 + 39), v19, v20, v21);
    operator delete(v30);
  }
  v31 = *((_QWORD *)a3 + 59);
  if ( v31 )
  {
    v32 = *(void **)(v31 + 16);
    if ( v32 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v32, 0xFFFFFFFF) == 1 )
        operator delete(v32);
      *(_QWORD *)(*((_QWORD *)a3 + 59) + 16LL) = 0LL;
    }
  }
  if ( !*((_DWORD *)a3 + 95) )
  {
    operator delete(*((void **)a3 + 59));
    *((_DWORD *)a3 + 19) |= 0x200000u;
    operator delete(a3);
  }
}
