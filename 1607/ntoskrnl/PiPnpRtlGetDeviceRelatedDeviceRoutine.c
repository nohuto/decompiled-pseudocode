/*
 * XREFs of PiPnpRtlGetDeviceRelatedDeviceRoutine @ 0x14050CDB4
 * Callers:
 *     <none>
 * Callees:
 *     PlugPlayGetRelatedDevice @ 0x14050CDEC (PlugPlayGetRelatedDevice.c)
 */

__int64 __fastcall PiPnpRtlGetDeviceRelatedDeviceRoutine(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        int a7)
{
  return PlugPlayGetRelatedDevice(a2, a3, a4, a5, a6, a7);
}
