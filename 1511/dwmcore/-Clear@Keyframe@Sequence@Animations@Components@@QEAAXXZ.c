/*
 * XREFs of ?Clear@Keyframe@Sequence@Animations@Components@@QEAAXXZ @ 0x1801644FC
 * Callers:
 *     ?RemoveAllKeyFrames@Sequence@Animations@Components@@AEAAXXZ @ 0x1801648CC (-RemoveAllKeyFrames@Sequence@Animations@Components@@AEAAXXZ.c)
 *     ?SetKeyframeCount@Sequence@Animations@Components@@QEAAJH@Z @ 0x180164A14 (-SetKeyframeCount@Sequence@Animations@Components@@QEAAJH@Z.c)
 * Callees:
 *     ?Release@?$RefPtr@VInput@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1801647E8 (-Release@-$RefPtr@VInput@Animations@Components@@@Animations@Components@@QEAAXXZ.c)
 */

void __fastcall Components::Animations::Sequence::Keyframe::Clear(Components::Animations::Interpolation **this)
{
  Components::Animations::RefPtr<Components::Animations::Input>::Release(this + 1);
  Components::Animations::RefPtr<Components::Animations::Interpolation>::Release(this + 2);
}
