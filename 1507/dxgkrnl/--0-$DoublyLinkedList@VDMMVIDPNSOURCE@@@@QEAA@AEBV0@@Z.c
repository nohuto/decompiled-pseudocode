/*
 * XREFs of ??0?$DoublyLinkedList@VDMMVIDPNSOURCE@@@@QEAA@AEBV0@@Z @ 0x1C0007A0C
 * Callers:
 *     ??0DMMVIDPNSOURCESET@@QEAA@AEBV0@@Z @ 0x1C0007C98 (--0DMMVIDPNSOURCESET@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ??0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z @ 0x1C0006C28 (--0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z.c)
 *     ?InsertTail@?$DoublyLinkedList@VDMMVIDPNSOURCE@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z @ 0x1C00079A4 (-InsertTail@-$DoublyLinkedList@VDMMVIDPNSOURCE@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNSOURCE>::DoublyLinkedList<DMMVIDPNSOURCE>(__int64 a1, __int64 a2)
{
  _QWORD *v4; // r14
  const struct DMMVIDPNSOURCE *v5; // rdi
  DMMVIDPNSOURCE *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &DoublyLinkedList<DMMVIDPNSOURCE>::`vftable';
  *(_DWORD *)(a1 + 40) = 1;
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))a2)(a2) || !*(_QWORD *)(a2 + 16) || !*(_QWORD *)(a2 + 24) )
  {
    v10 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v10);
  }
  *(_QWORD *)(a1 + 24) = a1 + 16;
  v4 = (_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 16) = a1 + 16;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( (_QWORD *)*v4 == v4 || (v5 = (const struct DMMVIDPNSOURCE *)(*v4 - 8LL), *v4 == 8LL) )
  {
LABEL_12:
    if ( *(_QWORD *)(a1 + 32) != *(_QWORD *)(a2 + 32) )
    {
      v12 = WdLogNewEntry5_WdAssertion();
      WdLogEvent5_WdAssertion(v12);
    }
    *(_DWORD *)(a1 + 40) = 2;
  }
  else
  {
    while ( 1 )
    {
      v6 = (DMMVIDPNSOURCE *)operator new[](0xB8uLL, 0x4E506456u, PagedPool);
      if ( v6 )
        v6 = DMMVIDPNSOURCE::DMMVIDPNSOURCE(v6, v5);
      if ( !v6 )
        break;
      DoublyLinkedList<DMMVIDPNSOURCE>::InsertTail(a1, (__int64)v6);
      v8 = (_QWORD *)*((_QWORD *)v5 + 1);
      if ( v8 == v4 )
        v5 = 0LL;
      else
        v5 = (const struct DMMVIDPNSOURCE *)(v8 - 1);
      if ( !v5 )
        goto LABEL_12;
    }
    v11 = WdLogNewEntry5_WdLowResource(v7);
    WdLogEvent5_WdLowResource(v11);
    *(_DWORD *)(a1 + 8) = -1073741801;
  }
  return a1;
}
