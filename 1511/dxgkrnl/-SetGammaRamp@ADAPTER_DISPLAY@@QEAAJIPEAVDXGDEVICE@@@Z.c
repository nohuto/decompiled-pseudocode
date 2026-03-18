/*
 * XREFs of ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C009A06C
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C008DD50 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C009AB8C (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C009AD40 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C009B204 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00BD4C4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00C2AC0 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00CC714 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATION@@QEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@EPEAE@Z @ 0x1C0125730 (-CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATI.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C012DF94 (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C012E0EC (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C0130060 (DxgkAdjustFullscreenGamma.c)
 *     DxgkSetGammaRamp @ 0x1C013D770 (DxgkSetGammaRamp.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000244C (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ResumeScheduler@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C006A824 (-ResumeScheduler@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJE@Z @ 0x1C006A884 (-SuspendScheduler@ADAPTER_RENDER@@QEAAJE@Z.c)
 *     DmmUpdateGammaRampOnAllClientVidPnPathsFromSource @ 0x1C00BE454 (DmmUpdateGammaRampOnAllClientVidPnPathsFromSource.c)
 *     ?AdjustFullscreenGammaRampDXGI1@ADAPTER_DISPLAY@@QEAAXPEAU_D3DDDI_GAMMA_RAMP_DXGI_1@@0PEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1C01253D8 (-AdjustFullscreenGammaRampDXGI1@ADAPTER_DISPLAY@@QEAAXPEAU_D3DDDI_GAMMA_RAMP_DXGI_1@@0PEAUDXGK_G.c)
 *     ?AdjustFullscreenGammaRampRGB256x3x16@ADAPTER_DISPLAY@@QEAAXPEAU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@0PEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1C0125468 (-AdjustFullscreenGammaRampRGB256x3x16@ADAPTER_DISPLAY@@QEAAXPEAU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetGammaRamp(PERESOURCE **this, unsigned int a2, struct DXGDEVICE *a3)
{
  __int64 v4; // rbx
  __int64 v6; // rcx
  PERESOURCE *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r12
  char v10; // r15
  int v11; // r14d
  struct DXGK_GAMMA_ADJUSTMENT *v12; // r13
  struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *v13; // rbx
  SIZE_T v14; // rcx
  PERESOURCE *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // esi
  unsigned int updated; // ebx
  __int64 v20; // rcx
  __int64 v22; // rax
  struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *v23; // rsi
  struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *v24; // rax
  ADAPTER_DISPLAY *v25; // rcx
  __int64 v26; // rax
  int v27; // [rsp+20h] [rbp-20h] BYREF
  __int64 v28; // [rsp+28h] [rbp-18h]
  void *v29; // [rsp+30h] [rbp-10h]

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v22 + 24) = 24554LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !*((_DWORD *)this[2] + 342) )
    return 0LL;
  v7 = this[17];
  v8 = v4;
  v9 = 127 * v4;
  if ( !v7[127 * v4 + 84] )
    goto LABEL_9;
  if ( LODWORD(v7[v9 + 85]) != 1 )
    goto LABEL_8;
  if ( v7[v9 + 86] )
  {
    a3 = (struct DXGDEVICE *)v7[v9 + 86];
    goto LABEL_9;
  }
  if ( !a3 )
LABEL_8:
    a3 = (struct DXGDEVICE *)v7[127 * v4 + 84];
LABEL_9:
  v10 = 0;
  if ( !a3 )
    goto LABEL_12;
  v11 = *((_DWORD *)a3 + v4 + 628);
  v12 = (struct DXGK_GAMMA_ADJUSTMENT *)*((_QWORD *)a3 + v4 + 330);
  v13 = (struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *)*((_QWORD *)a3 + v4 + 298);
  v14 = *((unsigned int *)a3 + v8 + 644);
  v29 = v13;
  v27 = v11;
  v28 = v14;
  if ( v12 )
  {
    if ( !v14 )
    {
      v14 = 1536LL;
      v11 = 2;
      v28 = 1536LL;
      v27 = 2;
    }
    v23 = v13;
    v24 = (struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *)operator new[](v14, 0x4B677844u, PagedPool);
    v29 = v24;
    v13 = v24;
    if ( !v24 )
      return 3221225495LL;
    v10 = 1;
    if ( v11 == 2 )
    {
      ADAPTER_DISPLAY::AdjustFullscreenGammaRampRGB256x3x16(v25, v23, v24, v12);
    }
    else if ( v23 )
    {
      ADAPTER_DISPLAY::AdjustFullscreenGammaRampDXGI1(
        v25,
        (struct _D3DDDI_GAMMA_RAMP_DXGI_1 *)v23,
        (struct _D3DDDI_GAMMA_RAMP_DXGI_1 *)v24,
        v12);
    }
  }
  if ( !v13 )
  {
LABEL_12:
    v15 = this[17];
    v27 = 2;
    v28 = 1536LL;
    v13 = (struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *)v15[v9 + 99];
    v29 = v13;
    if ( !v13 )
    {
      v28 = 0LL;
      v29 = 0LL;
      v27 = 1;
    }
  }
  if ( DXGADAPTER::IsFullWDDMAdapter((DXGADAPTER *)this[2])
    && (v18 = ADAPTER_RENDER::SuspendScheduler(*(ADAPTER_RENDER **)(v16 + 1992), 0), v18 < 0) )
  {
    if ( v10 )
      operator delete(v13);
    v26 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v26 + 24) = this;
    WdLogEvent5_WdError(v26);
    return (unsigned int)v18;
  }
  else
  {
    updated = DmmUpdateGammaRampOnAllClientVidPnPathsFromSource(this[2], a2, &v27);
    if ( v10 )
      operator delete(v29);
    if ( DXGADAPTER::IsFullWDDMAdapter((DXGADAPTER *)this[2]) )
      ADAPTER_RENDER::ResumeScheduler(*(ADAPTER_RENDER **)(v20 + 1992), 0);
    return updated;
  }
}
