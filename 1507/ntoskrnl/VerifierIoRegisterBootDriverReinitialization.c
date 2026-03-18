/*
 * XREFs of VerifierIoRegisterBootDriverReinitialization @ 0x140741FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall VerifierIoRegisterBootDriverReinitialization(
        PDRIVER_OBJECT DriverObject,
        PDRIVER_REINITIALIZE DriverReinitializationRoutine,
        PVOID Context)
{
  pXdvIoRegisterBootDriverReinitialization(DriverObject, DriverReinitializationRoutine, Context);
}
