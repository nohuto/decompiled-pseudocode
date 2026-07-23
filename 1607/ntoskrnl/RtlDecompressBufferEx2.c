/*
 * XREFs of RtlDecompressBufferEx2 @ 0x1400B2564
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlDecompressBufferEx2(
        USHORT CompressionFormat,
        PUCHAR UncompressedBuffer,
        ULONG UncompressedBufferSize,
        PUCHAR CompressedBuffer,
        ULONG CompressedBufferSize,
        ULONG UncompressedChunkSize,
        PULONG FinalUncompressedSize,
        PVOID WorkSpace)
{
  if ( (unsigned __int8)CompressionFormat < 2u )
    return -1073741811;
  if ( (unsigned __int8)CompressionFormat > 4u )
    return -1073741217;
  return ((__int64 (__fastcall *)(PUCHAR, _QWORD, PUCHAR, _QWORD, ULONG, PULONG, PVOID))RtlDecompressBufferProcs[(unsigned __int8)CompressionFormat])(
           UncompressedBuffer,
           UncompressedBufferSize,
           CompressedBuffer,
           CompressedBufferSize,
           UncompressedChunkSize,
           FinalUncompressedSize,
           WorkSpace);
}
