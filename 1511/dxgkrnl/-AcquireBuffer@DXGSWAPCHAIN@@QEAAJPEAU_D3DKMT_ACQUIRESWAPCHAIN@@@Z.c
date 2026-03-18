/*
 * XREFs of ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@@Z @ 0x1C0165A5C
 * Callers:
 *     DxgkAcquireSwapChain @ 0x1C0167760 (DxgkAcquireSwapChain.c)
 * Callees:
 *     ?GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x1C0022430 (-GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO.c)
 *     Template_pqddqq @ 0x1C00225D8 (Template_pqddqq.c)
 *     ?InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C0166928 (-InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C0166A50 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAXXZ.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C0166E9C (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::AcquireBuffer(DXGSWAPCHAIN *this, struct _D3DKMT_ACQUIRESWAPCHAIN *a2)
{
  __int64 v4; // rax
  char *v5; // rbp
  _DWORD *v6; // rax
  unsigned int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  PVOID pMetaData; // r8
  int inserted; // ebx
  unsigned int v13; // r15d
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v14; // r14
  unsigned int *v15; // rax
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO **v17; // [rsp+20h] [rbp-68h]
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v18; // [rsp+90h] [rbp+8h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v19; // [rsp+98h] [rbp+10h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v20; // [rsp+A0h] [rbp+18h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v21; // [rsp+A8h] [rbp+20h] BYREF

  if ( *(struct _KTHREAD **)this != KeGetCurrentThread() )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 1710LL;
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = (char *)this + 152;
  if ( !a2->bProducer )
    v5 = (char *)this + 96;
  if ( !a2->bReleaseBeforeAcquire )
    goto LABEL_16;
  v6 = (_DWORD *)*((_QWORD *)v5 + 4);
  if ( *v6 == v6[1] )
    v7 = 0;
  else
    v7 = *v6 + 1;
  DXGSWAPCHAIN::GetClientSurfaceInfo(this, (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v5, v7, &v18, &v21);
  v10 = (__int64)v18;
  if ( *(_DWORD *)v18 == 2 )
  {
    if ( !*((_DWORD *)v5 + 6) )
    {
      *(_DWORD *)v18 = 0;
      goto LABEL_14;
    }
    *(_DWORD *)v18 = 0;
  }
  if ( *(_DWORD *)v10 )
  {
LABEL_24:
    inserted = 259;
    goto LABEL_25;
  }
LABEL_14:
  if ( *(_DWORD *)(v10 + 4) != *((_DWORD *)v5 + 10) )
    goto LABEL_24;
  pMetaData = a2->ReleaseInfo.pMetaData;
  a2->ReleaseInfo.pMetaData = 0LL;
  inserted = DXGSWAPCHAIN::ReleaseBuffer(this, &a2->ReleaseInfo, pMetaData, 1);
  if ( inserted < 0 )
  {
LABEL_22:
    DXGSWAPCHAIN::MarkAbandoned(this);
    goto LABEL_25;
  }
LABEL_16:
  v13 = **((_DWORD **)v5 + 4);
  DXGSWAPCHAIN::GetClientSurfaceInfo(this, (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v5, v13, &v19, &v20);
  v14 = v19;
  if ( *(_DWORD *)v19 == 2 )
    *(_DWORD *)v19 = 0;
  inserted = 0;
  if ( *(_DWORD *)v14 || *((_DWORD *)v14 + 1) != *((_DWORD *)v5 + 10) )
    goto LABEL_24;
  v15 = (unsigned int *)v20;
  *(_DWORD *)v14 = 1;
  *((_DWORD *)v14 + 4) = 0;
  if ( *v15 )
  {
    inserted = DXGSWAPCHAIN::InsertGPUWait(this, (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v5, v14, *v15);
    if ( inserted < 0 )
      goto LABEL_22;
  }
  a2->ReleaseInfo.DeferredFreeListSize = v13;
  v10 = *(unsigned int *)(*((_QWORD *)v14 + 1) + 8LL);
  *(&a2->ReleaseInfo.DeferredFreeListSize + 1) = v10;
LABEL_25:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
  {
    LODWORD(v17) = inserted;
    Template_pqddqq(
      v10,
      v8,
      v9,
      this,
      v17,
      a2->bProducer,
      a2->bReleaseBeforeAcquire,
      a2->ReleaseInfo.DeferredFreeListSize,
      *(&a2->ReleaseInfo.DeferredFreeListSize + 1));
  }
  return (unsigned int)inserted;
}
