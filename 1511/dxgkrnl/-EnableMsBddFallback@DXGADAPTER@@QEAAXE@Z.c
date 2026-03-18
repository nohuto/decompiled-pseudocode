/*
 * XREFs of ?EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z @ 0x1C012C2FC
 * Callers:
 *     DpiDisableMsBddFallbackDriver @ 0x1C016FC90 (DpiDisableMsBddFallbackDriver.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C00031D4 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00CC714 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall DXGADAPTER::EnableMsBddFallback(DXGADAPTER *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 20323LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( !DXGADAPTER::IsBddFallbackDriver(this) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 20325LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( a2 )
  {
    *((_DWORD *)this + 40) = 1;
    *((_BYTE *)this + 164) = 0;
  }
  else
  {
    if ( *((_QWORD *)this + 249) )
    {
      v8 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v8 + 24) = 20344LL;
      WdLogEvent5_WdAssertion(v8);
    }
    ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(*((PERESOURCE ***)this + 248), 0LL);
    *((_DWORD *)this + 40) = 3;
  }
}
