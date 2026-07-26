/*
 * XREFs of ndisOidPostRemovePMProtocolOffload @ 0x1C000DE90
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C000E404 (ndisGetOidSourceHandle.c)
 *     ndisDeletePatternEntry @ 0x1C000E4A8 (ndisDeletePatternEntry.c)
 *     ndisGetCombinedPMConfig @ 0x1C001BE60 (ndisGetCombinedPMConfig.c)
 *     ndisGetPatternEffectivePriority @ 0x1C004453C (ndisGetPatternEffectivePriority.c)
 *     ndisUpdateWmiPMParamsForProtocolOffloads @ 0x1C004594C (ndisUpdateWmiPMParamsForProtocolOffloads.c)
 *     ndisMiniportPMParametersUpdated @ 0x1C00ACAAC (ndisMiniportPMParametersUpdated.c)
 */

_UNKNOWN **__fastcall ndisOidPostRemovePMProtocolOffload(__int64 *a1)
{
  _UNKNOWN **result; // rax
  __int64 v3; // r14
  __int64 v4; // rdi
  __int64 v5; // rsi
  unsigned int v6; // ebp
  __int64 v7; // rcx
  __int64 OidSourceHandle; // rax
  _QWORD *v9; // r10
  __int64 v10; // r11
  _UNKNOWN **v11; // r8
  _QWORD *v12; // rdx
  _QWORD *v13; // rcx
  _QWORD *v14; // r9
  __int64 v15; // rcx
  int PatternEffectivePriority; // eax
  __int64 v17; // r8
  _QWORD *v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = a1[3];
  v4 = *a1;
  v5 = a1[4];
  if ( *((_DWORD *)a1 + 10) )
    return result;
  result = *(_UNKNOWN ***)(v5 + 40);
  v6 = *(_DWORD *)result;
  if ( v4 )
  {
    OidSourceHandle = ndisGetOidSourceHandle(a1[4]);
    v9 = (_QWORD *)(v4 + 976);
    v10 = OidSourceHandle;
    result = *(_UNKNOWN ***)(v4 + 976);
    if ( !result )
      return result;
    do
    {
      v11 = result;
      if ( *((_DWORD *)result + 49) == v6 )
        break;
      v9 = result;
      v11 = 0LL;
      result = (_UNKNOWN **)*result;
    }
    while ( result );
    if ( !v11 )
      return result;
    v12 = 0LL;
    v13 = v11 + 1;
    if ( v11 == (_UNKNOWN **)-8LL )
      return result;
    do
    {
      v14 = v13 - 1;
      if ( v13[2] == v10 )
        break;
      v12 = v13;
      v14 = 0LL;
      v13 = (_QWORD *)*v13;
    }
    while ( v13 );
    if ( !v14 )
      return result;
    if ( v12 )
    {
      *v12 = *v13;
      PatternEffectivePriority = ndisGetPatternEffectivePriority(v11);
      *(_DWORD *)(v17 + 36) = PatternEffectivePriority;
    }
    else
    {
      v15 = *v13;
      if ( v15 )
      {
        v18 = (_QWORD *)(v15 - 8);
        *v9 = v18;
        *v18 = *result;
        v19 = ndisGetPatternEffectivePriority(v18);
        *(_DWORD *)(v20 + 36) = v19;
      }
      else
      {
        *v9 = *result;
      }
    }
    ExFreePoolWithTag(v14, 0);
    result = (_UNKNOWN **)ndisGetOidSourceHandle(v5);
    if ( result == (_UNKNOWN **)&ndisIntReqWmi )
    {
      ndisUpdateWmiPMParamsForProtocolOffloads(v4);
      ndisGetCombinedPMConfig(v4, v4 + 1120);
      result = (_UNKNOWN **)ndisMiniportPMParametersUpdated(v4);
    }
  }
  if ( a1[3] )
    result = (_UNKNOWN **)ndisDeletePatternEntry(v3 + 512, v6);
  v7 = a1[1];
  if ( v7 )
  {
    if ( (*(_DWORD *)(v5 + 88) & 0x4000) == 0 )
      return (_UNKNOWN **)ndisDeletePatternEntry(v7 + 864, v6);
  }
  return result;
}
