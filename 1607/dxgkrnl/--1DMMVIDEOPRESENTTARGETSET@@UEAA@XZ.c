/*
 * XREFs of ??1DMMVIDEOPRESENTTARGETSET@@UEAA@XZ @ 0x1C00329AC
 * Callers:
 *     ??_GDMMVIDEOPRESENTTARGETSET@@UEAAPEAXI@Z @ 0x1C0033710 (--_GDMMVIDEOPRESENTTARGETSET@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x1C0004774 (--1ReferenceCounted@@UEAA@XZ.c)
 */

void __fastcall DMMVIDEOPRESENTTARGETSET::~DMMVIDEOPRESENTTARGETSET(DMMVIDEOPRESENTTARGETSET *this)
{
  ReferenceCounted *v2; // rcx

  *(_QWORD *)this = &DMMVIDEOPRESENTTARGETSET::`vftable'{for `IndexedSet<DMMVIDEOPRESENTTARGET>'};
  v2 = (DMMVIDEOPRESENTTARGETSET *)((char *)this + 64);
  *(_QWORD *)v2 = &DMMVIDEOPRESENTTARGETSET::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 10) = &DMMVIDEOPRESENTTARGETSET::`vftable'{for `AggregatedBy<VIDPN_MGR>'};
  *((_DWORD *)this + 26) |= 0x6D640000u;
  *((_QWORD *)this + 12) = &SignedWithClassSignature<DMMVIDEOPRESENTTARGETSET>::`vftable';
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 10) = &AggregatedBy<VIDPN_MGR>::`vftable';
  ReferenceCounted::~ReferenceCounted(v2);
  *(_QWORD *)this = &IndexedSet<DMMVIDEOPRESENTTARGET>::`vftable';
  Set<DMMVIDEOPRESENTTARGET>::~Set<DMMVIDEOPRESENTTARGET>(this);
}
