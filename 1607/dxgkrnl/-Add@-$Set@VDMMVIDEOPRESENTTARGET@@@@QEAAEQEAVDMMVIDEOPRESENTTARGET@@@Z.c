/*
 * XREFs of ?Add@?$Set@VDMMVIDEOPRESENTTARGET@@@@QEAAEQEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C000FCF8
 * Callers:
 *     ?AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJV?$auto_ptr@VDMMVIDEOPRESENTTARGET@@@@@Z @ 0x1C00F5EC8 (-AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJV-$auto_ptr@VDMMVIDEOPRESENTTARGET@@@@@Z.c)
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@@@QEAAEQEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C000FE88 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@@@QEAAEQEBVDMMVIDEOPRESENTTARGET.c)
 */

char __fastcall Set<DMMVIDEOPRESENTTARGET>::Add(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  _QWORD *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r9
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  __int64 v13; // rax

  v2 = a1 + 8;
  v4 = (_QWORD *)(a1 + 24);
  if ( (_QWORD *)*v4 == v4 || (v5 = *v4 - 8LL) == 0 )
  {
LABEL_7:
    if ( (unsigned __int8)DoublyLinkedList<DMMVIDEOPRESENTTARGET>::ContainsByReference(v2, a2, a1) )
    {
      v13 = WdLogNewEntry5_WdAssertion(v8);
      WdLogEvent5_WdAssertion(v13);
    }
    else
    {
      v10 = (_QWORD *)(v7 + 8);
      v11 = *(_QWORD **)(v9 + 24);
      if ( *v11 != v9 + 16 )
        __fastfail(3u);
      *v10 = v9 + 16;
      v10[1] = v11;
      *v11 = v10;
      *(_QWORD *)(v9 + 24) = v10;
      ++*(_QWORD *)(v9 + 32);
    }
    return 1;
  }
  else
  {
    while ( v5 != a2 )
    {
      v6 = *(_QWORD *)(v5 + 8);
      if ( v6 == a1 + 24 )
        v5 = 0LL;
      else
        v5 = v6 - 8;
      if ( !v5 )
        goto LABEL_7;
    }
    return 0;
  }
}
