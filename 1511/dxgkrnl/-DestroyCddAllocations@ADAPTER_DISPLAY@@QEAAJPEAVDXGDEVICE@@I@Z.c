/*
 * XREFs of ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C009B93C
 * Callers:
 *     ?RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z @ 0x1C008F004 (-RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IIIW4_D3DDDIFORMAT@@AEBU_D3DDDI_RATIONAL@@W4_D3DDDI_ROTATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009BB50 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IIIW4_D3DDDIFORMAT@@AEBU_D3DDDI_RATIO.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00BD4C4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z @ 0x1C0176C80 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C000333C (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0075D88 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C009A900 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C009E5BC (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DestroyCddAllocations(PERESOURCE **this, struct DXGDEVICE *a2, unsigned int a3)
{
  __int64 v4; // r15
  __int64 v6; // rcx
  __int64 v7; // rsi
  int **v8; // rax
  int v9; // ebx
  struct DXGPROCESS *Current; // rax
  struct _LIST_ENTRY *Flink; // rcx
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v13; // rbx
  __int64 v14; // r14
  struct DXGALLOCATION *v15; // r8
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  PERESOURCE *v19; // rdx
  PERESOURCE v20; // r9
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax

  v4 = a3;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2])
    || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v22 + 24) = 10802LL;
    WdLogEvent5_WdAssertion(v22);
  }
  v7 = 127 * v4;
  v8 = (int **)this[17][127 * v4 + 3];
  if ( v8 && (v9 = **v8, v9 == (unsigned int)PsGetCurrentProcessSessionId()) )
  {
    Current = DXGPROCESS::GetCurrent();
    Flink = this[17][v7 + 3]->SystemResourcesList.Flink;
    if ( (struct _LIST_ENTRY *)*((_QWORD *)Current + 7) != Flink[1162].Flink )
    {
      v23 = WdLogNewEntry5_WdAssertion(Flink);
      *(_QWORD *)(v23 + 24) = 10820LL;
      WdLogEvent5_WdAssertion(v23);
    }
    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)this[2]);
    if ( *((_DWORD *)a2 + 88) == 4 )
    {
      if ( NumDifferentPhysicalAdapters )
      {
        v24 = v7 * 8 + 88;
        v25 = NumDifferentPhysicalAdapters;
        do
        {
          *(PERESOURCE *)((char *)this[17] + v24) = 0LL;
          v24 += 8LL;
          --v25;
        }
        while ( v25 );
      }
      this[17][v7 + 75] = 0LL;
    }
    else
    {
      if ( this[17][v7 + 11] )
      {
        if ( NumDifferentPhysicalAdapters )
        {
          v13 = v7 * 8 + 88;
          v14 = NumDifferentPhysicalAdapters;
          do
          {
            v15 = *(struct DXGALLOCATION **)((char *)this[17] + v13);
            if ( v15 )
              ADAPTER_DISPLAY::DisablePrimaryAllocation(this, a2, v15);
            v13 += 8LL;
            --v14;
          }
          while ( v14 );
        }
        DXGDEVICE::DestroyAllocationInternal(
          a2,
          0,
          0LL,
          (struct DXGRESOURCE *)this[17][v7 + 11]->ExclusiveWaiters,
          0LL,
          DXGDEVICE::DestroyFlagsDefault);
        v16 = DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)this[2]);
        if ( v16 )
        {
          v17 = v7 * 8 + 88;
          v18 = v16;
          do
          {
            *(PERESOURCE *)((char *)this[17] + v17) = 0LL;
            v17 += 8LL;
            --v18;
          }
          while ( v18 );
        }
      }
      v19 = this[17];
      v20 = v19[v7 + 75];
      if ( v20 )
      {
        if ( *((_QWORD *)a2 + 354) == *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) )
        {
          DXGDEVICE::DestroyAllocationInternal(
            a2,
            0,
            0LL,
            (struct DXGRESOURCE *)v20->ExclusiveWaiters,
            0LL,
            DXGDEVICE::DestroyFlagsDefault);
        }
        else
        {
          ObfDereferenceObject(v19[v7 + 77]);
          this[17][v7 + 77] = 0LL;
        }
        this[17][v7 + 75] = 0LL;
      }
      if ( *((_DWORD *)this[2] + 40) == 1 )
        OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(this[16], (unsigned int)v4, 0LL, 0LL, 0, 1);
    }
    return 0LL;
  }
  else
  {
    v26 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v26 + 24) = this[2];
    *(_QWORD *)(v26 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v26);
    return 3221225485LL;
  }
}
