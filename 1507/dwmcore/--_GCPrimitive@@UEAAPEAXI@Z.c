/*
 * XREFs of ??_GCPrimitive@@UEAAPEAXI@Z @ 0x1800F9460
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CPrimitive@@UEAA@XZ @ 0x1800F8BCC (--1CPrimitive@@UEAA@XZ.c)
 */

CPrimitive *__fastcall CPrimitive::`scalar deleting destructor'(CPrimitive *this, char a2)
{
  CPrimitive::~CPrimitive(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CPrimitive *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
