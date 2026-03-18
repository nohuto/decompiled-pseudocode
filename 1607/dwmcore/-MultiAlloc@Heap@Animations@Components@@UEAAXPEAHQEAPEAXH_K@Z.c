/*
 * XREFs of ?MultiAlloc@Heap@Animations@Components@@UEAAXPEAHQEAPEAXH_K@Z @ 0x180194690
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Components::Animations::Heap::MultiAlloc(
        Components::Animations::Heap *this,
        int *a2,
        void **const a3,
        int a4,
        unsigned __int64 a5)
{
  int i; // ebx
  void *v9; // rax

  for ( i = 0; i < a4; ++a3 )
  {
    v9 = (void *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 16LL))(
                   WPF::g_pProcessHeap,
                   a5);
    *a3 = v9;
    if ( !v9 )
      break;
    ++i;
  }
  *a2 = i;
}
