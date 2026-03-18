/*
 * XREFs of ?Realloc@Heap@Animations@Components@@UEAAPEAXPEAX_K@Z @ 0x180155C30
 * Callers:
 *     ?RemoveAt@?$ArrayListS@PEAUDwm__IListener@Animations@Components@@@Animations@Components@@QEAAXH@Z @ 0x1801555AC (-RemoveAt@-$ArrayListS@PEAUDwm__IListener@Animations@Components@@@Animations@Components@@QEAAXH@.c)
 *     ?Resize@?$ArrayListS@PEAUDwm__IListener@Animations@Components@@@Animations@Components@@IEAAJH@Z @ 0x1801556C4 (-Resize@-$ArrayListS@PEAUDwm__IListener@Animations@Components@@@Animations@Components@@IEAAJH@Z.c)
 *     ?Resize@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@IEAAJH@Z @ 0x1801560A8 (-Resize@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@IEAAJH@Z.c)
 *     ?Resize@?$ArrayListF@UDeferredEventInfo@Animations@Components@@@Animations@Components@@IEAAJH@Z @ 0x180156C34 (-Resize@-$ArrayListF@UDeferredEventInfo@Animations@Components@@@Animations@Components@@IEAAJH@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
