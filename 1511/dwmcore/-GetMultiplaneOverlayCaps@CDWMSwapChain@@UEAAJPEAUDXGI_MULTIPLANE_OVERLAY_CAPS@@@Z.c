/*
 * XREFs of ?GetMultiplaneOverlayCaps@CDWMSwapChain@@UEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x180073290
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDWMSwapChain::GetMultiplaneOverlayCaps(
        CDWMSwapChain *this,
        struct DXGI_MULTIPLANE_OVERLAY_CAPS *a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = (*(__int64 (__fastcall **)(_QWORD, struct DXGI_MULTIPLANE_OVERLAY_CAPS *))(**((_QWORD **)this + 37) + 168LL))(
         *((_QWORD *)this + 37),
         a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x3D4u);
  return v3;
}
