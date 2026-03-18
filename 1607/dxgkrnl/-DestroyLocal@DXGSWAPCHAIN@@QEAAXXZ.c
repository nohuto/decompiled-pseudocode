/*
 * XREFs of ?DestroyLocal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C018DA50
 * Callers:
 *     ?SwapChainObCloseProcedure@@YAXPEAU_EPROCESS@@PEAX_K2@Z @ 0x1C018F2C0 (-SwapChainObCloseProcedure@@YAXPEAU_EPROCESS@@PEAX_K2@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C018DAD4 (-DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C018E7CC (-MarkAbandoned@DXGSWAPCHAIN@@QEAAXXZ.c)
 */

void __fastcall DXGSWAPCHAIN::DestroyLocal(DXGSWAPCHAIN *this)
{
  __int64 v2; // rcx
  __int64 CurrentProcess; // rdi
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v4, this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v4);
  CurrentProcess = PsGetCurrentProcess(v2);
  if ( *((_QWORD *)this + 11) == CurrentProcess )
  {
    DXGSWAPCHAIN::MarkAbandoned(this);
    DXGSWAPCHAIN::DestroyLocalClient(this, (DXGSWAPCHAIN *)((char *)this + 72));
  }
  if ( *((_QWORD *)this + 18) == CurrentProcess )
  {
    DXGSWAPCHAIN::MarkAbandoned(this);
    DXGSWAPCHAIN::DestroyLocalClient(this, (DXGSWAPCHAIN *)((char *)this + 128));
  }
  if ( v4[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v4);
}
