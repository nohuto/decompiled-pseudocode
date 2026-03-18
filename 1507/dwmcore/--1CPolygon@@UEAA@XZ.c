/*
 * XREFs of ??1CPolygon@@UEAA@XZ @ 0x18011A438
 * Callers:
 *     ??_GCPolygon@@UEAAPEAXI@Z @ 0x18011A4E0 (--_GCPolygon@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CPolygon::~CPolygon(CPolygon *this)
{
  __int64 v1; // rsi
  __int64 v3; // rsi

  v1 = *((_QWORD *)this + 30);
  *(_QWORD *)this = &CPolygon::`vftable';
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64, CPolygon *))(*(_QWORD *)v1 + 128LL))(v1, this);
    v3 = *((_QWORD *)this + 30);
    if ( v3 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 30));
      *((_QWORD *)this + 30) = 0LL;
    }
  }
  *((_DWORD *)this + 10) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 2, 0x14u);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 2);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
