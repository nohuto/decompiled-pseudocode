/*
 * XREFs of ??1CRemoteApplicationWindowSet@@UEAA@XZ @ 0x180161D44
 * Callers:
 *     ??_ECRemoteApplicationWindowSet@@UEAAPEAXI@Z @ 0x180161D80 (--_ECRemoteApplicationWindowSet@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CRemoteApplicationWindowSet::~CRemoteApplicationWindowSet(CRemoteApplicationWindowSet *this)
{
  *(_QWORD *)this = &CRemoteApplicationWindowSet::`vftable';
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 16);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
