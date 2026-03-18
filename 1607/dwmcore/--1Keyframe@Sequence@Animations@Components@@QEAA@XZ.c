/*
 * XREFs of ??1Keyframe@Sequence@Animations@Components@@QEAA@XZ @ 0x180113610
 * Callers:
 *     ?SetSize@?$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAJH@Z @ 0x1800AF69C (-SetSize@-$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAJH@Z.c)
 * Callees:
 *     ?Release@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1800AB76C (-Release@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ.c)
 */

void __fastcall Components::Animations::Sequence::Keyframe::~Keyframe(Components::Animations::Sequence::Keyframe *this)
{
  Components::Animations::RefPtr<Components::Animations::Interpolation>::Release((_DWORD **)this + 2);
  Components::Animations::RefPtr<Components::Animations::Input>::Release((Components::Animations::Input **)this + 1);
}
