/*
 * XREFs of ??1CD2DBitmap@@MEAA@XZ @ 0x18001B89C
 * Callers:
 *     ??_GCD2DBitmap@@MEAAPEAXI@Z @ 0x18001B9B0 (--_GCD2DBitmap@@MEAAPEAXI@Z.c)
 *     ??1CSecondaryD2DBitmap@@MEAA@XZ @ 0x180150238 (--1CSecondaryD2DBitmap@@MEAA@XZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CD2DBitmap::~CD2DBitmap(CD2DBitmap *this)
{
  __int64 v1; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi

  v1 = *((_QWORD *)this + 16);
  *(_QWORD *)this = &CD2DBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CD2DBitmap::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 13) = &CD2DBitmap::`vftable'{for `ID2DBitmap'};
  *((_QWORD *)this + 14) = &CD2DBitmap::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 15) = &CD2DBitmap::`vftable'{for `IBitmapUnlock'};
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  v3 = *((_QWORD *)this + 17);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 17));
  v4 = *((_QWORD *)this + 18);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 18));
  v5 = *((_QWORD *)this + 19);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 16LL))(*((_QWORD *)this + 19));
  v6 = *((_QWORD *)this + 20);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 16LL))(*((_QWORD *)this + 20));
  CD2DResource::~CD2DResource(this);
}
