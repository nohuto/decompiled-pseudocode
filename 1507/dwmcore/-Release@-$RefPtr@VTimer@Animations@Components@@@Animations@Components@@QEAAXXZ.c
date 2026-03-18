/*
 * XREFs of ?Release@?$RefPtr@VTimer@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x180156A2C
 * Callers:
 *     ??_GSequence@Animations@Components@@QEAAPEAXI@Z @ 0x1801539DC (--_GSequence@Animations@Components@@QEAAPEAXI@Z.c)
 *     ?Stop@Sequence@Animations@Components@@QEAAJXZ @ 0x180157000 (-Stop@Sequence@Animations@Components@@QEAAJXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall Components::Animations::RefPtr<Components::Animations::Timer>::Release(_DWORD **a1)
{
  _DWORD *v1; // rsi
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    if ( (*v1)-- == 1 )
      return (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _DWORD *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
               WPF::g_pProcessHeap,
               v1);
  }
  return result;
}
