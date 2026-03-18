/*
 * XREFs of VerifierFsRtlRegisterUncProviderEx @ 0x14025AFB4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierFsRtlRegisterUncProviderEx(
        PHANDLE MupHandle,
        PCUNICODE_STRING RedirDevName,
        PDEVICE_OBJECT DeviceObject,
        FSRTL_UNC_PROVIDER_FLAGS Flags)
{
  return pXdvFsRtlRegisterUncProviderEx(MupHandle, RedirDevName, DeviceObject, Flags);
}
