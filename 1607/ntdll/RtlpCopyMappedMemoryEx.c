/*
 * XREFs of RtlpCopyMappedMemoryEx @ 0x180087430
 * Callers:
 *     RtlCopyMappedMemory @ 0x180087410 (RtlCopyMappedMemory.c)
 * Callees:
 *     memmove @ 0x1800AC980 (memmove.c)
 *     RtlpCopyMappedMemoryEx_ExceptionFilter @ 0x1800EBBA4 (RtlpCopyMappedMemoryEx_ExceptionFilter.c)
 */

__int64 __fastcall RtlpCopyMappedMemoryEx(__int64 a1, void *a2, const void *a3, size_t a4)
{
  memmove(a2, a3, a4);
  return 0LL;
}
