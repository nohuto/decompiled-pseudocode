/*
 * XREFs of ??1CAnimationTrigger@@UEAA@XZ @ 0x1801279F8
 * Callers:
 *     ??_ECAnimationTrigger@@UEAAPEAXI@Z @ 0x1801130E0 (--_ECAnimationTrigger@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CAnimationTrigger::~CAnimationTrigger(void **this)
{
  *this = &CAnimationTrigger::`vftable';
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 5);
  CResource::~CResource((CResource *)this);
}
