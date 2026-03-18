/*
 * XREFs of ?SetD2DPrimitiveColor@CD2DContext@@UEAAJPEAUID2D1PrivateCompositorPrimitiveProperties@@AEBU_D3DCOLORVALUE@@@Z @ 0x180010140
 * Callers:
 *     ?UpdateContextColor@CD2DPrimitiveProperties@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18000FE44 (-UpdateContextColor@CD2DPrimitiveProperties@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180020670 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 */

__int64 __fastcall CD2DContext::SetD2DPrimitiveColor(
        CD2DContext *this,
        struct ID2D1PrivateCompositorPrimitiveProperties *a2,
        const struct _D3DCOLORVALUE *a3)
{
  CD2DContext::EnsureBeginDraw(this);
  (*(void (__fastcall **)(_QWORD, struct ID2D1PrivateCompositorPrimitiveProperties *, const struct _D3DCOLORVALUE *))(**((_QWORD **)this + 6) + 48LL))(
    *((_QWORD *)this + 6),
    a2,
    a3);
  return 0LL;
}
