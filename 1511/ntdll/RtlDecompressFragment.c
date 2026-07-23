/*
 * XREFs of RtlDecompressFragment @ 0x1800E1FF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

NTSTATUS __cdecl RtlDecompressFragment(
        USHORT CompressionFormat,
        PUCHAR UncompressedFragment,
        ULONG UncompressedFragmentSize,
        PUCHAR CompressedBuffer,
        ULONG CompressedBufferSize,
        ULONG FragmentOffset,
        PULONG FinalUncompressedSize,
        PVOID WorkSpace)
{
  if ( (unsigned __int8)CompressionFormat < 2u )
    return -1073741811;
  if ( (unsigned __int8)CompressionFormat <= 4u )
    return ((__int64 (__fastcall *)(PUCHAR, _QWORD, PUCHAR, _QWORD, ULONG, _DWORD, PULONG, PVOID))RtlDecompressFragmentProcs[(unsigned __int8)CompressionFormat])(
             UncompressedFragment,
             UncompressedFragmentSize,
             CompressedBuffer,
             CompressedBufferSize,
             FragmentOffset,
             0,
             FinalUncompressedSize,
             WorkSpace);
  return -1073741217;
}
