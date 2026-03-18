/*
 * XREFs of IoRegisterFsRegistrationChange @ 0x1405F9FAC
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
