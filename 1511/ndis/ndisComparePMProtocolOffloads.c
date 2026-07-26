/*
 * XREFs of ndisComparePMProtocolOffloads @ 0x1C0093390
 * Callers:
 *     ndisSourcePreAddProtocolOffload @ 0x1C009316C (ndisSourcePreAddProtocolOffload.c)
 *     ndisMiniportPreAddProtocolOffload @ 0x1C0093254 (ndisMiniportPreAddProtocolOffload.c)
 * Callees:
 *     memcmp @ 0x1C0026B00 (memcmp.c)
 */

bool __fastcall ndisComparePMProtocolOffloads(__int64 a1, __int64 a2)
{
  int v2; // r8d
  char v3; // bl
  int v5; // r8d
  int v6; // r8d
  size_t v7; // r8
  unsigned __int64 v9; // rcx

  v2 = *(_DWORD *)(a1 + 12);
  v3 = 0;
  if ( v2 == *(_DWORD *)(a2 + 12) )
  {
    v5 = v2 - 1;
    if ( !v5 )
    {
      v9 = *(_QWORD *)(a1 + 160) - *(_QWORD *)(a2 + 160);
      if ( !v9 )
      {
        v9 = *(_QWORD *)(a1 + 168) - *(_QWORD *)(a2 + 168);
        if ( !v9 )
          v9 = *(unsigned int *)(a1 + 176) - (unsigned __int64)*(unsigned int *)(a2 + 176);
      }
      return v9 == 0;
    }
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
        return v3;
      v7 = 48LL;
    }
    else
    {
      v7 = 76LL;
    }
    if ( !memcmp((const void *)(a1 + 160), (const void *)(a2 + 160), v7) )
      return 1;
    return v3;
  }
  return 0;
}
