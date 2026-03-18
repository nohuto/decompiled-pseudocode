/*
 * XREFs of ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C004011C
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C004BCFC (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C0054758 (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C0081524 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C001132C (--_V@YAXPEAX@Z.c)
 *     ??_GVIDMM_DEVICE@@QEAAPEAXI@Z @ 0x1C0011ADC (--_GVIDMM_DEVICE@@QEAAPEAXI@Z.c)
 *     Template_ppp @ 0x1C001D53C (Template_ppp.c)
 *     ?FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x1C0038720 (-FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C003E1F8 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
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
  ULONG_PTR ParentValue; // rdi
  unsigned __int64 v9; // rdi
  struct _RTL_BALANCED_NODE *v10; // rcx
  ULONG_PTR v11; // rdi
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  VIDMM_DEVICE *v14; // rcx
  struct _RTL_BALANCED_NODE *v15; // rax
  struct _RTL_BALANCED_NODE *v16; // rax
  struct _RTL_BALANCED_NODE *v17; // rax
  struct _RTL_BALANCED_NODE *v18; // rax

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
          v16 = v7;
          v7 = v7->Children[0];
          v16->Children[0] = 0LL;
        }
        if ( !v7->Children[1] )
          break;
        v17 = v7;
        v7 = v7->Children[1];
        v17->Children[1] = 0LL;
      }
      ParentValue = v7->ParentValue;
      FreeVadAvl(v7, 0LL);
      v9 = ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v9 )
        break;
      v7 = (struct _RTL_BALANCED_NODE *)v9;
    }
  }
  *((_QWORD *)this + 3) = 0LL;
  v10 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 4);
  if ( v10 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v10->Children[0] )
        {
          v15 = v10;
          v10 = v10->Children[0];
          v15->Children[0] = 0LL;
        }
        if ( !v10->Children[1] )
          break;
        v18 = v10;
        v10 = v10->Children[1];
        v18->Children[1] = 0LL;
      }
      v11 = v10->ParentValue;
      FreeVadAvl(v10, 0LL);
      v12 = v11 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v12 )
        break;
      v10 = (struct _RTL_BALANCED_NODE *)v12;
    }
  }
  *((_QWORD *)this + 4) = 0LL;
  v13 = *((_QWORD *)this + 9);
  if ( v13 )
  {
    if ( (*(_DWORD *)(v13 + 48) & 2) == 0 )
    {
      v14 = (VIDMM_DEVICE *)*((_QWORD *)this + 10);
      if ( v14 )
        VIDMM_DEVICE::`scalar deleting destructor'(v14);
    }
  }
  operator delete[](*((void **)this + 12));
  operator delete(this);
}
