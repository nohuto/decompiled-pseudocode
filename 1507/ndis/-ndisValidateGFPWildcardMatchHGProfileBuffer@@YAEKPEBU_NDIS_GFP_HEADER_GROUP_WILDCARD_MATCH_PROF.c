/*
 * XREFs of ?ndisValidateGFPWildcardMatchHGProfileBuffer@@YAEKPEBU_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH_PROFILE@@@Z @ 0x1C006CF24
 * Callers:
 *     ?ndisValidateGFPWildcardMatchProfileBuffer@@YAEKPEBU_NDIS_GFP_WILDCARD_MATCH_PROFILE@@@Z @ 0x1C006CF80 (-ndisValidateGFPWildcardMatchProfileBuffer@@YAEKPEBU_NDIS_GFP_WILDCARD_MATCH_PROFILE@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisValidateGFPWildcardMatchHGProfileBuffer(
        unsigned int a1,
        const struct _NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH_PROFILE *a2)
{
  char v2; // cl

  if ( a1 < 0x38 )
    return 0;
  if ( *((_WORD *)a2 + 1) < 0x31u )
    return 0;
  if ( *(_BYTE *)a2 != 0x80 )
    return 0;
  v2 = 1;
  if ( *((_BYTE *)a2 + 1) != 1
    || *((_DWORD *)a2 + 1)
    || (*((_DWORD *)a2 + 2) & 0xFFFFF000) != 0
    || (*((_QWORD *)a2 + 2) & 0xFFFFFFFFFFF00000uLL) != 0
    || *((int *)a2 + 6) >= 4
    || *((int *)a2 + 7) >= 4
    || *((int *)a2 + 8) >= 4
    || *((int *)a2 + 9) >= 4
    || *((int *)a2 + 10) >= 4
    || *((int *)a2 + 11) >= 4 )
  {
    return 0;
  }
  return v2;
}
