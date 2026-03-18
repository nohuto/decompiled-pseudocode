/*
 * XREFs of ?Realloc@Heap@Animations@Components@@UEAAPEAXPEAX_K@Z @ 0x1800210D0
 * Callers:
 *     ?Resize@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@IEAAJH@Z @ 0x1800AD2D4 (-Resize@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@IEAAJH@Z.c)
 *     ?Resize@?$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@IEAAJH@Z @ 0x1800AF4A8 (-Resize@-$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@IEAAJH@Z.c)
 *     ?RemoveAt@?$ArrayListS@PEAUDwm__IListener@Animations@Components@@@Animations@Components@@QEAAXH@Z @ 0x1801942C8 (-RemoveAt@-$ArrayListS@PEAUDwm__IListener@Animations@Components@@@Animations@Components@@QEAAXH@.c)
 *     ?Resize@?$ArrayListS@PEAUDwm__IListener@Animations@Components@@@Animations@Components@@IEAAJH@Z @ 0x1801943E4 (-Resize@-$ArrayListS@PEAUDwm__IListener@Animations@Components@@@Animations@Components@@IEAAJH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void *__fastcall Components::Animations::Heap::Realloc(Components::Animations::Heap *this, void *a2)
{
  int v2; // eax
  __int64 v3; // rcx
  void *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v2 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, void **))(*(_QWORD *)WPF::g_pProcessHeap + 24LL))(
         WPF::g_pProcessHeap,
         &v5);
  v3 = 0LL;
  if ( v2 >= 0 )
    return v5;
  return (void *)v3;
}
