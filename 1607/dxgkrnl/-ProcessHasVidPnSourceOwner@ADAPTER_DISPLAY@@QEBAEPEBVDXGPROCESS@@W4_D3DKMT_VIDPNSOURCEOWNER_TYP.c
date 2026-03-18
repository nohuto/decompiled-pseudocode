/*
 * XREFs of ?ProcessHasVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGPROCESS@@W4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@W4DXGDEVICECLIENT_TYPE@@@Z @ 0x1C0148274
 * Callers:
 *     ?AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z @ 0x1C01703E0 (-AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

char __fastcall ADAPTER_DISPLAY::ProcessHasVidPnSourceOwner(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // edx
  unsigned int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(a1 + 16)) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 6084LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = *(_DWORD *)(a1 + 80);
  v7 = 0;
  if ( !v6 )
    return 0;
  v8 = *(_QWORD *)(a1 + 112);
  while ( 1 )
  {
    v9 = 1016LL * v7;
    v10 = *(_QWORD *)(v9 + v8 + 672);
    if ( v10 )
    {
      if ( a2 == *(_QWORD *)(v10 + 40) && !*(_DWORD *)(v10 + 304) && *(_DWORD *)(v9 + v8 + 680) == 3 )
        break;
    }
    if ( ++v7 >= v6 )
      return 0;
  }
  return 1;
}
