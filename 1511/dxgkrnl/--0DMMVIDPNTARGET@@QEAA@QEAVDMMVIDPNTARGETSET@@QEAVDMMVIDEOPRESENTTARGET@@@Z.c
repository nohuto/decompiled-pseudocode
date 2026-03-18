/*
 * XREFs of ??0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0005B78
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0091918 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     ?_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAJXZ @ 0x1C0006404 (-_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

DMMVIDPNTARGET *__fastcall DMMVIDPNTARGET::DMMVIDPNTARGET(
        DMMVIDPNTARGET *this,
        struct DMMVIDPNTARGETSET *const a2,
        struct DMMVIDEOPRESENTTARGET *const a3)
{
  int v3; // eax
  char *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int8 (__fastcall ***v11)(_QWORD); // rdi
  unsigned __int8 (__fastcall ***v12)(_QWORD); // rcx
  int v13; // eax
  __int64 v14; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax

  v3 = *((_DWORD *)a3 + 6);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &SetElement::`vftable';
  *((_DWORD *)this + 6) = v3;
  if ( v3 == -1 )
  {
    v16 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v16);
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
      v18 = WdLogNewEntry5_WdAssertion();
      WdLogEvent5_WdAssertion(v18);
    }
    *((_QWORD *)this + 5) = a2;
  }
  else
  {
    v17 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v17 + 24) = (char *)this + 32;
    *(_QWORD *)(v17 + 32) = *((_QWORD *)this + 5);
    WdLogEvent5_WdError(v17);
  }
  v7 = (char *)operator new[](0x30uLL, 0x4E506456u, PagedPool);
  v11 = (unsigned __int8 (__fastcall ***)(_QWORD))v7;
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
    v11 = 0LL;
  }
  v12 = (unsigned __int8 (__fastcall ***)(_QWORD))*((_QWORD *)this + 15);
  if ( v11 != v12 && v12 )
    ((void (__fastcall *)(unsigned __int8 (__fastcall ***)(_QWORD), __int64))(*v12)[2])(v12, 1LL);
  *((_QWORD *)this + 15) = v11;
  if ( v11 )
  {
    if ( (**v11)(v11) )
    {
      v13 = DMMVIDPNTARGET::_SetEmptyCofuncModeSet(this);
      v14 = v13;
      if ( v13 < 0 )
      {
        v21 = WdLogNewEntry5_WdError();
        *(_QWORD *)(v21 + 24) = this;
        *(_QWORD *)(v21 + 32) = v14;
        WdLogEvent5_WdError(v21);
        *((_DWORD *)this + 18) = v14;
      }
      else
      {
        *((_DWORD *)this + 22) = 2;
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v20 + 24) = this;
      *(_QWORD *)(v20 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v20);
      *((_DWORD *)this + 18) = *(_DWORD *)(*((_QWORD *)this + 15) + 8LL);
    }
  }
  else
  {
    v19 = WdLogNewEntry5_WdLowResource(0LL, v8, v9, v10);
    *(_QWORD *)(v19 + 24) = this;
    *(_QWORD *)(v19 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdLowResource(v19);
    *((_DWORD *)this + 18) = -1073741801;
  }
  return this;
}
