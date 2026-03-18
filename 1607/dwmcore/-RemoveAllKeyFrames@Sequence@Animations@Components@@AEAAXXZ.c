/*
 * XREFs of ?RemoveAllKeyFrames@Sequence@Animations@Components@@AEAAXXZ @ 0x180085C2C
 * Callers:
 *     ?SetKeyframeCount@Sequence@Animations@Components@@QEAAJH@Z @ 0x180085D8C (-SetKeyframeCount@Sequence@Animations@Components@@QEAAJH@Z.c)
 *     ??_GSequence@Animations@Components@@QEAAPEAXI@Z @ 0x180085FA4 (--_GSequence@Animations@Components@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1800AB76C (-Release@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ.c)
 *     ?Release@?$RefPtr@VInput@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1800AB7AC (-Release@-$RefPtr@VInput@Animations@Components@@@Animations@Components@@QEAAXXZ.c)
 *     ?RemoveAll@?$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1800AF610 (-RemoveAll@-$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAXX.c)
 */

void __fastcall Components::Animations::Sequence::RemoveAllKeyFrames(Components::Animations::Sequence *this)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  __int64 v4; // rbx

  v1 = 0LL;
  if ( *((int *)this + 2) > 0 )
  {
    v3 = *((unsigned int *)this + 2);
    do
    {
      v4 = *(_QWORD *)this;
      Components::Animations::RefPtr<Components::Animations::Input>::Release(v1 + *(_QWORD *)this + 8LL);
      Components::Animations::RefPtr<Components::Animations::Interpolation>::Release(v1 + v4 + 16);
      v1 += 24LL;
      --v3;
    }
    while ( v3 );
  }
  Components::Animations::ArrayListF<Components::Animations::Sequence::Keyframe>::RemoveAll(this);
  *((_BYTE *)this + 264) &= ~4u;
}
