/*
 * XREFs of ??_GCBaseAnimation@@UEAAPEAXI@Z @ 0x1800F9090
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBaseAnimation@@UEAA@XZ @ 0x18005CF84 (--1CBaseAnimation@@UEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CBaseAnimation *__fastcall CBaseAnimation::`scalar deleting destructor'(CBaseAnimation *this, char a2)
{
  CBaseAnimation::~CBaseAnimation(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBaseAnimation *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
