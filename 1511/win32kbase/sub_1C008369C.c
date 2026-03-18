/*
 * XREFs of sub_1C008369C @ 0x1C008369C
 * Callers:
 *     NtGdiGetOPMInformation @ 0x1C0082800 (NtGdiGetOPMInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C008369C(__int64 a1, _OWORD *a2)
{
  _OWORD *v2; // rax
  __int64 v3; // rcx

  if ( a2 + 257 > W32UserProbeAddress || a2 + 257 < a2 )
    *(_BYTE *)W32UserProbeAddress = 0;
  v2 = &unk_1C0107520;
  v3 = 32LL;
  do
  {
    *v2 = *a2;
    v2[1] = a2[1];
    v2[2] = a2[2];
    v2[3] = a2[3];
    v2[4] = a2[4];
    v2[5] = a2[5];
    v2[6] = a2[6];
    v2 += 8;
    *(v2 - 1) = a2[7];
    a2 += 8;
    --v3;
  }
  while ( v3 );
  *v2 = *a2;
  return 0LL;
}
