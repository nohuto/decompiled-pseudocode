/*
 * XREFs of ??1PendingDxUpdate@CWindowNode@@QEAA@XZ @ 0x180104CB0
 * Callers:
 *     ?ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDATE@@@Z @ 0x180105A04 (-ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDAT.c)
 * Callees:
 *     ?ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ @ 0x180106194 (-ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ.c)
 */

void __fastcall CWindowNode::PendingDxUpdate::~PendingDxUpdate(void **this)
{
  CWindowNode::PendingDxUpdate::ReleaseResponses((CWindowNode::PendingDxUpdate *)this);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 7);
}
