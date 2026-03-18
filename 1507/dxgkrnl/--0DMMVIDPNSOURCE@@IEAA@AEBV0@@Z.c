/*
 * XREFs of ??0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z @ 0x1C0006C28
 * Callers:
 *     ??0?$DoublyLinkedList@VDMMVIDPNSOURCE@@@@QEAA@AEBV0@@Z @ 0x1C0007A0C (--0-$DoublyLinkedList@VDMMVIDPNSOURCE@@@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ??0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z @ 0x1C00070D4 (--0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0007780 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_ptr@V?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@@@QEAAXPEAV?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@@Z @ 0x1C0007844 (-reset@-$auto_ptr@V-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@@@QEAAXPEAV-$DoublyLinkedList@VD.c)
 *     ??0?$IndexedSetElement@I@@QEAA@I@Z @ 0x1C0007D28 (--0-$IndexedSetElement@I@@QEAA@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

DMMVIDPNSOURCE *__fastcall DMMVIDPNSOURCE::DMMVIDPNSOURCE(DMMVIDPNSOURCE *this, const struct DMMVIDPNSOURCE *a2)
{
  char *v4; // rdi
  char *v5; // rsi
  _DWORD *v6; // rax
  unsigned __int8 (__fastcall ***v7)(_QWORD); // rcx
  DMMVIDPNSOURCEMODESET *v8; // rax
  DMMVIDPNSOURCEMODESET *v9; // rax
  __int64 v10; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rax

  IndexedSetElement<unsigned int>::IndexedSetElement<unsigned int>(this, *((unsigned int *)a2 + 6));
  *((_QWORD *)this + 5) = 0LL;
  v4 = (char *)this + 104;
  *((_DWORD *)this + 14) = 1833173000;
  v5 = (char *)this + 112;
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)this = &DMMVIDPNSOURCE::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNSOURCE::`vftable'{for `ContainedBy<DMMVIDPNSOURCESET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNSOURCE::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCE>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 10) = &DMMVIDPNSOURCE::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 12) = *((_QWORD *)a2 + 12);
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
  v6 = operator new[](0x30uLL, 0x4E506456u, PagedPool);
  if ( v6 )
  {
    v6[2] = 0;
    *(_QWORD *)v6 = &DoublyLinkedList<DMMVIDPNSOURCEMODESET>::`vftable';
    *((_QWORD *)v6 + 4) = 0LL;
    *((_QWORD *)v6 + 3) = v6 + 4;
    *((_QWORD *)v6 + 2) = v6 + 4;
    v6[10] = 2;
  }
  else
  {
    v6 = 0LL;
  }
  auto_ptr<DoublyLinkedList<DMMVIDPNSOURCEMODESET>>::reset((char *)this + 112, v6);
  v7 = *(unsigned __int8 (__fastcall ****)(_QWORD))v5;
  if ( !*(_QWORD *)v5 )
    goto LABEL_17;
  if ( !(**v7)(v7) )
  {
    v13 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v13 + 24) = this;
    *(_QWORD *)(v13 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdDmmEvent(v13);
    v14 = *(_DWORD *)(*(_QWORD *)v5 + 8LL);
    goto LABEL_20;
  }
  if ( *((_QWORD *)a2 + 13) )
  {
    v8 = (DMMVIDPNSOURCEMODESET *)operator new[](0x98uLL, 0x4E506456u, PagedPool);
    if ( v8 )
      v9 = DMMVIDPNSOURCEMODESET::DMMVIDPNSOURCEMODESET(v8, *((const struct DMMVIDPNSOURCEMODESET **)a2 + 13));
    else
      v9 = 0LL;
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(v4, v9);
    v7 = *(unsigned __int8 (__fastcall ****)(_QWORD))v4;
    if ( *(_QWORD *)v4 )
    {
      if ( (*v7[3])(v7 + 3) )
      {
        v10 = *(_QWORD *)v4;
        if ( *(_QWORD *)(v10 + 112) )
        {
          v16 = WdLogNewEntry5_WdAssertion();
          WdLogEvent5_WdAssertion(v16);
        }
        *(_QWORD *)(v10 + 112) = this;
        goto LABEL_13;
      }
      v15 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v15 + 24) = this;
      *(_QWORD *)(v15 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v15);
      v14 = *(_DWORD *)(*(_QWORD *)v4 + 40LL);
LABEL_20:
      *((_DWORD *)this + 18) = v14;
      return this;
    }
LABEL_17:
    v12 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v12 + 24) = this;
    *(_QWORD *)(v12 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdLowResource(v12);
    *((_DWORD *)this + 18) = -1073741801;
    return this;
  }
LABEL_13:
  *((_DWORD *)this + 22) = 2;
  return this;
}
