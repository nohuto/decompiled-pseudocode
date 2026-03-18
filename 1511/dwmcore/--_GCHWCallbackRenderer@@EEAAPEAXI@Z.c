/*
 * XREFs of ??_GCHWCallbackRenderer@@EEAAPEAXI@Z @ 0x180035B28
 * Callers:
 *     ??_ECHWCallbackRenderer@@G7EAAPEAXI@Z @ 0x1800BF5D0 (--_ECHWCallbackRenderer@@G7EAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CHWCallbackRenderer@@EEAA@XZ @ 0x180035A78 (--1CHWCallbackRenderer@@EEAA@XZ.c)
 */

CHWCallbackRenderer *__fastcall CHWCallbackRenderer::`scalar deleting destructor'(CHWCallbackRenderer *this, char a2)
{
  CHWCallbackRenderer::~CHWCallbackRenderer(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CHWCallbackRenderer *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
