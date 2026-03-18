/*
 * XREFs of ?Commit@AnimationTarget@Animations@Components@@QEAAJXZ @ 0x180157214
 * Callers:
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x1801540A4 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?Commit@Animation@Animations@Components@@QEAAJXZ @ 0x180154B5C (-Commit@Animation@Animations@Components@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetIPropertyBag@AnimationTarget@Animations@Components@@AEBAPEAUDwm__IRenderPropertyBag@23@XZ @ 0x180157338 (-GetIPropertyBag@AnimationTarget@Animations@Components@@AEBAPEAUDwm__IRenderPropertyBag@23@XZ.c)
 *     ?Mix@Value@Animations@Components@@QEBA?AV123@AEBV123@HPEA_N1@Z @ 0x180158044 (-Mix@Value@Animations@Components@@QEBA-AV123@AEBV123@HPEA_N1@Z.c)
 *     ?QueryFrom@Value@Animations@Components@@QEAAJPEAUDwm__IRenderPropertyBag@23@IW4Dwm__AnimationType@23@@Z @ 0x1801580D8 (-QueryFrom@Value@Animations@Components@@QEAAJPEAUDwm__IRenderPropertyBag@23@IW4Dwm__AnimationTyp.c)
 *     ?StoreTo@Value@Animations@Components@@QEAAJPEAUDwm__IRenderPropertyBag@23@IW4Dwm__AnimationType@23@@Z @ 0x1801582F0 (-StoreTo@Value@Animations@Components@@QEAAJPEAUDwm__IRenderPropertyBag@23@IW4Dwm__AnimationType@.c)
 */

__int64 __fastcall Components::Animations::AnimationTarget::Commit(Components::Animations::AnimationTarget *this)
{
  struct Components::Animations::Dwm__IRenderPropertyBag *IPropertyBag; // r14
  __int64 result; // rax
  __int128 *v4; // rax
  __int128 v5; // xmm1
  __int128 v6; // [rsp+38h] [rbp-21h] BYREF
  __int128 v7; // [rsp+48h] [rbp-11h]
  _QWORD v8[4]; // [rsp+58h] [rbp-1h] BYREF
  _BYTE v9[32]; // [rsp+78h] [rbp+1Fh] BYREF

  if ( !*((_QWORD *)this + 3) )
    return 1LL;
  v6 = 0uLL;
  v7 = 0uLL;
  memset(v8, 0, sizeof(v8));
  IPropertyBag = Components::Animations::AnimationTarget::GetIPropertyBag(this);
  result = Components::Animations::Value::QueryFrom(
             &v6,
             IPropertyBag,
             *((unsigned int *)this + 8),
             *((unsigned int *)this + 9));
  if ( (int)result >= 0 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 5) + 16LL))(*((_QWORD *)this + 5), v8);
    if ( (int)result >= 0 )
    {
      v4 = (__int128 *)Components::Animations::Value::Mix(&v6, v9, v8);
      v5 = v4[1];
      v6 = *v4;
      v7 = v5;
      return 1LL;
    }
  }
  return result;
}
