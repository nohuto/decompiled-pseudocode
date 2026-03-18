/*
 * XREFs of ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00967F4
 * Callers:
 *     DxgkMarkDeviceAsError @ 0x1C00704D0 (DxgkMarkDeviceAsError.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0075550 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C00954B4 (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009BB8C (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C009D260 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00A2328 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00A9CE0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00B0FB0 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C00F8030 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 *     DxgkWaitForIdle @ 0x1C01621B0 (DxgkWaitForIdle.c)
 *     ?FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z @ 0x1C0173A30 (-FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z.c)
 *     ?PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0187350 (-PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEV.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0188084 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 *     ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0188EE4 (-PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICE.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGDEVICE::FlushScheduler(_QWORD *a1, int a2)
{
  _QWORD *v2; // rdi
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rcx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1 + 23;
  v14[0] = 0LL;
  v14[1] = 0LL;
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(a1 + 23));
  v6 = a2 - 1;
  if ( v6 )
  {
    v8 = v6 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            if ( v11 == 1 )
            {
              LODWORD(v14[0]) = 5;
            }
            else
            {
              v12 = WdLogNewEntry5_WdAssertion(v5);
              *(_QWORD *)(v12 + 24) = 4975LL;
              WdLogEvent5_WdAssertion(v12);
            }
          }
          else
          {
            LODWORD(v14[0]) = 3;
          }
        }
        else
        {
          LODWORD(v14[0]) = 11;
        }
      }
      else
      {
        LODWORD(v14[0]) = 7;
      }
    }
    else
    {
      LODWORD(v14[0]) = 6;
    }
  }
  else
  {
    LODWORD(v14[0]) = 1;
  }
  if ( (*(int (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(*(_QWORD *)(a1[2] + 376LL) + 8LL) + 136LL))(a1[71], v14) < 0 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v13 + 24) = 4979LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v2[1] = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
