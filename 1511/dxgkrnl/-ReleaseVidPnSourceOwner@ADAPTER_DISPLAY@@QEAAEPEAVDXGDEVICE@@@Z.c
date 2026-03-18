/*
 * XREFs of ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C012E0EC
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00AFD1C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@@Z @ 0x1C013A090 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0007B24 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0007D20 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0007DCC (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z @ 0x1C0075E14 (-IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z.c)
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C009A06C (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C01298A4 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 */

char __fastcall ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(PERESOURCE **this, struct DXGDEVICE *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  char v15; // r14
  unsigned int v16; // esi
  PERESOURCE *v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // esi
  __int64 v20; // rbp
  PERESOURCE *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 12487LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 12488LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner((ADAPTER_DISPLAY *)this, a2)
    && !ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner((ADAPTER_DISPLAY *)this, a2) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v12 + 24) = 12489LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = WdLogNewEntry5_WdEvent(v9, v8, v10, v11);
  *(_QWORD *)(v13 + 24) = a2;
  WdLogEvent5_WdEvent(v13);
  v15 = 0;
  v16 = 0;
  if ( *((_DWORD *)this + 26) )
  {
    while ( 1 )
    {
      v17 = (PERESOURCE *)*((_QWORD *)a2 + 354);
      if ( v17 == *(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL) )
      {
        v14 = 1016LL * v16;
        if ( a2 == (struct DXGDEVICE *)this[17][(unsigned __int64)v14 / 8 + 84] )
        {
          if ( this[2] != v17 )
          {
            v18 = WdLogNewEntry5_WdAssertion(v14);
            *(_QWORD *)(v18 + 24) = 12507LL;
            WdLogEvent5_WdAssertion(v18);
          }
          if ( DXGDEVICE::IsVidPnSourcePrimaryValid(a2, v16) )
            break;
        }
      }
      if ( ++v16 >= *((_DWORD *)this + 26) )
        goto LABEL_17;
    }
    v15 = 1;
    ADAPTER_DISPLAY::DisablePrimaryOnDevice(this, a2, 0xFFFFFFFD);
  }
LABEL_17:
  v19 = 0;
  if ( *((_DWORD *)this + 26) )
  {
    while ( 1 )
    {
      v20 = 127LL * v19;
      v21 = this[17];
      if ( a2 == (struct DXGDEVICE *)v21[v20 + 86] )
        break;
      if ( a2 == (struct DXGDEVICE *)v21[v20 + 84] )
      {
        if ( this[2] != *((PERESOURCE **)a2 + 354) )
        {
          v23 = WdLogNewEntry5_WdAssertion(v14);
          *(_QWORD *)(v23 + 24) = 12540LL;
          WdLogEvent5_WdAssertion(v23);
        }
        ADAPTER_DISPLAY::RemoveVidPnOwnership((OUTPUTDUPL_MGR **)this, v19);
        goto LABEL_26;
      }
LABEL_27:
      if ( ++v19 >= *((_DWORD *)this + 26) )
        return v15;
    }
    if ( this[2] != *((PERESOURCE **)a2 + 354) )
    {
      v22 = WdLogNewEntry5_WdAssertion(v14);
      *(_QWORD *)(v22 + 24) = 12533LL;
      WdLogEvent5_WdAssertion(v22);
    }
    this[17][v20 + 86] = 0LL;
LABEL_26:
    ADAPTER_DISPLAY::SetGammaRamp(this, v19, 0LL);
    goto LABEL_27;
  }
  return v15;
}
