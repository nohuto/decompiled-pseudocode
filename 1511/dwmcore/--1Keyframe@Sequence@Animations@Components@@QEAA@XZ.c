/*
 * XREFs of ??1Keyframe@Sequence@Animations@Components@@QEAA@XZ @ 0x1801640D0
 * Callers:
 *     ?RemoveAll@?$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x180164864 (-RemoveAll@-$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAXX.c)
 *     ?SetKeyframeCount@Sequence@Animations@Components@@QEAAJH@Z @ 0x180164A14 (-SetKeyframeCount@Sequence@Animations@Components@@QEAAJH@Z.c)
 *     ?SetSize@?$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAJH@Z @ 0x180164B34 (-SetSize@-$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAJH@Z.c)
 * Callees:
 *     ?Release@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1800BA634 (-Release@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ.c)
 */

void __fastcall Components::Animations::Sequence::Keyframe::~Keyframe(Components::Animations::Interpolation **this)
{
  Components::Animations::RefPtr<Components::Animations::Interpolation>::Release(this + 2);
  Components::Animations::RefPtr<Components::Animations::Input>::Release(this + 1);
}
