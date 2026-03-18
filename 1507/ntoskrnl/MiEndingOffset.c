/*
 * XREFs of MiEndingOffset @ 0x140055120
 * Callers:
 *     MiEndingOffsetWithLock @ 0x140055090 (MiEndingOffsetWithLock.c)
 *     MiCanFileBeTruncatedInternal @ 0x1400834A8 (MiCanFileBeTruncatedInternal.c)
 *     MiFlushSectionInternal @ 0x14008D1E0 (MiFlushSectionInternal.c)
 *     MiCopyDataPageToImagePage @ 0x1400E1430 (MiCopyDataPageToImagePage.c)
 *     MiInitializeImageProtos @ 0x1400E3274 (MiInitializeImageProtos.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiEndingOffset(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  __int64 v6; // rdx

  v1 = *(unsigned int *)(a1 + 36);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0x20) != 0 )
  {
    v6 = v1 + *(unsigned int *)(a1 + 40);
    v3 = (unsigned __int64)*(unsigned __int16 *)(a1 + 34) >> 4;
    v4 = v6 << 9;
  }
  else
  {
    v2 = *(unsigned int *)(a1 + 40) + (v1 | ((unsigned __int64)(*(_WORD *)(a1 + 32) & 0xFFC0) << 26));
    v3 = (unsigned __int64)*(unsigned __int16 *)(a1 + 34) >> 4;
    v4 = v2 << 12;
  }
  return v4 + v3;
}
