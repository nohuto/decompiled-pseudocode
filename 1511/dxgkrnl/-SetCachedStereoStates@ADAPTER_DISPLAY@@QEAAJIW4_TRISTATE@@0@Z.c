/*
 * XREFs of ?SetCachedStereoStates@ADAPTER_DISPLAY@@QEAAJIW4_TRISTATE@@0@Z @ 0x1C012F14C
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C014034C (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetCachedStereoStates(__int64 a1, unsigned int a2, int a3, int a4)
{
  __int64 v5; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v12; // rcx

  v5 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 23020LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( (unsigned int)v5 < *(_DWORD *)(a1 + 104) )
  {
    v12 = 1016 * v5;
    *(_DWORD *)(*(_QWORD *)(a1 + 136) + v12 + 992) = a3;
    *(_DWORD *)(*(_QWORD *)(a1 + 136) + v12 + 996) = a4;
    return 0LL;
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = v5;
    *(_QWORD *)(v10 + 32) = *(unsigned int *)(a1 + 104);
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
}
