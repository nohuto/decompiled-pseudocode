/*
 * XREFs of ObQueryNameString @ 0x1404B5AC8
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x140043210 (SeSetLearningModeObjectInformation.c)
 *     IopGetFileVolumeNameInformation @ 0x1400EBD4C (IopGetFileVolumeNameInformation.c)
 *     SmKmEtwAppendObjectName @ 0x140208358 (SmKmEtwAppendObjectName.c)
 *     IopCaptureObjectName @ 0x1403A391C (IopCaptureObjectName.c)
 *     PopFlushVolumeWorker @ 0x1403A3C40 (PopFlushVolumeWorker.c)
 *     VfIrpLogRetrieveWmiData @ 0x1406CAC34 (VfIrpLogRetrieveWmiData.c)
 * Callees:
 *     ObQueryNameStringMode @ 0x14041FE90 (ObQueryNameStringMode.c)
 */

NTSTATUS __stdcall ObQueryNameString(
        PVOID Object,
        POBJECT_NAME_INFORMATION ObjectNameInfo,
        ULONG Length,
        PULONG ReturnLength)
{
  return ObQueryNameStringMode((char *)Object, (__int64)ObjectNameInfo, Length, ReturnLength, 0);
}
