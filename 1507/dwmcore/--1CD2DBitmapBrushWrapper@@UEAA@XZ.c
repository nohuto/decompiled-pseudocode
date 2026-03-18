/*
 * XREFs of ??1CD2DBitmapBrushWrapper@@UEAA@XZ @ 0x18008A998
 * Callers:
 *     ??_ECD2DBitmapBrushWrapper@@UEAAPEAXI@Z @ 0x18008A940 (--_ECD2DBitmapBrushWrapper@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CD2DBitmapBrushWrapper::~CD2DBitmapBrushWrapper(CD2DBitmapBrushWrapper *this)
{
  __int64 v1; // rsi
  __int64 v3; // rsi

  v1 = *((_QWORD *)this + 2);
  *(_QWORD *)this = &CD2DBitmapBrushWrapper::`vftable';
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 3));
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
