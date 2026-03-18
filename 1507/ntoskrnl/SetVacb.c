/*
 * XREFs of SetVacb @ 0x140078644
 * Callers:
 *     CcGetVacbMiss @ 0x14003F1B0 (CcGetVacbMiss.c)
 *     CcUnmapInactiveViews @ 0x140167FCC (CcUnmapInactiveViews.c)
 *     CcDereferenceFileOffset @ 0x1401DDF48 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x1401DE144 (CcReferenceFileOffset.c)
 * Callees:
 *     CcSetVacbLargeOffset @ 0x140078680 (CcSetVacbLargeOffset.c)
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
