/*
 * XREFs of ??_GCEffectBrush@@MEAAPEAXI@Z @ 0x180122810
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CEffectBrush@@MEAA@XZ @ 0x18012259C (--1CEffectBrush@@MEAA@XZ.c)
 */

CEffectBrush *__fastcall CEffectBrush::`scalar deleting destructor'(CEffectBrush *this, char a2)
{
  CEffectBrush::~CEffectBrush(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CEffectBrush *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
