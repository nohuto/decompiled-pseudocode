/*
 * XREFs of ?SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z @ 0x1C0021A88
 * Callers:
 *     ?DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z @ 0x1C0123F3C (-DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z.c)
 * Callees:
 *     ?SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@@Z @ 0x1C0162E10 (-SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@@Z.c)
 *     DpiDoInterfaceDereference @ 0x1C0162E60 (DpiDoInterfaceDereference.c)
 *     ?SwapChainOpenInternal@@YAPEAUDXGSWAPCHAIN_CONTAINER@@PEAX@Z @ 0x1C0162F8C (-SwapChainOpenInternal@@YAPEAUDXGSWAPCHAIN_CONTAINER@@PEAX@Z.c)
 *     ?SwapChainUsesWarpInternal@@YAJPEAVDXGSWAPCHAIN@@PEAH@Z @ 0x1C0163098 (-SwapChainUsesWarpInternal@@YAJPEAVDXGSWAPCHAIN@@PEAH@Z.c)
 */

__int64 __fastcall BLTQUEUE::SetIndirectSwapChainHandles(BLTQUEUE *this, void *a2)
{
  struct _KMUTANT *v2; // rsi
  struct DXGSWAPCHAIN **v6; // rcx
  __int64 v7; // rcx
  int v8; // edi
  __int64 v9; // rax
  struct DXGSWAPCHAIN_CONTAINER *v10; // rax
  struct DXGSWAPCHAIN **v11; // rcx
  int v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct _KMUTANT *)*((_QWORD *)this + 296);
  if ( !v2 )
    return 3221226166LL;
  KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
  v6 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 295);
  if ( !v6 )
    goto LABEL_7;
  v8 = SwapChainAbandonInternal(*v6);
  if ( v8 < 0 )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = this;
    *(_QWORD *)(v9 + 32) = **((_QWORD **)this + 295);
    WdLogEvent5_WdError(v9);
  }
  DpiDoInterfaceDereference(*((PVOID *)this + 295));
  *((_QWORD *)this + 295) = 0LL;
  if ( v8 >= 0 )
  {
LABEL_7:
    if ( a2 )
    {
      v10 = SwapChainOpenInternal(a2);
      *((_QWORD *)this + 295) = v10;
      v8 = v10 == 0LL ? 0xC0000001 : 0;
    }
    else
    {
      v8 = v12;
    }
    v11 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 295);
    if ( v11 )
    {
      v12 = 0;
      SwapChainUsesWarpInternal(*v11, &v12);
      *((_DWORD *)this + 595) = v12;
      *((_DWORD *)this + 594) = 1;
    }
  }
  KeReleaseMutex(v2, 0);
  return (unsigned int)v8;
}
