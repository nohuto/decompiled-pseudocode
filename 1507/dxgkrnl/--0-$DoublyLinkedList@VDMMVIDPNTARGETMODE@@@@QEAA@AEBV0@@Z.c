/*
 * XREFs of ??0?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAA@AEBV0@@Z @ 0x1C0004444
 * Callers:
 *     ??0DMMVIDPNTARGETMODESET@@IEAA@AEBV0@@Z @ 0x1C000331C (--0DMMVIDPNTARGETMODESET@@IEAA@AEBV0@@Z.c)
 * Callees:
 *     ?InsertTail@?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z @ 0x1C00045DC (-InsertTail@-$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNTARGETMODE>::DoublyLinkedList<DMMVIDPNTARGETMODE>(__int64 a1, __int64 a2)
{
  _QWORD *v4; // r14
  __int64 v6; // rdi
  char *v7; // rax
  __int64 v8; // rcx
  char *v9; // rdx
  _QWORD *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &DoublyLinkedList<DMMVIDEOPRESENTSOURCE>::`vftable';
  *(_DWORD *)(a1 + 40) = 1;
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))a2)(a2) || !*(_QWORD *)(a2 + 16) || !*(_QWORD *)(a2 + 24) )
  {
    v11 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v11);
  }
  *(_QWORD *)(a1 + 24) = a1 + 16;
  v4 = (_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 16) = a1 + 16;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( (_QWORD *)*v4 == v4 || (v6 = *v4 - 8LL, *v4 == 8LL) )
  {
LABEL_5:
    if ( *(_QWORD *)(a1 + 32) != *(_QWORD *)(a2 + 32) )
    {
      v13 = WdLogNewEntry5_WdAssertion();
      WdLogEvent5_WdAssertion(v13);
    }
    *(_DWORD *)(a1 + 40) = 2;
  }
  else
  {
    while ( 1 )
    {
      v7 = (char *)operator new[](0x88uLL, 0x4E506456u, PagedPool);
      v9 = v7;
      if ( v7 )
      {
        *((_QWORD *)v7 + 1) = 0LL;
        *((_QWORD *)v7 + 2) = 0LL;
        *(_QWORD *)v7 = &SetElement::`vftable';
        *((_DWORD *)v7 + 6) = *(_DWORD *)(v6 + 24);
        *(_OWORD *)(v7 + 72) = *(_OWORD *)(v6 + 72);
        *(_OWORD *)(v7 + 88) = *(_OWORD *)(v6 + 88);
        *(_OWORD *)(v7 + 104) = *(_OWORD *)(v6 + 104);
        *((_QWORD *)v7 + 15) = *(_QWORD *)(v6 + 120);
        *((_QWORD *)v7 + 5) = 0LL;
        *((_QWORD *)v7 + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
        *((_QWORD *)v7 + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
        *((_DWORD *)v7 + 14) = *(_DWORD *)(v6 + 56);
        *(_QWORD *)v7 = &DMMVIDPNTARGETMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
        *((_QWORD *)v7 + 4) = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
        *((_QWORD *)v7 + 6) = &DMMVIDPNTARGETMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODE>'};
        *((_QWORD *)v7 + 8) = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
        *((_DWORD *)v7 + 32) = *(_DWORD *)(v6 + 128);
      }
      else
      {
        v9 = 0LL;
      }
      if ( !v9 )
        break;
      DoublyLinkedList<DMMVIDPNTARGETMODE>::InsertTail(a1);
      v10 = *(_QWORD **)(v6 + 8);
      if ( v10 == v4 )
        v6 = 0LL;
      else
        v6 = (__int64)(v10 - 1);
      if ( !v6 )
        goto LABEL_5;
    }
    v12 = WdLogNewEntry5_WdLowResource(v8);
    WdLogEvent5_WdLowResource(v12);
    *(_DWORD *)(a1 + 8) = -1073741801;
  }
  return a1;
}
