/*
 * XREFs of ??1CD2DInk@@MEAA@XZ @ 0x18013DCB8
 * Callers:
 *     ??_ECD2DInk@@MEAAPEAXI@Z @ 0x18013DD40 (--_ECD2DInk@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CD2DInk::~CD2DInk(CD2DInk *this)
{
  __int64 v1; // rsi
  __int64 v3; // rsi

  v1 = *((_QWORD *)this + 13);
  *(_QWORD *)this = &CD2DInk::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CSecondaryD2DBitmap::`vftable'{for `IDeviceResource'};
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  v3 = *((_QWORD *)this + 14);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 14));
  CD2DResource::~CD2DResource(this);
}
