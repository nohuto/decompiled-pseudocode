/*
 * XREFs of PnpCreateDeviceEventEntry @ 0x1403F0D68
 * Callers:
 *     PnpSetDeviceInstanceRemovalEvent @ 0x14009F544 (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x1400B2E78 (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x140138C28 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpSetDeviceClassChange @ 0x1403EEEB4 (PnpSetDeviceClassChange.c)
 *     PnpSetCustomTargetEvent @ 0x1403EF18C (PnpSetCustomTargetEvent.c)
 *     PnpSetPlugPlayEvent @ 0x1403F01EC (PnpSetPlugPlayEvent.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x140547ED0 (PnpSynchronizeDeviceEventQueue.c)
 *     PnpShutdownDevices @ 0x140629A20 (PnpShutdownDevices.c)
 *     PnpSetBlockedDriverEvent @ 0x140642CD0 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x140642D3C (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x140642E34 (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x140642EC8 (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x140642F74 (PnpSetPowerVetoEvent.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
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
