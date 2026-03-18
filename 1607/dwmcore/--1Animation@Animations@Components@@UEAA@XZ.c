/*
 * XREFs of ??1Animation@Animations@Components@@UEAA@XZ @ 0x180086650
 * Callers:
 *     ??_EAnimation@Animations@Components@@UEAAPEAXI@Z @ 0x180086750 (--_EAnimation@Animations@Components@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_GSequence@Animations@Components@@QEAAPEAXI@Z @ 0x180085FA4 (--_GSequence@Animations@Components@@QEAAPEAXI@Z.c)
 *     ?RemoveAll@?$ArrayListS@PEAUDwm__IListener@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1800B24A0 (-RemoveAll@-$ArrayListS@PEAUDwm__IListener@Animations@Components@@@Animations@Components@@QEAAXX.c)
 */

void __fastcall Components::Animations::Animation::~Animation(Components::Animations::Animation *this)
{
  Components::Animations::Sequence *v2; // rcx

  *(_QWORD *)this = &Components::Animations::Animation::`vftable'{for `Components::Animations::SharedObject'};
  *((_QWORD *)this + 1) = &Components::Animations::Animation::`vftable'{for `Components::Animations::Dwm__IRenderPropertyBag'};
  *((_QWORD *)this + 9) = &Components::Animations::Dwm__Rendering__AsyncAnimationCallback::`vftable';
  Components::Animations::ArrayListS<Components::Animations::Dwm__IListener *>::RemoveAll((char *)this + 24);
  v2 = (Components::Animations::Sequence *)*((_QWORD *)this + 2);
  if ( v2 )
    Components::Animations::Sequence::`scalar deleting destructor'(v2);
  *(_QWORD *)this = &Components::Animations::Object::`vftable';
}
