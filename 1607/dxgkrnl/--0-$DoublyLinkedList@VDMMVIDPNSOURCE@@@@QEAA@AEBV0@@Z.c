/*
 * XREFs of ??0?$DoublyLinkedList@VDMMVIDPNSOURCE@@@@QEAA@AEBV0@@Z @ 0x1C00021B0
 * Callers:
 *     ??0DMMVIDPNSOURCESET@@QEAA@AEBV0@@Z @ 0x1C0001EC8 (--0DMMVIDPNSOURCESET@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ?InsertTail@?$DoublyLinkedList@VDMMVIDPNSOURCE@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z @ 0x1C0002148 (-InsertTail@-$DoublyLinkedList@VDMMVIDPNSOURCE@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z.c)
 *     ??0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z @ 0x1C00026F8 (--0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNSOURCE>::DoublyLinkedList<DMMVIDPNSOURCE>(__int64 a1, __int64 a2)
{
  _QWORD *v4; // r14
  const struct DMMVIDPNSOURCE *v5; // rdi
  DMMVIDPNSOURCE *v6; // rax
  _QWORD *v7; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &DoublyLinkedList<DMMVIDPNSOURCE>::`vftable';
  *(_DWORD *)(a1 + 40) = 1;
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))a2)(a2) || !*(_QWORD *)(a2 + 16) || !*(_QWORD *)(a2 + 24) )
  {
    v9 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v9);
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
      v11 = WdLogNewEntry5_WdAssertion();
      WdLogEvent5_WdAssertion(v11);
    }
    *(_DWORD *)(a1 + 40) = 2;
  }
  else
  {
    while ( 1 )
    {
      v6 = (DMMVIDPNSOURCE *)operator new(0xB8uLL, 0x4E506456u, PagedPool);
      if ( v6 )
        v6 = DMMVIDPNSOURCE::DMMVIDPNSOURCE(v6, v5);
      if ( !v6 )
        break;
      DoublyLinkedList<DMMVIDPNSOURCE>::InsertTail((_QWORD *)a1, (__int64)v6);
      v7 = (_QWORD *)*((_QWORD *)v5 + 1);
      if ( v7 == v4 )
        v5 = 0LL;
      else
        v5 = (const struct DMMVIDPNSOURCE *)(v7 - 1);
      if ( !v5 )
        goto LABEL_12;
    }
    v10 = WdLogNewEntry5_WdLowResource();
    WdLogEvent5_WdLowResource(v10);
    *(_DWORD *)(a1 + 8) = -1073741801;
  }
  return a1;
}
