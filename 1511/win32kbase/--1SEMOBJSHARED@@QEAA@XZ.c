/*
 * XREFs of ??1SEMOBJSHARED@@QEAA@XZ @ 0x1C004C180
 * Callers:
 *     GreIsDisconnectDeviceAttached @ 0x1C004C0EC (GreIsDisconnectDeviceAttached.c)
 *     EngUpdateDeviceSurface @ 0x1C007C780 (EngUpdateDeviceSurface.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall SEMOBJSHARED::~SEMOBJSHARED(struct _ERESOURCE **this)
{
  EtwTraceGreLockReleaseSemaphore(L"hsem");
  GreReleaseSemaphoreInternal(*this);
}
