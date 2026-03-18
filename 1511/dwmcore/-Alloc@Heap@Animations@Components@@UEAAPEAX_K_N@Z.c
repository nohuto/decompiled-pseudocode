/*
 * XREFs of ?Alloc@Heap@Animations@Components@@UEAAPEAX_K_N@Z @ 0x180163700
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
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
