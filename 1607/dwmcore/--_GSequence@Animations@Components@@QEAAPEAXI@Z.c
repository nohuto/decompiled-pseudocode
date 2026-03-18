/*
 * XREFs of ??_GSequence@Animations@Components@@QEAAPEAXI@Z @ 0x180085FA4
 * Callers:
 *     ??1Animation@Animations@Components@@UEAA@XZ @ 0x180086650 (--1Animation@Animations@Components@@UEAA@XZ.c)
 *     ?ApiCreate@Animation@Animations@Components@@QEAAJPEAUIKeyframeAnimationOwner@@W4Dwm__AnimationType@23@VDwm__Rendering__AsyncAnimationCallback@23@@Z @ 0x1800866A8 (-ApiCreate@Animation@Animations@Components@@QEAAJPEAUIKeyframeAnimationOwner@@W4Dwm__AnimationTy.c)
 *     ?Create@Sequence@Animations@Components@@SAJPEAPEAV123@@Z @ 0x1800AB51C (-Create@Sequence@Animations@Components@@SAJPEAPEAV123@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?RemoveAllKeyFrames@Sequence@Animations@Components@@AEAAXXZ @ 0x180085C2C (-RemoveAllKeyFrames@Sequence@Animations@Components@@AEAAXXZ.c)
 *     ??1?$SmartPtr@VValue@Animations@Components@@@Animations@Components@@QEAA@XZ @ 0x1800AB6E4 (--1-$SmartPtr@VValue@Animations@Components@@@Animations@Components@@QEAA@XZ.c)
 *     ?RemoveAll@?$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1800AF610 (-RemoveAll@-$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAXX.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

Components::Animations::Sequence *__fastcall Components::Animations::Sequence::`scalar deleting destructor'(
        Components::Animations::Sequence *this)
{
  void (__fastcall *v2)(WPF::ProcessHeapImpl *, void *); // rax

  Components::Animations::Sequence::RemoveAllKeyFrames(this);
  Components::Animations::SmartPtr<Components::Animations::Value>::~SmartPtr<Components::Animations::Value>((char *)this + 232);
  Components::Animations::ArrayListF<Components::Animations::Sequence::Keyframe>::RemoveAll(this);
  v2 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v2 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
  else
    v2(WPF::g_pProcessHeap, this);
  return this;
}
