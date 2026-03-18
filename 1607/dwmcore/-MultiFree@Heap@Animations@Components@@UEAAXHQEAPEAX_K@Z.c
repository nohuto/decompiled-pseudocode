/*
 * XREFs of ?MultiFree@Heap@Animations@Components@@UEAAXHQEAPEAX_K@Z @ 0x180194700
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Components::Animations::Heap::MultiFree(Components::Animations::Heap *this, int a2, void **const a3)
{
  __int64 v4; // rdi

  if ( a2 > 0 )
  {
    v4 = (unsigned int)a2;
    do
    {
      if ( *a3 )
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
      ++a3;
      --v4;
    }
    while ( v4 );
  }
}
