/*
 * XREFs of ??_GSequence@Animations@Components@@QEAAPEAXI@Z @ 0x18016099C
 * Callers:
 *     ??1?$SmartPtr@VSequence@Animations@Components@@@Animations@Components@@QEAA@XZ @ 0x1801608C0 (--1-$SmartPtr@VSequence@Animations@Components@@@Animations@Components@@QEAA@XZ.c)
 *     ??1Animation@Animations@Components@@UEAA@XZ @ 0x180160C94 (--1Animation@Animations@Components@@UEAA@XZ.c)
 *     ?ApiCreate@Animation@Animations@Components@@QEAAJPEAUIKeyframeAnimationOwner@@W4Dwm__AnimationType@23@VDwm__Rendering__AsyncAnimationCallback@23@@Z @ 0x180160DF0 (-ApiCreate@Animation@Animations@Components@@QEAAJPEAUIKeyframeAnimationOwner@@W4Dwm__AnimationTy.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1?$SmartPtr@V?$CubicBezierInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@@Animations@Components@@QEAA@XZ @ 0x180160C48 (--1-$SmartPtr@V-$CubicBezierInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations.c)
 *     ?Release@?$RefPtr@VInput@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1801647E8 (-Release@-$RefPtr@VInput@Animations@Components@@@Animations@Components@@QEAAXXZ.c)
 *     ?Release@?$RefPtr@VTimer@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x18016480C (-Release@-$RefPtr@VTimer@Animations@Components@@@Animations@Components@@QEAAXXZ.c)
 *     ?RemoveAll@?$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x180164864 (-RemoveAll@-$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAXX.c)
 *     ?RemoveAllKeyFrames@Sequence@Animations@Components@@AEAAXXZ @ 0x1801648CC (-RemoveAllKeyFrames@Sequence@Animations@Components@@AEAAXXZ.c)
 */

Components::Animations::Sequence *__fastcall Components::Animations::Sequence::`scalar deleting destructor'(
        Components::Animations::Sequence *this)
{
  Components::Animations::Sequence::RemoveAllKeyFrames(this);
  Components::Animations::SmartPtr<Components::Animations::CubicBezierInterpolation<Components::Animations::HslCoordinateSpace>>::~SmartPtr<Components::Animations::CubicBezierInterpolation<Components::Animations::HslCoordinateSpace>>((char *)this + 232);
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
