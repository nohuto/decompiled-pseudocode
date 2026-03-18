/*
 * XREFs of ?OpenSwapChainHandles@CCompositionBuffer@@UEBAJPEAUCSM_SWAPCHAIN_HANDLE_INFO@@@Z @ 0x1C008A1A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionBuffer::OpenSwapChainHandles(
        CCompositionBuffer *this,
        struct CSM_SWAPCHAIN_HANDLE_INFO *a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = 0LL;
  result = 3221225474LL;
  *((_DWORD *)a2 + 2) = 0;
  return result;
}
