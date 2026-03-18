/*
 * XREFs of PnpCreateDeviceEventEntry @ 0x140460BD4
 * Callers:
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x1400267F0 (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x14011C19C (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x14015FDCC (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpSetDeviceClassChange @ 0x14045F3A4 (PnpSetDeviceClassChange.c)
 *     PnpSetPlugPlayEvent @ 0x140460814 (PnpSetPlugPlayEvent.c)
 *     PnpSetCustomTargetEvent @ 0x140461C58 (PnpSetCustomTargetEvent.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x140569AC0 (PnpSynchronizeDeviceEventQueue.c)
 *     PnpShutdownDevices @ 0x14067A594 (PnpShutdownDevices.c)
 *     PnpSetBlockedDriverEvent @ 0x14068E5D0 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x14068E63C (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x14068E734 (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x14068E7C8 (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x14068E874 (PnpSetPowerVetoEvent.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
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
