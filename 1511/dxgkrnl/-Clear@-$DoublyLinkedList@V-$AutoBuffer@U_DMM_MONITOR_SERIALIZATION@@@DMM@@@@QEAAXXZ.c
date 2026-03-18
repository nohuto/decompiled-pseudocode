/*
 * XREFs of ?Clear@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@@QEAAXXZ @ 0x1C002B6C0
 * Callers:
 *     ??1?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@UEAA@XZ @ 0x1C002AE28 (--1-$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@UEAA@XZ.c)
 *     ??1?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ @ 0x1C002AE48 (--1-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ.c)
 *     ??_G?$DoublyLinkedList@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@UEAAPEAXI@Z @ 0x1C002B370 (--_G-$DoublyLinkedList@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@UEAAPEAXI@Z.c)
 *     ?Clear@?$Queue@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@UEAAXXZ @ 0x1C002B760 (-Clear@-$Queue@V-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@UEAAXXZ.c)
 * Callees:
 *     ?Release@NonReferenceCounted@@QEAA_KXZ @ 0x1C0008AA8 (-Release@NonReferenceCounted@@QEAA_KXZ.c)
 *     ?RemoveHead@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@QEAAPEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@XZ @ 0x1C002C29C (-RemoveHead@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@QEA.c)
 */

void __fastcall DoublyLinkedList<DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>>::Clear(__int64 a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rax

  v2 = (_QWORD *)(a1 + 16);
  while ( (_QWORD *)*v2 != v2 )
  {
    v3 = DoublyLinkedList<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::RemoveHead(a1);
    NonReferenceCounted::Release((NonReferenceCounted *)(v3 + 24));
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    v4 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v4);
  }
}
