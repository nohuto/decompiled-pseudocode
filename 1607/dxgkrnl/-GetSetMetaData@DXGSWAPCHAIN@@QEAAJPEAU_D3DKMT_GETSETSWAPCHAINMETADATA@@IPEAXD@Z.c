/*
 * XREFs of ?GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z @ 0x1C018E15C
 * Callers:
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1C018F220 (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     ?GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x1C0028F44 (-GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO.c)
 *     Template_pqddqqqqq @ 0x1C00291A8 (Template_pqddqqqqq.c)
 *     ?GetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@IPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@DPEAI@Z @ 0x1C018DFF4 (-GetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@IPEAXAEAUSWAPCHAIN_METADATA_ET.c)
 *     ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x1C018EFB8 (-SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADA.c)
 */

__int64 __fastcall DXGSWAPCHAIN::GetSetMetaData(
        struct _KTHREAD **this,
        struct _D3DKMT_GETSETSWAPCHAINMETADATA *a2,
        unsigned int a3,
        void *a4,
        char a5)
{
  __int64 v7; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  BOOL bProducer; // ecx
  BOOL bGlobalMetaData; // eax
  struct AUTOEXPANDALLOCATION *v14; // rdx
  struct _KTHREAD **v15; // rcx
  UINT MetaDataInternal; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  char *v19; // rsi
  __int64 v20; // rcx
  UINT v21; // esi
  const EVENT_DESCRIPTOR *v22; // rdx
  UINT uAddenda; // [rsp+20h] [rbp-61h]
  UINT uAddend[2]; // [rsp+20h] [rbp-61h]
  void *Src; // [rsp+28h] [rbp-59h]
  struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *v27; // [rsp+30h] [rbp-51h]
  __int64 v28; // [rsp+38h] [rbp-49h]
  __int64 v29; // [rsp+60h] [rbp-21h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v30; // [rsp+68h] [rbp-19h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v31; // [rsp+70h] [rbp-11h] BYREF
  unsigned __int64 v32; // [rsp+78h] [rbp-9h] BYREF
  __int64 v33; // [rsp+80h] [rbp-1h]
  __int64 v34; // [rsp+88h] [rbp+7h]
  int v35; // [rsp+90h] [rbp+Fh]

  v7 = a3;
  if ( this[1] != KeGetCurrentThread() )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v9 + 24) = 1992LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( a2->pBuffer )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v10 + 24) = 1997LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !(_DWORD)v7 || a2->bSetMetaData )
  {
    bProducer = a2->bProducer;
    v32 = 0LL;
    v33 = 0LL;
    v34 = 0LL;
    v35 = 0;
    bGlobalMetaData = a2->bGlobalMetaData;
    v32 = __PAIR64__(bGlobalMetaData, bProducer);
    if ( bGlobalMetaData )
    {
      v14 = (struct AUTOEXPANDALLOCATION *)(this + 7);
      v15 = this;
      if ( a2->bSetMetaData )
      {
        uAddenda = a2->BufferSize;
        LODWORD(v29) = 1;
        MetaDataInternal = DXGSWAPCHAIN::SetMetaDataInternal(
                             (DXGSWAPCHAIN *)this,
                             v14,
                             (int *)&v29,
                             v7,
                             uAddenda,
                             a4,
                             (struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *)&v32,
                             a5);
LABEL_20:
        v21 = MetaDataInternal;
        if ( a2->bSetMetaData )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) == 0 )
            return v21;
          v22 = (const EVENT_DESCRIPTOR *)&EventIndirectSwapChainSetMetaData;
        }
        else
        {
          if ( !a2->pBuffer || (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) == 0 )
            return v21;
          v22 = (const EVENT_DESCRIPTOR *)&EventIndirectSwapChainGetMetaData;
        }
        LODWORD(v28) = v33;
        LODWORD(v27) = HIDWORD(v32);
        LODWORD(Src) = v32;
        uAddend[0] = MetaDataInternal;
        Template_pqddqqqqq(
          v17,
          v22,
          v18,
          this,
          *(_QWORD *)uAddend,
          Src,
          v27,
          v28,
          HIDWORD(v33),
          v34,
          HIDWORD(v34),
          v35,
          v29);
        return v21;
      }
    }
    else
    {
      v19 = (char *)(this + 16);
      if ( !bProducer )
        v19 = (char *)(this + 9);
      DXGSWAPCHAIN::GetClientSurfaceInfo(
        (DXGSWAPCHAIN *)this,
        (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v19,
        **((_DWORD **)v19 + 4),
        &v30,
        &v31);
      if ( *(_DWORD *)v30 != 1 || *((_DWORD *)v30 + 1) != *((_DWORD *)v19 + 10) )
      {
        v11 = WdLogNewEntry5_WdError(v20);
        *(_QWORD *)(v11 + 24) = *((_QWORD *)v19 + 2);
        *(_QWORD *)(v11 + 32) = this;
        goto LABEL_29;
      }
      if ( a2->bSetMetaData )
      {
        MetaDataInternal = DXGSWAPCHAIN::SetMetaDataInternal(
                             (DXGSWAPCHAIN *)this,
                             *((struct AUTOEXPANDALLOCATION **)v30 + 1),
                             (int *)v30 + 4,
                             v7,
                             a2->BufferSize,
                             a4,
                             (struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *)&v32,
                             a5);
        goto LABEL_20;
      }
      v14 = (struct AUTOEXPANDALLOCATION *)*((_QWORD *)v30 + 1);
      v15 = this;
    }
    MetaDataInternal = DXGSWAPCHAIN::GetMetaDataInternal(
                         v15,
                         v14,
                         a2->BufferSize,
                         (char *)a4,
                         (struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *)&v32,
                         a5,
                         &a2->DataCopied);
    goto LABEL_20;
  }
  v11 = WdLogNewEntry5_WdError(this);
  *(_QWORD *)(v11 + 24) = v7;
LABEL_29:
  WdLogEvent5_WdError(v11);
  return 3221225485LL;
}
