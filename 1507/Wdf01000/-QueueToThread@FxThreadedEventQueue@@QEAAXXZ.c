/*
 * XREFs of ?QueueToThread@FxThreadedEventQueue@@QEAAXXZ @ 0x1C005D02C
 * Callers:
 *     ?ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C00A3304 (-ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C00A3F64 (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 * Callees:
 *     ?QueueWorkItem@FxThreadedEventQueue@@IEAAXXZ @ 0x1C005CFA8 (-QueueWorkItem@FxThreadedEventQueue@@IEAAXXZ.c)
 *     ?QueueToThreadWorker@FxEventQueue@@IEAAEXZ @ 0x1C005D074 (-QueueToThreadWorker@FxEventQueue@@IEAAEXZ.c)
 */

void __fastcall FxThreadedEventQueue::QueueToThread(FxThreadedEventQueue *this)
{
  if ( FxEventQueue::QueueToThreadWorker(this) )
    FxThreadedEventQueue::QueueWorkItem(this);
}
