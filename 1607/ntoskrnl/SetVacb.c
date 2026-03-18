/*
 * XREFs of SetVacb @ 0x1400185FC
 * Callers:
 *     CcUnmapVacbArray @ 0x140017FC0 (CcUnmapVacbArray.c)
 *     CcGetVacbMiss @ 0x14001872C (CcGetVacbMiss.c)
 *     CcUnmapInactiveViews @ 0x14014199C (CcUnmapInactiveViews.c)
 *     CcDereferenceFileOffset @ 0x1401B2708 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x1401B2810 (CcReferenceFileOffset.c)
 * Callees:
 *     CcSetVacbLargeOffset @ 0x14006CBF0 (CcSetVacbLargeOffset.c)
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
