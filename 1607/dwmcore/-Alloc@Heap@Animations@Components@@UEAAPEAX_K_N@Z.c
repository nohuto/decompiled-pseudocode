/*
 * XREFs of ?Alloc@Heap@Animations@Components@@UEAAPEAX_K_N@Z @ 0x180194610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Components::Animations::Heap::Alloc(Components::Animations::Heap *this, __int64 a2, char a3)
{
  __int64 (*v3)(void); // rax

  if ( a3 )
    v3 = *(__int64 (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  else
    v3 = *(__int64 (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  return v3();
}
