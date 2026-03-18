/*
 * XREFs of ObQueryNameString @ 0x1404DC4E0
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x14000FB70 (SeSetLearningModeObjectInformation.c)
 *     IopGetFileVolumeNameInformation @ 0x1400AC454 (IopGetFileVolumeNameInformation.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x1400FAFC0 (IopAttachDeviceToDeviceStackSafe.c)
 *     SmKmEtwAppendObjectName @ 0x140220778 (SmKmEtwAppendObjectName.c)
 *     PopFlushVolumeWorker @ 0x1403D0FC4 (PopFlushVolumeWorker.c)
 *     IopCaptureObjectName @ 0x1403D1DCC (IopCaptureObjectName.c)
 *     VfIrpLogRetrieveWmiData @ 0x140719644 (VfIrpLogRetrieveWmiData.c)
 * Callees:
 *     ObQueryNameStringMode @ 0x140434B90 (ObQueryNameStringMode.c)
 */

NTSTATUS __stdcall ObQueryNameString(
        PVOID Object,
        POBJECT_NAME_INFORMATION ObjectNameInfo,
        ULONG Length,
        PULONG ReturnLength)
{
  return ObQueryNameStringMode((char *)Object, (__int64)ObjectNameInfo, Length, ReturnLength, 0);
}
