/*
 * XREFs of ??_EDMMVIDPNTARGET@@UEAAPEAXI@Z @ 0x1C0005D10
 * Callers:
 *     ??_EDMMVIDPNTARGET@@WCA@EAAPEAXI@Z @ 0x1C0012850 (--_EDMMVIDPNTARGET@@WCA@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNTARGET@@WDA@EAAPEAXI@Z @ 0x1C0012860 (--_EDMMVIDPNTARGET@@WDA@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNTARGET@@WFA@EAAPEAXI@Z @ 0x1C0012870 (--_EDMMVIDPNTARGET@@WFA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 */

DMMVIDPNTARGET *__fastcall DMMVIDPNTARGET::`vector deleting destructor'(DMMVIDPNTARGET *this, char a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v9; // rax
  __int64 v10; // rax

  *(_QWORD *)this = &DMMVIDPNTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNTARGET::`vftable'{for `ContainedBy<DMMVIDPNTARGETSET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 10) = &DMMVIDPNTARGET::`vftable'{for `NonReferenceCounted'};
  v4 = *((_QWORD *)this + 13);
  if ( v4 )
  {
    if ( (unsigned __int64)*(int *)(v4 + 96) > 1 )
    {
      v9 = WdLogNewEntry5_WdError();
      *(_QWORD *)(v9 + 24) = *((_QWORD *)this + 13);
      *(_QWORD *)(v9 + 32) = this;
      WdLogEvent5_WdError(v9);
    }
    *(_QWORD *)(*((_QWORD *)this + 13) + 112LL) = 0LL;
  }
  if ( *((_QWORD *)this + 14) )
  {
    v10 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v10 + 24) = *((unsigned int *)this + 6);
    WdLogEvent5_WdError(v10);
  }
  v5 = *((_QWORD *)this + 15);
  if ( v5 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 16LL))(v5, 1LL);
  v6 = *((_QWORD *)this + 14);
  if ( v6 )
    ReferenceCounted::Release((ReferenceCounted *)(v6 + 88));
  *((_QWORD *)this + 14) = 0LL;
  v7 = *((_QWORD *)this + 13);
  if ( v7 )
    ReferenceCounted::Release((ReferenceCounted *)(v7 + 88));
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 10) = &SetElement::`vftable';
  *((_DWORD *)this + 14) |= 0x6D640000u;
  *((_QWORD *)this + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *(_QWORD *)this = &SetElement::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
