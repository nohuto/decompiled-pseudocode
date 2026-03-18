/*
 * XREFs of IoQueryFileInformation @ 0x1404DB230
 * Callers:
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 *     PfpPrefetchEntireDirectory @ 0x1404D8980 (PfpPrefetchEntireDirectory.c)
 *     PfSnGetSectionObject @ 0x1404DAABC (PfSnGetSectionObject.c)
 *     IopGetNetworkOpenInformation @ 0x14054B55C (IopGetNetworkOpenInformation.c)
 *     IopValidateJunctionTarget @ 0x1405F93B0 (IopValidateJunctionTarget.c)
 * Callees:
 *     IopQueryXxxInformation @ 0x1404DB258 (IopQueryXxxInformation.c)
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
