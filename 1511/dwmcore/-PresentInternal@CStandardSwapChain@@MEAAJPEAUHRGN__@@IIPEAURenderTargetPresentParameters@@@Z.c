/*
 * XREFs of ?PresentInternal@CStandardSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18014CEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CStandardSwapChain::PresentInternal(
        CStandardSwapChain *this,
        HRGN a2,
        unsigned int a3,
        unsigned int a4,
        struct RenderTargetPresentParameters *a5)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 36) + 64LL))(
           *((_QWORD *)this + 36),
           a3,
           a4);
}
