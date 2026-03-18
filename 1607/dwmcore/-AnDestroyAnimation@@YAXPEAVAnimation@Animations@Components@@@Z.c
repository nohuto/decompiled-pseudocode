/*
 * XREFs of ?AnDestroyAnimation@@YAXPEAVAnimation@Animations@Components@@@Z @ 0x1800B23B0
 * Callers:
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x1800872CC (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180087408 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 *     ?AnCreateAnimation@@YAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUIKeyframeAnimationOwner@@PEAPEAVAnimation@Animations@Components@@@Z @ 0x1800B186C (-AnCreateAnimation@@YAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUIKeyframeAnimationOwner@@PEAPEAVAnima.c)
 * Callees:
 *     ?xwPreDelete@Animation@Animations@Components@@UEAAXXZ @ 0x180086000 (-xwPreDelete@Animation@Animations@Components@@UEAAXXZ.c)
 *     ??_EAnimation@Animations@Components@@UEAAPEAXI@Z @ 0x180086750 (--_EAnimation@Animations@Components@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AnDestroyAnimation(struct Components::Animations::Animation *this)
{
  void (*v2)(void); // rax
  Components::Animations::Animation *(__fastcall *v3)(Components::Animations::Animation *, char); // rax

  if ( this )
  {
    v2 = *(void (**)(void))(*(_QWORD *)this + 16LL);
    if ( (char *)v2 == (char *)Components::Animations::Animation::xwPreDelete )
      Components::Animations::Animation::xwPreDelete(this);
    else
      v2();
    v3 = *(Components::Animations::Animation *(__fastcall **)(Components::Animations::Animation *, char))(*(_QWORD *)this + 8LL);
    if ( v3 == Components::Animations::Animation::`vector deleting destructor' )
      Components::Animations::Animation::`vector deleting destructor'(this, 1);
    else
      v3(this, 1);
  }
}
