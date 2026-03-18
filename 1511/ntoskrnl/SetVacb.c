/*
 * XREFs of SetVacb @ 0x1400B1DAC
 * Callers:
 *     CcGetVacbMiss @ 0x1400AEA80 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x1400B1DF0 (CcUnmapVacbArray.c)
 *     CcUnmapInactiveViews @ 0x140138B9C (CcUnmapInactiveViews.c)
 *     CcDereferenceFileOffset @ 0x1401A98A8 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x1401A99B0 (CcReferenceFileOffset.c)
 * Callees:
 *     CcSetVacbLargeOffset @ 0x1400E0C5C (CcSetVacbLargeOffset.c)
 */

char __fastcall SetVacb(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  char v3; // r10

  v3 = 1;
  if ( *(__int64 *)(a1 + 32) > 0x2000000 )
    return CcSetVacbLargeOffset();
  if ( a3 < 0xFFFFFFFFFFFFFFFEuLL )
    *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)a2 >> 18)) = a3;
  return v3;
}
