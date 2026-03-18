/*
 * XREFs of ?Free@Heap@Animations@Components@@UEAAXPEAX@Z @ 0x180155AE0
 * Callers:
 *     ?RemoveAll@?$ArrayListS@PEAUDwm__IListener@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x180153BE8 (-RemoveAll@-$ArrayListS@PEAUDwm__IListener@Animations@Components@@@Animations@Components@@QEAAXX.c)
 *     ?RemoveAt@?$ArrayListS@PEAUDwm__IListener@Animations@Components@@@Animations@Components@@QEAAXH@Z @ 0x1801555AC (-RemoveAt@-$ArrayListS@PEAUDwm__IListener@Animations@Components@@@Animations@Components@@QEAAXH@.c)
 *     ?RemoveAll@?$ArrayListF@PEAVAnimationEvent@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x180155FF8 (-RemoveAll@-$ArrayListF@PEAVAnimationEvent@Animations@Components@@@Animations@Components@@QEAAXX.c)
 *     ?Resize@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@IEAAJH@Z @ 0x1801560A8 (-Resize@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@IEAAJH@Z.c)
 *     ?RemoveAll@?$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x180156A84 (-RemoveAll@-$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAXX.c)
 *     ?Resize@?$ArrayListF@UDeferredEventInfo@Animations@Components@@@Animations@Components@@IEAAJH@Z @ 0x180156C34 (-Resize@-$ArrayListF@UDeferredEventInfo@Animations@Components@@@Animations@Components@@IEAAJH@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall Components::Animations::Heap::Free(Components::Animations::Heap *this, void *a2)
{
  if ( a2 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      a2);
}
