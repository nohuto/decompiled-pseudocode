/*
 * XREFs of ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C0048224
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0053C88 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C005CD7C (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C0093354 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0001ACC (--_V@YAXPEAX@Z.c)
 *     ??_GVIDMM_DEVICE@@QEAAPEAXI@Z @ 0x1C000FEE8 (--_GVIDMM_DEVICE@@QEAAPEAXI@Z.c)
 *     Template_ppp @ 0x1C001E8B0 (Template_ppp.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0049128 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x1C0067848 (-FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 */

void __fastcall CVirtualAddressAllocator::DestroyVaAllocator(CVirtualAddressAllocator *this)
{
  unsigned int i; // edi
  VIDMM_PAGE_DIRECTORY **v3; // rsi
  struct _RTL_BALANCED_NODE *v4; // rcx
  ULONG_PTR ParentValue; // rdi
  unsigned __int64 v6; // rdi
  struct _RTL_BALANCED_NODE *v7; // rcx
  ULONG_PTR v8; // rdi
  unsigned __int64 v9; // rdi
  __int64 v10; // rax
  VIDMM_DEVICE *v11; // rcx
  struct _RTL_BALANCED_NODE *v12; // rax
  struct _RTL_BALANCED_NODE *v13; // rax
  struct _RTL_BALANCED_NODE *v14; // rax
  struct _RTL_BALANCED_NODE *v15; // rax

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000) != 0 )
    Template_ppp(
      (__int64)this,
      &DestroyGpuVirtualAddressAllocator,
      *(_QWORD *)(*((_QWORD *)this + 9) + 32LL),
      this,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 56LL),
      *(_QWORD *)(*((_QWORD *)this + 8) + 24LL));
  for ( i = 0; i < *(_DWORD *)(*((_QWORD *)this + 8) + 6416LL); ++i )
  {
    v3 = (VIDMM_PAGE_DIRECTORY **)(*((_QWORD *)this + 12) + 32LL * i);
    if ( *v3 )
    {
      VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(*v3, this, 0LL);
      *v3 = 0LL;
    }
  }
  v4 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 3);
  if ( v4 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v4->Children[0] )
        {
          v13 = v4;
          v4 = v4->Children[0];
          v13->Children[0] = 0LL;
        }
        if ( !v4->Children[1] )
          break;
        v14 = v4;
        v4 = v4->Children[1];
        v14->Children[1] = 0LL;
      }
      ParentValue = v4->ParentValue;
      FreeVadAvl(v4, 0LL);
      v6 = ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v6 )
        break;
      v4 = (struct _RTL_BALANCED_NODE *)v6;
    }
  }
  *((_QWORD *)this + 3) = 0LL;
  v7 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 4);
  if ( v7 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v7->Children[0] )
        {
          v12 = v7;
          v7 = v7->Children[0];
          v12->Children[0] = 0LL;
        }
        if ( !v7->Children[1] )
          break;
        v15 = v7;
        v7 = v7->Children[1];
        v15->Children[1] = 0LL;
      }
      v8 = v7->ParentValue;
      FreeVadAvl(v7, 0LL);
      v9 = v8 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v9 )
        break;
      v7 = (struct _RTL_BALANCED_NODE *)v9;
    }
  }
  *((_QWORD *)this + 4) = 0LL;
  v10 = *((_QWORD *)this + 9);
  if ( v10 )
  {
    if ( (*(_DWORD *)(v10 + 48) & 2) == 0 )
    {
      v11 = (VIDMM_DEVICE *)*((_QWORD *)this + 10);
      if ( v11 )
        VIDMM_DEVICE::`scalar deleting destructor'(v11);
    }
  }
  operator delete[](*((void **)this + 12));
  operator delete(this);
}
