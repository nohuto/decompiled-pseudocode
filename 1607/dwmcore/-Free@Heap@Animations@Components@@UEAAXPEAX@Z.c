/*
 * XREFs of ?Free@Heap@Animations@Components@@UEAAXPEAX@Z @ 0x1800210A0
 * Callers:
 *     ?RemoveAll@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x18001D854 (-RemoveAll@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAXXZ.c)
 *     ?Resize@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@IEAAJH@Z @ 0x1800AD2D4 (-Resize@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@IEAAJH@Z.c)
 *     ?Resize@?$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@IEAAJH@Z @ 0x1800AF4A8 (-Resize@-$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@IEAAJH@Z.c)
 *     ?RemoveAll@?$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1800AF610 (-RemoveAll@-$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAXX.c)
 *     ?RemoveAll@?$ArrayListS@PEAUDwm__IListener@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1800B24A0 (-RemoveAll@-$ArrayListS@PEAUDwm__IListener@Animations@Components@@@Animations@Components@@QEAAXX.c)
 *     ?RemoveAt@?$ArrayListS@PEAUDwm__IListener@Animations@Components@@@Animations@Components@@QEAAXH@Z @ 0x1801942C8 (-RemoveAt@-$ArrayListS@PEAUDwm__IListener@Animations@Components@@@Animations@Components@@QEAAXH@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Components::Animations::Heap::Free(Components::Animations::Heap *this, void *a2)
{
  if ( a2 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
}
