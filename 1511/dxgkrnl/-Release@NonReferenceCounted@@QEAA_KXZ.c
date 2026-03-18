/*
 * XREFs of ?Release@NonReferenceCounted@@QEAA_KXZ @ 0x1C0008AA8
 * Callers:
 *     ??_EDMMVIDPNTARGETMODESET@@UEAAPEAXI@Z @ 0x1C00059A0 (--_EDMMVIDPNTARGETMODESET@@UEAAPEAXI@Z.c)
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@@@QEAAXXZ @ 0x1C0008708 (-Clear@-$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@@@QEAAXXZ.c)
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNSOURCE@@@@QEAAXXZ @ 0x1C00088D4 (-Clear@-$DoublyLinkedList@VDMMVIDPNSOURCE@@@@QEAAXXZ.c)
 *     ?Enqueue@?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@Z @ 0x1C000CB18 (-Enqueue@-$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@.c)
 *     ?Clear@?$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@@@QEAAXXZ @ 0x1C0019224 (-Clear@-$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@@@QEAAXXZ.c)
 *     ?Clear@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@@QEAAXXZ @ 0x1C002B6C0 (-Clear@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@@QEAAXXZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C002BFAC (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ?Clear@?$DoublyLinkedList@VCONTEXT_DATA@ContextDataAssignee@@@@QEAAXXZ @ 0x1C002C530 (-Clear@-$DoublyLinkedList@VCONTEXT_DATA@ContextDataAssignee@@@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall NonReferenceCounted::Release(NonReferenceCounted *this)
{
  if ( this )
    (**(void (__fastcall ***)(NonReferenceCounted *, __int64))this)(this, 1LL);
  return 0LL;
}
