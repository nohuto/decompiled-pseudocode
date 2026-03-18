/*
 * XREFs of ?Clear@?$DoublyLinkedList@VDMMVIDPN@@@@QEAAXXZ @ 0x1C002B70C
 * Callers:
 *     ??1?$Queue@VDMMVIDPN@@@@UEAA@XZ @ 0x1C002AE68 (--1-$Queue@VDMMVIDPN@@@@UEAA@XZ.c)
 *     ??_E?$DoublyLinkedList@VDMMVIDPN@@@@UEAAPEAXI@Z @ 0x1C002B3B0 (--_E-$DoublyLinkedList@VDMMVIDPN@@@@UEAAPEAXI@Z.c)
 *     ?Clear@?$Queue@VDMMVIDPN@@@@UEAAXXZ @ 0x1C002B780 (-Clear@-$Queue@VDMMVIDPN@@@@UEAAXXZ.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?RemoveHead@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@QEAAPEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@XZ @ 0x1C002C29C (-RemoveHead@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@QEA.c)
 */

void __fastcall DoublyLinkedList<DMMVIDPN>::Clear(__int64 a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rax

  v2 = (_QWORD *)(a1 + 16);
  while ( (_QWORD *)*v2 != v2 )
  {
    v3 = DoublyLinkedList<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::RemoveHead(a1);
    ReferenceCounted::Release((ReferenceCounted *)(v3 + 24));
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    v4 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v4);
  }
}
