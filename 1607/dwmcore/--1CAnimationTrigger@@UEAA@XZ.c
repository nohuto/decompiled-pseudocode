/*
 * XREFs of ??1CAnimationTrigger@@UEAA@XZ @ 0x180145020
 * Callers:
 *     ??_ECAnimationTrigger@@UEAAPEAXI@Z @ 0x18012B5E0 (--_ECAnimationTrigger@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CAnimationTrigger::~CAnimationTrigger(CAnimationTrigger *this)
{
  *(_QWORD *)this = &CAnimationTrigger::`vftable';
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 112);
  CResource::~CResource(this);
}
