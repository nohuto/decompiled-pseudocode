/*
 * XREFs of ??1Animation@Animations@Components@@UEAA@XZ @ 0x180153C1C
 * Callers:
 *     ??_EAnimation@Animations@Components@@UEAAPEAXI@Z @ 0x180153920 (--_EAnimation@Animations@Components@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_GSequence@Animations@Components@@QEAAPEAXI@Z @ 0x1801539DC (--_GSequence@Animations@Components@@QEAAPEAXI@Z.c)
 *     ?RemoveAll@?$ArrayListS@PEAUDwm__IListener@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x180153BE8 (-RemoveAll@-$ArrayListS@PEAUDwm__IListener@Animations@Components@@@Animations@Components@@QEAAXX.c)
 *     ?RemoveAll@?$ArrayListF@PEAVAnimationEvent@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x180155FF8 (-RemoveAll@-$ArrayListF@PEAVAnimationEvent@Animations@Components@@@Animations@Components@@QEAAXX.c)
 */

void __fastcall Components::Animations::Animation::~Animation(Components::Animations::Animation *this)
{
  __int64 *v2; // rax
  __int64 v3; // rcx
  Components::Animations::Sequence *v4; // rcx

  *(_QWORD *)this = &Components::Animations::Animation::`vftable'{for `Components::Animations::SharedObject'};
  *((_QWORD *)this + 1) = &Components::Animations::Animation::`vftable'{for `Components::Animations::Dwm__IRenderPropertyBag'};
  *((_QWORD *)this + 2) = &Components::Animations::Animation::`vftable'{for `Components::Animations::Dwm__IDispatcher'};
  *((_QWORD *)this + 29) = &Components::Animations::Dwm__Rendering__AsyncAnimationCallback::`vftable';
  if ( *((_QWORD *)this + 25) )
  {
    while ( 1 )
    {
      v2 = (__int64 *)*((_QWORD *)this + 25);
      if ( !v2 )
        break;
      v3 = *v2;
      *((_QWORD *)this + 25) = *v2;
      if ( v3 )
        *(_QWORD *)(v3 + 8) = 0LL;
      *v2 = 0LL;
    }
  }
  Components::Animations::ArrayListF<Components::Animations::AnimationEvent *>::RemoveAll((char *)this + 120);
  Components::Animations::ArrayListS<Components::Animations::Dwm__IListener *>::RemoveAll((_QWORD *)this + 14);
  Components::Animations::ArrayListF<Components::Animations::AnimationEvent *>::RemoveAll((char *)this + 32);
  v4 = (Components::Animations::Sequence *)*((_QWORD *)this + 3);
  if ( v4 )
    Components::Animations::Sequence::`scalar deleting destructor'(v4);
  *(_QWORD *)this = &Components::Animations::Object::`vftable';
}
