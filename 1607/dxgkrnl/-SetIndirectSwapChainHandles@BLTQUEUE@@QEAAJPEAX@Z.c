/*
 * XREFs of ?SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z @ 0x1C0028498
 * Callers:
 *     ?DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z @ 0x1C01479BC (-DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z.c)
 *     ?Cleanup@BLTQUEUE@@QEAAXXZ @ 0x1C01831D4 (-Cleanup@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@@Z @ 0x1C018F1DC (-SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@@Z.c)
 *     ?SwapChainOpenInternal@@YAPEAUDXGSWAPCHAIN_CONTAINER@@PEAX@Z @ 0x1C018F33C (-SwapChainOpenInternal@@YAPEAUDXGSWAPCHAIN_CONTAINER@@PEAX@Z.c)
 *     ?SwapChainUsesWarpInternal@@YAJPEAVDXGSWAPCHAIN@@PEAH@Z @ 0x1C018F450 (-SwapChainUsesWarpInternal@@YAJPEAVDXGSWAPCHAIN@@PEAH@Z.c)
 *     DpiDoInterfaceDereference @ 0x1C01998D0 (DpiDoInterfaceDereference.c)
 */

__int64 __fastcall BLTQUEUE::SetIndirectSwapChainHandles(BLTQUEUE *this, void *a2)
{
  struct _KMUTANT *v2; // rbx
  struct DXGSWAPCHAIN **v5; // rcx
  __int64 v6; // rcx
  signed int v7; // edi
  __int64 v8; // rax
  struct DXGSWAPCHAIN_CONTAINER *v9; // rax
  struct DXGSWAPCHAIN **v10; // rcx
  int v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct _KMUTANT *)((char *)this + 2568);
  KeWaitForSingleObject((char *)this + 2568, Executive, 0, 0, 0LL);
  v5 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 320);
  if ( !v5 )
    goto LABEL_5;
  v7 = SwapChainAbandonInternal(*v5);
  if ( v7 < 0 )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = this;
    *(_QWORD *)(v8 + 32) = **((_QWORD **)this + 320);
    WdLogEvent5_WdError(v8);
  }
  DpiDoInterfaceDereference(*((PVOID *)this + 320));
  *((_QWORD *)this + 320) = 0LL;
  if ( v7 >= 0 )
  {
LABEL_5:
    v7 = 0;
    if ( a2 )
    {
      v9 = SwapChainOpenInternal(a2);
      *((_QWORD *)this + 320) = v9;
      v7 = v9 == 0LL ? 0xC0000001 : 0;
    }
    v10 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 320);
    if ( v10 )
    {
      v12 = 0;
      SwapChainUsesWarpInternal(*v10, &v12);
      *((_DWORD *)this + 657) = v12;
      *((_DWORD *)this + 656) = 1;
    }
  }
  KeReleaseMutex(v2, 0);
  return (unsigned int)v7;
}
