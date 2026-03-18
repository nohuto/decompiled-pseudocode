/*
 * XREFs of ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C0088568
 * Callers:
 *     ?RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z @ 0x1C00840B4 (-RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IIIW4_D3DDDIFORMAT@@AEBU_D3DDDI_RATIONAL@@W4_D3DDDI_ROTATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0088748 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IIIW4_D3DDDIFORMAT@@AEBU_D3DDDI_RATIO.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00D39F4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z @ 0x1C01A0534 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z.c)
 * Callees:
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0008728 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C0077F6C (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C0087360 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009E864 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DestroyCddAllocations(ADAPTER_DISPLAY *this, struct DXGDEVICE *a2, unsigned int a3)
{
  __int64 v4; // r15
  __int64 v6; // rcx
  __int64 v7; // rsi
  int **v8; // rax
  int v9; // ebx
  __int64 CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v13; // rcx
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v15; // rbx
  __int64 v16; // r14
  struct DXGALLOCATION *v17; // r8
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // r9
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax

  v4 = a3;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 2))
    || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v24 + 24) = 559LL;
    WdLogEvent5_WdAssertion(v24);
  }
  v7 = 1016 * v4;
  v8 = *(int ***)(*((_QWORD *)this + 14) + 1016 * v4 + 24);
  if ( v8 && (v9 = **v8, v9 == (unsigned int)PsGetCurrentProcessSessionId()) )
  {
    CurrentProcess = PsGetCurrentProcess();
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v11);
    v13 = **(_QWORD **)(*((_QWORD *)this + 14) + v7 + 24);
    if ( *(_QWORD *)(ProcessDxgProcess + 48) != *(_QWORD *)(v13 + 18584) )
    {
      v25 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v25 + 24) = 577LL;
      WdLogEvent5_WdAssertion(v25);
    }
    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(*((DXGADAPTER **)this + 2));
    if ( *((_DWORD *)a2 + 94) == 4 )
    {
      if ( NumDifferentPhysicalAdapters )
      {
        v26 = v7 + 88;
        v27 = NumDifferentPhysicalAdapters;
        do
        {
          *(_QWORD *)(v26 + *((_QWORD *)this + 14)) = 0LL;
          v26 += 8LL;
          --v27;
        }
        while ( v27 );
      }
      *(_QWORD *)(*((_QWORD *)this + 14) + v7 + 600) = 0LL;
    }
    else
    {
      if ( *(_QWORD *)(*((_QWORD *)this + 14) + v7 + 88) )
      {
        if ( NumDifferentPhysicalAdapters )
        {
          v15 = v7 + 88;
          v16 = NumDifferentPhysicalAdapters;
          do
          {
            v17 = *(struct DXGALLOCATION **)(v15 + *((_QWORD *)this + 14));
            if ( v17 )
              ADAPTER_DISPLAY::DisablePrimaryAllocation((PERESOURCE **)this, a2, v17);
            v15 += 8LL;
            --v16;
          }
          while ( v16 );
        }
        DXGDEVICE::DestroyAllocationInternal(
          a2,
          0,
          0LL,
          *(struct DXGRESOURCE **)(*(_QWORD *)(*((_QWORD *)this + 14) + v7 + 88) + 40LL),
          0LL,
          DXGDEVICE::DestroyFlagsDefault);
        v18 = DXGADAPTER::GetNumDifferentPhysicalAdapters(*((DXGADAPTER **)this + 2));
        if ( v18 )
        {
          v19 = v7 + 88;
          v20 = v18;
          do
          {
            *(_QWORD *)(v19 + *((_QWORD *)this + 14)) = 0LL;
            v19 += 8LL;
            --v20;
          }
          while ( v20 );
        }
      }
      v21 = *((_QWORD *)this + 14);
      v22 = *(_QWORD *)(v21 + v7 + 600);
      if ( v22 )
      {
        if ( *((_QWORD *)a2 + 357) == *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) )
        {
          DXGDEVICE::DestroyAllocationInternal(
            a2,
            0,
            0LL,
            *(struct DXGRESOURCE **)(v22 + 40),
            0LL,
            DXGDEVICE::DestroyFlagsDefault);
        }
        else
        {
          ObfDereferenceObject(*(PVOID *)(v21 + v7 + 616));
          *(_QWORD *)(*((_QWORD *)this + 14) + v7 + 616) = 0LL;
        }
        *(_QWORD *)(*((_QWORD *)this + 14) + v7 + 600) = 0LL;
      }
      if ( *(_DWORD *)(*((_QWORD *)this + 2) + 176LL) == 1 )
        OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(*((OUTPUTDUPL_CONTEXT ***)this + 13), v4, 0LL, 0, 0, 1);
    }
    return 0LL;
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v28 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v28 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v28);
    return 3221225485LL;
  }
}
