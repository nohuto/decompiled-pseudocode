/*
 * XREFs of RtlGetDeviceFamilyInfoEnum @ 0x18007A740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl RtlGetDeviceFamilyInfoEnum(ULONGLONG *pullUAPInfo, DWORD *pulDeviceFamily, DWORD *pulDeviceForm)
{
  RtlpGetDeviceFamilyInfoEnum(pullUAPInfo, pulDeviceFamily, pulDeviceForm);
}
