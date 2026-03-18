/*
 * XREFs of wil_details_GetCurrentVariantState @ 0x1402A0A64
 * Callers:
 *     wil_details_FeatureStateCache_ReevaluateCachedVariantState @ 0x1402A0944 (wil_details_FeatureStateCache_ReevaluateCachedVariantState.c)
 * Callees:
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x140298800 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x1403E3B18 (wil_RtlStagingConfig_QueryFeatureState.c)
 */

__int64 __fastcall wil_details_GetCurrentVariantState(__int64 a1, _DWORD *a2)
{
  char v2; // al
  _BOOL8 v4; // r8
  __int64 v5; // rdx
  int v6; // eax
  int v7; // ebp
  char v8; // r14
  int v9; // r15d
  __int64 *v10; // rsi
  __int64 v11; // rax
  __int128 v13; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+30h] [rbp-38h]
  __int64 v15; // [rsp+70h] [rbp+8h]

  v2 = *(_BYTE *)(a1 + 28);
  v4 = v2 == 3 || v2 == 2;
  *a2 = 1;
  v5 = *(unsigned int *)(a1 + 24);
  v14 = 0LL;
  v13 = 0LL;
  v6 = wil_RtlStagingConfig_QueryFeatureState(&v13, v5, v4);
  v7 = ((_DWORD)v14 != 0 ? 0x400 : 0) | (HIDWORD(v14) != 0 ? 0x800 : 0);
  if ( v6 )
  {
    v8 = BYTE4(v13);
    v9 = HIDWORD(v13);
  }
  else
  {
    v9 = *(_DWORD *)(a1 + 48);
    v8 = *(_BYTE *)(a1 + 40);
  }
  v10 = *(__int64 **)(a1 + 32);
  if ( v10 )
  {
    while ( 1 )
    {
      v11 = *v10;
      if ( !*v10 )
        break;
      if ( *(_BYTE *)(v11 + 30) || *(_BYTE *)(v11 + 29) )
      {
        if ( !*(_BYTE *)(v11 + 31) )
        {
LABEL_13:
          LODWORD(v15) = v7;
          goto LABEL_14;
        }
        ++v10;
      }
      else
      {
        ++v10;
        if ( (wil_details_FeatureStateCache_GetCachedFeatureEnabledState(*(unsigned int **)v11) & 1) == 0 )
          goto LABEL_13;
      }
    }
  }
  if ( v8 )
  {
    LODWORD(v15) = v7 ^ ((v8 & 0x3F) << 12);
    if ( DWORD2(v13) )
      HIDWORD(v15) = v9;
    else
LABEL_14:
      HIDWORD(v15) = *(_DWORD *)(a1 + 48);
  }
  else
  {
    HIDWORD(v15) = *(_DWORD *)(a1 + 48);
    LODWORD(v15) = v7 | ((*(_BYTE *)(a1 + 40) & 0x3F) << 12);
  }
  return v15;
}
