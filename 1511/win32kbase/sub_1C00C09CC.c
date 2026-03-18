/*
 * XREFs of sub_1C00C09CC @ 0x1C00C09CC
 * Callers:
 *     NtGdiConfigureOPMProtectedOutput @ 0x1C00C0D70 (NtGdiConfigureOPMProtectedOutput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C00C09CC(_OWORD *a1, _OWORD *a2)
{
  __int64 v2; // rax

  if ( a2 + 256 > W32UserProbeAddress || a2 + 256 < a2 )
    *(_BYTE *)W32UserProbeAddress = 0;
  v2 = 32LL;
  do
  {
    *a1 = *a2;
    a1[1] = a2[1];
    a1[2] = a2[2];
    a1[3] = a2[3];
    a1[4] = a2[4];
    a1[5] = a2[5];
    a1[6] = a2[6];
    a1 += 8;
    *(a1 - 1) = a2[7];
    a2 += 8;
    --v2;
  }
  while ( v2 );
  return 0LL;
}
