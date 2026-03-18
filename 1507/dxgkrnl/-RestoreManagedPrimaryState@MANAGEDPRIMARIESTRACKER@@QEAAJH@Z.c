/*
 * XREFs of ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C00B5424
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBI@Z @ 0x1C005C690 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00B47FC (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@@Z @ 0x1C0135970 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000682C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@I@Z @ 0x1C000B51C (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@I@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00B5EC8 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z @ 0x1C00B79C8 (-PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z.c)
 */

__int64 __fastcall MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState(
        MANAGEDPRIMARIESTRACKER *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // edi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbp
  const struct DXGDEVICE *v12; // rsi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r14
  _QWORD *v24; // rax
  int updated; // eax
  __int64 v26; // rcx
  __int64 v27; // r14

  v4 = a2;
  if ( !*(_QWORD *)this )
  {
    v15 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v15 + 24) = 108LL;
    WdLogEvent5_WdAssertion(v15);
  }
  v6 = *((_DWORD *)this + 4);
  if ( (v6 & 2) != 0 )
  {
    *((_DWORD *)this + 4) = v6 & 0xFFFFFFFD;
    if ( v4 )
    {
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)this + 16LL)) )
      {
        v16 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
        *(_QWORD *)(v16 + 24) = 126LL;
        WdLogEvent5_WdAssertion(v16);
      }
      v11 = 0LL;
      if ( (*((_DWORD *)this + 4) & 0xFFFFFFFC) != 0 )
      {
        do
        {
          v12 = (const struct DXGDEVICE *)*((_QWORD *)this + v11 + 3);
          if ( !v12 )
            goto LABEL_9;
          v14 = *(_QWORD *)(*(_QWORD *)this + 16LL);
          if ( *((_QWORD *)v12 + 2338) != v14
            || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)v12 + 2) + 16LL)) )
          {
            v17 = WdLogNewEntry5_WdAssertion(v14, v7, v9, v10);
            *(_QWORD *)(v17 + 24) = 135LL;
            WdLogEvent5_WdAssertion(v17);
          }
          if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)this, v12, v11) )
            goto LABEL_9;
          if ( !*((_BYTE *)this + v11 + 408) )
            goto LABEL_9;
          v18 = *((_QWORD *)this + v11 + 19);
          if ( !v18 )
            goto LABEL_9;
          v19 = *(unsigned int *)(*(_QWORD *)(v18 + 48) + 4LL);
          if ( (v19 & 1) == 0 )
            goto LABEL_9;
          if ( (*((_BYTE *)this + 4 * v11 + 344) & 0x60) != 0x60 )
          {
            v20 = WdLogNewEntry5_WdAssertion(v19, v7, v9, v10);
            *(_QWORD *)(v20 + 24) = 157LL;
            WdLogEvent5_WdAssertion(v20);
          }
          v21 = DXGDEVICE::PinPrimaryAllocations(v12, v11);
          v23 = v21;
          if ( v21 >= 0 )
          {
            updated = ADAPTER_DISPLAY::UpdateModeWithPrimary(
                        *(ADAPTER_DISPLAY **)this,
                        v12,
                        v11,
                        *(struct DXGADAPTERALLOCATION **)(*((_QWORD *)this + v11 + 19) + 48LL));
            v27 = updated;
            if ( updated >= 0 )
            {
              DXGDEVICE::SetDisplayedPrimary(
                v12,
                v11,
                *((const struct DXGALLOCATION **)this + v11 + 19),
                *((_DWORD *)this + v11 + 70));
              *((_DWORD *)v12 + v11 + 1188) |= 0x40u;
              goto LABEL_9;
            }
            v24 = (_QWORD *)WdLogNewEntry5_WdError(v26);
            v24[3] = v27;
            v24[4] = *(_QWORD *)(*(_QWORD *)this + 16LL);
            v24[5] = (unsigned int)v11;
            v24[6] = *((_QWORD *)this + v11 + 19);
          }
          else
          {
            v24 = (_QWORD *)WdLogNewEntry5_WdError(v22);
            v24[3] = v23;
            v24[4] = v12;
            v24[5] = (unsigned int)v11;
          }
          WdLogEvent5_WdError(v24);
LABEL_9:
          v11 = (unsigned int)(v11 + 1);
        }
        while ( (unsigned int)v11 < *((_DWORD *)this + 4) >> 2 );
      }
    }
  }
  return 0LL;
}
