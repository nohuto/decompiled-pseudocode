/*
 * XREFs of PpmPerfRegisterHvCap @ 0x140676548
 * Callers:
 *     <none>
 * Callees:
 *     HvlGetLpIndexFromApicId @ 0x1401BAD24 (HvlGetLpIndexFromApicId.c)
 *     HvlConfigurePerfStateCap @ 0x1401BEC8C (HvlConfigurePerfStateCap.c)
 */

__int64 __fastcall PpmPerfRegisterHvCap(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int LpIndexFromApicId; // ecx
  _DWORD v7[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( (HvlEnlightenments & 8) == 0 )
    return 3221225659LL;
  LpIndexFromApicId = HvlGetLpIndexFromApicId(a1[1], a2, a3, a4);
  if ( LpIndexFromApicId == -1 )
    return 3221225485LL;
  v7[0] = a1[2];
  v7[1] = a1[3];
  v7[2] = a1[4];
  return HvlConfigurePerfStateCap(LpIndexFromApicId, (__int64)v7);
}
