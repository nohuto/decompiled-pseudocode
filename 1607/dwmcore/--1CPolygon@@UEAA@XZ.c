/*
 * XREFs of ??1CPolygon@@UEAA@XZ @ 0x1801535BC
 * Callers:
 *     ??_GCPolygon@@UEAAPEAXI@Z @ 0x180153650 (--_GCPolygon@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CPolygon::~CPolygon(CPolygon *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CPolygon::`vftable';
  v2 = *((_QWORD *)this + 31);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, CPolygon *))(*(_QWORD *)v2 + 144LL))(v2, this);
    v3 = *((_QWORD *)this + 31);
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      *((_QWORD *)this + 31) = 0LL;
    }
  }
  *((_DWORD *)this + 10) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 16, 0x14u);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 16);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
