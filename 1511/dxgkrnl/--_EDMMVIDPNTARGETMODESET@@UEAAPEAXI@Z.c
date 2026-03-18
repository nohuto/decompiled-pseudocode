/*
 * XREFs of ??_EDMMVIDPNTARGETMODESET@@UEAAPEAXI@Z @ 0x1C00059A0
 * Callers:
 *     ??_EDMMVIDPNTARGETMODESET@@WBI@EAAPEAXI@Z @ 0x1C0012780 (--_EDMMVIDPNTARGETMODESET@@WBI@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNTARGETMODESET@@WFI@EAAPEAXI@Z @ 0x1C0012790 (--_EDMMVIDPNTARGETMODESET@@WFI@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNTARGETMODESET@@WGI@EAAPEAXI@Z @ 0x1C00127A0 (--_EDMMVIDPNTARGETMODESET@@WGI@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNTARGETMODESET@@WHI@EAAPEAXI@Z @ 0x1C00127B0 (--_EDMMVIDPNTARGETMODESET@@WHI@EAAPEAXI@Z.c)
 * Callees:
 *     ?Release@NonReferenceCounted@@QEAA_KXZ @ 0x1C0008AA8 (-Release@NonReferenceCounted@@QEAA_KXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 */

DMMVIDPNTARGETMODESET *__fastcall DMMVIDPNTARGETMODESET::`vector deleting destructor'(
        DMMVIDPNTARGETMODESET *this,
        char a2)
{
  __int64 **v4; // rdi
  __int64 *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax

  *(_QWORD *)this = &DMMVIDPNTARGETMODESET::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPNTARGETMODESET::`vftable'{for `IndexedSet<DMMVIDPNTARGETMODE>'};
  *((_QWORD *)this + 11) = &DMMVIDPNTARGETMODESET::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 13) = &DMMVIDPNTARGETMODESET::`vftable'{for `AggregatedBy<DMMVIDPNTARGET>'};
  *((_DWORD *)this + 32) |= 0x6D640000u;
  *((_QWORD *)this + 15) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 13) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *((_QWORD *)this + 11) = &ReferenceCounted::`vftable';
  if ( *((_DWORD *)this + 24) )
  {
    v8 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v8 + 24) = *((int *)this + 24);
    WdLogEvent5_WdError(v8);
  }
  *((_QWORD *)this + 3) = &Set<DMMVIDEOPRESENTSOURCE>::`vftable';
  v4 = (__int64 **)((char *)this + 48);
  *((_QWORD *)this + 4) = &DoublyLinkedList<DMMVIDEOPRESENTSOURCE>::`vftable';
  while ( *v4 != (__int64 *)v4 )
  {
    v6 = *v4;
    v7 = **v4;
    if ( (__int64 **)(*v4)[1] != v4 || *(__int64 **)(v7 + 8) != v6 )
      __fastfail(3u);
    *v4 = (__int64 *)v7;
    *(_QWORD *)(v7 + 8) = v4;
    --*((_QWORD *)this + 8);
    *v6 = 0LL;
    v6[1] = 0LL;
    NonReferenceCounted::Release((NonReferenceCounted *)(v6 + 7));
  }
  if ( *((_QWORD *)this + 8) )
  {
    v9 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v9);
  }
  *(_QWORD *)this = &SetElement::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
