/*
 * XREFs of ?Add@?$Set@VDMMVIDPNPRESENTPATH@@@@QEAAEQEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0008640
 * Callers:
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C009106C (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 * Callees:
 *     ?FindByValue@?$Set@VDMMVIDPNPRESENTPATH@@@@QEBAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z @ 0x1C00085D4 (-FindByValue@-$Set@VDMMVIDPNPRESENTPATH@@@@QEBAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0008774 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET.c)
 */

char __fastcall Set<DMMVIDPNPRESENTPATH>::Add(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rdx
  __int64 v6; // rax
  __int64 v8; // rax

  if ( Set<DMMVIDPNPRESENTPATH>::FindByValue(a1, a2) )
    return 0;
  if ( (unsigned __int8)DoublyLinkedList<DMMVIDPNSOURCEMODESET>::ContainsByReference(a1 + 8, a2) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v8);
  }
  else
  {
    v5 = *(__int64 **)(a1 + 32);
    v6 = a2 + 8;
    *(_QWORD *)(a2 + 8) = a1 + 24;
    *(_QWORD *)(a2 + 16) = v5;
    if ( *v5 != a1 + 24 )
      __fastfail(3u);
    *v5 = v6;
    *(_QWORD *)(a1 + 32) = v6;
    ++*(_QWORD *)(a1 + 40);
  }
  return 1;
}
