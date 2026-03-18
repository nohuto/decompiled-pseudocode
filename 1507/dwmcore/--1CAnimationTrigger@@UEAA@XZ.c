/*
 * XREFs of ??1CAnimationTrigger@@UEAA@XZ @ 0x18010CA98
 * Callers:
 *     ??_ECAnimationTrigger@@UEAAPEAXI@Z @ 0x1800F8FD0 (--_ECAnimationTrigger@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CAnimationTrigger::~CAnimationTrigger(void **this)
{
  *this = &CAnimationTrigger::`vftable';
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 5);
  CResource::~CResource((CResource *)this);
}
