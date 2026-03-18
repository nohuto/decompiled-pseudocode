/*
 * XREFs of ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@@Z @ 0x1C016142C
 * Callers:
 *     DxgkAcquireSwapChain @ 0x1C0163230 (DxgkAcquireSwapChain.c)
 * Callees:
 *     ?GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x1C002253C (-GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO.c)
 *     Template_pqddqq @ 0x1C00226E4 (Template_pqddqq.c)
 *     ?InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C01622F8 (-InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C016241C (-MarkAbandoned@DXGSWAPCHAIN@@QEAAXXZ.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C016291C (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::AcquireBuffer(
        struct _KTHREAD **this,
        struct _D3DKMT_ACQUIRESWAPCHAIN *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  char *v7; // rbp
  _DWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  PVOID pMetaData; // r8
  int inserted; // ebx
  UINT v15; // r15d
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v16; // r14
  unsigned int *v17; // rax
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO **v19; // [rsp+20h] [rbp-68h]
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v20; // [rsp+90h] [rbp+8h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v21; // [rsp+98h] [rbp+10h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v22; // [rsp+A0h] [rbp+18h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v23; // [rsp+A8h] [rbp+20h] BYREF

  if ( this[1] != KeGetCurrentThread() )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 1716LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = (char *)(this + 16);
  if ( !a2->bProducer )
    v7 = (char *)(this + 9);
  if ( !a2->bReleaseBeforeAcquire )
    goto LABEL_16;
  v8 = (_DWORD *)*((_QWORD *)v7 + 4);
  if ( *v8 == v8[1] )
    v9 = 0LL;
  else
    v9 = (unsigned int)(*v8 + 1);
  DXGSWAPCHAIN::GetClientSurfaceInfo(
    (DXGSWAPCHAIN *)this,
    (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v7,
    v9,
    &v20,
    &v23);
  v12 = (__int64)v20;
  if ( *(_DWORD *)v20 == 2 )
  {
    if ( !*((_DWORD *)v7 + 6) )
    {
      *(_DWORD *)v20 = 0;
      goto LABEL_14;
    }
    *(_DWORD *)v20 = 0;
  }
  if ( *(_DWORD *)v12 )
  {
LABEL_24:
    inserted = 259;
    goto LABEL_25;
  }
LABEL_14:
  if ( *(_DWORD *)(v12 + 4) != *((_DWORD *)v7 + 10) )
    goto LABEL_24;
  pMetaData = a2->ReleaseInfo.pMetaData;
  a2->ReleaseInfo.pMetaData = 0LL;
  inserted = DXGSWAPCHAIN::ReleaseBuffer((DXGSWAPCHAIN *)this, &a2->ReleaseInfo, pMetaData, 1);
  if ( inserted < 0 )
  {
LABEL_22:
    DXGSWAPCHAIN::MarkAbandoned((DXGSWAPCHAIN *)this);
    goto LABEL_25;
  }
LABEL_16:
  v15 = **((_DWORD **)v7 + 4);
  DXGSWAPCHAIN::GetClientSurfaceInfo(
    (DXGSWAPCHAIN *)this,
    (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v7,
    v15,
    &v21,
    &v22);
  v16 = v21;
  if ( *(_DWORD *)v21 == 2 )
    *(_DWORD *)v21 = 0;
  inserted = 0;
  if ( *(_DWORD *)v16 || *((_DWORD *)v16 + 1) != *((_DWORD *)v7 + 10) )
    goto LABEL_24;
  v17 = (unsigned int *)v22;
  *(_DWORD *)v16 = 1;
  *((_DWORD *)v16 + 4) = 0;
  if ( *v17 )
  {
    inserted = DXGSWAPCHAIN::InsertGPUWait(
                 (DXGSWAPCHAIN *)this,
                 (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v7,
                 v16,
                 *v17);
    if ( inserted < 0 )
      goto LABEL_22;
  }
  a2->ReleaseInfo.DeferredFreeListSize = v15;
  v12 = *(unsigned int *)(*((_QWORD *)v16 + 1) + 8LL);
  *(&a2->ReleaseInfo.DeferredFreeListSize + 1) = v12;
LABEL_25:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
  {
    LODWORD(v19) = inserted;
    Template_pqddqq(
      v12,
      v10,
      v11,
      this,
      v19,
      a2->bProducer,
      a2->bReleaseBeforeAcquire,
      a2->ReleaseInfo.DeferredFreeListSize,
      *(&a2->ReleaseInfo.DeferredFreeListSize + 1));
  }
  return (unsigned int)inserted;
}
