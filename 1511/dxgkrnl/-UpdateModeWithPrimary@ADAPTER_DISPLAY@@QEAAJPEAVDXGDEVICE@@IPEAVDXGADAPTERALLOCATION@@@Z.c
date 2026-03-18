/*
 * XREFs of ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C009AD40
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAI@Z @ 0x1C006C7E8 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C00B06F0 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ @ 0x1C000C4C8 (--0-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C006A6A8 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C006A8E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C0079E00 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C009A06C (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z @ 0x1C009B578 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::UpdateModeWithPrimary(
        PERESOURCE **this,
        PERESOURCE **a2,
        unsigned int a3,
        struct DXGADAPTERALLOCATION *a4)
{
  __int64 v5; // rbp
  POWNER_ENTRY OwnerTable; // rcx
  PERESOURCE v9; // rdi
  PERESOURCE *v10; // rax
  unsigned int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int *v16; // rbx
  _QWORD *p_OwnerThread; // rdi
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdi
  int v21; // eax
  __int64 v22; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  void *v33; // [rsp+60h] [rbp+8h] BYREF
  int v34; // [rsp+70h] [rbp+18h]

  v5 = a3;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v25 = WdLogNewEntry5_WdAssertion(OwnerTable);
    *(_QWORD *)(v25 + 24) = 12037LL;
    WdLogEvent5_WdAssertion(v25);
  }
  if ( (unsigned int)v5 >= *((_DWORD *)this + 26) )
  {
    v26 = WdLogNewEntry5_WdAssertion(OwnerTable);
    *(_QWORD *)(v26 + 24) = 12038LL;
    WdLogEvent5_WdAssertion(v26);
  }
  if ( this[2] != a2[354] )
  {
    v27 = WdLogNewEntry5_WdAssertion(OwnerTable);
    *(_QWORD *)(v27 + 24) = 12039LL;
    WdLogEvent5_WdAssertion(v27);
  }
  v9 = a2[2][2];
  if ( !v9
    || (OwnerTable = v9[19].OwnerTable) == 0LL
    || !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)OwnerTable[1].OwnerThread) )
  {
    v24 = WdLogNewEntry5_WdAssertion(OwnerTable);
    *(_QWORD *)(v24 + 24) = 12044LL;
    WdLogEvent5_WdAssertion(v24);
  }
  v10 = this[2];
  if ( v10[249] )
  {
    if ( v10 != (PERESOURCE *)v9 )
    {
      v28 = WdLogNewEntry5_WdAssertion(OwnerTable);
      *(_QWORD *)(v28 + 24) = 12051LL;
      WdLogEvent5_WdAssertion(v28);
    }
    ADAPTER_RENDER::DisableOverlays((ADAPTER_RENDER *)v9[19].OwnerTable);
  }
  ADAPTER_RENDER::FlushScheduler((__int64)v9[19].OwnerTable, 8, v5, 0);
  if ( (unsigned __int8)DXGADAPTER::IsVSyncAvailable((DXGADAPTER *)this[2], (unsigned int)v5) )
  {
    if ( this[2][249] )
    {
      CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>(
        &v33,
        v11);
      v16 = (unsigned int *)v33;
      if ( v33 )
      {
        if ( !a4 )
        {
          v30 = WdLogNewEntry5_WdAssertion(v13);
          *(_QWORD *)(v30 + 24) = 12079LL;
          WdLogEvent5_WdAssertion(v30);
        }
        *v16 = v5;
        *((_QWORD *)v16 + 2) = *((_QWORD *)a4 + 2);
        p_OwnerThread = &v9[19].OwnerTable->OwnerThread;
        (*(void (__fastcall **)(_QWORD, _QWORD, unsigned int *, unsigned int *))(*(_QWORD *)(p_OwnerThread[53] + 8LL)
                                                                               + 208LL))(
          p_OwnerThread[54],
          *((_QWORD *)a4 + 1),
          v16 + 1,
          v16 + 2);
        v16[138] |= 1u;
        v18 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(p_OwnerThread[50] + 8LL) + 712LL))(
                p_OwnerThread[51],
                v16);
        v20 = v18;
        if ( v18 >= 0 )
        {
          operator delete(v16);
          goto LABEL_21;
        }
        v31 = (_QWORD *)WdLogNewEntry5_WdError(v19);
        v31[3] = v20;
        v31[4] = this[2];
        v31[5] = v5;
        v31[6] = v16[2];
        WdLogEvent5_WdError(v31);
      }
      else
      {
        v29 = WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
        *(_QWORD *)(v29 + 24) = this;
        WdLogEvent5_WdLowResource(v29);
        LODWORD(v20) = -1073741801;
      }
      operator delete(v16);
      return (unsigned int)v20;
    }
    LODWORD(v20) = v34;
LABEL_21:
    if ( !*((_BYTE *)this[2][248][1].SharedWaiters + 1016 * v5 + 1000) || !BYTE1(this[17][127 * v5 + 125]) )
    {
      v21 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v5, 1u, 0x20u, 0LL, 1u);
      v20 = v21;
      if ( v21 < 0 )
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdError(v22);
        v32[3] = v20;
        v32[4] = this[2];
        v32[5] = v5;
        WdLogEvent5_WdError(v32);
      }
    }
    ADAPTER_DISPLAY::SetGammaRamp(this, v5, 0LL);
    return (unsigned int)v20;
  }
  return 0LL;
}
