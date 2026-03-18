/*
 * XREFs of ?Alloc@Heap@Animations@Components@@UEAAPEAX_K_N@Z @ 0x180155A30
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall Components::Animations::Heap::Alloc(Components::Animations::Heap *this, __int64 a2, char a3)
{
  if ( a3 )
    return (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
             WPF::g_pProcessHeap,
             a2);
  else
    return (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
             WPF::g_pProcessHeap,
             a2);
}
