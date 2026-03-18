/*
 * XREFs of ??1DMMVIDPNSOURCESET@@UEAA@XZ @ 0x1C0001E80
 * Callers:
 *     ??_EDMMVIDPNSOURCESET@@UEAAPEAXI@Z @ 0x1C0001E50 (--_EDMMVIDPNSOURCESET@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DMMVIDPNSOURCESET::~DMMVIDPNSOURCESET(DMMVIDPNSOURCESET *this)
{
  *(_QWORD *)this = &DMMVIDPNSOURCESET::`vftable'{for `IndexedSet<DMMVIDPNSOURCE>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCESET::`vftable'{for `ContainedBy<DMMVIDPN>'};
  *((_DWORD *)this + 22) |= 0x6D640000u;
  *((_QWORD *)this + 10) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 8) = &ContainedBy<DMMVIDPN>::`vftable';
  *(_QWORD *)this = &IndexedSet<DMMVIDPNSOURCE>::`vftable';
  Set<DMMVIDPNSOURCE>::~Set<DMMVIDPNSOURCE>();
}
