/*
 * XREFs of PnpCreateDeviceEventEntry @ 0x140489C28
 * Callers:
 *     PnpSetDeviceInstanceRemovalEvent @ 0x1400850B8 (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x140085FF0 (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x140139198 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpSetDeviceClassChange @ 0x140488DB8 (PnpSetDeviceClassChange.c)
 *     PnpSetCustomTargetEvent @ 0x1404893D8 (PnpSetCustomTargetEvent.c)
 *     PnpSetPlugPlayEvent @ 0x14048A464 (PnpSetPlugPlayEvent.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x140548410 (PnpSynchronizeDeviceEventQueue.c)
 *     PnpShutdownDevices @ 0x140629AD4 (PnpShutdownDevices.c)
 *     PnpSetBlockedDriverEvent @ 0x140642DB4 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x140642E20 (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x140642F18 (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x140642FAC (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x140643058 (PnpSetPowerVetoEvent.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
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
