/*
 * XREFs of ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00B5EC8
 * Callers:
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C00B5424 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAI@Z @ 0x1C00B74D4 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ @ 0x1C00099FC (--0-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093F2C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C00B58D4 (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z @ 0x1C00B6870 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C00B8950 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::UpdateModeWithPrimary(
        PERESOURCE **this,
        PERESOURCE **a2,
        unsigned int a3,
        struct DXGADAPTERALLOCATION *a4)
{
  __int64 v5; // rbp
  __int64 v8; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  PERESOURCE v12; // rdi
  PERESOURCE *v13; // rax
  unsigned int v14; // edx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int *v19; // rbx
  struct _LIST_ENTRY *v20; // rdi
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rdi
  int v24; // eax
  __int64 v25; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  void *v36; // [rsp+60h] [rbp+8h] BYREF
  int v37; // [rsp+70h] [rbp+18h]

  v5 = a3;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v28 = WdLogNewEntry5_WdAssertion(Blink, v8, v10, v11);
    *(_QWORD *)(v28 + 24) = 11692LL;
    WdLogEvent5_WdAssertion(v28);
  }
  if ( (unsigned int)v5 >= *((_DWORD *)this + 20) )
  {
    v29 = WdLogNewEntry5_WdAssertion(Blink, v8, v10, v11);
    *(_QWORD *)(v29 + 24) = 11693LL;
    WdLogEvent5_WdAssertion(v29);
  }
  if ( this[2] != a2[2338] )
  {
    v30 = WdLogNewEntry5_WdAssertion(Blink, v8, v10, v11);
    *(_QWORD *)(v30 + 24) = 11694LL;
    WdLogEvent5_WdAssertion(v30);
  }
  v12 = a2[2][2];
  if ( !v12
    || (Blink = v12[19].SystemResourcesList.Blink) == 0LL
    || !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)Blink[1].Flink) )
  {
    v27 = WdLogNewEntry5_WdAssertion(Blink, v8, v10, v11);
    *(_QWORD *)(v27 + 24) = 11699LL;
    WdLogEvent5_WdAssertion(v27);
  }
  v13 = this[2];
  if ( v13[248] )
  {
    if ( v13 != (PERESOURCE *)v12 )
    {
      v31 = WdLogNewEntry5_WdAssertion(Blink, v8, v10, v11);
      *(_QWORD *)(v31 + 24) = 11706LL;
      WdLogEvent5_WdAssertion(v31);
    }
    ADAPTER_RENDER::DisableOverlays((ADAPTER_RENDER *)v12[19].SystemResourcesList.Blink);
  }
  ADAPTER_RENDER::FlushScheduler((__int64)v12[19].SystemResourcesList.Blink, 8, v5, 0);
  if ( this[2][248] )
  {
    CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>(
      &v36,
      v14);
    v19 = (unsigned int *)v36;
    if ( v36 )
    {
      if ( !a4 )
      {
        v33 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
        *(_QWORD *)(v33 + 24) = 11729LL;
        WdLogEvent5_WdAssertion(v33);
      }
      *v19 = v5;
      *((_QWORD *)v19 + 2) = *((_QWORD *)a4 + 2);
      v20 = v12[19].SystemResourcesList.Blink;
      ((void (__fastcall *)(struct _LIST_ENTRY *, _QWORD, unsigned int *, unsigned int *))v20[25].Flink->Blink[13].Flink)(
        v20[25].Blink,
        *((_QWORD *)a4 + 1),
        v19 + 1,
        v19 + 2);
      v19[138] |= 1u;
      v21 = ((__int64 (__fastcall *)(struct _LIST_ENTRY *, unsigned int *))v20[23].Blink->Blink[44].Blink)(
              v20[24].Flink,
              v19);
      v23 = v21;
      if ( v21 >= 0 )
      {
        operator delete(v19);
        goto LABEL_20;
      }
      v34 = (_QWORD *)WdLogNewEntry5_WdError(v22);
      v34[3] = v23;
      v34[4] = this[2];
      v34[5] = v5;
      v34[6] = v19[2];
      WdLogEvent5_WdError(v34);
    }
    else
    {
      v32 = WdLogNewEntry5_WdLowResource(v16);
      *(_QWORD *)(v32 + 24) = this;
      WdLogEvent5_WdLowResource(v32);
      LODWORD(v23) = -1073741801;
    }
    operator delete(v19);
    return (unsigned int)v23;
  }
  LODWORD(v23) = v37;
LABEL_20:
  if ( !LOBYTE(this[2][247][1].SystemResourcesList.Blink[63 * v5 + 62].Flink) || !BYTE1(this[14][126 * v5 + 124]) )
  {
    v24 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v5, 1u, 0x20u, 0LL, 1u);
    v23 = v24;
    if ( v24 < 0 )
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdError(v25);
      v35[3] = v23;
      v35[4] = this[2];
      v35[5] = v5;
      WdLogEvent5_WdError(v35);
    }
  }
  ADAPTER_DISPLAY::SetGammaRamp(this, v5, 0LL);
  return (unsigned int)v23;
}
