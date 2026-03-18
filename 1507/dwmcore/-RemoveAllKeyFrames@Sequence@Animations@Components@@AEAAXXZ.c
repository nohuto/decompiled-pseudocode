/*
 * XREFs of ?RemoveAllKeyFrames@Sequence@Animations@Components@@AEAAXXZ @ 0x180156AEC
 * Callers:
 *     ??_GSequence@Animations@Components@@QEAAPEAXI@Z @ 0x1801539DC (--_GSequence@Animations@Components@@QEAAPEAXI@Z.c)
 *     ?SetKeyframeCount@Sequence@Animations@Components@@QEAAJH@Z @ 0x180156DD4 (-SetKeyframeCount@Sequence@Animations@Components@@QEAAJH@Z.c)
 * Callees:
 *     ?Clear@Keyframe@Sequence@Animations@Components@@QEAAXXZ @ 0x18015671C (-Clear@Keyframe@Sequence@Animations@Components@@QEAAXXZ.c)
 *     ?RemoveAll@?$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x180156A84 (-RemoveAll@-$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAXX.c)
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
