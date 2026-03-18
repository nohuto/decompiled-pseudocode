/*
 * XREFs of ?Add@?$Set@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C000D1A4
 * Callers:
 *     ?AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z @ 0x1C00C48B8 (-AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV-$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z.c)
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEBVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C000D22C (-ContainsByReference@-$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEBVDMMVIDEOPRESENTSOURCE.c)
 */

char __fastcall Set<DMMVIDEOPRESENTSOURCE>::Add(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  _QWORD *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r9
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax

  v2 = a1 + 8;
  v4 = (_QWORD *)(a1 + 24);
  if ( (_QWORD *)*v4 != v4 && (v5 = *v4 - 8LL) != 0 )
  {
    while ( v5 != a2 )
    {
      v11 = *(_QWORD *)(v5 + 8);
      if ( v11 == a1 + 24 )
        v5 = 0LL;
      else
        v5 = v11 - 8;
      if ( !v5 )
        goto LABEL_3;
    }
    return 0;
  }
  else
  {
LABEL_3:
    if ( (unsigned __int8)DoublyLinkedList<DMMVIDEOPRESENTSOURCE>::ContainsByReference(v2, a2, a1) )
    {
      v12 = WdLogNewEntry5_WdAssertion();
      WdLogEvent5_WdAssertion(v12);
    }
    else
    {
      v8 = (_QWORD *)(v6 + 8);
      v9 = *(_QWORD **)(v7 + 24);
      *v8 = v7 + 16;
      v8[1] = v9;
      if ( *v9 != v7 + 16 )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v7 + 24) = v8;
      ++*(_QWORD *)(v7 + 32);
    }
    return 1;
  }
}
