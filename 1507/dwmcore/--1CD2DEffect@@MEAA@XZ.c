/*
 * XREFs of ??1CD2DEffect@@MEAA@XZ @ 0x18000FC08
 * Callers:
 *     ??_GCD2DEffect@@MEAAPEAXI@Z @ 0x18000FBB0 (--_GCD2DEffect@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CD2DEffect::~CD2DEffect(CD2DEffect *this)
{
  __int64 v1; // rsi

  v1 = *((_QWORD *)this + 13);
  *(_QWORD *)this = &CD2DEffect::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CD2DBitmap::`vftable'{for `IDeviceResource'};
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  CD2DResource::~CD2DResource(this);
}
