/*
 * XREFs of ??_ECExpressionValueStack@@UEAAPEAXI@Z @ 0x1801006D0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CExpressionValueStack@@UEAA@XZ @ 0x18010064C (--1CExpressionValueStack@@UEAA@XZ.c)
 */

void **__fastcall CExpressionValueStack::`vector deleting destructor'(void **this, char a2)
{
  CExpressionValueStack::~CExpressionValueStack(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
