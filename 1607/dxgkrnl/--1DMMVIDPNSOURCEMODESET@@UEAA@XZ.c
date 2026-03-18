/*
 * XREFs of ??1DMMVIDPNSOURCEMODESET@@UEAA@XZ @ 0x1C00059CC
 * Callers:
 *     ??_GDMMVIDPNSOURCEMODESET@@UEAAPEAXI@Z @ 0x1C0005A60 (--_GDMMVIDPNSOURCEMODESET@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@@@QEAAXXZ @ 0x1C0004180 (-Clear@-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@@@QEAAXXZ.c)
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x1C0004774 (--1ReferenceCounted@@UEAA@XZ.c)
 */

void __fastcall DMMVIDPNSOURCEMODESET::~DMMVIDPNSOURCEMODESET(DMMVIDPNSOURCEMODESET *this)
{
  ReferenceCounted *v2; // rcx

  *(_QWORD *)this = &DMMVIDPNSOURCEMODESET::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPNSOURCEMODESET::`vftable'{for `IndexedSet<DMMVIDPNSOURCEMODE>'};
  v2 = (DMMVIDPNSOURCEMODESET *)((char *)this + 88);
  *(_QWORD *)v2 = &DMMVIDPNSOURCEMODESET::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 13) = &DMMVIDPNSOURCEMODESET::`vftable'{for `AggregatedBy<DMMVIDPNSOURCE>'};
  *((_DWORD *)this + 32) |= 0x6D640000u;
  *((_QWORD *)this + 15) = &SignedWithClassSignature<DMMVIDPNSOURCEMODESET>::`vftable';
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 13) = &AggregatedBy<DMMVIDPNSOURCE>::`vftable';
  ReferenceCounted::~ReferenceCounted(v2);
  *((_QWORD *)this + 3) = &Set<DMMVIDPNSOURCEMODE>::`vftable';
  *((_QWORD *)this + 4) = &DoublyLinkedList<DMMVIDPNSOURCEMODE>::`vftable';
  DoublyLinkedList<DMMVIDPNSOURCEMODE>::Clear((void (__fastcall ***)(_QWORD, __int64))this + 4);
  *(_QWORD *)this = &DoublyLinkedListElement::`vftable';
}
