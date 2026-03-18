/*
 * XREFs of ?GetClippedDeviceBounds@CAnalogDisplayRenderTarget@@UEAAX_NPEAUMilRectF@@@Z @ 0x18013DE60
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CAnalogDisplayRenderTarget::GetClippedDeviceBounds(
        CAnalogDisplayRenderTarget *this,
        __int64 a2,
        struct MilRectF *a3)
{
  (*(void (__fastcall **)(CAnalogDisplayRenderTarget *, struct MilRectF *))(*(_QWORD *)this + 256LL))(this, a3);
}
