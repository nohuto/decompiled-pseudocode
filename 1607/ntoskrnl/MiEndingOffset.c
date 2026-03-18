/*
 * XREFs of MiEndingOffset @ 0x1400235F0
 * Callers:
 *     MiEndingOffsetWithLock @ 0x140023560 (MiEndingOffsetWithLock.c)
 *     MiCopyDataPageToImagePage @ 0x140023A40 (MiCopyDataPageToImagePage.c)
 *     MiFlushSectionInternal @ 0x140029DB0 (MiFlushSectionInternal.c)
 *     MiCanFileBeTruncatedInternal @ 0x1400732DC (MiCanFileBeTruncatedInternal.c)
 *     MiInitializeImageProtos @ 0x1400FD83C (MiInitializeImageProtos.c)
 *     MiAllocateFileExtents @ 0x14065A34C (MiAllocateFileExtents.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiEndingOffset(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdx

  v1 = *(unsigned int *)(a1 + 36);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0x20) != 0 )
    v2 = (v1 + *(unsigned int *)(a1 + 40)) << 9;
  else
    v2 = (*(unsigned int *)(a1 + 40) + (v1 | ((unsigned __int64)(*(_WORD *)(a1 + 32) & 0xFFC0) << 26))) << 12;
  return v2 + ((unsigned __int64)*(unsigned __int16 *)(a1 + 34) >> 4);
}
