/*
 * XREFs of ??_GSequence@Animations@Components@@QEAAPEAXI@Z @ 0x1801539DC
 * Callers:
 *     ??1?$SmartPtr@VSequence@Animations@Components@@@Animations@Components@@QEAA@XZ @ 0x180153900 (--1-$SmartPtr@VSequence@Animations@Components@@@Animations@Components@@QEAA@XZ.c)
 *     ??1Animation@Animations@Components@@UEAA@XZ @ 0x180153C1C (--1Animation@Animations@Components@@UEAA@XZ.c)
 *     ?ApiCreate@Animation@Animations@Components@@QEAAJPEAUIKeyframeAnimationOwner@@W4Dwm__AnimationType@23@VDwm__Rendering__AsyncAnimationCallback@23@@Z @ 0x180153D40 (-ApiCreate@Animation@Animations@Components@@QEAAJPEAUIKeyframeAnimationOwner@@W4Dwm__AnimationTy.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1?$SmartPtr@VValue@Animations@Components@@@Animations@Components@@QEAA@XZ @ 0x1801562A0 (--1-$SmartPtr@VValue@Animations@Components@@@Animations@Components@@QEAA@XZ.c)
 *     ?Release@?$RefPtr@VInput@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x180156A08 (-Release@-$RefPtr@VInput@Animations@Components@@@Animations@Components@@QEAAXXZ.c)
 *     ?Release@?$RefPtr@VTimer@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x180156A2C (-Release@-$RefPtr@VTimer@Animations@Components@@@Animations@Components@@QEAAXXZ.c)
 *     ?RemoveAll@?$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x180156A84 (-RemoveAll@-$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAXX.c)
 *     ?RemoveAllKeyFrames@Sequence@Animations@Components@@AEAAXXZ @ 0x180156AEC (-RemoveAllKeyFrames@Sequence@Animations@Components@@AEAAXXZ.c)
 */

Components::Animations::Sequence *__fastcall Components::Animations::Sequence::`scalar deleting destructor'(
        Components::Animations::Sequence *this)
{
  Components::Animations::Sequence::RemoveAllKeyFrames(this);
  Components::Animations::SmartPtr<Components::Animations::Value>::~SmartPtr<Components::Animations::Value>((char *)this + 232);
  Components::Animations::RefPtr<Components::Animations::Timer>::Release((char *)this + 224);
  Components::Animations::ArrayListF<Components::Animations::Sequence::Keyframe>::RemoveAll((char *)this + 16);
  Components::Animations::RefPtr<Components::Animations::Input>::Release((char *)this + 8);
  Components::Animations::RefPtr<Components::Animations::Input>::Release(this);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, Components::Animations::Sequence *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
