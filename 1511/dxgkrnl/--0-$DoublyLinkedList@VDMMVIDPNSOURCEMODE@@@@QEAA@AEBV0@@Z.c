/*
 * XREFs of ??0?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@@@QEAA@AEBV0@@Z @ 0x1C00064F0
 * Callers:
 *     ??0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z @ 0x1C0005284 (--0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNSOURCEMODE>::DoublyLinkedList<DMMVIDPNSOURCEMODE>(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // r14
  __int64 v6; // rdi
  char *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  char *v11; // rdx
  _QWORD *v12; // r8
  __int64 v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax

  *(_DWORD *)(a1 + 40) = 1;
  *(_QWORD *)a1 = &DoublyLinkedList<DMMVIDPNSOURCEMODE>::`vftable';
  *(_DWORD *)(a1 + 8) = 0;
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))a2)(a2) || !*(_QWORD *)(a2 + 16) || !*(_QWORD *)(a2 + 24) )
  {
    v18 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v18);
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
      v20 = WdLogNewEntry5_WdAssertion();
      WdLogEvent5_WdAssertion(v20);
    }
    *(_DWORD *)(a1 + 40) = 2;
  }
  else
  {
    while ( 1 )
    {
      v7 = (char *)operator new[](0x70uLL, 0x4E506456u, PagedPool);
      v11 = v7;
      if ( !v7 )
        break;
      *(_QWORD *)v7 = &SetElement::`vftable';
      v12 = v7 + 8;
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
      v13 = *v4 - 8LL;
      if ( *v4 == 8LL )
        goto LABEL_12;
      while ( (char *)v13 != v11 )
      {
        v14 = *(_QWORD **)(v13 + 8);
        if ( v14 != v4 )
        {
          v13 = (__int64)(v14 - 1);
          if ( v13 )
            continue;
        }
        goto LABEL_12;
      }
      if ( !v13 )
      {
LABEL_12:
        v15 = *(_QWORD **)(a1 + 24);
        *v12 = v4;
        v12[1] = v15;
        if ( (_QWORD *)*v15 != v4 )
          __fastfail(3u);
        *v15 = v12;
        *(_QWORD *)(a1 + 24) = v12;
        ++*(_QWORD *)(a1 + 32);
      }
      v16 = *(_QWORD **)(v6 + 8);
      if ( v16 != v5 )
      {
        v6 = (__int64)(v16 - 1);
        if ( v16 != (_QWORD *)8 )
          continue;
      }
      goto LABEL_16;
    }
    v19 = WdLogNewEntry5_WdLowResource(v8, 0LL, v9, v10);
    WdLogEvent5_WdLowResource(v19);
    *(_DWORD *)(a1 + 8) = -1073741801;
  }
  return a1;
}
