/*
 * XREFs of RtlpCopyMappedMemoryEx @ 0x1800831D0
 * Callers:
 *     RtlCopyMappedMemory @ 0x1800831B0 (RtlCopyMappedMemory.c)
 * Callees:
 *     memmove @ 0x1800AB5C0 (memmove.c)
 *     RtlpCopyMappedMemoryEx_ExceptionFilter @ 0x1800E2954 (RtlpCopyMappedMemoryEx_ExceptionFilter.c)
 */

__int64 __fastcall RtlpCopyMappedMemoryEx(__int64 a1, void *a2, const void *a3, size_t a4)
{
  memmove(a2, a3, a4);
  return 0LL;
}
