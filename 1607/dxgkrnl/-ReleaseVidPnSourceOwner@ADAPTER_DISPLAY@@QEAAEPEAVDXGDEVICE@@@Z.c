/*
 * XREFs of ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C00DE19C
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0073484 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015D868 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00067C4 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C00069EC (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0006A94 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C0086AD8 (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z @ 0x1C009E994 (-IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00DDEF0 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 */

char __fastcall ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(PERESOURCE **this, struct DXGDEVICE *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  char v9; // r14
  unsigned int v10; // esi
  PERESOURCE *v11; // rdx
  unsigned int v12; // esi
  __int64 v13; // rbp
  PERESOURCE *v14; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v16 + 24) = 2247LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v17 + 24) = 2248LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner((ADAPTER_DISPLAY *)this, a2)
    && !ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner((ADAPTER_DISPLAY *)this, a2) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v18 + 24) = 2249LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v7 = WdLogNewEntry5_WdEvent(v6);
  *(_QWORD *)(v7 + 24) = a2;
  WdLogEvent5_WdEvent(v7);
  v9 = 0;
  v10 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    while ( 1 )
    {
      v11 = (PERESOURCE *)*((_QWORD *)a2 + 357);
      if ( v11 == *(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL) )
      {
        v8 = 1016LL * v10;
        if ( a2 == (struct DXGDEVICE *)this[14][(unsigned __int64)v8 / 8 + 84] )
        {
          if ( this[2] != v11 )
          {
            v19 = WdLogNewEntry5_WdAssertion(v8);
            *(_QWORD *)(v19 + 24) = 2267LL;
            WdLogEvent5_WdAssertion(v19);
          }
          if ( DXGDEVICE::IsVidPnSourcePrimaryValid(a2, v10) )
            break;
        }
      }
      if ( ++v10 >= *((_DWORD *)this + 20) )
        goto LABEL_13;
    }
    v9 = 1;
    ADAPTER_DISPLAY::DisablePrimaryOnDevice(this, a2, 0xFFFFFFFD);
  }
LABEL_13:
  v12 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    while ( 1 )
    {
      v13 = 127LL * v12;
      v14 = this[14];
      if ( a2 == (struct DXGDEVICE *)v14[v13 + 86] )
        break;
      if ( a2 == (struct DXGDEVICE *)v14[v13 + 84] )
      {
        if ( this[2] != *((PERESOURCE **)a2 + 357) )
        {
          v21 = WdLogNewEntry5_WdAssertion(v8);
          *(_QWORD *)(v21 + 24) = 2300LL;
          WdLogEvent5_WdAssertion(v21);
        }
        ADAPTER_DISPLAY::RemoveVidPnOwnership((OUTPUTDUPL_MGR **)this, v12);
LABEL_19:
        ADAPTER_DISPLAY::SetGammaRamp(this, v12, 0LL);
      }
      if ( ++v12 >= *((_DWORD *)this + 20) )
        return v9;
    }
    if ( this[2] != *((PERESOURCE **)a2 + 357) )
    {
      v20 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v20 + 24) = 2293LL;
      WdLogEvent5_WdAssertion(v20);
    }
    this[14][v13 + 86] = 0LL;
    goto LABEL_19;
  }
  return v9;
}
