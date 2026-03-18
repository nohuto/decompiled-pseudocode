/*
 * XREFs of ??_ECExpressionManager@@UEAAPEAXI@Z @ 0x180100670
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CExpressionManager@@UEAA@XZ @ 0x1801005CC (--1CExpressionManager@@UEAA@XZ.c)
 */

void **__fastcall CExpressionManager::`vector deleting destructor'(void **this, char a2)
{
  CExpressionManager::~CExpressionManager(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
