/*
 * XREFs of ??_GCAnalogRenderTarget@@EEAAPEAXI@Z @ 0x180126120
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CAnalogRenderTarget@@EEAA@XZ @ 0x180126088 (--1CAnalogRenderTarget@@EEAA@XZ.c)
 */

CAnalogRenderTarget *__fastcall CAnalogRenderTarget::`scalar deleting destructor'(CAnalogRenderTarget *this, char a2)
{
  CAnalogRenderTarget::~CAnalogRenderTarget(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAnalogRenderTarget *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
