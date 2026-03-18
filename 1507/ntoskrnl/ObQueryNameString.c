/*
 * XREFs of ObQueryNameString @ 0x14054C280
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x14004E530 (SeSetLearningModeObjectInformation.c)
 *     IopGetFileVolumeNameInformation @ 0x140129B48 (IopGetFileVolumeNameInformation.c)
 *     SmKmEtwAppendObjectName @ 0x1402575EC (SmKmEtwAppendObjectName.c)
 *     IopCaptureObjectName @ 0x1403EC9FC (IopCaptureObjectName.c)
 *     PopFlushVolumeWorker @ 0x1403ECD88 (PopFlushVolumeWorker.c)
 *     SepQueryNameString @ 0x1406D3B24 (SepQueryNameString.c)
 *     VfIrpLogRetrieveWmiData @ 0x14074E35C (VfIrpLogRetrieveWmiData.c)
 * Callees:
 *     ObQueryNameStringMode @ 0x140426100 (ObQueryNameStringMode.c)
 */

NTSTATUS __stdcall ObQueryNameString(
        PVOID Object,
        POBJECT_NAME_INFORMATION ObjectNameInfo,
        ULONG Length,
        PULONG ReturnLength)
{
  return ObQueryNameStringMode((char *)Object, (__int64)ObjectNameInfo, Length, ReturnLength, 0);
}
