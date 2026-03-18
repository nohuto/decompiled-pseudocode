/*
 * XREFs of ?Release@NonReferenceCounted@@QEAA_KXZ @ 0x1C0002424
 * Callers:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNSOURCE@@@@QEAAXXZ @ 0x1C00022B0 (-Clear@-$DoublyLinkedList@VDMMVIDPNSOURCE@@@@QEAAXXZ.c)
 *     ??_EDMMVIDPNTARGETMODESET@@UEAAPEAXI@Z @ 0x1C00032D0 (--_EDMMVIDPNTARGETMODESET@@UEAAPEAXI@Z.c)
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@@@QEAAXXZ @ 0x1C000C660 (-Clear@-$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@@@QEAAXXZ.c)
 *     ?Enqueue@?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@Z @ 0x1C000D298 (-Enqueue@-$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@.c)
 *     ?Clear@?$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@@@QEAAXXZ @ 0x1C001D35C (-Clear@-$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@@@QEAAXXZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C00342DC (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ?Clear@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@@QEAAXXZ @ 0x1C0034860 (-Clear@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@@QEAAXXZ.c)
 *     ?Clear@?$DoublyLinkedList@VCONTEXT_DATA@ContextDataAssignee@@@@QEAAXXZ @ 0x1C0034C60 (-Clear@-$DoublyLinkedList@VCONTEXT_DATA@ContextDataAssignee@@@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall NonReferenceCounted::Release(NonReferenceCounted *this)
{
  if ( this )
    (**(void (__fastcall ***)(NonReferenceCounted *, __int64))this)(this, 1LL);
  return 0LL;
}
