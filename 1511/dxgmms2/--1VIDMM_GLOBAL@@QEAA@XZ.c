/*
 * XREFs of ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C007A210
 * Callers:
 *     ??_GVIDMM_GLOBAL@@QEAAPEAXI@Z @ 0x1C001C3B8 (--_GVIDMM_GLOBAL@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_I@YAXPEAX_KHP6AX0@Z@Z @ 0x1C00101FC (--_I@YAXPEAX_KHP6AX0@Z@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C001132C (--_V@YAXPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0011580 (--3@YAXPEAX@Z.c)
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C001182C (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ??_GVIDMM_DMA_POOL@@QEAAPEAXI@Z @ 0x1C0014CF8 (--_GVIDMM_DMA_POOL@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C001C2A8 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ?RequestWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@@Z @ 0x1C0041BBC (-RequestWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@@Z.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C0053EE4 (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0062D08 (-DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C007A600 (-DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C0081524 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::~VIDMM_GLOBAL(VIDMM_GLOBAL *this, __int64 a2, __int64 a3)
{
  VIDMM_DMA_POOL *v4; // rcx
  __int64 i; // rbx
  struct _VIDMM_DMA_BUFFER *v6; // rdx
  __int64 v7; // rbx
  __int64 j; // rbx
  void (__fastcall ***v9)(_QWORD, __int64); // rcx
  void *v10; // rcx
  void *v11; // rcx
  char *v12; // rcx
  char *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  DXGFASTMUTEX *v17; // rcx
  char *v18; // rcx
  char *v19; // rbx
  char *v20; // rcx

  *((_BYTE *)this + 6464) = 1;
  VIDMM_GLOBAL::DoDeferredUnlock(this, a2, a3);
  VIDMM_GLOBAL::DestroyPagingFenceObjects(this);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1604); i = (unsigned int)(i + 1) )
  {
    v6 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)this + i + 143);
    if ( v6 )
    {
      VIDMM_DMA_POOL::ReleaseBuffer(v4, v6, 1);
      *((_QWORD *)this + i + 143) = 0LL;
    }
    v4 = (VIDMM_DMA_POOL *)*((_QWORD *)this + i + 79);
    if ( v4 )
      VIDMM_DMA_POOL::`scalar deleting destructor'(v4);
  }
  VIDMM_PAGING_PROCESS::DestroyPagingProcess((VIDMM_GLOBAL *)((char *)this + 40056));
  if ( (*((_BYTE *)this + 40608) & 0x10) != 0 )
    VIDMM_PROCESS::CloseAdapter(g_pVidMmSystemProcess, this);
  *((_QWORD *)this + 5107) = 0LL;
  v7 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    ObfReferenceObject(*(PVOID *)(v7 + 8));
    VIDMM_WORKER_THREAD::RequestWorkerThreadStatus(v7, 2);
    KeWaitForSingleObject(*(PVOID *)(v7 + 8), Executive, 0, 0, 0LL);
    ObfDereferenceObject(*(PVOID *)(v7 + 8));
    operator delete[](*(void **)(v7 + 120));
    *(_QWORD *)(v7 + 120) = 0LL;
    if ( *(_QWORD *)this )
      operator delete(*(void **)this);
    *(_QWORD *)this = 0LL;
  }
  if ( *((_QWORD *)this + 464) )
  {
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 926); j = (unsigned int)(j + 1) )
    {
      v9 = *(void (__fastcall ****)(_QWORD, __int64))(*((_QWORD *)this + 464) + 8 * j);
      if ( v9 )
        (**v9)(v9, 1LL);
    }
    operator delete[](*((void **)this + 464));
    *((_QWORD *)this + 464) = 0LL;
  }
  v10 = (void *)*((_QWORD *)this + 804);
  if ( v10 )
    ZwClose(v10);
  operator delete[](*((void **)this + 803));
  v11 = (void *)*((_QWORD *)this + 972);
  if ( v11 )
  {
    operator delete[](v11);
    *((_QWORD *)this + 971) = 0LL;
    *((_QWORD *)this + 972) = 0LL;
    *((_QWORD *)this + 973) = 0LL;
  }
  v12 = (char *)*((_QWORD *)this + 5082);
  if ( v12 )
  {
    v13 = v12 - 8;
    `vector destructor iterator'(
      v12,
      24LL,
      *((_DWORD *)v12 - 2),
      (void (__fastcall *)(char *))VIDMM_PAGING_HISTORY_ENTRY::~VIDMM_PAGING_HISTORY_ENTRY);
    operator delete[](v13);
  }
  operator delete[](*((void **)this + 5086));
  operator delete[](*((void **)this + 889));
  v17 = (DXGFASTMUTEX *)*((_QWORD *)this + 887);
  if ( v17 )
    DXGFASTMUTEX::`scalar deleting destructor'(v17, v14, v15, v16);
  v18 = (char *)*((_QWORD *)this + 5006);
  if ( v18 )
  {
    v19 = v18 - 8;
    `vector destructor iterator'(
      v18,
      456LL,
      *((_DWORD *)v18 - 2),
      (void (__fastcall *)(char *))VidMmFreeDeferredDmaBufferMapping);
    operator delete[](v19);
  }
  v20 = (char *)*((_QWORD *)this + 5111);
  if ( v20 != (char *)this + 40896 )
  {
    if ( v20 )
      ExFreePoolWithTag(v20, 0);
  }
}
