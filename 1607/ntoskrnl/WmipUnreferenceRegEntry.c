/*
 * XREFs of WmipUnreferenceRegEntry @ 0x1400C2770
 * Callers:
 *     WmipDeregisterRegEntry @ 0x1401255D0 (WmipDeregisterRegEntry.c)
 *     IoWMISystemControl @ 0x1404A9E3C (IoWMISystemControl.c)
 *     WmipQueryWmiDataBlock @ 0x1404AA13C (WmipQueryWmiDataBlock.c)
 *     WmipFreeTraceDeviceList @ 0x1404AC918 (WmipFreeTraceDeviceList.c)
 *     WmipForwardWmiIrp @ 0x1404E80DC (WmipForwardWmiIrp.c)
 *     WmipDeregisterDevice @ 0x140533294 (WmipDeregisterDevice.c)
 *     WmipEventNotification @ 0x1405372F8 (WmipEventNotification.c)
 *     WmipUpdateRegistration @ 0x14053A950 (WmipUpdateRegistration.c)
 *     IoWMIRegistrationControl @ 0x14053A994 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x14053AA68 (WmipRegisterDevice.c)
 *     WmipRegistrationWorker @ 0x1405435C8 (WmipRegistrationWorker.c)
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
