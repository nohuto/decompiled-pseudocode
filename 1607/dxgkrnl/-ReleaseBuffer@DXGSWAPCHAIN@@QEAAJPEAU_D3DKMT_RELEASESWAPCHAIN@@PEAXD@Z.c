/*
 * XREFs of ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C018ECE8
 * Callers:
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@@Z @ 0x1C018D720 (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@@Z.c)
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C018F3A0 (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     ?GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x1C0028F44 (-GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO.c)
 *     ?GetOtherClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x1C0028FB8 (-GetOtherClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF.c)
 *     ?SwitchClient@DXGSWAPCHAIN@@AEAA?AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z @ 0x1C0029038 (-SwitchClient@DXGSWAPCHAIN@@AEAA-AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z.c)
 *     Template_pqddqqqqq @ 0x1C00291A8 (Template_pqddqqqqq.c)
 *     Template_pqdqp @ 0x1C0029290 (Template_pqdqp.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00DB4F8 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C018E588 (-InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C018E7CC (-MarkAbandoned@DXGSWAPCHAIN@@QEAAXXZ.c)
 *     ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x1C018EFB8 (-SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADA.c)
 */

__int64 __fastcall DXGSWAPCHAIN::ReleaseBuffer(
        DXGSWAPCHAIN *this,
        struct _D3DKMT_RELEASESWAPCHAIN *a2,
        void *a3,
        char a4)
{
  __int64 v7; // rax
  struct _KEVENT *v8; // r15
  __int64 v9; // rax
  char *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  int inserted; // r14d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v19; // r12
  UINT MetaDataSize; // ecx
  struct AUTOEXPANDALLOCATION *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  _DWORD *v24; // rax
  char *v25; // r15
  __int64 v26; // rax
  UINT uAddend[2]; // [rsp+20h] [rbp-69h]
  void *Src; // [rsp+28h] [rbp-61h]
  struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *v30; // [rsp+30h] [rbp-59h]
  char v31[8]; // [rsp+38h] [rbp-51h]
  int v32; // [rsp+40h] [rbp-49h]
  int v33; // [rsp+48h] [rbp-41h]
  int v34; // [rsp+50h] [rbp-39h]
  int v35; // [rsp+58h] [rbp-31h]
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v36; // [rsp+60h] [rbp-29h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v37; // [rsp+68h] [rbp-21h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v38; // [rsp+70h] [rbp-19h] BYREF
  void *v39; // [rsp+78h] [rbp-11h]
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v40; // [rsp+80h] [rbp-9h] BYREF
  __int64 v41; // [rsp+88h] [rbp-1h] BYREF
  __int64 v42; // [rsp+90h] [rbp+7h]
  __int64 v43; // [rsp+98h] [rbp+Fh]
  int v44; // [rsp+A0h] [rbp+17h]

  v39 = a3;
  if ( *((struct _KTHREAD **)this + 1) != KeGetCurrentThread() )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v7 + 24) = 1894LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = 0LL;
  if ( a2->pMetaData )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v9 + 24) = 1901LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = (char *)this + 128;
  if ( !a2->bProducer )
    v10 = (char *)this + 72;
  DXGSWAPCHAIN::GetClientSurfaceInfo(
    this,
    (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v10,
    **((_DWORD **)v10 + 4),
    &v36,
    &v40);
  if ( *(_DWORD *)v36 == 1 && *((_DWORD *)v36 + 1) == *((_DWORD *)v10 + 10) )
  {
    inserted = DXGSWAPCHAIN::InsertGPUSignal(
                 this,
                 (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v10,
                 v36,
                 *((_DWORD *)this + 46));
    if ( inserted >= 0 )
    {
      DXGSWAPCHAIN::GetOtherClientSurfaceInfo(
        this,
        (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v10,
        **((_DWORD **)v10 + 4),
        &v38,
        &v37);
      v18 = *((unsigned int *)this + 46);
      v19 = v38;
      *(_DWORD *)v37 = v18;
      ++*((_DWORD *)this + 46);
      *(_DWORD *)v19 = 2;
      *((_DWORD *)v19 + 1) = DXGSWAPCHAIN::SwitchClient(v18, *((_DWORD *)v10 + 10));
      MetaDataSize = a2->MetaDataSize;
      if ( !MetaDataSize )
        goto LABEL_31;
      v21 = (struct AUTOEXPANDALLOCATION *)*((_QWORD *)v19 + 1);
      v41 = 0LL;
      v42 = 0LL;
      v43 = 0LL;
      v44 = 0;
      LODWORD(v41) = a2->bProducer;
      inserted = DXGSWAPCHAIN::SetMetaDataInternal(
                   this,
                   v21,
                   (int *)v19 + 4,
                   0,
                   MetaDataSize,
                   v39,
                   (struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *)&v41,
                   a4);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
      {
        v35 = v44;
        v34 = HIDWORD(v43);
        v33 = v43;
        v32 = HIDWORD(v42);
        *(_DWORD *)v31 = v42;
        LODWORD(v30) = HIDWORD(v41);
        LODWORD(Src) = v41;
        uAddend[0] = inserted;
        Template_pqddqqqqq(
          v22,
          &EventIndirectSwapChainSetMetaData,
          v17,
          this,
          *(_QWORD *)uAddend,
          Src,
          v30,
          *(_QWORD *)v31,
          v32,
          v33,
          v34,
          v35);
      }
      if ( inserted < 0 )
      {
        v23 = WdLogNewEntry5_WdError(v22);
        *(_QWORD *)(v23 + 24) = *((_QWORD *)v10 + 2);
        *(_QWORD *)(v23 + 32) = this;
        WdLogEvent5_WdError(v23);
      }
      else
      {
LABEL_31:
        if ( !*((_DWORD *)v19 + 4) )
          AUTOEXPANDALLOCATION::GetBuffer(*((void ***)v19 + 1), 0, 0);
        v24 = (_DWORD *)*((_QWORD *)v10 + 4);
        if ( *v24 == v24[1] )
          v16 = 0LL;
        else
          v16 = (unsigned int)(*v24 + 1);
        *v24 = v16;
        v25 = (char *)this + 128;
        if ( a2->bProducer )
          v25 = (char *)this + 72;
        v8 = (struct _KEVENT *)*((_QWORD *)v25 + 6);
        if ( v8 )
          KeSetEvent(v8, 2, 0);
      }
    }
    else
    {
      DXGSWAPCHAIN::MarkAbandoned((struct _KTHREAD **)this, v12, v13);
    }
  }
  else
  {
    v26 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v26 + 24) = *((_QWORD *)v10 + 2);
    *(_QWORD *)(v26 + 32) = this;
    WdLogEvent5_WdError(v26);
    inserted = -1073741811;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
  {
    LODWORD(v30) = a2->MetaDataSize;
    LODWORD(Src) = a2->bProducer;
    uAddend[0] = inserted;
    Template_pqdqp(v16, v15, v17, this, *(_QWORD *)uAddend, Src, v30, v8);
  }
  return (unsigned int)inserted;
}
