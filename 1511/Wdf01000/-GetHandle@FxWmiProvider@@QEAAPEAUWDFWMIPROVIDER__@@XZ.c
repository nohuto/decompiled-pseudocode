/*
 * XREFs of ?GetHandle@FxWmiProvider@@QEAAPEAUWDFWMIPROVIDER__@@XZ @ 0x1C0035AD0
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009B30 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C000C0A0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C000EC1C (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?WaitForSignal@FxWorkItem@@AEAAXXZ @ 0x1C000F518 (-WaitForSignal@FxWorkItem@@AEAAXXZ.c)
 *     ?DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0019614 (-DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 *     ?GotoStartState@FxIoTarget@@MEAAJPEAU_LIST_ENTRY@@E@Z @ 0x1C0019670 (-GotoStartState@FxIoTarget@@MEAAJPEAU_LIST_ENTRY@@E@Z.c)
 *     ?ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z @ 0x1C001E920 (-ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?GetNextDevice@FxChildList@@QEAAJPEAPEAUWDFDEVICE__@@PEAU_WDF_CHILD_LIST_ITERATOR@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z @ 0x1C0026F44 (-GetNextDevice@FxChildList@@QEAAJPEAPEAUWDFDEVICE__@@PEAU_WDF_CHILD_LIST_ITERATOR@@PEAU_WDF_CHIL.c)
 *     ?_QueryAllData@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C0062490 (-_QueryAllData@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z.c)
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C0077554 (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     ?ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z @ 0x1C00824D4 (-ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0082940 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 * Callees:
 *     <none>
 */

WDFWORKITEM__ *__fastcall FxWmiProvider::GetHandle(FxWorkItem *this)
{
  if ( this->m_ObjectSize )
    return (WDFWORKITEM__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    return 0LL;
}
