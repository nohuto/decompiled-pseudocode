/*
 * XREFs of ??_ECMTALock@@UEAAPEAXI@Z @ 0x18014A290
 * Callers:
 *     <none>
 * Callees:
 *     ??1CMTALock@@UEAA@XZ @ 0x1800526DC (--1CMTALock@@UEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CMTALock *__fastcall CMTALock::`vector deleting destructor'(CMTALock *this, char a2)
{
  CMTALock::~CMTALock(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CMTALock *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
