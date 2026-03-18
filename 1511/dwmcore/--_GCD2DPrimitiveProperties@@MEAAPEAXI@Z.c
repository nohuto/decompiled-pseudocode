/*
 * XREFs of ??_GCD2DPrimitiveProperties@@MEAAPEAXI@Z @ 0x18000FD20
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD2DEffect@@MEAA@XZ @ 0x18000FD78 (--1CD2DEffect@@MEAA@XZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

CD2DPrimitiveProperties *__fastcall CD2DPrimitiveProperties::`scalar deleting destructor'(
        CD2DPrimitiveProperties *this,
        char a2)
{
  CD2DEffect::~CD2DEffect(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CD2DPrimitiveProperties *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
