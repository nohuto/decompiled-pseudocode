/*
 * XREFs of ??1DMMVIDEOPRESENTSOURCESET@@UEAA@XZ @ 0x1C0032940
 * Callers:
 *     ??_GDMMVIDEOPRESENTSOURCESET@@UEAAPEAXI@Z @ 0x1C00336E0 (--_GDMMVIDEOPRESENTSOURCESET@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x1C0004774 (--1ReferenceCounted@@UEAA@XZ.c)
 */

void __fastcall DMMVIDEOPRESENTSOURCESET::~DMMVIDEOPRESENTSOURCESET(DMMVIDEOPRESENTSOURCESET *this)
{
  ReferenceCounted *v2; // rcx

  *(_QWORD *)this = &DMMVIDEOPRESENTSOURCESET::`vftable'{for `IndexedSet<DMMVIDEOPRESENTSOURCE>'};
  v2 = (DMMVIDEOPRESENTSOURCESET *)((char *)this + 64);
  *(_QWORD *)v2 = &DMMVIDEOPRESENTSOURCESET::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 10) = &DMMVIDEOPRESENTSOURCESET::`vftable'{for `AggregatedBy<VIDPN_MGR>'};
  *((_DWORD *)this + 26) |= 0x6D640000u;
  *((_QWORD *)this + 12) = &SignedWithClassSignature<DMMVIDEOPRESENTSOURCESET>::`vftable';
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 10) = &AggregatedBy<VIDPN_MGR>::`vftable';
  ReferenceCounted::~ReferenceCounted(v2);
  *(_QWORD *)this = &IndexedSet<DMMVIDEOPRESENTSOURCE>::`vftable';
  Set<DMMVIDEOPRESENTSOURCE>::~Set<DMMVIDEOPRESENTSOURCE>(this);
}
