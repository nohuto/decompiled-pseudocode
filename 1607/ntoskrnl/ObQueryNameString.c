/*
 * XREFs of ObQueryNameString @ 0x1404BFAE4
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x14000F6F0 (SeSetLearningModeObjectInformation.c)
 *     IopGetFileVolumeNameInformation @ 0x1400AA9BC (IopGetFileVolumeNameInformation.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x1400F8D4C (IopAttachDeviceToDeviceStackSafe.c)
 *     SmKmEtwAppendObjectName @ 0x1402205A4 (SmKmEtwAppendObjectName.c)
 *     PopFlushVolumeWorker @ 0x1403D0FC4 (PopFlushVolumeWorker.c)
 *     IopCaptureObjectName @ 0x1403D1DCC (IopCaptureObjectName.c)
 *     VfIrpLogRetrieveWmiData @ 0x140719644 (VfIrpLogRetrieveWmiData.c)
 * Callees:
 *     ObQueryNameStringMode @ 0x140433A60 (ObQueryNameStringMode.c)
 */

NTSTATUS __stdcall ObQueryNameString(
        PVOID Object,
        POBJECT_NAME_INFORMATION ObjectNameInfo,
        ULONG Length,
        PULONG ReturnLength)
{
  return ObQueryNameStringMode((char *)Object, (__int64)ObjectNameInfo, Length, ReturnLength, 0);
}
