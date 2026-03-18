/*
 * XREFs of ??1PendingDxUpdate@CWindowNode@@QEAA@XZ @ 0x180069274
 * Callers:
 *     ?ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDATE@@@Z @ 0x1800B68C8 (-ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDAT.c)
 * Callees:
 *     ?ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ @ 0x180069228 (-ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ.c)
 */

void __fastcall CWindowNode::PendingDxUpdate::~PendingDxUpdate(CWindowNode::PendingDxUpdate *this)
{
  CWindowNode::PendingDxUpdate::ReleaseResponses(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 56);
}
