/*
 * XREFs of RIMIsFrameReportingPointerDevice @ 0x1C00C40DC
 * Callers:
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00C51A8 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMExtractDeviceUsages @ 0x1C00CA2A0 (RIMExtractDeviceUsages.c)
 *     RIMGetMultiContactDeviceState @ 0x1C00CABDC (RIMGetMultiContactDeviceState.c)
 *     RIMGetPointerDeviceContactState @ 0x1C00CB12C (RIMGetPointerDeviceContactState.c)
 *     RIMGetPTPContactState @ 0x1C00D0624 (RIMGetPTPContactState.c)
 *     RIMABArbitratePrimaryStatus @ 0x1C00D2118 (RIMABArbitratePrimaryStatus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMIsFrameReportingPointerDevice(__int64 a1)
{
  int v1; // r8d
  unsigned int v2; // edx

  v1 = *(_DWORD *)(a1 + 24);
  v2 = 0;
  if ( (unsigned int)(v1 - 3) <= 2 || v1 == 8 )
    return 1;
  return v2;
}
