/*
 * XREFs of ??1CD2DMesh@@MEAA@XZ @ 0x18013E964
 * Callers:
 *     ??_ECD2DMesh@@MEAAPEAXI@Z @ 0x18013E9D0 (--_ECD2DMesh@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CD2DMesh::~CD2DMesh(CD2DMesh *this)
{
  __int64 v1; // rsi

  v1 = *((_QWORD *)this + 13);
  *(_QWORD *)this = &CD2DMesh::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CSecondaryD2DBitmap::`vftable'{for `IDeviceResource'};
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  CD2DResource::~CD2DResource(this);
}
