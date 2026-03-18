/*
 * XREFs of ?Realloc@Heap@Animations@Components@@UEAAPEAXPEAX_K@Z @ 0x180163900
 * Callers:
 *     ?RemoveAt@?$ArrayListS@PEAUDwm__IListener@Animations@Components@@@Animations@Components@@QEAAXH@Z @ 0x18016327C (-RemoveAt@-$ArrayListS@PEAUDwm__IListener@Animations@Components@@@Animations@Components@@QEAAXH@.c)
 *     ?Resize@?$ArrayListS@PEAUDwm__IListener@Animations@Components@@@Animations@Components@@IEAAJH@Z @ 0x180163394 (-Resize@-$ArrayListS@PEAUDwm__IListener@Animations@Components@@@Animations@Components@@IEAAJH@Z.c)
 *     ?Resize@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@IEAAJH@Z @ 0x180163D34 (-Resize@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@IEAAJH@Z.c)
 *     ?Resize@?$ArrayListF@UDeferredEventInfo@Animations@Components@@@Animations@Components@@IEAAJH@Z @ 0x180163E78 (-Resize@-$ArrayListF@UDeferredEventInfo@Animations@Components@@@Animations@Components@@IEAAJH@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void *__fastcall Components::Animations::Heap::Realloc(Components::Animations::Heap *this, void *a2, __int64 a3)
{
  int v3; // eax
  __int64 v4; // rcx
  void *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v3 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, void **, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 24LL))(
         WPF::g_pProcessHeap,
         &v6,
         a3);
  v4 = 0LL;
  if ( v3 >= 0 )
    return v6;
  return (void *)v4;
}
