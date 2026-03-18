/*
 * XREFs of ??1PendingDxUpdate@CWindowNode@@QEAA@XZ @ 0x1800B3754
 * Callers:
 *     ?ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDATE@@@Z @ 0x1800BA8EC (-ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDAT.c)
 * Callees:
 *     ?ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ @ 0x1800B3708 (-ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ.c)
 */

void __fastcall CWindowNode::PendingDxUpdate::~PendingDxUpdate(CWindowNode::PendingDxUpdate *this)
{
  CWindowNode::PendingDxUpdate::ReleaseResponses(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 56);
}
