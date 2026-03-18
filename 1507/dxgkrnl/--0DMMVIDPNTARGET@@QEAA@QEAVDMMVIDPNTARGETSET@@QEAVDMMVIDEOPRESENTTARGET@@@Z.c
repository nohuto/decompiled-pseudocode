/*
 * XREFs of ??0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C00036E4
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0088DFC (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     ?_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAJXZ @ 0x1C0003CDC (-_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

DMMVIDPNTARGET *__fastcall DMMVIDPNTARGET::DMMVIDPNTARGET(
        DMMVIDPNTARGET *this,
        struct DMMVIDPNTARGETSET *const a2,
        struct DMMVIDEOPRESENTTARGET *const a3)
{
  int v3; // eax
  char *v7; // rax
  unsigned __int8 (__fastcall ***v8)(_QWORD); // rdi
  unsigned __int8 (__fastcall ***v9)(_QWORD); // rcx
  int v10; // eax
  __int64 v11; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax

  v3 = *((_DWORD *)a3 + 6);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &SetElement::`vftable';
  *((_DWORD *)this + 6) = v3;
  if ( v3 == -1 )
  {
    v13 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v13);
  }
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *((_QWORD *)this + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_DWORD *)this + 14) = 1833173001;
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)this = &DMMVIDPNTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNTARGET::`vftable'{for `ContainedBy<DMMVIDPNTARGETSET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 10) = &DMMVIDPNTARGET::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 12) = a3;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 22) = 1;
  if ( a2 )
  {
    if ( *((_QWORD *)this + 5) )
    {
      v15 = WdLogNewEntry5_WdAssertion();
      WdLogEvent5_WdAssertion(v15);
    }
    *((_QWORD *)this + 5) = a2;
  }
  else
  {
    v14 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v14 + 24) = (char *)this + 32;
    *(_QWORD *)(v14 + 32) = *((_QWORD *)this + 5);
    WdLogEvent5_WdError(v14);
  }
  v7 = (char *)operator new[](0x30uLL, 0x4E506456u, PagedPool);
  v8 = (unsigned __int8 (__fastcall ***)(_QWORD))v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 2) = 0;
    *((_QWORD *)v7 + 4) = 0LL;
    *(_QWORD *)v7 = &DoublyLinkedList<DMMVIDPNSOURCEMODESET>::`vftable';
    *((_QWORD *)v7 + 3) = v7 + 16;
    *((_QWORD *)v7 + 2) = v7 + 16;
    *((_DWORD *)v7 + 10) = 2;
  }
  else
  {
    v8 = 0LL;
  }
  v9 = (unsigned __int8 (__fastcall ***)(_QWORD))*((_QWORD *)this + 15);
  if ( v8 != v9 && v9 )
    ((void (__fastcall *)(unsigned __int8 (__fastcall ***)(_QWORD), __int64))(*v9)[2])(v9, 1LL);
  *((_QWORD *)this + 15) = v8;
  if ( v8 )
  {
    if ( (**v8)(v8) )
    {
      v10 = DMMVIDPNTARGET::_SetEmptyCofuncModeSet(this);
      v11 = v10;
      if ( v10 < 0 )
      {
        v18 = WdLogNewEntry5_WdError();
        *(_QWORD *)(v18 + 24) = this;
        *(_QWORD *)(v18 + 32) = v11;
        WdLogEvent5_WdError(v18);
        *((_DWORD *)this + 18) = v11;
      }
      else
      {
        *((_DWORD *)this + 22) = 2;
      }
    }
    else
    {
      v17 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v17 + 24) = this;
      *(_QWORD *)(v17 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v17);
      *((_DWORD *)this + 18) = *(_DWORD *)(*((_QWORD *)this + 15) + 8LL);
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v16 + 24) = this;
    *(_QWORD *)(v16 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdLowResource(v16);
    *((_DWORD *)this + 18) = -1073741801;
  }
  return this;
}
