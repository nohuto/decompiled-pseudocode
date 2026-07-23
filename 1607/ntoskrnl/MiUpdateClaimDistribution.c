/*
 * XREFs of MiUpdateClaimDistribution @ 0x1400BE4E4
 * Callers:
 *     MiComputeAgeDistribution @ 0x1400BE384 (MiComputeAgeDistribution.c)
 *     MiOrderTrimList @ 0x1401E99B8 (MiOrderTrimList.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiUpdateClaimDistribution(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 *v2; // r8
  char v3; // r10
  __int64 v4; // r11
  __int64 v5; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rcx

  v2 = a2;
  v3 = 1;
  if ( *(_BYTE *)(a1 + 186) == 2 )
    v3 = 3;
  v4 = 7LL;
  v5 = a1 - (_QWORD)a2;
  do
  {
    result = *v2;
    v7 = *v2 + (*(unsigned __int64 *)((char *)v2 + v5 + 40) >> v3);
    if ( v7 < *v2 )
      v7 = -1LL;
    *v2++ = v7;
    --v4;
  }
  while ( v4 );
  return result;
}
