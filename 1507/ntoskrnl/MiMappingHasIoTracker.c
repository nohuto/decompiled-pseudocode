/*
 * XREFs of MiMappingHasIoTracker @ 0x1400ADA8C
 * Callers:
 *     MmUnmapLockedPages @ 0x1400ADB20 (MmUnmapLockedPages.c)
 *     MmUnmapIoSpace @ 0x1401153C0 (MmUnmapIoSpace.c)
 * Callees:
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

__int64 __fastcall MiMappingHasIoTracker(unsigned __int64 a1)
{
  unsigned __int64 v1; // r9
  __int64 v2; // r11
  unsigned __int64 v3; // r10
  unsigned __int64 *v4; // rcx
  unsigned __int64 PteShadow; // rax
  unsigned __int64 *v6; // r9

  v1 = a1;
  v2 = 0x12090482600LL;
  v3 = 2040LL;
  v4 = (unsigned __int64 *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  PteShadow = *v4;
  if ( (unsigned __int64)(v4 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(v4, *v4);
  if ( (PteShadow & 0x80u) == 0LL )
  {
    v6 = (unsigned __int64 *)(((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    PteShadow = *v6;
    if ( (unsigned __int64)&v6[v2] <= v3 )
      PteShadow = MiReadPteShadow(v6, *v6);
  }
  return (PteShadow >> 9) & 1;
}
