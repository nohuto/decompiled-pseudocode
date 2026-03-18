/*
 * XREFs of ?Clear@Keyframe@Sequence@Animations@Components@@QEAAXXZ @ 0x180113638
 * Callers:
 *     ?SetKeyframeCount@Sequence@Animations@Components@@QEAAJH@Z @ 0x180085D8C (-SetKeyframeCount@Sequence@Animations@Components@@QEAAJH@Z.c)
 * Callees:
 *     ?Release@?$RefPtr@VInput@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1800AB7AC (-Release@-$RefPtr@VInput@Animations@Components@@@Animations@Components@@QEAAXXZ.c)
 */

void __fastcall Components::Animations::Sequence::Keyframe::Clear(Components::Animations::Input **this)
{
  Components::Animations::RefPtr<Components::Animations::Input>::Release(this + 1);
  Components::Animations::RefPtr<Components::Animations::Interpolation>::Release((_DWORD **)this + 2);
}
