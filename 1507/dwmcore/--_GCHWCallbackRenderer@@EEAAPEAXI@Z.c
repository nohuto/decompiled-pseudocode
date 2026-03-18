/*
 * XREFs of ??_GCHWCallbackRenderer@@EEAAPEAXI@Z @ 0x18008DCD8
 * Callers:
 *     ??_ECHWCallbackRenderer@@G7EAAPEAXI@Z @ 0x18009C1F0 (--_ECHWCallbackRenderer@@G7EAAPEAXI@Z.c)
 * Callees:
 *     ??1CHWCallbackRenderer@@EEAA@XZ @ 0x18008DC28 (--1CHWCallbackRenderer@@EEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
