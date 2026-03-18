/*
 * XREFs of DmmResetModeState @ 0x1C00BD4A0
 * Callers:
 *     ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@@Z @ 0x1C00B8CFC (-RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEA.c)
 *     ?RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00BCBD4 (-RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z.c)
 *     ?RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z @ 0x1C00BD1F0 (-RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z.c)
 *     DpiPowerArbiterThread @ 0x1C00DE0A0 (DpiPowerArbiterThread.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C0167428 (DpiFdoDestroyRelatedObjects.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C000AF88 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 */

__int64 __fastcall DmmResetModeState(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rax

  v2 = 0;
  if ( a1 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
    {
      v12 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
      WdLogEvent5_WdAssertion(v12);
    }
    v9 = *(_QWORD *)(a1 + 1976);
    if ( v9 )
    {
      if ( a2 == -3 )
      {
        if ( *(_DWORD *)(v9 + 80) )
        {
          do
          {
            ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((PERESOURCE **)v9, v2, 1);
            v9 = *(_QWORD *)(a1 + 1976);
            ++v2;
          }
          while ( v2 < *(_DWORD *)(v9 + 80) );
        }
      }
      else
      {
        ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((PERESOURCE **)v9, a2, 1);
      }
    }
    return 0LL;
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v11 + 24) = 0LL;
    WdLogEvent5_WdError(v11);
    return 3223191554LL;
  }
}
