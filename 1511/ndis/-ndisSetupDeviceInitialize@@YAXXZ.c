/*
 * XREFs of ?ndisSetupDeviceInitialize@@YAXXZ @ 0x1C00FC000
 * Callers:
 *     DriverEntry @ 0x1C00FC3C0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void ndisSetupDeviceInitialize(void)
{
  KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&ndisSetupDeviceListLock);
}
