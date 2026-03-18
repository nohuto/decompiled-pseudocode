/*
 * XREFs of ??0?$DoublyLinkedList@VDMMVIDPNSOURCE@@@@QEAA@AEBV0@@Z @ 0x1C00089A8
 * Callers:
 *     ??0DMMVIDPNSOURCESET@@QEAA@AEBV0@@Z @ 0x1C00084C8 (--0DMMVIDPNSOURCESET@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ?InsertTail@?$DoublyLinkedList@VDMMVIDPNSOURCE@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z @ 0x1C0008940 (-InsertTail@-$DoublyLinkedList@VDMMVIDPNSOURCE@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z.c)
 *     ??0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z @ 0x1C0009A18 (--0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNSOURCE>::DoublyLinkedList<DMMVIDPNSOURCE>(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // r14
  const struct DMMVIDPNSOURCE *v6; // rdi
  DMMVIDPNSOURCE *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &DoublyLinkedList<DMMVIDPNSOURCE>::`vftable';
  *(_DWORD *)(a1 + 40) = 1;
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))a2)(a2) || !*(_QWORD *)(a2 + 16) || !*(_QWORD *)(a2 + 24) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v14);
  }
  *(_QWORD *)(a1 + 24) = a1 + 16;
  v5 = (_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 16) = a1 + 16;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( (_QWORD *)*v5 == v5 || (v6 = (const struct DMMVIDPNSOURCE *)(*v5 - 8LL), *v5 == 8LL) )
  {
LABEL_12:
    if ( *(_QWORD *)(a1 + 32) != *(_QWORD *)(a2 + 32) )
    {
      v16 = WdLogNewEntry5_WdAssertion(v4);
      WdLogEvent5_WdAssertion(v16);
    }
    *(_DWORD *)(a1 + 40) = 2;
  }
  else
  {
    while ( 1 )
    {
      v7 = (DMMVIDPNSOURCE *)operator new[](0xB8uLL, 0x4E506456u, PagedPool);
      if ( v7 )
        v7 = DMMVIDPNSOURCE::DMMVIDPNSOURCE(v7, v6);
      if ( !v7 )
        break;
      DoublyLinkedList<DMMVIDPNSOURCE>::InsertTail(a1, (__int64)v7);
      v12 = (_QWORD *)*((_QWORD *)v6 + 1);
      if ( v12 == v5 )
        v6 = 0LL;
      else
        v6 = (const struct DMMVIDPNSOURCE *)(v12 - 1);
      if ( !v6 )
        goto LABEL_12;
    }
    v15 = WdLogNewEntry5_WdLowResource(v9, v8, v10, v11);
    WdLogEvent5_WdLowResource(v15);
    *(_DWORD *)(a1 + 8) = -1073741801;
  }
  return a1;
}
