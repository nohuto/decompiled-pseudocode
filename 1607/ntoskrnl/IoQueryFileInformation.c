/*
 * XREFs of IoQueryFileInformation @ 0x14050A100
 * Callers:
 *     IopValidateJunctionTarget @ 0x1403E2B58 (IopValidateJunctionTarget.c)
 *     IopParseDevice @ 0x1404408F0 (IopParseDevice.c)
 *     PfpPrefetchEntireDirectory @ 0x140508800 (PfpPrefetchEntireDirectory.c)
 *     PfSnGetSectionObject @ 0x14050ACA0 (PfSnGetSectionObject.c)
 *     IopGetNetworkOpenInformation @ 0x140580C70 (IopGetNetworkOpenInformation.c)
 * Callees:
 *     IopQueryXxxInformation @ 0x14050A128 (IopQueryXxxInformation.c)
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
