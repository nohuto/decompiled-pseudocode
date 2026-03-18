/*
 * XREFs of ??0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z @ 0x1C0009A18
 * Callers:
 *     ??0?$DoublyLinkedList@VDMMVIDPNSOURCE@@@@QEAA@AEBV0@@Z @ 0x1C00089A8 (--0-$DoublyLinkedList@VDMMVIDPNSOURCE@@@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004FA8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ??0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z @ 0x1C0005284 (--0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z.c)
 *     ?reset@?$auto_ptr@V?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@@@QEAAXPEAV?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@@Z @ 0x1C0009EE0 (-reset@-$auto_ptr@V-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@@@QEAAXPEAV-$DoublyLinkedList@VD.c)
 *     ??0?$IndexedSetElement@I@@QEAA@I@Z @ 0x1C0009F74 (--0-$IndexedSetElement@I@@QEAA@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

DMMVIDPNSOURCE *__fastcall DMMVIDPNSOURCE::DMMVIDPNSOURCE(
        DMMVIDPNSOURCE *this,
        const struct DMMVIDPNSOURCE *a2,
        __int64 a3)
{
  __int64 *v5; // rdi
  char *v6; // rsi
  _DWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int8 (__fastcall ***v11)(_QWORD); // rcx
  DMMVIDPNSOURCEMODESET *v12; // rax
  DMMVIDPNSOURCEMODESET *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rax

  IndexedSetElement<unsigned int>::IndexedSetElement<unsigned int>(this, *((unsigned int *)a2 + 6), a3);
  *((_QWORD *)this + 5) = 0LL;
  v5 = (__int64 *)((char *)this + 104);
  *((_DWORD *)this + 14) = 1833173000;
  v6 = (char *)this + 112;
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
  v7 = operator new[](0x30uLL, 0x4E506456u, PagedPool);
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
  auto_ptr<DoublyLinkedList<DMMVIDPNSOURCEMODESET>>::reset((char *)this + 112, v7);
  v11 = *(unsigned __int8 (__fastcall ****)(_QWORD))v6;
  if ( !*(_QWORD *)v6 )
    goto LABEL_17;
  if ( !(**v11)(v11) )
  {
    v18 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v18 + 24) = this;
    *(_QWORD *)(v18 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdDmmEvent(v18);
    v19 = *(_DWORD *)(*(_QWORD *)v6 + 8LL);
    goto LABEL_20;
  }
  if ( *((_QWORD *)a2 + 13) )
  {
    v12 = (DMMVIDPNSOURCEMODESET *)operator new[](0x98uLL, 0x4E506456u, PagedPool);
    if ( v12 )
      v13 = DMMVIDPNSOURCEMODESET::DMMVIDPNSOURCEMODESET(v12, *((const struct DMMVIDPNSOURCEMODESET **)a2 + 13));
    else
      v13 = 0LL;
    auto_rc<DMMVIDPNTARGETMODESET>::reset(v5, (__int64)v13);
    v11 = (unsigned __int8 (__fastcall ***)(_QWORD))*v5;
    if ( *v5 )
    {
      if ( (*v11[3])(v11 + 3) )
      {
        v15 = *v5;
        if ( *(_QWORD *)(v15 + 112) )
        {
          v21 = WdLogNewEntry5_WdAssertion(v14);
          WdLogEvent5_WdAssertion(v21);
        }
        *(_QWORD *)(v15 + 112) = this;
        goto LABEL_13;
      }
      v20 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v20 + 24) = this;
      *(_QWORD *)(v20 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v20);
      v19 = *(_DWORD *)(*v5 + 40);
LABEL_20:
      *((_DWORD *)this + 18) = v19;
      return this;
    }
LABEL_17:
    v17 = WdLogNewEntry5_WdLowResource(v11, v8, v9, v10);
    *(_QWORD *)(v17 + 24) = this;
    *(_QWORD *)(v17 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdLowResource(v17);
    *((_DWORD *)this + 18) = -1073741801;
    return this;
  }
LABEL_13:
  *((_DWORD *)this + 22) = 2;
  return this;
}
