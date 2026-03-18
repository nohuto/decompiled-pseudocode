/*
 * XREFs of PopBatteryReadTag @ 0x1406B6C28
 * Callers:
 *     PopBatteryWorker @ 0x14056B280 (PopBatteryWorker.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     IoSynchronousCallDriver @ 0x140127F70 (IoSynchronousCallDriver.c)
 *     PopPrepareIoctl @ 0x1405C41B0 (PopPrepareIoctl.c)
 */

__int64 __fastcall PopBatteryReadTag(__int64 a1)
{
  _DWORD *v1; // rsi
  NTSTATUS v3; // edi

  v1 = (_DWORD *)(a1 + 168);
  *(_DWORD *)(a1 + 168) = 0;
  PopPrepareIoctl(*(IRP **)(a1 + 56), 0x294040u, 0, (struct _IRP *)(a1 + 168), 4u, 4u);
  v3 = IoSynchronousCallDriver(*(struct _DEVICE_OBJECT **)(a1 + 48), *(IRP **)(a1 + 56));
  if ( v3 >= 0 )
  {
    v3 = 0;
    *(_DWORD *)(a1 + 108) = *v1;
    *(_DWORD *)(a1 + 104) = 1;
    KeSetEvent((PRKEVENT)(a1 + 80), 0, 0);
  }
  return (unsigned int)v3;
}
