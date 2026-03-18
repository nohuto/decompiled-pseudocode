/*
 * XREFs of ?ProcessHasVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGPROCESS@@W4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@W4DXGDEVICECLIENT_TYPE@@@Z @ 0x1C012742C
 * Callers:
 *     ?AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z @ 0x1C01472B0 (-AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

char __fastcall ADAPTER_DISPLAY::ProcessHasVidPnSourceOwner(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  unsigned int v9; // edx
  unsigned int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(a1 + 16)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v8 + 24) = 25730LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = *(_DWORD *)(a1 + 80);
  v10 = 0;
  if ( !v9 )
    return 0;
  v11 = *(_QWORD *)(a1 + 112);
  while ( 1 )
  {
    v12 = 1008LL * v10;
    v13 = *(_QWORD *)(v12 + v11 + 672);
    if ( v13 )
    {
      if ( a2 == *(_QWORD *)(v13 + 40) && !*(_DWORD *)(v13 + 280) && *(_DWORD *)(v12 + v11 + 680) == 3 )
        break;
    }
    if ( ++v10 >= v9 )
      return 0;
  }
  return 1;
}
