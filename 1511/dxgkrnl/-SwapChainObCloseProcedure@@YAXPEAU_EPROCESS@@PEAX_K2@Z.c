/*
 * XREFs of ?SwapChainObCloseProcedure@@YAXPEAU_EPROCESS@@PEAX_K2@Z @ 0x1C0167440
 * Callers:
 *     <none>
 * Callees:
 *     Template_p @ 0x1C0010C14 (Template_p.c)
 *     ?DestroyLocal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C0165D58 (-DestroyLocal@DXGSWAPCHAIN@@QEAAXXZ.c)
 */

void __fastcall SwapChainObCloseProcedure(struct _EPROCESS *a1, DXGSWAPCHAIN **a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8

  if ( *a2 )
  {
    DXGSWAPCHAIN::DestroyLocal(*a2);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
      Template_p(v3, &EventIndirectSwapChainCloseHandle, v4, *a2);
  }
}
