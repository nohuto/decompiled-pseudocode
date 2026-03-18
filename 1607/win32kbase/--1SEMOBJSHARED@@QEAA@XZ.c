/*
 * XREFs of ??1SEMOBJSHARED@@QEAA@XZ @ 0x1C0049D70
 * Callers:
 *     GreIsDisconnectDeviceAttached @ 0x1C0049CDC (GreIsDisconnectDeviceAttached.c)
 *     EngUpdateDeviceSurface @ 0x1C007FCF0 (EngUpdateDeviceSurface.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall SEMOBJSHARED::~SEMOBJSHARED(struct _ERESOURCE **this)
{
  EtwTraceGreLockReleaseSemaphore(L"hsem");
  GreReleaseSemaphoreInternal(*this);
}
