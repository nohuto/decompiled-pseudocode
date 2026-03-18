/*
 * XREFs of ??1DMMVIDPNSOURCESET@@UEAA@XZ @ 0x1C0007C50
 * Callers:
 *     ??_EDMMVIDPNSOURCESET@@UEAAPEAXI@Z @ 0x1C0007C20 (--_EDMMVIDPNSOURCESET@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DMMVIDPNSOURCESET::~DMMVIDPNSOURCESET(_QWORD *this)
{
  *this = &DMMVIDPNSOURCESET::`vftable'{for `IndexedSet<DMMVIDPNSOURCE>'};
  this[8] = &DMMVIDPNSOURCESET::`vftable'{for `ContainedBy<DMMVIDPN>'};
  *((_DWORD *)this + 22) |= 0x6D640000u;
  this[10] = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  this[9] = 0LL;
  this[8] = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *this = &IndexedSet<DMMVIDPNSOURCE>::`vftable';
  Set<DMMVIDPNSOURCE>::~Set<DMMVIDPNSOURCE>(this);
}
