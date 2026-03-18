/*
 * XREFs of WmipUnreferenceRegEntry @ 0x1400C48D0
 * Callers:
 *     WmipDeregisterRegEntry @ 0x140125060 (WmipDeregisterRegEntry.c)
 *     IoWMISystemControl @ 0x1404BE10C (IoWMISystemControl.c)
 *     WmipQueryWmiDataBlock @ 0x1404BE40C (WmipQueryWmiDataBlock.c)
 *     WmipFreeTraceDeviceList @ 0x1404C0BE8 (WmipFreeTraceDeviceList.c)
 *     WmipForwardWmiIrp @ 0x14050514C (WmipForwardWmiIrp.c)
 *     WmipDeregisterDevice @ 0x140532D54 (WmipDeregisterDevice.c)
 *     WmipEventNotification @ 0x140536DB8 (WmipEventNotification.c)
 *     WmipUpdateRegistration @ 0x14053A410 (WmipUpdateRegistration.c)
 *     IoWMIRegistrationControl @ 0x14053A454 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x14053A528 (WmipRegisterDevice.c)
 *     WmipRegistrationWorker @ 0x140543088 (WmipRegistrationWorker.c)
 * Callees:
 *     <none>
 */

LONG __fastcall WmipUnreferenceRegEntry(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedDecrement((volatile signed __int32 *)(a1 + 48));
  if ( (result & 0xFFFFFF) == 0 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 40), 0, 0);
  return result;
}
