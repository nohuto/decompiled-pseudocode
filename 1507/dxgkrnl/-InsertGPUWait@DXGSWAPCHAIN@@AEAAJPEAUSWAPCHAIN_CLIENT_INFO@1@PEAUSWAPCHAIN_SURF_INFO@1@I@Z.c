/*
 * XREFs of ?InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C01622F8
 * Callers:
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@@Z @ 0x1C016142C (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N@Z @ 0x1C00A1E90 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N@Z.c)
 *     ?GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z @ 0x1C01360E4 (-GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C016241C (-MarkAbandoned@DXGSWAPCHAIN@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSWAPCHAIN::InsertGPUWait(
        DXGSWAPCHAIN *this,
        struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *a2,
        struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *a3,
        __int64 a4)
{
  unsigned __int64 v5; // r14
  __int64 v8; // rax
  DXGDEVICE *v9; // rcx
  struct DXGPROCESS *v10; // rbp
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbx
  unsigned int v16[4]; // [rsp+40h] [rbp-148h] BYREF
  unsigned int v17[64]; // [rsp+50h] [rbp-138h] BYREF

  v5 = (unsigned int)a4;
  if ( !*((_QWORD *)a2 + 1) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = 2277LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = (DXGDEVICE *)*((_QWORD *)a2 + 1);
  v10 = (struct DXGPROCESS *)*((_QWORD *)v9 + 5);
  if ( v10 )
  {
    DXGDEVICE::GetContexts(v9, v16, v17);
    if ( v16[0] )
    {
      v15 = 0LL;
      do
      {
        result = WaitForSynchronizationObjectFromGpu(
                   1u,
                   (const unsigned int *)a3 + 4 * *((int *)a2 + 10) + 7,
                   0LL,
                   v5,
                   v17[v15],
                   v10,
                   1);
        if ( (int)result < 0 )
          break;
        v15 = (unsigned int)(v15 + 1);
      }
      while ( (unsigned int)v15 < v16[0] );
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
    *(_QWORD *)(v11 + 24) = 2283LL;
    WdLogEvent5_WdError(v11);
    DXGSWAPCHAIN::MarkAbandoned(this);
    return 3221225485LL;
  }
  return result;
}
