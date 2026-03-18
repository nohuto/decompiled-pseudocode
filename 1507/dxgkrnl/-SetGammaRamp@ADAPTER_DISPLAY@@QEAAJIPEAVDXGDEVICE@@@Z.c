/*
 * XREFs of ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C00B58D4
 * Callers:
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00A9BAC (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C00B3660 (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C00B3744 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00B5EC8 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00B644C (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00BBBF0 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00BDA68 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C00BDB08 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C00CC7A0 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 *     ?CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATION@@QEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@EPEAE@Z @ 0x1C011FC00 (-CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATI.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C01299D0 (DxgkAdjustFullscreenGamma.c)
 *     DxgkSetGammaRamp @ 0x1C0138D70 (DxgkSetGammaRamp.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000B05C (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ResumeScheduler@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C0093E6C (-ResumeScheduler@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJE@Z @ 0x1C0093ECC (-SuspendScheduler@ADAPTER_RENDER@@QEAAJE@Z.c)
 *     DmmUpdateGammaRampOnAllClientVidPnPathsFromSource @ 0x1C00B6F10 (DmmUpdateGammaRampOnAllClientVidPnPathsFromSource.c)
 *     ?AdjustFullscreenGammaRampDXGI1@ADAPTER_DISPLAY@@QEAAXPEAU_D3DDDI_GAMMA_RAMP_DXGI_1@@0PEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1C011F83C (-AdjustFullscreenGammaRampDXGI1@ADAPTER_DISPLAY@@QEAAXPEAU_D3DDDI_GAMMA_RAMP_DXGI_1@@0PEAUDXGK_G.c)
 *     ?AdjustFullscreenGammaRampRGB256x3x16@ADAPTER_DISPLAY@@QEAAXPEAU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@0PEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1C011F8CC (-AdjustFullscreenGammaRampRGB256x3x16@ADAPTER_DISPLAY@@QEAAXPEAU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetGammaRamp(PERESOURCE **this, unsigned int a2, struct DXGDEVICE *a3)
{
  __int64 v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  PERESOURCE *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r12
  char v13; // r15
  int v14; // r14d
  struct DXGK_GAMMA_ADJUSTMENT *v15; // r13
  struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *v16; // rbx
  SIZE_T v17; // rcx
  PERESOURCE *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // esi
  unsigned int updated; // ebx
  __int64 v23; // rcx
  __int64 v25; // rax
  struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *v26; // rsi
  struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *v27; // rax
  ADAPTER_DISPLAY *v28; // rcx
  __int64 v29; // rax
  int v30; // [rsp+20h] [rbp-20h] BYREF
  __int64 v31; // [rsp+28h] [rbp-18h]
  void *v32; // [rsp+30h] [rbp-10h]

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v25 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v25 + 24) = 23970LL;
    WdLogEvent5_WdAssertion(v25);
  }
  if ( !*((_DWORD *)this[2] + 340) )
    return 0LL;
  v10 = this[14];
  v11 = v4;
  v12 = 126 * v4;
  if ( !v10[126 * v4 + 84] )
    goto LABEL_9;
  if ( LODWORD(v10[v12 + 85]) != 1 )
    goto LABEL_8;
  if ( v10[v12 + 86] )
  {
    a3 = (struct DXGDEVICE *)v10[v12 + 86];
    goto LABEL_9;
  }
  if ( !a3 )
LABEL_8:
    a3 = (struct DXGDEVICE *)v10[126 * v4 + 84];
LABEL_9:
  v13 = 0;
  if ( !a3 )
    goto LABEL_12;
  v14 = *((_DWORD *)a3 + v4 + 4596);
  v15 = (struct DXGK_GAMMA_ADJUSTMENT *)*((_QWORD *)a3 + v4 + 2314);
  v16 = (struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *)*((_QWORD *)a3 + v4 + 2282);
  v17 = *((unsigned int *)a3 + v11 + 4612);
  v32 = v16;
  v30 = v14;
  v31 = v17;
  if ( v15 )
  {
    if ( !v17 )
    {
      v17 = 1536LL;
      v14 = 2;
      v31 = 1536LL;
      v30 = 2;
    }
    v26 = v16;
    v27 = (struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *)operator new[](v17, 0x4B677844u, PagedPool);
    v32 = v27;
    v16 = v27;
    if ( !v27 )
      return 3221225495LL;
    v13 = 1;
    if ( v14 == 2 )
    {
      ADAPTER_DISPLAY::AdjustFullscreenGammaRampRGB256x3x16(v28, v26, v27, v15);
    }
    else if ( v26 )
    {
      ADAPTER_DISPLAY::AdjustFullscreenGammaRampDXGI1(
        v28,
        (struct _D3DDDI_GAMMA_RAMP_DXGI_1 *)v26,
        (struct _D3DDDI_GAMMA_RAMP_DXGI_1 *)v27,
        v15);
    }
  }
  if ( !v16 )
  {
LABEL_12:
    v18 = this[14];
    v30 = 2;
    v31 = 1536LL;
    v16 = (struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *)v18[v12 + 99];
    v32 = v16;
    if ( !v16 )
    {
      v31 = 0LL;
      v32 = 0LL;
      v30 = 1;
    }
  }
  if ( DXGADAPTER::IsFullWDDMAdapter((DXGADAPTER *)this[2])
    && (v21 = ADAPTER_RENDER::SuspendScheduler(*(ADAPTER_RENDER **)(v19 + 1984), 0), v21 < 0) )
  {
    if ( v13 )
      operator delete(v16);
    v29 = WdLogNewEntry5_WdError(v20);
    *(_QWORD *)(v29 + 24) = this;
    WdLogEvent5_WdError(v29);
    return (unsigned int)v21;
  }
  else
  {
    updated = DmmUpdateGammaRampOnAllClientVidPnPathsFromSource(this[2], a2, &v30);
    if ( v13 )
      operator delete(v32);
    if ( DXGADAPTER::IsFullWDDMAdapter((DXGADAPTER *)this[2]) )
      ADAPTER_RENDER::ResumeScheduler(*(ADAPTER_RENDER **)(v23 + 1984), 0);
    return updated;
  }
}
