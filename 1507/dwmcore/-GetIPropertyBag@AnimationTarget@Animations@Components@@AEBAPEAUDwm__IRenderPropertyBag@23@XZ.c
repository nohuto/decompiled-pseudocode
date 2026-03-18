/*
 * XREFs of ?GetIPropertyBag@AnimationTarget@Animations@Components@@AEBAPEAUDwm__IRenderPropertyBag@23@XZ @ 0x180157338
 * Callers:
 *     ?Commit@AnimationTarget@Animations@Components@@QEAAJXZ @ 0x180157214 (-Commit@AnimationTarget@Animations@Components@@QEAAJXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

struct Components::Animations::Dwm__IRenderPropertyBag *__fastcall Components::Animations::AnimationTarget::GetIPropertyBag(
        Components::Animations::AnimationTarget *this)
{
  __int64 (__fastcall ***v1)(_QWORD, GUID *); // rdi

  v1 = (__int64 (__fastcall ***)(_QWORD, GUID *))*((_QWORD *)this + 3);
  if ( v1 )
    return (struct Components::Animations::Dwm__IRenderPropertyBag *)(**v1)(
                                                                       *((_QWORD *)this + 3),
                                                                       &GUID_57fc0194_581c_43ca_b4f5_a38a5ab0de11);
  else
    return 0LL;
}
