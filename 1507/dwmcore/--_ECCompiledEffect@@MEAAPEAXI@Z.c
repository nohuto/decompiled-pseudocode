/*
 * XREFs of ??_ECCompiledEffect@@MEAAPEAXI@Z @ 0x180112480
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CCompiledEffect@@MEAA@XZ @ 0x1801122DC (--1CCompiledEffect@@MEAA@XZ.c)
 */

CCompiledEffect *__fastcall CCompiledEffect::`vector deleting destructor'(CCompiledEffect *this, char a2)
{
  CCompiledEffect::~CCompiledEffect(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CCompiledEffect *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
