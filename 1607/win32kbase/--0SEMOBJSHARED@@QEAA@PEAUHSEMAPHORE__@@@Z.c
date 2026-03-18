/*
 * XREFs of ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0049D3C
 * Callers:
 *     GreIsDisconnectDeviceAttached @ 0x1C0049CDC (GreIsDisconnectDeviceAttached.c)
 *     EngUpdateDeviceSurface @ 0x1C007FCF0 (EngUpdateDeviceSurface.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C00740F0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

SEMOBJSHARED *__fastcall SEMOBJSHARED::SEMOBJSHARED(SEMOBJSHARED *this, HSEMAPHORE a2)
{
  *(_QWORD *)this = a2;
  if ( a2 )
    ExEnterPriorityRegionAndAcquireResourceShared(a2);
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem");
  return this;
}
