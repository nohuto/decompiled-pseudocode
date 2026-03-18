/*
 * XREFs of ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00788C0
 * Callers:
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0001AF8 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001E60 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001EBC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z @ 0x1C005A000 (-DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C005C100 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C006CD00 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0073E60 (-SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCES.c)
 *     DxgkRender @ 0x1C00763F0 (DxgkRender.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0078A80 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C007A6B0 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00808F0 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@@Z @ 0x1C008A580 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkCddSyncGPUAccess@@YAJPEAX0IH@Z @ 0x1C008AF10 (-DxgkCddSyncGPUAccess@@YAJPEAX0IH@Z.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C00A4450 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z @ 0x1C00A4EA0 (-DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00A63C0 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C011F4D4 (-AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXE@Z @ 0x1C012919C (-Stop@DXGADAPTER@@QEAAXE@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ResumeScheduler@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C0093E6C (-ResumeScheduler@ADAPTER_RENDER@@QEAAXE@Z.c)
 */

void __fastcall DXGADAPTER::ReleaseCoreResource(PERESOURCE *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  PERESOURCE v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  ADAPTER_RENDER *v14; // rcx

  if ( !ExIsResourceAcquiredSharedLite(this[16]) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v3, v2, v4, v5);
    *(_QWORD *)(v7 + 24) = 13544LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( this[18] )
  {
    v8 = WdLogNewEntry5_WdAssertion(v3, v2, v4, v5);
    *(_QWORD *)(v8 + 24) = 13545LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v6 = this[248];
  if ( v6 && LOBYTE(v6[3].Reserved2) )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
    {
      v13 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
      *(_QWORD *)(v13 + 24) = 13553LL;
      WdLogEvent5_WdAssertion(v13);
    }
    v14 = (ADAPTER_RENDER *)this[248];
    if ( *((_QWORD *)v14 + 48) )
      ADAPTER_RENDER::ResumeScheduler(v14, 1u);
    LOBYTE(this[248][3].Reserved2) = 0;
  }
  ExReleaseResourceLite(this[16]);
  KeLeaveCriticalRegion();
}
