/*
 * XREFs of ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C003096C
 * Callers:
 *     ?DestroyAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C0030FA0 (-DestroyAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00400F4 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_DXGK_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C004C4FC (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C004C8E0 (-DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C0059EA8 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C005EE00 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C005EFAC (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 * Callees:
 *     ??_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z @ 0x1C00040C0 (--_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z.c)
 *     ?ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z @ 0x1C00040D8 (-ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z.c)
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C00040F4 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005B60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005BE8 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006214 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     Template_pppqxqqqqqqqpppqqqqqqqqqqtp @ 0x1C0006EF8 (Template_pppqxqqqqqqqpppqqqqqqqqqqtp.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     Template_pcc @ 0x1C000F3F0 (Template_pcc.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C002F414 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0030478 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C0032600 (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0051A04 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00534AC (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00718AC (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 */

void __fastcall VIDMM_GLOBAL::DestroyOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        char a4)
{
  int v4; // r13d
  VIDMM_GLOBAL *v7; // rdi
  __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  char *v14; // rax
  __int64 *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  int *v20; // rdx
  __int64 v21; // r10
  __int64 v22; // r9
  int v23; // ebp
  int v24; // r14d
  int v25; // r15d
  int v26; // r12d
  __int64 v27; // rax
  DXGFASTMUTEX *v28; // rcx
  __int64 v29; // rax
  VIDMM_FLIP_QUEUE_REFERENCES *v30; // rcx
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v31[2]; // [rsp+20h] [rbp-1D8h]
  struct _KEVENT **v32; // [rsp+28h] [rbp-1D0h]
  int v33; // [rsp+48h] [rbp-1B0h]
  int v34; // [rsp+60h] [rbp-198h]
  int v35; // [rsp+F0h] [rbp-108h]
  int v36; // [rsp+F4h] [rbp-104h]
  int v37; // [rsp+F8h] [rbp-100h]
  int v38; // [rsp+FCh] [rbp-FCh]
  int v39; // [rsp+100h] [rbp-F8h]
  _QWORD v41[10]; // [rsp+130h] [rbp-C8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+180h] [rbp-78h] BYREF

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
      memset(v41, 0, sizeof(v41));
      v9 = *((_DWORD *)a3 + 19) & 0x3F;
      LODWORD(v41[0]) = 112;
      HIDWORD(v41[0]) = v9;
      v41[5] = a3;
      LODWORD(v41[6]) = 0;
      VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(v7, (struct _VIDMM_SYSTEM_COMMAND *)v41, 1);
    }
    v10 = *(_QWORD *)(*((_QWORD *)a3 + 12) + 40LL);
    if ( (*((_DWORD *)a3 + 21) & 2) != 0 )
    {
      VIDMM_SEGMENT::UnlockAllocationBackingStore(v7, a3, 0LL);
      VIDMM_GLOBAL::ReturnPinnedBackingStore(v7, *((_QWORD *)a3 + 1));
      *((_DWORD *)a3 + 21) &= ~2u;
    }
    KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a3 + 12) + 8LL), &ApcState);
    VIDMM_GLOBAL::CloseOneAllocation(v7, (struct VIDMM_ALLOC *)(v10 - 40), 0LL, 0, 0, 0LL);
    KeUnstackDetachProcess(&ApcState);
    *((_QWORD *)a3 + 12) = 0LL;
  }
  if ( a4 )
    VIDMM_GLOBAL::WaitForAllPagingEngines(v7, a3);
  DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)v7 + 39840));
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a3 + 39));
  v14 = (char *)a3 + 400;
  if ( *((_QWORD *)a3 + 50) )
  {
    v11 = *(_QWORD *)v14;
    v15 = (__int64 *)*((_QWORD *)a3 + 51);
    if ( *(char **)(*(_QWORD *)v14 + 8LL) != v14 || (char *)*v15 != v14 )
      __fastfail(3u);
    *v15 = v11;
    *(_QWORD *)(v11 + 8) = v15;
    *(_QWORD *)v14 = 0LL;
  }
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a3 + 39), v11, v12, v13);
  *((_QWORD *)v7 + 4981) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v7 + 39840, 0LL);
  KeLeaveCriticalRegion();
  v17 = **((unsigned int **)a3 + 59);
  if ( (v17 & 0x30000008) != 0 && ((v17 & 0x4000000) == 0 || !*((_DWORD *)a3 + 95)) )
  {
    if ( (v17 & 0x10000008) != 0 )
      MmUnmapViewInSystemSpace(*((PVOID *)a3 + 45));
    if ( (*((_BYTE *)a3 + 88) & 1) != 0 )
      ObfDereferenceObject(*((PVOID *)a3 + 44));
    VidMmDereferenceObjectAsync(*((PVOID *)a3 + 44));
    *((_QWORD *)a3 + 44) = 0LL;
  }
  if ( (*((_DWORD *)a3 + 21) & 0x10) != 0 )
  {
    v17 = (unsigned int)(*((_DWORD *)a3 + 104) - 1);
    ++*(_QWORD *)(56 * v17 + *(_QWORD *)(*((_QWORD *)v7 + 3) + 3136LL) + 80);
  }
  LOBYTE(v17) = bTracingEnabled;
  if ( bTracingEnabled )
  {
    v18 = *((_QWORD *)a3 + 59);
    if ( *(_DWORD *)(v18 + 4) && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    {
      LOBYTE(v32) = *((_BYTE *)a3 + 416);
      *(_BYTE *)&v31[0].0 = *(_BYTE *)(v18 + 4);
      Template_pcc(v17, &EventReportOfferAllocation, v16, a3, *(_QWORD *)&v31[0].0, v32);
      LOBYTE(v17) = bTracingEnabled;
    }
    if ( (_BYTE)v17 )
    {
      v19 = *((_QWORD *)a3 + 5);
      if ( v19 )
        v20 = *(int **)(v19 + 24);
      else
        v20 = 0LL;
      if ( v8 )
        v21 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 16LL);
      else
        LOBYTE(v21) = 0;
      if ( v8 )
        v22 = *(_QWORD *)(*(_QWORD *)(v8 + 40) + 64LL);
      else
        v22 = 0LL;
      LOBYTE(v23) = 0;
      LOBYTE(v24) = 0;
      LOBYTE(v25) = 0;
      LOBYTE(v26) = 0;
      LOBYTE(v39) = 0;
      LOBYTE(v37) = 0;
      LOBYTE(v35) = 0;
      LOBYTE(v38) = 0;
      LOBYTE(v36) = 0;
      v7 = this;
      if ( v20 )
      {
        v23 = *v20;
        v24 = v20[1];
        v25 = v20[2];
        v26 = v20[3];
        v4 = v20[4];
        v39 = v20[5];
        v37 = v20[6];
        v35 = v20[7];
        v38 = v20[8];
        v7 = this;
        v36 = v20[9];
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        Template_pppqxqqqqqqqpppqqqqqqqqqqtp(
          **((unsigned int **)a3 + 59),
          &EventDestroyAdapterAllocation,
          v19,
          v22,
          v8,
          v21,
          **((_DWORD **)a3 + 59),
          *((_QWORD *)a3 + 2),
          *((_DWORD *)a3 + 8),
          v33,
          *((_DWORD *)a3 + 17),
          *((_DWORD *)a3 + 18),
          v34,
          *((_DWORD *)a3 + 16),
          *((_DWORD *)a3 + 94),
          (char)a3,
          v19,
          0,
          v23,
          v24,
          v25,
          v26,
          v4,
          v39,
          v37,
          v35,
          v38,
          v36,
          (*((_DWORD *)a3 + 21) & 2) != 0,
          *((_QWORD *)a3 + 44));
    }
  }
  *((_QWORD *)v7 + 952) += *((_QWORD *)a3 + 2);
  ++*((_DWORD *)v7 + 1902);
  v27 = *((_QWORD *)a3 + 2);
  if ( (**((_DWORD **)a3 + 59) & 0x20000000) != 0 )
  {
    ++*((_DWORD *)v7 + 1934);
    *((_QWORD *)v7 + 968) += v27;
  }
  else
  {
    ++*((_DWORD *)v7 + 1938);
    *((_QWORD *)v7 + 970) += v27;
  }
  *((_QWORD *)v7 + 4995) -= *((_QWORD *)a3 + 2);
  v28 = (DXGFASTMUTEX *)*((_QWORD *)a3 + 39);
  if ( v28 )
    DXGFASTMUTEX::`scalar deleting destructor'(v28);
  v29 = *((_QWORD *)a3 + 59);
  if ( v29 )
  {
    v30 = *(VIDMM_FLIP_QUEUE_REFERENCES **)(v29 + 16);
    if ( v30 )
    {
      VIDMM_FLIP_QUEUE_REFERENCES::ReleaseReference(v30);
      *(_QWORD *)(*((_QWORD *)a3 + 59) + 16LL) = 0LL;
    }
  }
  if ( !*((_DWORD *)a3 + 95) )
  {
    operator delete(*((void **)a3 + 59));
    *((_DWORD *)a3 + 19) |= 0x100000u;
    _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'(a3);
  }
}
