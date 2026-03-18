/*
 * XREFs of ??_GCCompiledEffectTemplate@@MEAAPEAXI@Z @ 0x1801132C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CCompiledEffectTemplate@@MEAA@XZ @ 0x18012DAE4 (--1CCompiledEffectTemplate@@MEAA@XZ.c)
 */

CCompiledEffectTemplate *__fastcall CCompiledEffectTemplate::`scalar deleting destructor'(
        CCompiledEffectTemplate *this,
        char a2)
{
  CCompiledEffectTemplate::~CCompiledEffectTemplate(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CCompiledEffectTemplate *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
