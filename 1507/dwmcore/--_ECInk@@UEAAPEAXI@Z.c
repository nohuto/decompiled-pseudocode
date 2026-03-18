/*
 * XREFs of ??_ECInk@@UEAAPEAXI@Z @ 0x1800F93A0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CInk@@UEAA@XZ @ 0x1800F8B90 (--1CInk@@UEAA@XZ.c)
 */

void **__fastcall CInk::`vector deleting destructor'(void **this, char a2)
{
  CInk::~CInk(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
