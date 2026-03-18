/*
 * XREFs of ?EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z @ 0x1C0145560
 * Callers:
 *     DpiDisableMsBddFallbackDriver @ 0x1C01961C8 (DpiDisableMsBddFallbackDriver.c)
 * Callees:
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0008768 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00E1E90 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
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
    *(_QWORD *)(v5 + 24) = 6775LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( !DXGADAPTER::IsBddFallbackDriver(this) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 6777LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( a2 )
  {
    *((_DWORD *)this + 44) = 1;
    *((_BYTE *)this + 180) = 0;
  }
  else
  {
    if ( *((_QWORD *)this + 267) )
    {
      v8 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v8 + 24) = 6796LL;
      WdLogEvent5_WdAssertion(v8);
    }
    ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(*((PERESOURCE ***)this + 266), 0LL);
    *((_DWORD *)this + 44) = 3;
  }
}
