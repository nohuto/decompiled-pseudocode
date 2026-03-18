/*
 * XREFs of ??1CD2DFactory@@EEAA@XZ @ 0x180125874
 * Callers:
 *     ??_GCD2DFactory@@EEAAPEAXI@Z @ 0x1801258F8 (--_GCD2DFactory@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CD2DFactory::~CD2DFactory(CD2DFactory *this)
{
  __int64 v1; // rsi
  __int64 v3; // rsi

  v1 = *((_QWORD *)this + 3);
  *(_QWORD *)this = &CD2DFactory::`vftable'{for `IUnknown'};
  *((_QWORD *)this + 1) = &CD2DFactory::`vftable'{for `CMILRefCountBase'};
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 4));
  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
}
