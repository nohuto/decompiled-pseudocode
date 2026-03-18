/*
 * XREFs of ?SetD2DPrimitiveColor@CD2DContext@@MEAAJPEAUID2D1PrivateCompositorPrimitiveProperties@@AEBU_D3DCOLORVALUE@@@Z @ 0x180136FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180071584 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
