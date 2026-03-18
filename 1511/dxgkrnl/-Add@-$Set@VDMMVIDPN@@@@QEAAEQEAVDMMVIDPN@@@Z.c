/*
 * XREFs of ?Add@?$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C000BD20
 * Callers:
 *     ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008FEA8 (-CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008FFCC (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 * Callees:
 *     ?InsertTail@?$DoublyLinkedList@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C000BAD4 (-InsertTail@-$DoublyLinkedList@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     ?FindByValue@?$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z @ 0x1C000BC8C (-FindByValue@-$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z.c)
 */

char __fastcall Set<DMMVIDPN>::Add(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v7; // rax

  if ( Set<DMMVIDPN>::FindByValue(a1, a2) )
    return 0;
  if ( DoublyLinkedList<DMMVIDPN>::InsertTail(v4 + 8, v2, v3) != 1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v5);
    WdLogEvent5_WdAssertion(v7);
  }
  return 1;
}
