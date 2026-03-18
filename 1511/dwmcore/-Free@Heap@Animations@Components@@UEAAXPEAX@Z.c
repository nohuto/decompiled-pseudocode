/*
 * XREFs of ?Free@Heap@Animations@Components@@UEAAXPEAX@Z @ 0x1801637B0
 * Callers:
 *     ?RemoveAll@?$ArrayListF@PEAVAnimationEvent@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x180160BD0 (-RemoveAll@-$ArrayListF@PEAVAnimationEvent@Animations@Components@@@Animations@Components@@QEAAXX.c)
 *     ?RemoveAll@?$ArrayListS@PEAUDwm__IListener@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x180160C14 (-RemoveAll@-$ArrayListS@PEAUDwm__IListener@Animations@Components@@@Animations@Components@@QEAAXX.c)
 *     ?RemoveAt@?$ArrayListS@PEAUDwm__IListener@Animations@Components@@@Animations@Components@@QEAAXH@Z @ 0x18016327C (-RemoveAt@-$ArrayListS@PEAUDwm__IListener@Animations@Components@@@Animations@Components@@QEAAXH@.c)
 *     ?Resize@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@IEAAJH@Z @ 0x180163D34 (-Resize@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@IEAAJH@Z.c)
 *     ?Resize@?$ArrayListF@UDeferredEventInfo@Animations@Components@@@Animations@Components@@IEAAJH@Z @ 0x180163E78 (-Resize@-$ArrayListF@UDeferredEventInfo@Animations@Components@@@Animations@Components@@IEAAJH@Z.c)
 *     ?RemoveAll@?$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x180164864 (-RemoveAll@-$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAXX.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall Components::Animations::Heap::Free(Components::Animations::Heap *this, void *a2)
{
  if ( a2 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      a2);
}
