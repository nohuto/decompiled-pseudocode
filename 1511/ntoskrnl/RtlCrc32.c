/*
 * XREFs of RtlCrc32 @ 0x1401F943C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

DWORD __cdecl RtlCrc32(const void *Buffer, size_t Size, DWORD InitialCrc)
{
  return RtlpComputeCrcInternal((unsigned __int64)Buffer, Size, InitialCrc, &Crc32Ctrl);
}
