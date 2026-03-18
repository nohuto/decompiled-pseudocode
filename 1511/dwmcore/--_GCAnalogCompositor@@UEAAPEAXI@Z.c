/*
 * XREFs of ??_GCAnalogCompositor@@UEAAPEAXI@Z @ 0x18013B000
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x180085834 (--1CResource@@MEAA@XZ.c)
 */

CAnalogCompositor *__fastcall CAnalogCompositor::`scalar deleting destructor'(CAnalogCompositor *this, char a2)
{
  *(_QWORD *)this = &CAnalogCompositor::`vftable';
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAnalogCompositor *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
