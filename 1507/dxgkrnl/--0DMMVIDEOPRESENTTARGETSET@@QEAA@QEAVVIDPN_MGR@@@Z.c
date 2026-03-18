/*
 * XREFs of ??0DMMVIDEOPRESENTTARGETSET@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000D92C
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C00CE068 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ?SetAggregator@?$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z @ 0x1C000A54C (-SetAggregator@-$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

DMMVIDEOPRESENTTARGETSET *__fastcall DMMVIDEOPRESENTTARGETSET::DMMVIDEOPRESENTTARGETSET(
        DMMVIDEOPRESENTTARGETSET *this,
        struct VIDPN_MGR *const a2)
{
  unsigned __int8 (__fastcall ***v2)(_QWORD); // rbx
  _QWORD *v4; // rcx

  v2 = (unsigned __int8 (__fastcall ***)(_QWORD))((char *)this + 8);
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 1) = &DoublyLinkedList<DMMVIDEOPRESENTSOURCE>::`vftable';
  *((_QWORD *)this + 4) = (char *)this + 24;
  *((_QWORD *)this + 3) = (char *)this + 24;
  *((_DWORD *)this + 12) = 2;
  *((_DWORD *)this + 14) = 0;
  *(_QWORD *)this = &IndexedSet<DMMVIDPNTARGETMODE>::`vftable';
  *((_QWORD *)this + 8) = &ReferenceCounted::`vftable';
  *((_DWORD *)this + 18) = 1;
  v4 = (_QWORD *)((char *)this + 80);
  v4[1] = 0LL;
  *((_DWORD *)this + 26) = 1833172994;
  *(_QWORD *)this = &DMMVIDEOPRESENTTARGETSET::`vftable'{for `IndexedSet<DMMVIDEOPRESENTTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDEOPRESENTTARGETSET::`vftable'{for `ReferenceCounted'};
  *v4 = &DMMVIDEOPRESENTTARGETSET::`vftable'{for `AggregatedBy<VIDPN_MGR>'};
  *((_QWORD *)this + 12) = &DMMVIDEOPRESENTTARGETSET::`vftable'{for `SignedWithClassSignature<DMMVIDEOPRESENTTARGETSET>'};
  AggregatedBy<VIDPN_MGR>::SetAggregator((__int64)v4, (__int64)a2);
  if ( !(**v2)(v2) )
    *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = *((int *)this + 4);
  return this;
}
