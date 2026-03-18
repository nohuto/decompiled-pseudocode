/*
 * XREFs of ?DuplicateSurfacesForOpen@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1C018DE4C
 * Callers:
 *     DxgkOpenSwapChain @ 0x1C018FFB0 (DxgkOpenSwapChain.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?SwitchClient@DXGSWAPCHAIN@@AEAA?AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z @ 0x1C0029038 (-SwitchClient@DXGSWAPCHAIN@@AEAA-AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z.c)
 *     ?DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C018DAD4 (-DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::DuplicateSurfacesForOpen(UINT *this, struct _D3DKMT_OPENSWAPCHAIN *a2)
{
  __int64 v4; // rsi
  BOOL v5; // ebp
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  HANDLE *pNtSurfaceHandles; // rcx
  HANDLE v12; // r15
  UINT v13; // eax
  __int64 v14; // r14
  __int64 v15; // r12
  __int64 CurrentProcess; // rax
  int v17; // eax
  __int64 v18; // rcx
  _QWORD *v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *v23; // rdx
  int v25; // [rsp+38h] [rbp-50h]
  _BYTE v26[72]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v27; // [rsp+98h] [rbp+10h]

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, (struct DXGFASTMUTEX *const)this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
  LODWORD(v4) = 0;
  v5 = !a2->bProducer;
  v7 = DXGSWAPCHAIN::SwitchClient(v6, v5);
  v10 = v7;
  pNtSurfaceHandles = (HANDLE *)(this + 32);
  if ( v7 )
    pNtSurfaceHandles = (HANDLE *)(this + 18);
  v12 = pNtSurfaceHandles[2];
  if ( !v12 )
  {
    LODWORD(v4) = -1073741738;
    goto LABEL_17;
  }
  v13 = this[10];
  if ( a2->SurfaceCount < v13 )
  {
    LODWORD(v4) = -1073741811;
    v22 = WdLogNewEntry5_WdWarning(pNtSurfaceHandles, v10, v8, v9);
    *(_QWORD *)(v22 + 24) = a2->SurfaceCount;
    *(_QWORD *)(v22 + 32) = this[10];
    WdLogEvent5_WdWarning(v22);
  }
  else
  {
    v14 = 0LL;
    if ( !v13 )
      goto LABEL_17;
    v15 = 2 * (v10 + 2);
    while ( 1 )
    {
      v27 = *((_QWORD *)this + 6) + 56LL * (unsigned int)v14;
      CurrentProcess = PsGetCurrentProcess(pNtSurfaceHandles);
      LOBYTE(v25) = 1;
      v17 = ObDuplicateObject(
              v12,
              *(_QWORD *)(v27 + 8 * v15),
              CurrentProcess,
              v27 + 16 * (v5 + 2LL),
              a2->DesiredAccessTextures,
              0,
              4,
              v25);
      v4 = v17;
      if ( v17 < 0 )
        break;
      pNtSurfaceHandles = a2->pNtSurfaceHandles;
      pNtSurfaceHandles[v14] = *(HANDLE *)(v27 + 16 * (v5 + 2LL));
      v14 = (unsigned int)(v14 + 1);
      if ( (unsigned int)v14 >= this[10] )
        goto LABEL_13;
    }
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v20 = *(_QWORD *)(v27 + 8 * v15);
    v19[3] = v20;
    v19[4] = v12;
    v21 = PsGetCurrentProcess(v20);
    v19[6] = v4;
    v19[5] = v21;
    WdLogEvent5_WdError(v19);
  }
LABEL_13:
  if ( (int)v4 < 0 )
  {
    v23 = (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)(this + 32);
    if ( v5 )
      v23 = (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)(this + 18);
    DXGSWAPCHAIN::DestroyLocalClient((DXGSWAPCHAIN *)this, v23);
  }
LABEL_17:
  if ( v26[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26);
  return (unsigned int)v4;
}
