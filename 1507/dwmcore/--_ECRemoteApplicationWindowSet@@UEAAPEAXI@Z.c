/*
 * XREFs of ??_ECRemoteApplicationWindowSet@@UEAAPEAXI@Z @ 0x1801235E0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CRemoteApplicationWindowSet@@UEAA@XZ @ 0x1801235A0 (--1CRemoteApplicationWindowSet@@UEAA@XZ.c)
 */

void **__fastcall CRemoteApplicationWindowSet::`vector deleting destructor'(void **this, char a2)
{
  CRemoteApplicationWindowSet::~CRemoteApplicationWindowSet(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
