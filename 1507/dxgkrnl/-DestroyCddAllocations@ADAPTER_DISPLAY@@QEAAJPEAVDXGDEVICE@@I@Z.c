/*
 * XREFs of ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C00B6C38
 * Callers:
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00A9BAC (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z @ 0x1C00B9520 (-RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IIIW4_D3DDDIFORMAT@@AEBU_D3DDDI_RATIONAL@@W4_D3DDDI_ROTATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00CFA64 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IIIW4_D3DDDIFORMAT@@AEBU_D3DDDI_RATIO.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z @ 0x1C0172400 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0002654 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0081B5C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C008DD08 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00B5DE8 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DestroyCddAllocations(ADAPTER_DISPLAY *this, struct DXGDEVICE *a2, unsigned int a3)
{
  __int64 v4; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  int **v11; // rax
  int v12; // ebx
  struct DXGPROCESS *Current; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v19; // r9
  __int64 v20; // rbx
  __int64 v21; // r14
  struct DXGALLOCATION *v22; // r8
  unsigned int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // r9
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax

  v4 = a3;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 2))
    || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v29 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v29 + 24) = 10457LL;
    WdLogEvent5_WdAssertion(v29);
  }
  v10 = 1008 * v4;
  v11 = *(int ***)(*((_QWORD *)this + 14) + 1008 * v4 + 24);
  if ( v11 && (v12 = **v11, v12 == (unsigned int)PsGetCurrentProcessSessionId(v7, v6, v8, v9)) )
  {
    Current = DXGPROCESS::GetCurrent(v7);
    v16 = **(_QWORD **)(*((_QWORD *)this + 14) + v10 + 24);
    v17 = *(_QWORD *)(v16 + 18568);
    if ( *((_QWORD *)Current + 7) != v17 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v16, v17, v14, v15);
      *(_QWORD *)(v30 + 24) = 10475LL;
      WdLogEvent5_WdAssertion(v30);
    }
    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(*((DXGADAPTER **)this + 2));
    if ( *((_DWORD *)a2 + 88) == 4 )
    {
      if ( NumDifferentPhysicalAdapters )
      {
        v31 = v10 + 88;
        v32 = NumDifferentPhysicalAdapters;
        do
        {
          *(_QWORD *)(v31 + *((_QWORD *)this + 14)) = 0LL;
          v31 += 8LL;
          --v32;
        }
        while ( v32 );
      }
      *(_QWORD *)(*((_QWORD *)this + 14) + v10 + 600) = 0LL;
    }
    else
    {
      if ( *(_QWORD *)(*((_QWORD *)this + 14) + v10 + 88) )
      {
        if ( NumDifferentPhysicalAdapters )
        {
          v20 = v10 + 88;
          v21 = NumDifferentPhysicalAdapters;
          do
          {
            v22 = *(struct DXGALLOCATION **)(v20 + *((_QWORD *)this + 14));
            if ( v22 )
              ADAPTER_DISPLAY::DisablePrimaryAllocation((PERESOURCE **)this, a2, v22, v19);
            v20 += 8LL;
            --v21;
          }
          while ( v21 );
        }
        DXGDEVICE::DestroyAllocationInternal(
          a2,
          0,
          0LL,
          *(struct DXGALLOCATION ***)(*(_QWORD *)(*((_QWORD *)this + 14) + v10 + 88) + 40LL),
          0LL,
          DXGDEVICE::DestroyFlagsDefault);
        v23 = DXGADAPTER::GetNumDifferentPhysicalAdapters(*((DXGADAPTER **)this + 2));
        if ( v23 )
        {
          v24 = v10 + 88;
          v25 = v23;
          do
          {
            *(_QWORD *)(v24 + *((_QWORD *)this + 14)) = 0LL;
            v24 += 8LL;
            --v25;
          }
          while ( v25 );
        }
      }
      v26 = *((_QWORD *)this + 14);
      v27 = *(_QWORD *)(v26 + v10 + 600);
      if ( v27 )
      {
        if ( *((_QWORD *)a2 + 2338) == *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) )
        {
          DXGDEVICE::DestroyAllocationInternal(
            a2,
            0,
            0LL,
            *(struct DXGALLOCATION ***)(v27 + 40),
            0LL,
            DXGDEVICE::DestroyFlagsDefault);
        }
        else
        {
          ObfDereferenceObject(*(PVOID *)(v26 + v10 + 616));
          *(_QWORD *)(*((_QWORD *)this + 14) + v10 + 616) = 0LL;
        }
        *(_QWORD *)(*((_QWORD *)this + 14) + v10 + 600) = 0LL;
      }
      if ( *(_DWORD *)(*((_QWORD *)this + 2) + 160LL) == 1 )
        OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(*((OUTPUTDUPL_MGR **)this + 13), v4, 0LL, 0, 0, 1);
    }
    return 0LL;
  }
  else
  {
    v33 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v33 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v33 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v33);
    return 3221225485LL;
  }
}
