/*
 * XREFs of ?QueueToThread@FxThreadedEventQueue@@QEAAXXZ @ 0x1C0056E90
 * Callers:
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C0003F04 (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 *     ?ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C008D674 (-ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 * Callees:
 *     ?QueueToThreadWorker@FxEventQueue@@IEAAEXZ @ 0x1C00041A0 (-QueueToThreadWorker@FxEventQueue@@IEAAEXZ.c)
 *     ?QueueWorkItem@FxThreadedEventQueue@@IEAAXXZ @ 0x1C0056E18 (-QueueWorkItem@FxThreadedEventQueue@@IEAAXXZ.c)
 */

void __fastcall FxThreadedEventQueue::QueueToThread(FxThreadedEventQueue *this)
{
  if ( FxEventQueue::QueueToThreadWorker(this) )
    FxThreadedEventQueue::QueueWorkItem(this);
}
