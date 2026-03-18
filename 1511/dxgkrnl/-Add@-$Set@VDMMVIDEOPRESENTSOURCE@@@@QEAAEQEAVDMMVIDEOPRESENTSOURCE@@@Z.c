/*
 * XREFs of ?Add@?$Set@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C000E5AC
 * Callers:
 *     ?AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z @ 0x1C00DC358 (-AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV-$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z.c)
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEBVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C000E634 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEBVDMMVIDEOPRESENTSOURCE.c)
 */

char __fastcall Set<DMMVIDEOPRESENTSOURCE>::Add(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  _QWORD *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r9
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax

  v2 = a1 + 8;
  v4 = (_QWORD *)(a1 + 24);
  if ( (_QWORD *)*v4 != v4 && (v5 = *v4 - 8LL) != 0 )
  {
    while ( v5 != a2 )
    {
      v12 = *(_QWORD *)(v5 + 8);
      if ( v12 == a1 + 24 )
        v5 = 0LL;
      else
        v5 = v12 - 8;
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
      v13 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v13);
    }
    else
    {
      v9 = (_QWORD *)(v6 + 8);
      v10 = *(_QWORD **)(v8 + 24);
      *v9 = v8 + 16;
      v9[1] = v10;
      if ( *v10 != v8 + 16 )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v8 + 24) = v9;
      ++*(_QWORD *)(v8 + 32);
    }
    return 1;
  }
}
