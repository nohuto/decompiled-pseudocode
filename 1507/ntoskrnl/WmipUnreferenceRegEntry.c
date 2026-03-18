/*
 * XREFs of WmipUnreferenceRegEntry @ 0x1400CF108
 * Callers:
 *     WmipDeregisterRegEntry @ 0x14012785C (WmipDeregisterRegEntry.c)
 *     WmipEventNotification @ 0x1404A8814 (WmipEventNotification.c)
 *     WmipForwardWmiIrp @ 0x1404D215C (WmipForwardWmiIrp.c)
 *     IoWMISystemControl @ 0x14052D8A8 (IoWMISystemControl.c)
 *     WmipQueryWmiDataBlock @ 0x14052DCE0 (WmipQueryWmiDataBlock.c)
 *     WmipFreeTraceDeviceList @ 0x140533358 (WmipFreeTraceDeviceList.c)
 *     IoWMIRegistrationControl @ 0x140545FA0 (IoWMIRegistrationControl.c)
 *     WmipDeregisterDevice @ 0x140546074 (WmipDeregisterDevice.c)
 *     WmipRegistrationWorker @ 0x14057E3C4 (WmipRegistrationWorker.c)
 *     WmipUpdateRegistration @ 0x14057E494 (WmipUpdateRegistration.c)
 *     WmipRegisterDevice @ 0x14057E4D8 (WmipRegisterDevice.c)
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
