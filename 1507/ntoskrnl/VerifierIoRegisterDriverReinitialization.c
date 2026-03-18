/*
 * XREFs of VerifierIoRegisterDriverReinitialization @ 0x140741FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall VerifierIoRegisterDriverReinitialization(
        PDRIVER_OBJECT DriverObject,
        PDRIVER_REINITIALIZE DriverReinitializationRoutine,
        PVOID Context)
{
  pXdvIoRegisterDriverReinitialization(DriverObject, DriverReinitializationRoutine, Context);
}
