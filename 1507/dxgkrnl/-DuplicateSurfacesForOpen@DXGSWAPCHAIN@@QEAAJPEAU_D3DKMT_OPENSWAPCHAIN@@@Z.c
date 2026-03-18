/*
 * XREFs of ?DuplicateSurfacesForOpen@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1C0161AD4
 * Callers:
 *     DxgkOpenSwapChain @ 0x1C0163BD0 (DxgkOpenSwapChain.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?SwitchClient@DXGSWAPCHAIN@@AEAA?AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z @ 0x1C0022630 (-SwitchClient@DXGSWAPCHAIN@@AEAA-AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z.c)
 *     ?DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C01617AC (-DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::DuplicateSurfacesForOpen(UINT *this, struct _D3DKMT_OPENSWAPCHAIN *a2)
{
  __int64 v4; // rsi
  BOOL v5; // ebp
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  HANDLE *pNtSurfaceHandles; // rcx
  HANDLE v14; // r15
  UINT v15; // eax
  __int64 v16; // r14
  __int64 v17; // r12
  __int64 CurrentProcess; // rax
  int v19; // eax
  __int64 v20; // rcx
  _QWORD *v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *v25; // rdx
  int v27; // [rsp+38h] [rbp-50h]
  _BYTE v28[72]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v29; // [rsp+98h] [rbp+10h]

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v28, (struct DXGFASTMUTEX *const)this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v28);
  LODWORD(v4) = 0;
  v5 = !a2->bProducer;
  v9 = DXGSWAPCHAIN::SwitchClient(v6, !a2->bProducer, v7, v8);
  v12 = v9;
  pNtSurfaceHandles = (HANDLE *)(this + 32);
  if ( v9 )
    pNtSurfaceHandles = (HANDLE *)(this + 18);
  v14 = pNtSurfaceHandles[2];
  if ( !v14 )
  {
    LODWORD(v4) = -1073741738;
    goto LABEL_17;
  }
  v15 = this[10];
  if ( a2->SurfaceCount < v15 )
  {
    LODWORD(v4) = -1073741811;
    v24 = WdLogNewEntry5_WdWarning(pNtSurfaceHandles, v12, v10, v11);
    *(_QWORD *)(v24 + 24) = a2->SurfaceCount;
    *(_QWORD *)(v24 + 32) = this[10];
    WdLogEvent5_WdWarning(v24);
  }
  else
  {
    v16 = 0LL;
    if ( !v15 )
      goto LABEL_17;
    v17 = 2 * (v12 + 2);
    while ( 1 )
    {
      v29 = *((_QWORD *)this + 6) + 56LL * (unsigned int)v16;
      CurrentProcess = PsGetCurrentProcess(pNtSurfaceHandles);
      LOBYTE(v27) = 1;
      v19 = ObDuplicateObject(
              v14,
              *(_QWORD *)(v29 + 8 * v17),
              CurrentProcess,
              v29 + 16 * (v5 + 2LL),
              a2->DesiredAccessTextures,
              0,
              4,
              v27);
      v4 = v19;
      if ( v19 < 0 )
        break;
      pNtSurfaceHandles = a2->pNtSurfaceHandles;
      pNtSurfaceHandles[v16] = *(HANDLE *)(v29 + 16 * (v5 + 2LL));
      v16 = (unsigned int)(v16 + 1);
      if ( (unsigned int)v16 >= this[10] )
        goto LABEL_13;
    }
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v22 = *(_QWORD *)(v29 + 8 * v17);
    v21[3] = v22;
    v21[4] = v14;
    v23 = PsGetCurrentProcess(v22);
    v21[6] = v4;
    v21[5] = v23;
    WdLogEvent5_WdError(v21);
  }
LABEL_13:
  if ( (int)v4 < 0 )
  {
    v25 = (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)(this + 32);
    if ( v5 )
      v25 = (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)(this + 18);
    DXGSWAPCHAIN::DestroyLocalClient((DXGSWAPCHAIN *)this, v25);
  }
LABEL_17:
  if ( v28[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v28);
  return (unsigned int)v4;
}
