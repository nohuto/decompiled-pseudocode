/*
 * XREFs of ??0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C0009760
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0091918 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     ?_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAJXZ @ 0x1C0009DB4 (-_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAJXZ.c)
 *     ?reset@?$auto_ptr@V?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@@@QEAAXPEAV?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@@Z @ 0x1C0009EE0 (-reset@-$auto_ptr@V-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@@@QEAAXPEAV-$DoublyLinkedList@VD.c)
 *     ??0?$IndexedSetElement@I@@QEAA@I@Z @ 0x1C0009F74 (--0-$IndexedSetElement@I@@QEAA@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

DMMVIDPNSOURCE *__fastcall DMMVIDPNSOURCE::DMMVIDPNSOURCE(
        DMMVIDPNSOURCE *this,
        struct DMMVIDPNSOURCESET *const a2,
        struct DMMVIDEOPRESENTSOURCE *const a3)
{
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  _DWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax

  IndexedSetElement<unsigned int>::IndexedSetElement<unsigned int>(this, *((unsigned int *)a3 + 6), a3);
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 14) = 1833173000;
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)this = &DMMVIDPNSOURCE::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNSOURCE::`vftable'{for `ContainedBy<DMMVIDPNSOURCESET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNSOURCE::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCE>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 10) = &DMMVIDPNSOURCE::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 12) = a3;
  v7 = (_QWORD *)((char *)this + 112);
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `SetElement'};
  *((_QWORD *)this + 19) = &DMM::AutoBuffer<unsigned int>::`vftable'{for `NonReferenceCounted'};
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
      v17 = WdLogNewEntry5_WdAssertion(v6);
      WdLogEvent5_WdAssertion(v17);
    }
    *((_QWORD *)this + 5) = a2;
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v16 + 24) = (char *)this + 32;
    *(_QWORD *)(v16 + 32) = *((_QWORD *)this + 5);
    WdLogEvent5_WdError(v16);
  }
  v8 = operator new[](0x30uLL, 0x4E506456u, PagedPool);
  if ( v8 )
  {
    v8[2] = 0;
    *(_QWORD *)v8 = &DoublyLinkedList<DMMVIDPNSOURCEMODESET>::`vftable';
    *((_QWORD *)v8 + 4) = 0LL;
    *((_QWORD *)v8 + 3) = v8 + 4;
    *((_QWORD *)v8 + 2) = v8 + 4;
    v8[10] = 2;
  }
  else
  {
    v8 = 0LL;
  }
  auto_ptr<DoublyLinkedList<DMMVIDPNSOURCEMODESET>>::reset((char *)this + 112, v8);
  if ( *v7 )
  {
    if ( (**(unsigned __int8 (__fastcall ***)(_QWORD))*v7)(*v7) )
    {
      v12 = DMMVIDPNSOURCE::_SetEmptyCofuncModeSet(this);
      v14 = v12;
      if ( v12 < 0 )
      {
        v20 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v20 + 24) = this;
        *(_QWORD *)(v20 + 32) = v14;
        WdLogEvent5_WdError(v20);
        *((_DWORD *)this + 18) = v14;
      }
      else
      {
        *((_DWORD *)this + 22) = 2;
      }
    }
    else
    {
      v19 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v19 + 24) = this;
      *(_QWORD *)(v19 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v19);
      *((_DWORD *)this + 18) = *(_DWORD *)(*v7 + 8LL);
    }
  }
  else
  {
    v18 = WdLogNewEntry5_WdLowResource(0LL, v9, v10, v11);
    *(_QWORD *)(v18 + 24) = this;
    *(_QWORD *)(v18 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdLowResource(v18);
    *((_DWORD *)this + 18) = -1073741801;
  }
  return this;
}
