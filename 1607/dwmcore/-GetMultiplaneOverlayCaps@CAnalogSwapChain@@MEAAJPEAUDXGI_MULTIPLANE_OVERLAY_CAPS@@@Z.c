/*
 * XREFs of ?GetMultiplaneOverlayCaps@CAnalogSwapChain@@MEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x1800C1140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnalogSwapChain::GetMultiplaneOverlayCaps(
        CAnalogSwapChain *this,
        struct DXGI_MULTIPLANE_OVERLAY_CAPS *a2)
{
  __int64 result; // rax

  *((_DWORD *)a2 + 3) = 32;
  *(_DWORD *)a2 = 1;
  *(_QWORD *)((char *)a2 + 4) = 1LL;
  *((_DWORD *)a2 + 4) = 1065353216;
  *(_QWORD *)((char *)a2 + 20) = 1065353216LL;
  *((_DWORD *)a2 + 9) = 1065353216;
  *((_DWORD *)a2 + 10) = 1065353216;
  result = 0LL;
  *(_QWORD *)((char *)a2 + 28) = 0LL;
  return result;
}
