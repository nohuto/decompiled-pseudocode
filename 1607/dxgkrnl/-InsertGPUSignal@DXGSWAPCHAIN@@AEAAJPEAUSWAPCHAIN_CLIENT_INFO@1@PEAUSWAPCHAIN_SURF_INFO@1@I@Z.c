/*
 * XREFs of ?InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C018E588
 * Callers:
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C018ECE8 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C009FEF0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z @ 0x1C015DEE0 (-GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C018E7CC (-MarkAbandoned@DXGSWAPCHAIN@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSWAPCHAIN::InsertGPUSignal(
        DXGSWAPCHAIN *this,
        struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *a2,
        struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *a3,
        char a4)
{
  __int64 v8; // rax
  DXGDEVICE *v9; // rcx
  struct DXGPROCESS *v10; // rsi
  __int64 v11; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15[4]; // [rsp+60h] [rbp-148h] BYREF
  unsigned int v16[64]; // [rsp+70h] [rbp-138h] BYREF

  if ( !*((_QWORD *)a2 + 1) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v8 + 24) = 2270LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = (DXGDEVICE *)*((_QWORD *)a2 + 1);
  v10 = (struct DXGPROCESS *)*((_QWORD *)v9 + 5);
  if ( v10 )
  {
    DXGDEVICE::GetContexts(v9, v15, v16);
    if ( v15[0] )
    {
      return SignalSynchronizationObjectInternal(
               1LL,
               (const unsigned int *)a3 + 4 * *((int *)a2 + 10) + 7,
               0,
               v15[0],
               v16,
               0LL,
               a4,
               0LL,
               v10,
               0,
               1);
    }
    else
    {
      v14 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v14 + 24) = this;
      *(_QWORD *)(v14 + 32) = *((_QWORD *)a2 + 1);
      WdLogEvent5_WdError(v14);
      return 3221225473LL;
    }
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = 2276LL;
    WdLogEvent5_WdError(v11);
    DXGSWAPCHAIN::MarkAbandoned(this);
    return 3221225485LL;
  }
}
