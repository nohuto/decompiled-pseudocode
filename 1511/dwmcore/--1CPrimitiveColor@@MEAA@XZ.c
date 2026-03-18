/*
 * XREFs of ??1CPrimitiveColor@@MEAA@XZ @ 0x18000F910
 * Callers:
 *     ??_GCPrimitiveColor@@MEAAPEAXI@Z @ 0x18000F95C (--_GCPrimitiveColor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleasePrimitiveProperties@CPrimitiveColor@@QEAAXXZ @ 0x18000FA94 (-ReleasePrimitiveProperties@CPrimitiveColor@@QEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CPrimitiveColor::~CPrimitiveColor(CPrimitiveColor *this)
{
  *(_QWORD *)this = &CPrimitiveColor::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 1) = &CPrimitiveColor::`vftable'{for `CResource'};
  CPrimitiveColor::ReleasePrimitiveProperties(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 48);
  CResource::~CResource((CPrimitiveColor *)((char *)this + 8));
}
