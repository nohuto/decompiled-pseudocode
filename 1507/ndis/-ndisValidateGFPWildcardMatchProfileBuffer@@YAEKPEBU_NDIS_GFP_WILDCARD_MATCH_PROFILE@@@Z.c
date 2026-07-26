/*
 * XREFs of ?ndisValidateGFPWildcardMatchProfileBuffer@@YAEKPEBU_NDIS_GFP_WILDCARD_MATCH_PROFILE@@@Z @ 0x1C006CF80
 * Callers:
 *     ?ndisValidatePDCapsBuffer@@YAEKPEBU_NDIS_PD_CAPABILITIES@@@Z @ 0x1C006D030 (-ndisValidatePDCapsBuffer@@YAEKPEBU_NDIS_PD_CAPABILITIES@@@Z.c)
 * Callees:
 *     ?ndisValidateGFPWildcardMatchHGProfileBuffer@@YAEKPEBU_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH_PROFILE@@@Z @ 0x1C006CF24 (-ndisValidateGFPWildcardMatchHGProfileBuffer@@YAEKPEBU_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH_PROF.c)
 *     ?ndisValidateTrailingElementSpace@@YAEKPEBU_NDIS_OBJECT_HEADER@@KKK@Z @ 0x1C006D288 (-ndisValidateTrailingElementSpace@@YAEKPEBU_NDIS_OBJECT_HEADER@@KKK@Z.c)
 */

char __fastcall ndisValidateGFPWildcardMatchProfileBuffer(
        unsigned int a1,
        const struct _NDIS_GFP_WILDCARD_MATCH_PROFILE *a2)
{
  char v4; // bl
  unsigned int v5; // esi
  unsigned int v6; // r14d
  int v7; // r9d
  int v8; // r8d
  unsigned int v9; // r9d

  if ( a1 < 0x20 || *((_WORD *)a2 + 1) < 0x20u || *(_BYTE *)a2 != 0x80 || *((_BYTE *)a2 + 1) != 1 )
    return 0;
  v4 = 0;
  if ( !*((_DWORD *)a2 + 1) && *((_DWORD *)a2 + 2) == 5 )
  {
    if ( *((_DWORD *)a2 + 4) )
    {
      v5 = *((_DWORD *)a2 + 5);
      v6 = *((_DWORD *)a2 + 7);
      if ( ndisValidateTrailingElementSpace(a1, (const struct _NDIS_OBJECT_HEADER *)a2, v5, *((_DWORD *)a2 + 6), v6) )
      {
        if ( v7 )
        {
          while ( ndisValidateGFPWildcardMatchHGProfileBuffer(
                    a1 - v5,
                    (const struct _NDIS_GFP_WILDCARD_MATCH_PROFILE *)((char *)a2 + v5)) )
          {
            v5 += v6;
            if ( v8 + 1 >= v9 )
              return 1;
          }
        }
        else
        {
          return 1;
        }
      }
    }
  }
  return v4;
}
