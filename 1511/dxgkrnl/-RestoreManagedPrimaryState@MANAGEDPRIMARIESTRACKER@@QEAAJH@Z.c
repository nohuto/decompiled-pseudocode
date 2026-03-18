/*
 * XREFs of ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C00B06F0
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBI@Z @ 0x1C0063440 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00AFD1C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@@Z @ 0x1C013A090 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0002320 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0007D6C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z @ 0x1C006D448 (-PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C009AD40 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 */

__int64 __fastcall MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState(MANAGEDPRIMARIESTRACKER *this, int a2)
{
  int v4; // eax
  __int64 v6; // rcx
  __int64 v7; // rbp
  const struct DXGDEVICE *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r14
  int updated; // eax
  __int64 v17; // rcx
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax

  if ( !*(_QWORD *)this )
  {
    v19 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v19 + 24) = 108LL;
    WdLogEvent5_WdAssertion(v19);
  }
  v4 = *((_DWORD *)this + 4);
  if ( (v4 & 2) != 0 )
  {
    *((_DWORD *)this + 4) = v4 & 0xFFFFFFFD;
    if ( a2 )
    {
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)this + 16LL)) )
      {
        v20 = WdLogNewEntry5_WdAssertion(v6);
        *(_QWORD *)(v20 + 24) = 126LL;
        WdLogEvent5_WdAssertion(v20);
      }
      v7 = 0LL;
      if ( (*((_DWORD *)this + 4) & 0xFFFFFFFC) != 0 )
      {
        while ( 1 )
        {
          v8 = (const struct DXGDEVICE *)*((_QWORD *)this + v7 + 3);
          if ( !v8 )
            goto LABEL_10;
          v9 = *(_QWORD *)(*(_QWORD *)this + 16LL);
          if ( *((_QWORD *)v8 + 354) != v9
            || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)v8 + 2) + 16LL)) )
          {
            v21 = WdLogNewEntry5_WdAssertion(v9);
            *(_QWORD *)(v21 + 24) = 135LL;
            WdLogEvent5_WdAssertion(v21);
          }
          if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)this, v8, v7) )
            goto LABEL_10;
          if ( !*((_BYTE *)this + v7 + 408) )
            goto LABEL_10;
          v10 = *((_QWORD *)this + v7 + 19);
          if ( !v10 )
            goto LABEL_10;
          v11 = *(unsigned int *)(*(_QWORD *)(v10 + 48) + 4LL);
          if ( (v11 & 1) == 0 )
            goto LABEL_10;
          if ( (*((_DWORD *)this + v7 + 86) & 0x300) != 0x300 )
          {
            v12 = WdLogNewEntry5_WdAssertion(v11);
            *(_QWORD *)(v12 + 24) = 157LL;
            WdLogEvent5_WdAssertion(v12);
          }
          v13 = DXGDEVICE::PinPrimaryAllocations(v8, v7);
          v15 = v13;
          if ( v13 < 0 )
            break;
          updated = ADAPTER_DISPLAY::UpdateModeWithPrimary(
                      *(PERESOURCE ***)this,
                      (PERESOURCE **)v8,
                      v7,
                      *(struct DXGADAPTERALLOCATION **)(*((_QWORD *)this + v7 + 19) + 48LL));
          v18 = updated;
          if ( updated < 0 )
          {
            v22 = (_QWORD *)WdLogNewEntry5_WdError(v17);
            v22[3] = v18;
            v22[4] = *(_QWORD *)(*(_QWORD *)this + 16LL);
            v22[5] = (unsigned int)v7;
            v22[6] = *((_QWORD *)this + v7 + 19);
            goto LABEL_26;
          }
          DXGDEVICE::SetDisplayedPrimary(
            v8,
            v7,
            *((const struct DXGALLOCATION **)this + v7 + 19),
            *((_DWORD *)this + v7 + 70),
            1);
          *((_DWORD *)v8 + v7 + 244) |= 0x200u;
LABEL_10:
          v7 = (unsigned int)(v7 + 1);
          if ( (unsigned int)v7 >= *((_DWORD *)this + 4) >> 2 )
            return 0LL;
        }
        v22 = (_QWORD *)WdLogNewEntry5_WdError(v14);
        v22[3] = v15;
        v22[4] = v8;
        v22[5] = (unsigned int)v7;
LABEL_26:
        WdLogEvent5_WdError(v22);
        goto LABEL_10;
      }
    }
  }
  return 0LL;
}
