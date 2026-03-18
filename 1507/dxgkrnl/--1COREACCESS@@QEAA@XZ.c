/*
 * XREFs of ??1COREACCESS@@QEAA@XZ @ 0x1C0001E60
 * Callers:
 *     ??1COREOVERLAYACCESS@@QEAA@XZ @ 0x1C00103D0 (--1COREOVERLAYACCESS@@QEAA@XZ.c)
 *     DxgkUnlock @ 0x1C0077510 (DxgkUnlock.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C007AEE0 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXXZ @ 0x1C0084D7C (-Destroy@DXGPROCESS@@QEAAXXZ.c)
 *     ?DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C008EBC0 (-DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@I.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@ZPEBU2@PEBU3@II@@SAJPEAVDXGADAPTER@@IP8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z12IIP6AJPEAV3@312II@Z@Z @ 0x1C008F594 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DX.c)
 *     OutputDuplProcessTerminate @ 0x1C008F6BC (OutputDuplProcessTerminate.c)
 *     ?DestroyDeviceNoLocksInternal@ADAPTER_RENDER@@AEAAXPEAVDXGDEVICE@@@Z @ 0x1C00944A8 (-DestroyDeviceNoLocksInternal@ADAPTER_RENDER@@AEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkEscape @ 0x1C009FD70 (DxgkEscape.c)
 *     DxgkGetPresentHistory @ 0x1C00A3390 (DxgkGetPresentHistory.c)
 *     DxgkGetPresentHistoryReadyEvent @ 0x1C00AE490 (DxgkGetPresentHistoryReadyEvent.c)
 *     ?CleanupPresentHistoryTokenQueueAdapter@DXGPRESENTHISTORYTOKENQUEUE@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00BD690 (-CleanupPresentHistoryTokenQueueAdapter@DXGPRESENTHISTORYTOKENQUEUE@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C0140920 (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 *     DxgkDestroyOverlay @ 0x1C0143440 (DxgkDestroyOverlay.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x1C016108C (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C01610B8 (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 *     ?Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ @ 0x1C016284C (-Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00788C0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C013EFB8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall COREACCESS::~COREACCESS(COREACCESS *this)
{
  struct _KTHREAD **v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rax
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
    if ( v4 )
    {
      if ( v4 < 0 )
      {
        v5 = WdLogNewEntry5_WdAssertion();
        *(_QWORD *)(v5 + 24) = 1067LL;
        WdLogEvent5_WdAssertion(v5);
      }
    }
    else
    {
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v3 + 16), (struct DXGADAPTER *)v3);
    }
  }
}
