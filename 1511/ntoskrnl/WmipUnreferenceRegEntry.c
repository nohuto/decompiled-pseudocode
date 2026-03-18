/*
 * XREFs of WmipUnreferenceRegEntry @ 0x14001AFF0
 * Callers:
 *     WmipDeregisterRegEntry @ 0x1400EA5DC (WmipDeregisterRegEntry.c)
 *     WmipForwardWmiIrp @ 0x1403D34E8 (WmipForwardWmiIrp.c)
 *     IoWMISystemControl @ 0x1404845DC (IoWMISystemControl.c)
 *     WmipQueryWmiDataBlock @ 0x1404848DC (WmipQueryWmiDataBlock.c)
 *     WmipEventNotification @ 0x14049CDF8 (WmipEventNotification.c)
 *     IoWMIRegistrationControl @ 0x1404B3074 (IoWMIRegistrationControl.c)
 *     WmipDeregisterDevice @ 0x1404B3148 (WmipDeregisterDevice.c)
 *     WmipUpdateRegistration @ 0x140507BF8 (WmipUpdateRegistration.c)
 *     WmipRegisterDevice @ 0x140507C3C (WmipRegisterDevice.c)
 *     WmipRegistrationWorker @ 0x140508288 (WmipRegistrationWorker.c)
 *     WmipFreeTraceDeviceList @ 0x140509BBC (WmipFreeTraceDeviceList.c)
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
