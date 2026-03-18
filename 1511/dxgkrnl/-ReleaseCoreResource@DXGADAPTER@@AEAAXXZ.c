/*
 * XREFs of ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0079E40
 * Callers:
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0003B48 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003BEC (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003C64 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z @ 0x1C005B000 (-DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0062C10 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0074AD0 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C007A060 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C007F400 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0085F40 (-SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCES.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z @ 0x1C00881A0 (-DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0089140 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C00B6230 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C0124FD4 (-AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXE@Z @ 0x1C012F81C (-Stop@DXGADAPTER@@QEAAXE@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ResumeScheduler@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C006A824 (-ResumeScheduler@ADAPTER_RENDER@@QEAAXE@Z.c)
 */

void __fastcall DXGADAPTER::ReleaseCoreResource(PERESOURCE *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rax
  PERESOURCE v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  ADAPTER_RENDER *v8; // rcx

  if ( !ExIsResourceAcquiredSharedLite(this[16]) )
  {
    v3 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v3 + 24) = 13910LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( this[18] )
  {
    v4 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v4 + 24) = 13911LL;
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = this[249];
  if ( v5 && LOBYTE(v5[4].SystemResourcesList.Flink) )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
    {
      v7 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v7 + 24) = 13919LL;
      WdLogEvent5_WdAssertion(v7);
    }
    v8 = (ADAPTER_RENDER *)this[249];
    if ( *((_QWORD *)v8 + 51) )
      ADAPTER_RENDER::ResumeScheduler(v8, 1);
    LOBYTE(this[249][4].SystemResourcesList.Flink) = 0;
  }
  ExReleaseResourceLite(this[16]);
  KeLeaveCriticalRegion();
}
