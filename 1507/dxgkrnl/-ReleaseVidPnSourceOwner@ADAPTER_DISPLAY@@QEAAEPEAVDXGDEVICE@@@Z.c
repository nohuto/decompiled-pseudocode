/*
 * XREFs of ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C00B3744
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00B47FC (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@@Z @ 0x1C0135970 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C00067E0 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0006888 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C000AEE4 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C00B58D4 (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00B5D3C (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z @ 0x1C00B7C74 (-IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z.c)
 */

char __fastcall ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(PERESOURCE **this, struct DXGDEVICE *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  PERESOURCE *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  char v21; // r14
  unsigned int v22; // esi
  unsigned int v23; // esi
  __int64 v24; // rbp
  PERESOURCE *v25; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v27 + 24) = 12122LL;
    WdLogEvent5_WdAssertion(v27);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v28 + 24) = 12123LL;
    WdLogEvent5_WdAssertion(v28);
  }
  if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner((ADAPTER_DISPLAY *)this, a2)
    && !ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner((ADAPTER_DISPLAY *)this, a2) )
  {
    v29 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    *(_QWORD *)(v29 + 24) = 12124LL;
    WdLogEvent5_WdAssertion(v29);
  }
  v16 = WdLogNewEntry5_WdEvent(v13, v12, v14, v15);
  *(_QWORD *)(v16 + 24) = a2;
  WdLogEvent5_WdEvent(v16);
  v21 = 0;
  v22 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    while ( 1 )
    {
      v17 = (PERESOURCE *)*((_QWORD *)a2 + 2338);
      if ( v17 == *(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL) )
      {
        v18 = 1008LL * v22;
        if ( a2 == (struct DXGDEVICE *)this[14][(unsigned __int64)v18 / 8 + 84] )
        {
          if ( this[2] != v17 )
          {
            v30 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
            *(_QWORD *)(v30 + 24) = 12142LL;
            WdLogEvent5_WdAssertion(v30);
          }
          if ( DXGDEVICE::IsVidPnSourcePrimaryValid(a2, v22) )
            break;
        }
      }
      if ( ++v22 >= *((_DWORD *)this + 20) )
        goto LABEL_13;
    }
    v21 = 1;
    ADAPTER_DISPLAY::DisablePrimaryOnDevice((ADAPTER_DISPLAY *)this, a2, 0xFFFFFFFD);
  }
LABEL_13:
  v23 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    while ( 1 )
    {
      v24 = 126LL * v23;
      v25 = this[14];
      if ( a2 == (struct DXGDEVICE *)v25[v24 + 86] )
        break;
      if ( a2 == (struct DXGDEVICE *)v25[v24 + 84] )
      {
        if ( this[2] != *((PERESOURCE **)a2 + 2338) )
        {
          v32 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
          *(_QWORD *)(v32 + 24) = 12175LL;
          WdLogEvent5_WdAssertion(v32);
        }
        ADAPTER_DISPLAY::RemoveVidPnOwnership((ADAPTER_DISPLAY *)this, v23);
LABEL_19:
        ADAPTER_DISPLAY::SetGammaRamp((ADAPTER_DISPLAY *)this, v23, 0LL);
      }
      if ( ++v23 >= *((_DWORD *)this + 20) )
        return v21;
    }
    if ( this[2] != *((PERESOURCE **)a2 + 2338) )
    {
      v31 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
      *(_QWORD *)(v31 + 24) = 12168LL;
      WdLogEvent5_WdAssertion(v31);
    }
    this[14][v24 + 86] = 0LL;
    goto LABEL_19;
  }
  return v21;
}
