/*
 * XREFs of ??0?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@@@QEAA@AEBV0@@Z @ 0x1C0003090
 * Callers:
 *     ??0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z @ 0x1C00070D4 (--0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNSOURCEMODE>::DoublyLinkedList<DMMVIDPNSOURCEMODE>(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // r14
  __int64 v6; // rdi
  char *v7; // rax
  char *v8; // rdx
  _QWORD *v9; // r8
  __int64 v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax

  *(_DWORD *)(a1 + 40) = 1;
  *(_QWORD *)a1 = &DoublyLinkedList<DMMVIDPNSOURCEMODE>::`vftable';
  *(_DWORD *)(a1 + 8) = 0;
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))a2)(a2) || !*(_QWORD *)(a2 + 16) || !*(_QWORD *)(a2 + 24) )
  {
    v15 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v15);
  }
  v4 = (_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 24) = a1 + 16;
  v5 = (_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 16) = a1 + 16;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( (_QWORD *)*v5 == v5 || (v6 = *v5 - 8LL, *v5 == 8LL) )
  {
LABEL_16:
    if ( *(_QWORD *)(a1 + 32) != *(_QWORD *)(a2 + 32) )
    {
      v17 = WdLogNewEntry5_WdAssertion();
      WdLogEvent5_WdAssertion(v17);
    }
    *(_DWORD *)(a1 + 40) = 2;
  }
  else
  {
    while ( 1 )
    {
      v7 = (char *)operator new[](0x70uLL, 0x4E506456u, PagedPool);
      v8 = v7;
      if ( !v7 )
        break;
      *(_QWORD *)v7 = &SetElement::`vftable';
      v9 = v7 + 8;
      *((_QWORD *)v7 + 2) = 0LL;
      *((_QWORD *)v7 + 1) = 0LL;
      *((_DWORD *)v7 + 6) = *(_DWORD *)(v6 + 24);
      *((_QWORD *)v7 + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
      *((_QWORD *)v7 + 5) = 0LL;
      *((_QWORD *)v7 + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
      *((_DWORD *)v7 + 14) = *(_DWORD *)(v6 + 56);
      *(_QWORD *)v7 = &DMMVIDPNTARGETMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
      *((_QWORD *)v7 + 4) = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
      *((_QWORD *)v7 + 6) = &DMMVIDPNTARGETMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODE>'};
      *((_QWORD *)v7 + 8) = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
      *((_DWORD *)v7 + 18) = *(_DWORD *)(v6 + 72);
      *(_OWORD *)(v7 + 76) = *(_OWORD *)(v6 + 76);
      *(_OWORD *)(v7 + 92) = *(_OWORD *)(v6 + 92);
      if ( (_QWORD *)*v4 == v4 )
        goto LABEL_12;
      v10 = *v4 - 8LL;
      if ( *v4 == 8LL )
        goto LABEL_12;
      while ( (char *)v10 != v8 )
      {
        v11 = *(_QWORD **)(v10 + 8);
        if ( v11 != v4 )
        {
          v10 = (__int64)(v11 - 1);
          if ( v10 )
            continue;
        }
        goto LABEL_12;
      }
      if ( !v10 )
      {
LABEL_12:
        v12 = *(_QWORD **)(a1 + 24);
        *v9 = v4;
        v9[1] = v12;
        if ( (_QWORD *)*v12 != v4 )
          __fastfail(3u);
        *v12 = v9;
        *(_QWORD *)(a1 + 24) = v9;
        ++*(_QWORD *)(a1 + 32);
      }
      v13 = *(_QWORD **)(v6 + 8);
      if ( v13 != v5 )
      {
        v6 = (__int64)(v13 - 1);
        if ( v13 != (_QWORD *)8 )
          continue;
      }
      goto LABEL_16;
    }
    v16 = WdLogNewEntry5_WdLowResource();
    WdLogEvent5_WdLowResource(v16);
    *(_DWORD *)(a1 + 8) = -1073741801;
  }
  return a1;
}
