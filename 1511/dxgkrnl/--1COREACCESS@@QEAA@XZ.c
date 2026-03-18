/*
 * XREFs of ??1COREACCESS@@QEAA@XZ @ 0x1C0003BEC
 * Callers:
 *     ??1COREOVERLAYACCESS@@QEAA@XZ @ 0x1C0011B40 (--1COREOVERLAYACCESS@@QEAA@XZ.c)
 *     DxgkUnlock @ 0x1C0061300 (DxgkUnlock.c)
 *     ?Destroy@DXGPROCESS@@QEAAXXZ @ 0x1C0067BB4 (-Destroy@DXGPROCESS@@QEAAXXZ.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C006DF2C (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     DxgkEscape @ 0x1C007AB10 (DxgkEscape.c)
 *     ?DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z @ 0x1C008AFC0 (-DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z.c)
 *     DxgkGetPresentHistory @ 0x1C00956B0 (DxgkGetPresentHistory.c)
 *     DxgkGetPresentHistoryReadyEvent @ 0x1C00C2190 (DxgkGetPresentHistoryReadyEvent.c)
 *     ?CleanupPresentHistoryTokenQueueAdapter@DXGPRESENTHISTORYTOKENQUEUE@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00C6B10 (-CleanupPresentHistoryTokenQueueAdapter@DXGPRESENTHISTORYTOKENQUEUE@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?CheckExclusiveOwnership@DXGGLOBAL@@QEAAEXZ @ 0x1C00C8828 (-CheckExclusiveOwnership@DXGGLOBAL@@QEAAEXZ.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C0123C10 (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 *     DxgkDestroyOverlay @ 0x1C0148DC0 (DxgkDestroyOverlay.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x1C01656B8 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C01656E4 (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 *     ?Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ @ 0x1C0166DC8 (-Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0079E40 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0145430 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall COREACCESS::~COREACCESS(COREACCESS *this)
{
  struct _KTHREAD **v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rax

  v2 = (struct _KTHREAD **)*((_QWORD *)this + 1);
  if ( v2 )
  {
    if ( *((_BYTE *)this + 16) )
    {
      *((_BYTE *)this + 16) = 0;
      if ( KeGetCurrentThread() != v2[18] )
        DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v2);
    }
    v3 = *((_QWORD *)this + 1);
    v4 = _InterlockedDecrement64((volatile signed __int64 *)(v3 + 24));
    if ( !v4 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v3 + 16), (struct DXGADAPTER *)v3);
    if ( v4 < 0 )
    {
      v5 = WdLogNewEntry5_WdAssertion();
      *(_QWORD *)(v5 + 24) = 1158LL;
      WdLogEvent5_WdAssertion(v5);
    }
  }
}
