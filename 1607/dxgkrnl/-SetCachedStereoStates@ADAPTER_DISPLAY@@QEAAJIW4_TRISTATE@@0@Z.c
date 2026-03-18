/*
 * XREFs of ?SetCachedStereoStates@ADAPTER_DISPLAY@@QEAAJIW4_TRISTATE@@0@Z @ 0x1C00F6650
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00D1678 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetCachedStereoStates(__int64 a1, unsigned int a2, int a3, int a4)
{
  __int64 v5; // rdi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rax

  v5 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v11 + 24) = 4995LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( (unsigned int)v5 >= *(_DWORD *)(a1 + 80) )
  {
    v12 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v12 + 24) = v5;
    *(_QWORD *)(v12 + 32) = *(unsigned int *)(a1 + 80);
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
  else
  {
    v9 = 1016 * v5;
    *(_DWORD *)(*(_QWORD *)(a1 + 112) + v9 + 1000) = a3;
    *(_DWORD *)(*(_QWORD *)(a1 + 112) + v9 + 1004) = a4;
    return 0LL;
  }
}
