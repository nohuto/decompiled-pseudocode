/*
 * XREFs of KiCheckForAtlThunk @ 0x1401DAF3C
 * Callers:
 *     KiPreprocessFault @ 0x1400F2138 (KiPreprocessFault.c)
 * Callees:
 *     KiEmulateAtlThunk @ 0x1401DC598 (KiEmulateAtlThunk.c)
 */

__int64 __fastcall KiCheckForAtlThunk(__int64 a1)
{
  __int64 v2; // rcx

  if ( *(_BYTE *)(a1 + 50) )
  {
    v2 = *(_QWORD *)(a1 + 24);
    if ( (*(_BYTE *)(v2 + 32) & 8) != 0
      && *(_QWORD *)(v2 + 40) == *(_QWORD *)a1
      && (unsigned int)KiEmulateAtlThunk(
                         (unsigned int)*(_QWORD *)(a1 + 16) + 248,
                         (unsigned int)*(_QWORD *)(a1 + 16) + 152,
                         (unsigned int)*(_QWORD *)(a1 + 16) + 120,
                         (unsigned int)*(_QWORD *)(a1 + 16) + 128,
                         *(_QWORD *)(a1 + 16) + 136LL) )
    {
      *(_BYTE *)(a1 + 88) = 1;
    }
  }
  return 0LL;
}
