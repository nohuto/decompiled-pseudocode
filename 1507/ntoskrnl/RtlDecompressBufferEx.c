/*
 * XREFs of RtlDecompressBufferEx @ 0x1400D7E04
 * Callers:
 *     SmDecompressBuffer @ 0x1400D7CB4 (SmDecompressBuffer.c)
 *     ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14014118C (-StDmSinglePageCopy@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATIO.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlDecompressBufferEx(
        USHORT CompressionFormat,
        PUCHAR UncompressedBuffer,
        ULONG UncompressedBufferSize,
        PUCHAR CompressedBuffer,
        ULONG CompressedBufferSize,
        PULONG FinalUncompressedSize,
        PVOID WorkSpace)
{
  if ( (unsigned __int8)CompressionFormat < 2u )
    return -1073741811;
  if ( (unsigned __int8)CompressionFormat > 4u )
    return -1073741217;
  return ((__int64 (__fastcall *)(PUCHAR, _QWORD, PUCHAR, _QWORD, _DWORD, PULONG, PVOID))RtlDecompressBufferProcs[(unsigned __int8)CompressionFormat])(
           UncompressedBuffer,
           UncompressedBufferSize,
           CompressedBuffer,
           CompressedBufferSize,
           0,
           FinalUncompressedSize,
           WorkSpace);
}
