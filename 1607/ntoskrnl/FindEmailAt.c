/*
 * XREFs of FindEmailAt @ 0x140214D48
 * Callers:
 *     RtlpNameprepAsciiWorker @ 0x1406896F0 (RtlpNameprepAsciiWorker.c)
 *     RtlpValidateAsciiStd3AndLength @ 0x140689AC4 (RtlpValidateAsciiStd3AndLength.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindEmailAt(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r8d
  _WORD *v3; // r9

  v2 = a2 - 1;
  v3 = (_WORD *)(a1 + 2LL * (int)(a2 - 1));
  if ( (int)(a2 - 1) < 0 )
    return a2;
  while ( *v3 != 64 )
  {
    --v3;
    if ( (--v2 & 0x80000000) != 0 )
      return a2;
  }
  return v2 + 1;
}
