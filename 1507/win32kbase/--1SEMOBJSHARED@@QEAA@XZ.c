/*
 * XREFs of ??1SEMOBJSHARED@@QEAA@XZ @ 0x1C001E63C
 * Callers:
 *     GreIsDisconnectDeviceAttached @ 0x1C001E5A8 (GreIsDisconnectDeviceAttached.c)
 *     EngUpdateDeviceSurface @ 0x1C0081DD0 (EngUpdateDeviceSurface.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall SEMOBJSHARED::~SEMOBJSHARED(SEMOBJSHARED *this, __int64 a2, __int64 a3)
{
  EtwTraceGreLockReleaseSemaphore((__int64)L"hsem", *(_QWORD *)this, a3);
  GreReleaseSemaphoreInternal(*(_QWORD *)this);
}
