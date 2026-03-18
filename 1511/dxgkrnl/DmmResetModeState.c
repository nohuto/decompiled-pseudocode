/*
 * XREFs of DmmResetModeState @ 0x1C00CC0D8
 * Callers:
 *     ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@@Z @ 0x1C008E7E8 (-RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEA.c)
 *     ?RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00CB234 (-RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z.c)
 *     ?RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z @ 0x1C00CBC48 (-RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z.c)
 *     DpiPowerArbiterThread @ 0x1C00E8F50 (DpiPowerArbiterThread.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C016BA24 (DpiFdoDestroyRelatedObjects.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0007BDC (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 */

__int64 __fastcall DmmResetModeState(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rax

  v2 = 0;
  if ( a1 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
    {
      v9 = WdLogNewEntry5_WdAssertion(v5);
      WdLogEvent5_WdAssertion(v9);
    }
    v6 = *(_QWORD *)(a1 + 1984);
    if ( v6 )
    {
      if ( a2 == -3 )
      {
        if ( *(_DWORD *)(v6 + 104) )
        {
          do
          {
            ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((PERESOURCE **)v6, v2, 1);
            v6 = *(_QWORD *)(a1 + 1984);
            ++v2;
          }
          while ( v2 < *(_DWORD *)(v6 + 104) );
        }
      }
      else
      {
        ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((PERESOURCE **)v6, a2, 1);
      }
    }
    return 0LL;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v8 + 24) = 0LL;
    WdLogEvent5_WdError(v8);
    return 3223191554LL;
  }
}
