/*
 * XREFs of ??1CRemoteApplicationWindowSet@@UEAA@XZ @ 0x1801235A0
 * Callers:
 *     ??_ECRemoteApplicationWindowSet@@UEAAPEAXI@Z @ 0x1801235E0 (--_ECRemoteApplicationWindowSet@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CRemoteApplicationWindowSet::~CRemoteApplicationWindowSet(void **this)
{
  *this = &CRemoteApplicationWindowSet::`vftable';
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 2);
  *this = &CMILRefCountBase::`vftable';
}
