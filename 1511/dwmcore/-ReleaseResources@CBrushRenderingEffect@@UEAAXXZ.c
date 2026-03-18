/*
 * XREFs of ?ReleaseResources@CBrushRenderingEffect@@UEAAXXZ @ 0x180118690
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CBrushRenderingEffect::ReleaseResources(CBrushRenderingEffect *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 16LL))(*((_QWORD *)this + 1));
}
