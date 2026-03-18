/*
 * XREFs of ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C00B3660
 * Callers:
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00B644C (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C00067E0 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C000AEE4 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C00B58D4 (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00B5D3C (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z @ 0x1C00B7C74 (-IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z.c)
 */

char __fastcall ADAPTER_DISPLAY::ReleaseSharedVidPnSourceOwner(
        PERESOURCE **this,
        struct DXGDEVICE *a2,
        unsigned int a3)
{
  __int64 v4; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // si
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax

  v4 = a3;
  v10 = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v21 + 24) = 12271LL;
    WdLogEvent5_WdAssertion(v21);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    *(_QWORD *)(v22 + 24) = 12272LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( this[2] != *((PERESOURCE **)a2 + 2338) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    *(_QWORD *)(v23 + 24) = 12273LL;
    WdLogEvent5_WdAssertion(v23);
  }
  if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner((ADAPTER_DISPLAY *)this, a2) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
    *(_QWORD *)(v24 + 24) = 12274LL;
    WdLogEvent5_WdAssertion(v24);
  }
  v19 = WdLogNewEntry5_WdEvent(v16, v15, v17, v18);
  *(_QWORD *)(v19 + 24) = a2;
  *(_QWORD *)(v19 + 32) = v4;
  WdLogEvent5_WdEvent(v19);
  if ( *((_QWORD *)a2 + 2338) == *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) && DXGDEVICE::IsVidPnSourcePrimaryValid(a2, v4) )
  {
    ADAPTER_DISPLAY::DisablePrimaryOnDevice((ADAPTER_DISPLAY *)this, a2, v4);
    v10 = 1;
  }
  ADAPTER_DISPLAY::RemoveVidPnOwnership((ADAPTER_DISPLAY *)this, v4);
  ADAPTER_DISPLAY::SetGammaRamp((ADAPTER_DISPLAY *)this, v4, 0LL);
  return v10;
}
