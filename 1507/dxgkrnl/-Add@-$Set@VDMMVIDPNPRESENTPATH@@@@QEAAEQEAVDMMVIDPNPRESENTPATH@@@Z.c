/*
 * XREFs of ?Add@?$Set@VDMMVIDPNPRESENTPATH@@@@QEAAEQEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00082CC
 * Callers:
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0089F34 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 * Callees:
 *     ?FindByValue@?$Set@VDMMVIDPNPRESENTPATH@@@@QEBAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z @ 0x1C0008260 (-FindByValue@-$Set@VDMMVIDPNPRESENTPATH@@@@QEBAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0008400 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET.c)
 */

char __fastcall Set<DMMVIDPNPRESENTPATH>::Add(__int64 a1, __int64 a2)
{
  __int64 *v4; // rdx
  __int64 v5; // rax
  __int64 v7; // rax

  if ( Set<DMMVIDPNPRESENTPATH>::FindByValue(a1, a2) )
    return 0;
  if ( (unsigned __int8)DoublyLinkedList<DMMVIDPNSOURCEMODESET>::ContainsByReference(a1 + 8, a2) )
  {
    v7 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v7);
  }
  else
  {
    v4 = *(__int64 **)(a1 + 32);
    v5 = a2 + 8;
    *(_QWORD *)(a2 + 8) = a1 + 24;
    *(_QWORD *)(a2 + 16) = v4;
    if ( *v4 != a1 + 24 )
      __fastfail(3u);
    *v4 = v5;
    *(_QWORD *)(a1 + 32) = v5;
    ++*(_QWORD *)(a1 + 40);
  }
  return 1;
}
