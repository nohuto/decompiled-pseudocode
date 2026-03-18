/*
 * XREFs of ?Clear@?$DoublyLinkedList@VDMMVIDPN@@@@QEAAXXZ @ 0x1C002B980
 * Callers:
 *     ??1?$Queue@VDMMVIDPN@@@@UEAA@XZ @ 0x1C002B1AC (--1-$Queue@VDMMVIDPN@@@@UEAA@XZ.c)
 *     ??_E?$DoublyLinkedList@VDMMVIDPN@@@@UEAAPEAXI@Z @ 0x1C002B670 (--_E-$DoublyLinkedList@VDMMVIDPN@@@@UEAAPEAXI@Z.c)
 *     ?Clear@?$Queue@VDMMVIDPN@@@@UEAAXXZ @ 0x1C002B9D0 (-Clear@-$Queue@VDMMVIDPN@@@@UEAAXXZ.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?RemoveHead@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@QEAAPEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@XZ @ 0x1C002BD24 (-RemoveHead@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@QEA.c)
 */

void __fastcall DoublyLinkedList<DMMVIDPN>::Clear(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax

  v5 = (_QWORD *)(a1 + 16);
  while ( (_QWORD *)*v5 != v5 )
  {
    v6 = DoublyLinkedList<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::RemoveHead(a1);
    ReferenceCounted::Release((ReferenceCounted *)(v6 + 24));
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
}
