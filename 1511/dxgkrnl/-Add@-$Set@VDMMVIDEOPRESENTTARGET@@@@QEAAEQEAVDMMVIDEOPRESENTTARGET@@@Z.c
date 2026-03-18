/*
 * XREFs of ?Add@?$Set@VDMMVIDEOPRESENTTARGET@@@@QEAAEQEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C000E29C
 * Callers:
 *     ?AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJV?$auto_ptr@VDMMVIDEOPRESENTTARGET@@@@@Z @ 0x1C00DC0FC (-AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJV-$auto_ptr@VDMMVIDEOPRESENTTARGET@@@@@Z.c)
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000E43C (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@@@QEAAEQEBVDMMVIDPNTARGETMODESET.c)
 */

char __fastcall Set<DMMVIDEOPRESENTTARGET>::Add(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  _QWORD *v4; // rax
  bool i; // zf
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r9
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  __int64 v14; // rax

  v2 = a1 + 8;
  v4 = (_QWORD *)(a1 + 24);
  if ( (_QWORD *)*v4 != v4 )
  {
    v6 = *v4 - 8LL;
    for ( i = v6 == 0; !i; i = v6 == 0 )
    {
      if ( v6 == a2 )
      {
        if ( !v6 )
          break;
        return 0;
      }
      v7 = *(_QWORD *)(v6 + 8);
      if ( v7 == a1 + 24 )
        v6 = 0LL;
      else
        v6 = v7 - 8;
    }
  }
  if ( (unsigned __int8)DoublyLinkedList<DMMVIDPNTARGETMODESET>::ContainsByReference(v2, a2) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v14);
  }
  else
  {
    v12 = (_QWORD *)(v9 + 8);
    v13 = *(_QWORD **)(v11 + 24);
    *v12 = v11 + 16;
    v12[1] = v13;
    if ( *v13 != v11 + 16 )
      __fastfail(3u);
    *v13 = v12;
    *(_QWORD *)(v11 + 24) = v12;
    ++*(_QWORD *)(v11 + 32);
  }
  return 1;
}
