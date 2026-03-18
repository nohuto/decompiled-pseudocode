/*
 * XREFs of IoRegisterFsRegistrationChange @ 0x140623924
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoRegisterFsRegistrationChange(
        PDRIVER_OBJECT DriverObject,
        PDRIVER_FS_NOTIFICATION DriverNotificationRoutine)
{
  return IoRegisterFsRegistrationChangeMountAware(DriverObject, DriverNotificationRoutine, 0);
}
