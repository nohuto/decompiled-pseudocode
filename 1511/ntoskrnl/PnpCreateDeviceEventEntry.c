/*
 * XREFs of PnpCreateDeviceEventEntry @ 0x1404E2358
 * Callers:
 *     PnpSetDeviceInstanceRemovalEvent @ 0x1400DA234 (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x14010761C (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x1401303D4 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x1404C67B4 (PnpSynchronizeDeviceEventQueue.c)
 *     PnpSetCustomTargetEvent @ 0x1404E221C (PnpSetCustomTargetEvent.c)
 *     PnpSetDeviceClassChange @ 0x1404E242C (PnpSetDeviceClassChange.c)
 *     PnpSetPlugPlayEvent @ 0x1404EEE18 (PnpSetPlugPlayEvent.c)
 *     PnpShutdownDevices @ 0x1405FF9D0 (PnpShutdownDevices.c)
 *     PnpSetBlockedDriverEvent @ 0x14060E8C4 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x14060E930 (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x14060EA28 (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x14060EABC (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x14060EB68 (PnpSetPowerVetoEvent.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

_DWORD *__fastcall PnpCreateDeviceEventEntry(size_t Size)
{
  unsigned int v1; // edi
  _DWORD *PoolWithTag; // rax
  _DWORD *v3; // rbx

  v1 = Size;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)Size, 0x4B706E50u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v1);
    v3[16] = 1;
  }
  return v3;
}
