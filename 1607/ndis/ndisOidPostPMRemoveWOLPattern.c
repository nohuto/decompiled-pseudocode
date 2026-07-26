/*
 * XREFs of ndisOidPostPMRemoveWOLPattern @ 0x1C0049D40
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C0022244 (ndisGetOidSourceHandle.c)
 *     ndisGetCombinedPMConfig @ 0x1C0022264 (ndisGetCombinedPMConfig.c)
 *     ndisDeletePatternEntry @ 0x1C0048F5C (ndisDeletePatternEntry.c)
 *     ndisMiniportPostRemoveWoLPattern @ 0x1C0049A38 (ndisMiniportPostRemoveWoLPattern.c)
 *     ndisPostRemoveMiniportWakeUpPattern @ 0x1C004A5FC (ndisPostRemoveMiniportWakeUpPattern.c)
 *     ndisUpdateWmiPMParamsForPatterns @ 0x1C004AEB8 (ndisUpdateWmiPMParamsForPatterns.c)
 *     ndisMiniportPMParametersUpdated @ 0x1C00B12E8 (ndisMiniportPMParametersUpdated.c)
 */

void __fastcall ndisOidPostPMRemoveWOLPattern(__int64 *a1)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 v4; // rdi
  void *v5; // rbx
  unsigned __int8 v6; // al
  PVOID *v7; // rbx
  int v8; // ebx
  __int64 v9; // rcx

  v2 = a1[3];
  v3 = *a1;
  v4 = a1[4];
  if ( *((_DWORD *)a1 + 10) )
  {
    v5 = *(void **)(v4 + 144);
    if ( v5 )
    {
      *(_DWORD *)(v4 + 32) = *(_DWORD *)v5;
      *(_QWORD *)(v4 + 40) = *((_QWORD *)v5 + 1);
      *(_DWORD *)(v4 + 48) = *((_DWORD *)v5 + 4);
      ExFreePoolWithTag(*((PVOID *)v5 + 3), 0);
      ExFreePoolWithTag(v5, 0);
      *(_QWORD *)(v4 + 144) = 0LL;
    }
  }
  else
  {
    if ( v3 )
    {
      v6 = *(_BYTE *)(v3 + 32);
      if ( v6 > 6u || v6 == 6 && *(_BYTE *)(v3 + 33) >= 0x14u )
      {
        ndisMiniportPostRemoveWoLPattern(*a1, a1[4]);
        if ( (_UNKNOWN *)ndisGetOidSourceHandle(v4) == &ndisIntReqWmi )
        {
          ndisUpdateWmiPMParamsForPatterns(v3);
          ndisGetCombinedPMConfig(v3, v3 + 1120);
          ndisMiniportPMParametersUpdated(v3);
        }
      }
      else
      {
        ndisPostRemoveMiniportWakeUpPattern(*a1, a1[4], 0LL);
        v7 = *(PVOID **)(v4 + 144);
        ExFreePoolWithTag(v7[3], 0);
        *(_DWORD *)(v4 + 32) = *(_DWORD *)v7;
        *(_QWORD *)(v4 + 40) = v7[1];
        *(_DWORD *)(v4 + 48) = *((_DWORD *)v7 + 4);
        ExFreePoolWithTag(v7, 0);
        *(_QWORD *)(v4 + 144) = 0LL;
      }
    }
    v8 = **(_DWORD **)(v4 + 40);
    if ( a1[3] )
      ndisDeletePatternEntry((_DWORD *)(v2 + 504), v8);
    v9 = a1[1];
    if ( v9 && (*(_DWORD *)(v4 + 88) & 0x4000) == 0 )
      ndisDeletePatternEntry((_DWORD *)(v9 + 856), v8);
  }
}
