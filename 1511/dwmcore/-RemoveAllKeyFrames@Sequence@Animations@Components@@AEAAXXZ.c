/*
 * XREFs of ?RemoveAllKeyFrames@Sequence@Animations@Components@@AEAAXXZ @ 0x1801648CC
 * Callers:
 *     ??_GSequence@Animations@Components@@QEAAPEAXI@Z @ 0x18016099C (--_GSequence@Animations@Components@@QEAAPEAXI@Z.c)
 *     ?SetKeyframeCount@Sequence@Animations@Components@@QEAAJH@Z @ 0x180164A14 (-SetKeyframeCount@Sequence@Animations@Components@@QEAAJH@Z.c)
 * Callees:
 *     ?Clear@Keyframe@Sequence@Animations@Components@@QEAAXXZ @ 0x1801644FC (-Clear@Keyframe@Sequence@Animations@Components@@QEAAXXZ.c)
 *     ?RemoveAll@?$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x180164864 (-RemoveAll@-$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAXX.c)
 */

void __fastcall Components::Animations::Sequence::RemoveAllKeyFrames(Components::Animations::Sequence *this)
{
  __int64 v1; // rdi
  __int64 v3; // rsi

  v1 = 0LL;
  if ( *((int *)this + 6) > 0 )
  {
    v3 = *((unsigned int *)this + 6);
    do
    {
      Components::Animations::Sequence::Keyframe::Clear((Components::Animations::Interpolation **)(v1
                                                                                                 + *((_QWORD *)this + 2)));
      v1 += 24LL;
      --v3;
    }
    while ( v3 );
  }
  Components::Animations::ArrayListF<Components::Animations::Sequence::Keyframe>::RemoveAll((__int64)this + 16);
  *((_BYTE *)this + 244) &= ~4u;
}
