/*
 * XREFs of PnpProcessCustomDeviceEvent @ 0x1404895A4
 * Callers:
 *     PnpDeviceEventWorker @ 0x14048B32C (PnpDeviceEventWorker.c)
 * Callees:
 *     PiDcHandleCustomDeviceEvent @ 0x140489514 (PiDcHandleCustomDeviceEvent.c)
 *     PnpNotifyTargetDeviceChange @ 0x14048A58C (PnpNotifyTargetDeviceChange.c)
 *     PiUEventNotifyUserMode @ 0x14048D5A4 (PiUEventNotifyUserMode.c)
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
  PnpNotifyTargetDeviceChange((void *)(v3 + 4), v2);
  return 0LL;
}
