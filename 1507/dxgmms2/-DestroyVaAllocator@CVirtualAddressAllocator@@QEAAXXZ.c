/*
 * XREFs of ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C005F140
 * Callers:
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C0036B28 (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C003AD5C (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C005F078 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 * Callees:
 *     ??_GVIDMM_DEVICE@@QEAAPEAXI@Z @ 0x1C0003D58 (--_GVIDMM_DEVICE@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 *     Template_ppp @ 0x1C000FB18 (Template_ppp.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C005EDDC (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x1C005FC0C (-FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 */

void __fastcall CVirtualAddressAllocator::DestroyVaAllocator(
        CVirtualAddressAllocator *this,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4)
{
  unsigned int i; // edi
  VIDMM_PAGE_DIRECTORY **v6; // rsi
  struct _RTL_BALANCED_NODE *v7; // rcx
  struct _RTL_BALANCED_NODE *v8; // rax
  struct _RTL_BALANCED_NODE *v9; // rax
  ULONG_PTR ParentValue; // rdi
  unsigned __int64 v11; // rdi
  struct _RTL_BALANCED_NODE *v12; // rcx
  struct _RTL_BALANCED_NODE *v13; // rax
  struct _RTL_BALANCED_NODE *v14; // rax
  ULONG_PTR v15; // rdi
  unsigned __int64 v16; // rdi
  __int64 v17; // rax
  VIDMM_DEVICE *v18; // rcx

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
    Template_ppp(
      (__int64)this,
      &DestroyGpuVirtualAddressAllocator,
      *(_QWORD *)(*((_QWORD *)this + 9) + 32LL),
      this,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 64LL),
      *(_QWORD *)(*((_QWORD *)this + 8) + 24LL));
  for ( i = 0; i < *(_DWORD *)(*((_QWORD *)this + 8) + 6416LL); ++i )
  {
    v6 = (VIDMM_PAGE_DIRECTORY **)(*((_QWORD *)this + 12) + 32LL * i);
    if ( *v6 )
    {
      VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(*v6, this, 0LL, a4);
      *v6 = 0LL;
    }
  }
  v7 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 3);
  if ( v7 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v7->Children[0] )
        {
          v8 = v7;
          v7 = v7->Children[0];
          v8->Children[0] = 0LL;
        }
        if ( !v7->Children[1] )
          break;
        v9 = v7;
        v7 = v7->Children[1];
        v9->Children[1] = 0LL;
      }
      ParentValue = v7->ParentValue;
      FreeVadAvl(v7, 0LL);
      v11 = ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v11 )
        break;
      v7 = (struct _RTL_BALANCED_NODE *)v11;
    }
  }
  *((_QWORD *)this + 3) = 0LL;
  v12 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 4);
  if ( v12 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v12->Children[0] )
        {
          v13 = v12;
          v12 = v12->Children[0];
          v13->Children[0] = 0LL;
        }
        if ( !v12->Children[1] )
          break;
        v14 = v12;
        v12 = v12->Children[1];
        v14->Children[1] = 0LL;
      }
      v15 = v12->ParentValue;
      FreeVadAvl(v12, 0LL);
      v16 = v15 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v16 )
        break;
      v12 = (struct _RTL_BALANCED_NODE *)v16;
    }
  }
  *((_QWORD *)this + 4) = 0LL;
  v17 = *((_QWORD *)this + 9);
  if ( v17 )
  {
    if ( (*(_DWORD *)(v17 + 48) & 2) == 0 )
    {
      v18 = (VIDMM_DEVICE *)*((_QWORD *)this + 10);
      if ( v18 )
        VIDMM_DEVICE::`scalar deleting destructor'(v18);
    }
  }
  operator delete(*((void **)this + 12));
  operator delete(this);
}
