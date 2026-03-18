/*
 * XREFs of ?_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAJXZ @ 0x1C0003CDC
 * Callers:
 *     ??0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C00036E4 (--0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C008A0DC (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGET::_SetEmptyCofuncModeSet(DMMVIDPNTARGET *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  v2 = operator new[](0x98uLL, 0x4E506456u, PagedPool);
  v3 = v2;
  if ( v2 )
  {
    v2[1] = 0LL;
    v2[2] = 0LL;
    *v2 = &SetElement::`vftable';
    *((_DWORD *)v2 + 10) = 0;
    v2[8] = 0LL;
    v2[4] = &DoublyLinkedList<DMMVIDEOPRESENTSOURCE>::`vftable';
    v2[7] = v2 + 6;
    v2[6] = v2 + 6;
    *((_DWORD *)v2 + 18) = 2;
    *((_DWORD *)v2 + 20) = 0;
    v2[3] = &IndexedSet<DMMVIDPNTARGETMODE>::`vftable';
    v2[11] = &ReferenceCounted::`vftable';
    *((_DWORD *)v2 + 24) = 1;
    *((_BYTE *)v2 + 136) = 1;
    v2[14] = 0LL;
    *((_DWORD *)v2 + 32) = 1833173005;
    v2[18] = 0LL;
    *v2 = &DMMVIDPNTARGETMODESET::`vftable'{for `SetElement'};
    v2[3] = &DMMVIDPNTARGETMODESET::`vftable'{for `IndexedSet<DMMVIDPNTARGETMODE>'};
    v2[11] = &DMMVIDPNTARGETMODESET::`vftable'{for `ReferenceCounted'};
    v2[13] = &DMMVIDPNTARGETMODESET::`vftable'{for `AggregatedBy<DMMVIDPNTARGET>'};
    v2[15] = &DMMVIDPNTARGETMODESET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODESET>'};
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))v2[4])(v2 + 4) )
    {
      if ( this && v3[14] )
      {
        v6 = WdLogNewEntry5_WdAssertion();
        WdLogEvent5_WdAssertion(v6);
      }
      v3[14] = this;
    }
    else
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = *((int *)v3 + 10);
    }
  }
  else
  {
    v3 = 0LL;
  }
  v4 = (_QWORD *)*((_QWORD *)this + 13);
  if ( v4 && v3 != v4 )
    ReferenceCounted::Release((ReferenceCounted *)(v4 + 11));
  *((_QWORD *)this + 13) = v3;
  if ( v3 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))v3[3])(v3 + 3) )
    {
      return 0LL;
    }
    else
    {
      v8 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v8 + 24) = this;
      *(_QWORD *)(v8 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v8);
      return *(unsigned int *)(*((_QWORD *)this + 13) + 40LL);
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdLowResource(0LL);
    WdLogEvent5_WdLowResource(v7);
    return 3221225495LL;
  }
}
