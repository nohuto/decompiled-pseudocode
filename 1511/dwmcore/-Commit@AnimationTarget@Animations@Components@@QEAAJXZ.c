/*
 * XREFs of ?Commit@AnimationTarget@Animations@Components@@QEAAJXZ @ 0x1801652D0
 * Callers:
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x180161154 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?Commit@Animation@Animations@Components@@QEAAJXZ @ 0x180161EEC (-Commit@Animation@Animations@Components@@QEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?Mix@Value@Animations@Components@@QEBA?AV123@AEBV123@HPEA_N1@Z @ 0x180164D00 (-Mix@Value@Animations@Components@@QEBA-AV123@AEBV123@HPEA_N1@Z.c)
 *     ?QueryFrom@Value@Animations@Components@@QEAAJPEAUDwm__IRenderPropertyBag@23@IW4Dwm__AnimationType@23@@Z @ 0x180164D94 (-QueryFrom@Value@Animations@Components@@QEAAJPEAUDwm__IRenderPropertyBag@23@IW4Dwm__AnimationTyp.c)
 *     ?StoreTo@Value@Animations@Components@@QEAAJPEAUDwm__IRenderPropertyBag@23@IW4Dwm__AnimationType@23@@Z @ 0x180165008 (-StoreTo@Value@Animations@Components@@QEAAJPEAUDwm__IRenderPropertyBag@23@IW4Dwm__AnimationType@.c)
 *     ?GetIPropertyBag@AnimationTarget@Animations@Components@@AEBAPEAUDwm__IRenderPropertyBag@23@XZ @ 0x1801653F4 (-GetIPropertyBag@AnimationTarget@Animations@Components@@AEBAPEAUDwm__IRenderPropertyBag@23@XZ.c)
 */

__int64 __fastcall Components::Animations::AnimationTarget::Commit(Components::Animations::AnimationTarget *this)
{
  bool v1; // zf
  __int64 *IPropertyBag; // r14
  __int64 result; // rax
  __int64 v5; // r9
  char *v6; // rax
  __int128 v7; // xmm1
  _BYTE v8[8]; // [rsp+30h] [rbp-29h] BYREF
  __int128 v9; // [rsp+38h] [rbp-21h] BYREF
  __int128 v10; // [rsp+48h] [rbp-11h]
  _QWORD v11[4]; // [rsp+58h] [rbp-1h] BYREF
  char v12[32]; // [rsp+78h] [rbp+1Fh] BYREF

  v1 = *((_QWORD *)this + 3) == 0LL;
  v8[0] = 0;
  if ( v1 )
    return 1LL;
  v9 = 0uLL;
  v10 = 0uLL;
  memset(v11, 0, sizeof(v11));
  IPropertyBag = (__int64 *)Components::Animations::AnimationTarget::GetIPropertyBag(this);
  result = Components::Animations::Value::QueryFrom(
             (__int64)&v9,
             IPropertyBag,
             *((_DWORD *)this + 8),
             *((_DWORD *)this + 9));
  if ( (int)result >= 0 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 5) + 16LL))(*((_QWORD *)this + 5), v11);
    if ( (int)result >= 0 )
    {
      v6 = Components::Animations::Value::Mix((double *)&v9, v12, (__int64)v11, v5, (__int64)this + 48, v8);
      v7 = *((_OWORD *)v6 + 1);
      v9 = *(_OWORD *)v6;
      v10 = v7;
      if ( v8[0] )
      {
        Components::Animations::Value::StoreTo(
          (double *)&v9,
          (__int64)IPropertyBag,
          *((_DWORD *)this + 8),
          *((_DWORD *)this + 9));
        return 0LL;
      }
      return 1LL;
    }
  }
  return result;
}
