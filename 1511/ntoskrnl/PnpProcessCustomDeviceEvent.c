/*
 * XREFs of PnpProcessCustomDeviceEvent @ 0x1404E2138
 * Callers:
 *     PnpDeviceEventWorker @ 0x1404E0578 (PnpDeviceEventWorker.c)
 * Callees:
 *     PiUEventNotifyUserMode @ 0x1404E09F4 (PiUEventNotifyUserMode.c)
 *     PnpNotifyTargetDeviceChange @ 0x1404E0E88 (PnpNotifyTargetDeviceChange.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1404E218C (PiDcHandleCustomDeviceEvent.c)
 */

__int64 __fastcall PnpProcessCustomDeviceEvent(__int64 *a1)
{
  __int64 v1; // rbx
  void *v2; // rsi
  __int64 v3; // rdi

  v1 = *a1;
  v2 = *(void **)(*a1 + 144);
  v3 = *(_QWORD *)(*a1 + 152);
  PiDcHandleCustomDeviceEvent(*a1);
  PiUEventNotifyUserMode(v1);
  PnpNotifyTargetDeviceChange((GUID *)(v3 + 4), v2, v3, 0LL);
  return 0LL;
}
