/*
 * XREFs of RIMIsFrameReportingPointerDevice @ 0x1C00C4F70
 * Callers:
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00C60A4 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMExtractDeviceUsages @ 0x1C00CB374 (RIMExtractDeviceUsages.c)
 *     RIMGetMultiContactDeviceState @ 0x1C00CBCA4 (RIMGetMultiContactDeviceState.c)
 *     RIMGetPointerDeviceContactState @ 0x1C00CC1F4 (RIMGetPointerDeviceContactState.c)
 *     RIMGetPTPContactState @ 0x1C00D209C (RIMGetPTPContactState.c)
 *     RIMABArbitratePrimaryStatus @ 0x1C00D3F3C (RIMABArbitratePrimaryStatus.c)
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
