/*
 * XREFs of ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00B5D3C
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBI@Z @ 0x1C005C690 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00A9BAC (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C00B3660 (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C00B3744 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C00BDB08 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C00026A0 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C000B014 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093F2C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00B3440 (-WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00B5A5C (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z @ 0x1C00B6870 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z.c)
 *     ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C00B7C98 (-UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C00B7DBC (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C00B8950 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C0136238 (-InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisablePrimaryOnDevice(
        PERESOURCE **this,
        struct ADAPTER_RENDER **a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct ADAPTER_RENDER *v15; // rdx
  struct ADAPTER_RENDER *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  char v21; // r15
  unsigned int i; // edi
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r14
  _QWORD *v26; // rax

  v4 = a3;
  if ( !a2 || *((_DWORD *)a2 + 70) == 2 )
  {
    v17 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v17 + 24) = 12618LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( v4 != -3 && v4 >= *((_DWORD *)this + 20) )
  {
    v18 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v18 + 24) = 12619LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)a2[2] + 2)) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v19 + 24) = 12620LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    *(_QWORD *)(v20 + 24) = 12621LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v15 = a2[2];
  v16 = (struct ADAPTER_RENDER *)*((_QWORD *)v15 + 2);
  if ( a2[2338] == v16 )
  {
    if ( *((_BYTE *)this + 133) )
    {
      v21 = 0;
      if ( *((_DWORD *)v16 + 40) == 1 )
        ADAPTER_RENDER::FlushScheduler((__int64)a2[2], 8, v4, 0);
      for ( i = 0; i < *((_DWORD *)this + 20); ++i )
      {
        if ( v4 == -3 || i == v4 )
        {
          if ( ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)this, i) == (struct DXGDEVICE *)a2 )
          {
            if ( !v21 )
            {
              if ( *(_DWORD *)(*((_QWORD *)a2[2] + 2) + 160LL) == 1 )
                ADAPTER_RENDER::DisableOverlays(a2[2]);
              _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a2[2] + 2) + 2000LL));
              if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)a2[2] + 47) + 8LL) + 456LL))(
                     *((_QWORD *)a2[2] + 48),
                     i) )
              {
                ADAPTER_DISPLAY::WaitForVerticalBlankEvent((ADAPTER_DISPLAY *)this, i);
              }
              DXGADAPTER::DecrementVSyncWaiter(*((DXGADAPTER **)a2[2] + 2));
              v21 = 1;
            }
            v23 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(
                    (ADAPTER_DISPLAY *)this,
                    i,
                    0,
                    8u,
                    (struct DXGDEVICE *)a2,
                    1u);
            v25 = v23;
            if ( v23 < 0 )
            {
              v26 = (_QWORD *)WdLogNewEntry5_WdError(v24);
              v26[3] = i;
              v26[4] = this[2];
              v26[5] = v25;
              WdLogEvent5_WdError(v26);
            }
          }
          if ( *((_DWORD *)a2 + 70) )
          {
            DXGDEVICE::UnpinPrimaryAllocations((DXGDEVICE *)a2, i);
            DXGDEVICE::UnpinAllDirectFlipAllocations((DXGDEVICE *)a2, i, 1, 0LL);
          }
          else
          {
            DXGDEVICE::InvalidatePrimaryAllocations((DXGDEVICE *)a2, i);
          }
        }
      }
    }
    else
    {
      ADAPTER_DISPLAY::DisableAllPrimaries(this, v15, v13, v14);
    }
  }
}
