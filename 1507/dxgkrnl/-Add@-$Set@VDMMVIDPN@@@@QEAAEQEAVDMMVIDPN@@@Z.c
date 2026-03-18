/*
 * XREFs of ?Add@?$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C0009610
 * Callers:
 *     ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0097120 (-CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0097248 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 * Callees:
 *     ?FindByValue@?$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z @ 0x1C000957C (-FindByValue@-$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z.c)
 *     ?InsertTail@?$DoublyLinkedList@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C0009688 (-InsertTail@-$DoublyLinkedList@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 */

char __fastcall Set<DMMVIDPN>::Add(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v4; // rax

  if ( Set<DMMVIDPN>::FindByValue(a1, a2) )
    return 0;
  if ( (unsigned __int8)DoublyLinkedList<DMMVIDPN>::InsertTail(v2 + 8) != 1 )
  {
    v4 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v4);
  }
  return 1;
}
