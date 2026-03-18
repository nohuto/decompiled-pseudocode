/*
 * XREFs of ??1CPrimitiveColor@@MEAA@XZ @ 0x18001BEA0
 * Callers:
 *     ??_GCPrimitiveColor@@MEAAPEAXI@Z @ 0x18001BEEC (--_GCPrimitiveColor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleasePrimitiveProperties@CPrimitiveColor@@QEAAXXZ @ 0x18001BC40 (-ReleasePrimitiveProperties@CPrimitiveColor@@QEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CPrimitiveColor::~CPrimitiveColor(CPrimitiveColor *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  *(_QWORD *)this = &CPrimitiveColor::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 1) = &CPrimitiveColor::`vftable'{for `CResource'};
  CPrimitiveColor::ReleasePrimitiveProperties(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 120, v2, v3);
  CResource::~CResource((CPrimitiveColor *)((char *)this + 8));
}
