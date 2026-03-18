/*
 * XREFs of ??1CRemoteApplicationWindowSet@@UEAA@XZ @ 0x180138B34
 * Callers:
 *     ??_ECRemoteApplicationWindowSet@@UEAAPEAXI@Z @ 0x180138B70 (--_ECRemoteApplicationWindowSet@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CRemoteApplicationWindowSet::~CRemoteApplicationWindowSet(void **this)
{
  *this = &CRemoteApplicationWindowSet::`vftable';
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 2);
  *this = &CMILRefCountBase::`vftable';
}
