/*
 * XREFs of IoQueryFileInformation @ 0x1404ED090
 * Callers:
 *     IopValidateJunctionTarget @ 0x1403E2B58 (IopValidateJunctionTarget.c)
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 *     PfpPrefetchEntireDirectory @ 0x1404EB790 (PfpPrefetchEntireDirectory.c)
 *     PfSnGetSectionObject @ 0x1404EDC30 (PfSnGetSectionObject.c)
 *     IopGetNetworkOpenInformation @ 0x14058111C (IopGetNetworkOpenInformation.c)
 * Callees:
 *     IopQueryXxxInformation @ 0x1404ED0B8 (IopQueryXxxInformation.c)
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
