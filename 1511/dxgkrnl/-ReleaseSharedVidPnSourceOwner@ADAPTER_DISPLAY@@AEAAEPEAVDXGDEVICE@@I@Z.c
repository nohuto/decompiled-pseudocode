/*
 * XREFs of ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C012DF94
 * Callers:
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C009B204 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0007B24 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0007D20 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z @ 0x1C0075E14 (-IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z.c)
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C009A06C (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C01298A4 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 */

char __fastcall ADAPTER_DISPLAY::ReleaseSharedVidPnSourceOwner(
        PERESOURCE **this,
        struct DXGDEVICE *a2,
        unsigned int a3)
{
  __int64 v4; // rbp
  __int64 v6; // rcx
  char v7; // si
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rax

  v4 = a3;
  v7 = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v8 + 24) = 12636LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 12637LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( this[2] != *((PERESOURCE **)a2 + 354) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v11 + 24) = 12638LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner((ADAPTER_DISPLAY *)this, a2) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v16 + 24) = 12639LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v17 = WdLogNewEntry5_WdEvent(v13, v12, v14, v15);
  *(_QWORD *)(v17 + 24) = a2;
  *(_QWORD *)(v17 + 32) = v4;
  WdLogEvent5_WdEvent(v17);
  if ( *((_QWORD *)a2 + 354) == *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) && DXGDEVICE::IsVidPnSourcePrimaryValid(a2, v4) )
  {
    ADAPTER_DISPLAY::DisablePrimaryOnDevice(this, a2, v4);
    v7 = 1;
  }
  ADAPTER_DISPLAY::RemoveVidPnOwnership((OUTPUTDUPL_MGR **)this, v4);
  ADAPTER_DISPLAY::SetGammaRamp(this, v4, 0LL);
  return v7;
}
