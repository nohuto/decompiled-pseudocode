/*
 * XREFs of sub_1401EBD34 @ 0x1401EBD34
 * Callers:
 *     HvlSendSyntheticClusterIpi @ 0x1401E9F78 (HvlSendSyntheticClusterIpi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1401EBD34(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx
  __int64 v4; // r9
  char *i; // rdx
  unsigned __int64 v6; // r8

  v2 = *(_QWORD *)(a1 + 8);
  v3 = 0LL;
  v4 = a2;
  if ( !HvlpVirtualProcessorsIdentityMapped )
  {
    for ( i = byte_1403D3CC1; ; i += 4 )
    {
      if ( (v2 & 1) != 0 )
        v3 |= 1LL << *i;
      v6 = v2 >> 1;
      if ( !v6 )
        break;
      if ( (v6 & 1) != 0 )
        v3 |= 1LL << i[2];
      v2 = v6 >> 1;
      if ( !v2 )
        break;
    }
    v2 = v3;
  }
  return (unsigned __int16)HvlpHypercallCodeVa(65547LL, v4, v2) != 0 ? 0xC0000001 : 0;
}
