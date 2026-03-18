/*
 * XREFs of ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C004C14C
 * Callers:
 *     GreIsDisconnectDeviceAttached @ 0x1C004C0EC (GreIsDisconnectDeviceAttached.c)
 *     EngUpdateDeviceSurface @ 0x1C007C780 (EngUpdateDeviceSurface.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C006E360 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

SEMOBJSHARED *__fastcall SEMOBJSHARED::SEMOBJSHARED(SEMOBJSHARED *this, HSEMAPHORE a2)
{
  *(_QWORD *)this = a2;
  if ( a2 )
    ExEnterPriorityRegionAndAcquireResourceShared(a2);
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", *(_QWORD *)this);
  return this;
}
