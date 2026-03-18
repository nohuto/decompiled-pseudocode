/*
 * XREFs of ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C016291C
 * Callers:
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@@Z @ 0x1C016142C (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@@Z.c)
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C0162FF0 (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     ?GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x1C002253C (-GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO.c)
 *     ?GetOtherClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x1C00225B0 (-GetOtherClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF.c)
 *     ?SwitchClient@DXGSWAPCHAIN@@AEAA?AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z @ 0x1C0022630 (-SwitchClient@DXGSWAPCHAIN@@AEAA-AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z.c)
 *     Template_pqddqqqqq @ 0x1C00227A0 (Template_pqddqqqqq.c)
 *     Template_pqdqp @ 0x1C0022888 (Template_pqdqp.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00D2128 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C01621D8 (-InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C016241C (-MarkAbandoned@DXGSWAPCHAIN@@QEAAXXZ.c)
 *     ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x1C0162BEC (-SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADA.c)
 */

__int64 __fastcall DXGSWAPCHAIN::ReleaseBuffer(
        struct _KTHREAD **this,
        struct _D3DKMT_RELEASESWAPCHAIN *a2,
        void *a3,
        __int64 a4)
{
  char v4; // r13
  __int64 v7; // rax
  struct _KEVENT *v8; // r15
  __int64 v9; // rax
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int inserted; // r14d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v20; // r12
  __int64 v21; // r8
  __int64 v22; // r9
  UINT MetaDataSize; // ecx
  struct AUTOEXPANDALLOCATION *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  _DWORD *v27; // rax
  char *v28; // r15
  __int64 v29; // rax
  UINT uAddend[2]; // [rsp+20h] [rbp-69h]
  void *Src; // [rsp+28h] [rbp-61h]
  struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *v33; // [rsp+30h] [rbp-59h]
  char v34[8]; // [rsp+38h] [rbp-51h]
  int v35; // [rsp+40h] [rbp-49h]
  int v36; // [rsp+48h] [rbp-41h]
  int v37; // [rsp+50h] [rbp-39h]
  int v38; // [rsp+58h] [rbp-31h]
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v39; // [rsp+60h] [rbp-29h] BYREF
  void *v40; // [rsp+68h] [rbp-21h]
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v41; // [rsp+70h] [rbp-19h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v42; // [rsp+78h] [rbp-11h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v43; // [rsp+80h] [rbp-9h] BYREF
  __int64 v44; // [rsp+88h] [rbp-1h] BYREF
  __int64 v45; // [rsp+90h] [rbp+7h]
  __int64 v46; // [rsp+98h] [rbp+Fh]
  int v47; // [rsp+A0h] [rbp+17h]

  v4 = a4;
  v40 = a3;
  if ( this[1] != KeGetCurrentThread() )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 1850LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = 0LL;
  if ( a2->pMetaData )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = 1857LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)(this + 16);
  if ( !a2->bProducer )
    v10 = (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)(this + 9);
  DXGSWAPCHAIN::GetClientSurfaceInfo((DXGSWAPCHAIN *)this, v10, **((unsigned int **)v10 + 4), &v42, &v43);
  if ( *(_DWORD *)v42 == 1 && *((_DWORD *)v42 + 1) == *((_DWORD *)v10 + 10) )
  {
    inserted = DXGSWAPCHAIN::InsertGPUSignal((DXGSWAPCHAIN *)this, v10, v42, *((unsigned int *)this + 46));
    if ( inserted >= 0 )
    {
      DXGSWAPCHAIN::GetOtherClientSurfaceInfo((DXGSWAPCHAIN *)this, v10, **((unsigned int **)v10 + 4), &v39, &v41);
      v19 = *((unsigned int *)this + 46);
      v20 = v39;
      *(_DWORD *)v41 = v19;
      ++*((_DWORD *)this + 46);
      *(_DWORD *)v20 = 2;
      *((_DWORD *)v20 + 1) = DXGSWAPCHAIN::SwitchClient(v19, *((unsigned int *)v10 + 10), v21, v22);
      MetaDataSize = a2->MetaDataSize;
      if ( !MetaDataSize )
        goto LABEL_31;
      v24 = (struct AUTOEXPANDALLOCATION *)*((_QWORD *)v20 + 1);
      v44 = 0LL;
      v45 = 0LL;
      v46 = 0LL;
      v47 = 0;
      LODWORD(v44) = a2->bProducer;
      inserted = DXGSWAPCHAIN::SetMetaDataInternal(
                   (DXGSWAPCHAIN *)this,
                   v24,
                   (int *)v20 + 4,
                   0,
                   MetaDataSize,
                   v40,
                   (struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *)&v44,
                   v4);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
      {
        v38 = v47;
        v37 = HIDWORD(v46);
        v36 = v46;
        v35 = HIDWORD(v45);
        *(_DWORD *)v34 = v45;
        LODWORD(v33) = HIDWORD(v44);
        LODWORD(Src) = v44;
        uAddend[0] = inserted;
        Template_pqddqqqqq(
          v25,
          &EventIndirectSwapChainSetMetaData,
          v18,
          this,
          *(_QWORD *)uAddend,
          Src,
          v33,
          *(_QWORD *)v34,
          v35,
          v36,
          v37,
          v38);
      }
      if ( inserted < 0 )
      {
        v26 = WdLogNewEntry5_WdError(v25);
        *(_QWORD *)(v26 + 24) = *((_QWORD *)v10 + 2);
        *(_QWORD *)(v26 + 32) = this;
        WdLogEvent5_WdError(v26);
      }
      else
      {
LABEL_31:
        if ( !*((_DWORD *)v20 + 4) )
          AUTOEXPANDALLOCATION::GetBuffer(*((void ***)v20 + 1), 0, 0);
        v27 = (_DWORD *)*((_QWORD *)v10 + 4);
        if ( *v27 == v27[1] )
          v17 = 0LL;
        else
          v17 = (unsigned int)(*v27 + 1);
        *v27 = v17;
        v28 = (char *)(this + 16);
        if ( a2->bProducer )
          v28 = (char *)(this + 9);
        v8 = (struct _KEVENT *)*((_QWORD *)v28 + 6);
        if ( v8 )
          KeSetEvent(v8, 2, 0);
      }
    }
    else
    {
      DXGSWAPCHAIN::MarkAbandoned(this, v12, v13, v14);
    }
  }
  else
  {
    v29 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v29 + 24) = *((_QWORD *)v10 + 2);
    *(_QWORD *)(v29 + 32) = this;
    WdLogEvent5_WdError(v29);
    inserted = -1073741811;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
  {
    LODWORD(v33) = a2->MetaDataSize;
    LODWORD(Src) = a2->bProducer;
    uAddend[0] = inserted;
    Template_pqdqp(v17, v16, v18, this, *(_QWORD *)uAddend, Src, v33, v8);
  }
  return (unsigned int)inserted;
}
