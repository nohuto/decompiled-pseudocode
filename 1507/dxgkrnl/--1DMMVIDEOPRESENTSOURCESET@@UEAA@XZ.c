/*
 * XREFs of ??1DMMVIDEOPRESENTSOURCESET@@UEAA@XZ @ 0x1C002B1CC
 * Callers:
 *     ??_GDMMVIDEOPRESENTTARGETSET@@UEAAPEAXI@Z @ 0x1C002B890 (--_GDMMVIDEOPRESENTTARGETSET@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x1C0003ED4 (--1ReferenceCounted@@UEAA@XZ.c)
 */

void __fastcall DMMVIDEOPRESENTSOURCESET::~DMMVIDEOPRESENTSOURCESET(DMMVIDEOPRESENTSOURCESET *this)
{
  ReferenceCounted *v2; // rcx

  *(_QWORD *)this = &DMMVIDEOPRESENTTARGETSET::`vftable'{for `IndexedSet<DMMVIDEOPRESENTTARGET>'};
  v2 = (DMMVIDEOPRESENTSOURCESET *)((char *)this + 64);
  *(_QWORD *)v2 = &DMMVIDEOPRESENTTARGETSET::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 10) = &DMMVIDEOPRESENTTARGETSET::`vftable'{for `AggregatedBy<VIDPN_MGR>'};
  *((_DWORD *)this + 26) |= 0x6D640000u;
  *((_QWORD *)this + 12) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 10) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  ReferenceCounted::~ReferenceCounted(v2);
  *(_QWORD *)this = &IndexedSet<DMMVIDPNTARGETMODE>::`vftable';
  Set<DMMVIDEOPRESENTTARGET>::~Set<DMMVIDEOPRESENTTARGET>(this);
}
