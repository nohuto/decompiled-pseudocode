/*
 * XREFs of IoQueryFileInformation @ 0x14042A8B0
 * Callers:
 *     PfpPrefetchEntireDirectory @ 0x14042CE40 (PfpPrefetchEntireDirectory.c)
 *     PfSnGetSectionObject @ 0x140473938 (PfSnGetSectionObject.c)
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 *     IopGetNetworkOpenInformation @ 0x1405C2A08 (IopGetNetworkOpenInformation.c)
 *     IopValidateJunctionTarget @ 0x14067350C (IopValidateJunctionTarget.c)
 * Callees:
 *     IopQueryXxxInformation @ 0x14042A8D8 (IopQueryXxxInformation.c)
 */

NTSTATUS __stdcall IoQueryFileInformation(
        PFILE_OBJECT FileObject,
        FILE_INFORMATION_CLASS FileInformationClass,
        ULONG Length,
        PVOID FileInformation,
        PULONG ReturnedLength)
{
  return IopQueryXxxInformation(FileObject, (__int64)FileInformation, (__int64)ReturnedLength, 1);
}
