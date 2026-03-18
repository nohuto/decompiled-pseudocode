/*
 * XREFs of ??_GCPropertyBag@@MEAAPEAXI@Z @ 0x180135D30
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CPropertyBag@@MEAA@XZ @ 0x180135C60 (--1CPropertyBag@@MEAA@XZ.c)
 */

CPropertyBag *__fastcall CPropertyBag::`scalar deleting destructor'(CPropertyBag *this, char a2)
{
  CPropertyBag::~CPropertyBag(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CPropertyBag *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
