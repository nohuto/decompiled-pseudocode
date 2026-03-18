/*
 * XREFs of ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C00740D0
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0073484 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0075550 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015D868 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0006A38 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?IsPrimaryVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0006BBC (-IsPrimaryVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0007E9C (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00877A4 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z @ 0x1C0095A80 (-PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z.c)
 */

__int64 __fastcall MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState(MANAGEDPRIMARIESTRACKER *this, int a2)
{
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbp
  const struct DXGDEVICE *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r14
  _QWORD *v18; // rax
  int updated; // eax
  __int64 v20; // rcx
  __int64 v21; // r14

  if ( !*(_QWORD *)this )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 108LL;
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = *((_DWORD *)this + 4);
  if ( (v5 & 2) != 0 )
  {
    *((_DWORD *)this + 4) = v5 & 0xFFFFFFFD;
    if ( a2 )
    {
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)this + 16LL)) )
      {
        v7 = WdLogNewEntry5_WdAssertion(v6);
        *(_QWORD *)(v7 + 24) = 126LL;
        WdLogEvent5_WdAssertion(v7);
      }
      v8 = 0LL;
      if ( (*((_DWORD *)this + 4) & 0xFFFFFFFC) != 0 )
      {
        do
        {
          v9 = (const struct DXGDEVICE *)*((_QWORD *)this + v8 + 3);
          if ( !v9 )
            goto LABEL_26;
          v10 = *(_QWORD *)(*(_QWORD *)this + 16LL);
          if ( *((_QWORD *)v9 + 357) != v10
            || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)v9 + 2) + 16LL)) )
          {
            v11 = WdLogNewEntry5_WdAssertion(v10);
            *(_QWORD *)(v11 + 24) = 135LL;
            WdLogEvent5_WdAssertion(v11);
          }
          if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)this, v9, v8) )
            goto LABEL_26;
          if ( !*((_BYTE *)this + v8 + 408) )
            goto LABEL_26;
          v12 = *((_QWORD *)this + v8 + 19);
          if ( !v12 )
            goto LABEL_26;
          v13 = *(unsigned int *)(*(_QWORD *)(v12 + 48) + 4LL);
          if ( (v13 & 1) == 0 )
            goto LABEL_26;
          if ( (*((_DWORD *)this + v8 + 86) & 0x300) != 0x300 )
          {
            v14 = WdLogNewEntry5_WdAssertion(v13);
            *(_QWORD *)(v14 + 24) = 157LL;
            WdLogEvent5_WdAssertion(v14);
          }
          if ( ADAPTER_DISPLAY::IsPrimaryVisible(*(ADAPTER_DISPLAY **)this, v8)
            && (*((_DWORD *)v9 + v8 + 250) & 0x300) == 0x300 )
          {
            goto LABEL_26;
          }
          v15 = DXGDEVICE::PinPrimaryAllocations(v9, v8);
          v17 = v15;
          if ( v15 >= 0 )
          {
            updated = ADAPTER_DISPLAY::UpdateModeWithPrimary(
                        *(ADAPTER_DISPLAY **)this,
                        v9,
                        v8,
                        *(struct DXGADAPTERALLOCATION **)(*((_QWORD *)this + v8 + 19) + 48LL));
            v21 = updated;
            if ( updated >= 0 )
            {
              DXGDEVICE::SetDisplayedPrimary(
                (struct _KTHREAD **)v9,
                v8,
                *((const struct DXGALLOCATION **)this + v8 + 19),
                *((_DWORD *)this + v8 + 70),
                1);
              *((_DWORD *)v9 + v8 + 250) |= 0x200u;
              goto LABEL_26;
            }
            v18 = (_QWORD *)WdLogNewEntry5_WdError(v20);
            v18[3] = v21;
            v18[4] = *(_QWORD *)(*(_QWORD *)this + 16LL);
            v18[5] = (unsigned int)v8;
            v18[6] = *((_QWORD *)this + v8 + 19);
          }
          else
          {
            v18 = (_QWORD *)WdLogNewEntry5_WdError(v16);
            v18[3] = v17;
            v18[4] = v9;
            v18[5] = (unsigned int)v8;
          }
          WdLogEvent5_WdError(v18);
LABEL_26:
          v8 = (unsigned int)(v8 + 1);
        }
        while ( (unsigned int)v8 < *((_DWORD *)this + 4) >> 2 );
      }
    }
  }
  return 0LL;
}
