/*
 * XREFs of ??1?$SmartPtr@VValue@Animations@Components@@@Animations@Components@@QEAA@XZ @ 0x1801562A0
 * Callers:
 *     ??_GSequence@Animations@Components@@QEAAPEAXI@Z @ 0x1801539DC (--_GSequence@Animations@Components@@QEAAPEAXI@Z.c)
 *     ?Create@Sequence@Animations@Components@@SAJPEAPEAV123@@Z @ 0x18015676C (-Create@Sequence@Animations@Components@@SAJPEAPEAV123@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall Components::Animations::SmartPtr<Components::Animations::Value>::~SmartPtr<Components::Animations::Value>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
             WPF::g_pProcessHeap,
             *a1);
  return result;
}
