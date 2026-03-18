/*
 * XREFs of ??_ECAnalogDisplayRenderTarget@@MEAAPEAXI@Z @ 0x180167980
 * Callers:
 *     ??_ECAnalogDisplayRenderTarget@@OIA@EAAPEAXI@Z @ 0x1800C0F20 (--_ECAnalogDisplayRenderTarget@@OIA@EAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CAnalogDisplayRenderTarget@@MEAA@XZ @ 0x180167904 (--1CAnalogDisplayRenderTarget@@MEAA@XZ.c)
 */

CAnalogDisplayRenderTarget *__fastcall CAnalogDisplayRenderTarget::`vector deleting destructor'(
        CAnalogDisplayRenderTarget *this,
        char a2)
{
  CAnalogDisplayRenderTarget::~CAnalogDisplayRenderTarget(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAnalogDisplayRenderTarget *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
