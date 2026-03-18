/*
 * XREFs of ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C004B3E4
 * Callers:
 *     ??_GVIDMM_GLOBAL@@QEAAPEAXI@Z @ 0x1C000DFF4 (--_GVIDMM_GLOBAL@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_I@YAXPEAX_KHP6AX0@Z@Z @ 0x1C0003D78 (--_I@YAXPEAX_KHP6AX0@Z@Z.c)
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C00040F4 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ??_GVIDMM_DMA_POOL@@QEAAPEAXI@Z @ 0x1C000DFD4 (--_GVIDMM_DMA_POOL@@QEAAPEAXI@Z.c)
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0010318 (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C00317CC (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?RequestWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@@Z @ 0x1C0038C68 (-RequestWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@@Z.c)
 *     ?DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C004C978 (-DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C005F078 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::~VIDMM_GLOBAL(void **this)
{
  VIDMM_DMA_POOL *v2; // rcx
  __int64 i; // rbx
  struct _VIDMM_DMA_BUFFER *v4; // rdx
  __int64 v5; // rbx
  __int64 j; // rbx
  void (__fastcall ***v7)(_QWORD, __int64); // rcx
  void *v8; // rcx
  void *v9; // rcx
  char *v10; // rcx
  char *v11; // rbx
  DXGFASTMUTEX *v12; // rcx
  char *v13; // rcx
  char *v14; // rbx
  void **v15; // rcx

  VIDMM_GLOBAL::DestroyPagingFenceObjects((VIDMM_GLOBAL *)this);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1604); i = (unsigned int)(i + 1) )
  {
    v4 = (struct _VIDMM_DMA_BUFFER *)this[i + 143];
    if ( v4 )
    {
      VIDMM_DMA_POOL::ReleaseBuffer(v2, v4, 1);
      this[i + 143] = 0LL;
    }
    v2 = (VIDMM_DMA_POOL *)this[i + 79];
    if ( v2 )
      VIDMM_DMA_POOL::`scalar deleting destructor'(v2);
  }
  VIDMM_PAGING_PROCESS::DestroyPagingProcess((VIDMM_PAGING_PROCESS *)(this + 5000));
  if ( ((_BYTE)this[5069] & 0x10) != 0 )
    VIDMM_PROCESS::CloseAdapter(g_pVidMmSystemProcess, (struct VIDMM_GLOBAL *)this);
  this[5100] = 0LL;
  v5 = (__int64)*this;
  if ( *this )
  {
    ObfReferenceObject(*(PVOID *)(v5 + 8));
    VIDMM_WORKER_THREAD::RequestWorkerThreadStatus(v5, 2);
    KeWaitForSingleObject(*(PVOID *)(v5 + 8), Executive, 0, 0, 0LL);
    ObfDereferenceObject(*(PVOID *)(v5 + 8));
    operator delete(*(void **)(v5 + 120));
    *(_QWORD *)(v5 + 120) = 0LL;
    if ( *this )
      operator delete(*this);
    *this = 0LL;
  }
  if ( this[464] )
  {
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 926); j = (unsigned int)(j + 1) )
    {
      v7 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this[464] + j);
      if ( v7 )
        (**v7)(v7, 1LL);
    }
    operator delete(this[464]);
    this[464] = 0LL;
  }
  v8 = this[804];
  if ( v8 )
    ZwClose(v8);
  operator delete(this[803]);
  v9 = this[972];
  if ( v9 )
  {
    operator delete(v9);
    this[971] = 0LL;
    this[972] = 0LL;
    this[973] = 0LL;
  }
  v10 = (char *)this[5075];
  if ( v10 )
  {
    v11 = v10 - 8;
    `vector destructor iterator'(
      v10,
      24LL,
      *((_DWORD *)v10 - 2),
      (void (__fastcall *)(char *))VIDMM_PAGING_HISTORY_ENTRY::~VIDMM_PAGING_HISTORY_ENTRY);
    operator delete(v11);
  }
  operator delete(this[5079]);
  operator delete(this[889]);
  v12 = (DXGFASTMUTEX *)this[887];
  if ( v12 )
    DXGFASTMUTEX::`scalar deleting destructor'(v12);
  v13 = (char *)this[4999];
  if ( v13 )
  {
    v14 = v13 - 8;
    `vector destructor iterator'(
      v13,
      456LL,
      *((_DWORD *)v13 - 2),
      (void (__fastcall *)(char *))VidMmFreeDeferredDmaBufferMapping);
    operator delete(v14);
  }
  v15 = (void **)this[5104];
  if ( v15 != this + 5105 )
  {
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
  }
}
