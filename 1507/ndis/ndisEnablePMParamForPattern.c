/*
 * XREFs of ndisEnablePMParamForPattern @ 0x1C00443B0
 * Callers:
 *     ndisOidPostPMAddWOLPattern @ 0x1C000E1B0 (ndisOidPostPMAddWOLPattern.c)
 *     ndisUpdateWmiPMParamsForPatterns @ 0x1C00458E0 (ndisUpdateWmiPMParamsForPatterns.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisEnablePMParamForPattern(__int64 a1, __int64 a2)
{
  switch ( *(_DWORD *)(a1 + 12) )
  {
    case 1:
      *(_DWORD *)(a2 + 4) |= 1u;
      break;
    case 2:
      *(_DWORD *)(a2 + 4) |= 2u;
      break;
    case 3:
      *(_DWORD *)(a2 + 4) |= 4u;
      break;
    case 4:
      *(_DWORD *)(a2 + 4) |= 8u;
      break;
    case 5:
      *(_DWORD *)(a2 + 4) |= 0x10000u;
      break;
  }
}
