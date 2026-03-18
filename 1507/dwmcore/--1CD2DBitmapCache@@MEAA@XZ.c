/*
 * XREFs of ??1CD2DBitmapCache@@MEAA@XZ @ 0x18001B5AC
 * Callers:
 *     ??1CBitmapRealization@@MEAA@XZ @ 0x180046C3C (--1CBitmapRealization@@MEAA@XZ.c)
 *     ??_ECD2DBitmapCache@@MEAAPEAXI@Z @ 0x18014D640 (--_ECD2DBitmapCache@@MEAAPEAXI@Z.c)
 *     ??1CDxHandleStereoBitmapRealization@@MEAA@XZ @ 0x18014DF80 (--1CDxHandleStereoBitmapRealization@@MEAA@XZ.c)
 * Callees:
 *     ?ClearCache@CD2DBitmapCache@@IEAAXXZ @ 0x18001B3CC (-ClearCache@CD2DBitmapCache@@IEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CD2DBitmapCache::~CD2DBitmapCache(CD2DBitmapCache *this)
{
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi

  *(_QWORD *)this = &CD2DBitmapCache::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CD2DBitmapCache::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CD2DBitmapCache::`vftable'{for `IDeviceResourceNotify'};
  CD2DBitmapCache::ClearCache(this);
  v2 = *((_QWORD *)this + 6);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 16LL))(*((_QWORD *)this + 6));
  v3 = *((_QWORD *)this + 7);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 7));
  v4 = *((_QWORD *)this + 9);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 9));
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 80);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
