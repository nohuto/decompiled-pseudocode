/*
 * XREFs of ??_ECAnalogTextureTarget@@EEAAPEAXI@Z @ 0x18013BE30
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CAnalogTextureTarget@@EEAA@XZ @ 0x18013BDA0 (--1CAnalogTextureTarget@@EEAA@XZ.c)
 */

CAnalogTextureTarget *__fastcall CAnalogTextureTarget::`vector deleting destructor'(
        CAnalogTextureTarget *this,
        char a2)
{
  CAnalogTextureTarget::~CAnalogTextureTarget(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAnalogTextureTarget *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
