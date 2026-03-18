/*
 * XREFs of ??0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C0002BC8
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C007DCFC (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     ??0?$IndexedSetElement@I@@QEAA@I@Z @ 0x1C0002044 (--0-$IndexedSetElement@I@@QEAA@I@Z.c)
 *     ?reset@?$auto_ptr@V?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@@@QEAAXPEAV?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@@Z @ 0x1C000231C (-reset@-$auto_ptr@V-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@@@QEAAXPEAV-$DoublyLinkedList@VD.c)
 *     ?_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAJXZ @ 0x1C0002A90 (-_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

DMMVIDPNSOURCE *__fastcall DMMVIDPNSOURCE::DMMVIDPNSOURCE(
        DMMVIDPNSOURCE *this,
        struct DMMVIDPNSOURCESET *const a2,
        struct DMMVIDEOPRESENTSOURCE *const a3)
{
  _QWORD *v6; // rbx
  _DWORD *v7; // rax
  int v8; // eax
  __int64 v9; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  IndexedSetElement<unsigned int>::IndexedSetElement<unsigned int>((__int64)this, *((_DWORD *)a3 + 6));
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 14) = 1833173000;
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)this = &DMMVIDPNSOURCE::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNSOURCE::`vftable'{for `ContainedBy<DMMVIDPNSOURCESET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNSOURCE::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCE>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 10) = &DMMVIDPNSOURCE::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 12) = a3;
  v6 = (_QWORD *)((char *)this + 112);
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `SetElement'};
  *((_QWORD *)this + 19) = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 44) = 3;
  *((_DWORD *)this + 22) = 1;
  if ( a2 )
  {
    if ( *((_QWORD *)this + 5) )
    {
      v12 = WdLogNewEntry5_WdAssertion();
      WdLogEvent5_WdAssertion(v12);
    }
    *((_QWORD *)this + 5) = a2;
  }
  else
  {
    v11 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v11 + 24) = (char *)this + 32;
    *(_QWORD *)(v11 + 32) = *((_QWORD *)this + 5);
    WdLogEvent5_WdError(v11);
  }
  v7 = operator new(0x30uLL, 0x4E506456u, PagedPool);
  if ( v7 )
  {
    v7[2] = 0;
    *(_QWORD *)v7 = &DoublyLinkedList<DMMVIDPNSOURCEMODESET>::`vftable';
    *((_QWORD *)v7 + 4) = 0LL;
    *((_QWORD *)v7 + 3) = v7 + 4;
    *((_QWORD *)v7 + 2) = v7 + 4;
    v7[10] = 2;
  }
  else
  {
    v7 = 0LL;
  }
  auto_ptr<DoublyLinkedList<DMMVIDPNSOURCEMODESET>>::reset((__int64 *)this + 14, (__int64)v7);
  if ( *v6 )
  {
    if ( (**(unsigned __int8 (__fastcall ***)(_QWORD))*v6)(*v6) )
    {
      v8 = DMMVIDPNSOURCE::_SetEmptyCofuncModeSet(this);
      v9 = v8;
      if ( v8 < 0 )
      {
        v15 = WdLogNewEntry5_WdError();
        *(_QWORD *)(v15 + 24) = this;
        *(_QWORD *)(v15 + 32) = v9;
        WdLogEvent5_WdError(v15);
        *((_DWORD *)this + 18) = v9;
      }
      else
      {
        *((_DWORD *)this + 22) = 2;
      }
    }
    else
    {
      v14 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v14 + 24) = this;
      *(_QWORD *)(v14 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v14);
      *((_DWORD *)this + 18) = *(_DWORD *)(*v6 + 8LL);
    }
  }
  else
  {
    v13 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v13 + 24) = this;
    *(_QWORD *)(v13 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdLowResource(v13);
    *((_DWORD *)this + 18) = -1073741801;
  }
  return this;
}
