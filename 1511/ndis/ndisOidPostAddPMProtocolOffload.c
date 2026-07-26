/*
 * XREFs of ndisOidPostAddPMProtocolOffload @ 0x1C0001000
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C0010ADC (ndisGetOidSourceHandle.c)
 *     ndisInsertPatternListEntry @ 0x1C0010B58 (ndisInsertPatternListEntry.c)
 *     ndisGetCombinedPMConfig @ 0x1C00223A4 (ndisGetCombinedPMConfig.c)
 *     ndisEnablePMParamForProtocolOffload @ 0x1C0045984 (ndisEnablePMParamForProtocolOffload.c)
 *     ndisGetPatternEffectivePriority @ 0x1C0045AD4 (ndisGetPatternEffectivePriority.c)
 *     ndisMiniportPMParametersUpdated @ 0x1C00AA4DC (ndisMiniportPMParametersUpdated.c)
 */

void __fastcall ndisOidPostAddPMProtocolOffload(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rbp
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rdx
  int PatternEffectivePriority; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  __int64 v20; // rbx

  v1 = a1[4];
  v3 = a1[3];
  v4 = *a1;
  v5 = *(_DWORD *)(v1 + 88);
  if ( (v5 & 0x40000) == 0 && (v5 & 0x80000) == 0 )
  {
    if ( *((_DWORD *)a1 + 10) )
    {
      if ( v3 )
      {
        v17 = *(void **)(v1 + 160);
        if ( v17 )
          ExFreePoolWithTag(v17, 0);
      }
      if ( a1[1] )
      {
        if ( (*(_DWORD *)(v1 + 88) & 0x4000) == 0 )
        {
          v18 = *(void **)(v1 + 160);
          if ( v18 )
            ExFreePoolWithTag(v18, 0);
        }
      }
      if ( *a1 )
      {
        v19 = *(void **)(v4 + 192);
        v20 = *(_QWORD *)(v1 + 40);
        *(_QWORD *)(v4 + 192) = 0LL;
        if ( v19 )
          ExFreePoolWithTag(v19, 0);
        *(_DWORD *)(v20 + 148) = 0;
      }
    }
    else
    {
      if ( v4 )
      {
        v7 = *(_QWORD *)(v4 + 192);
        *(_QWORD *)(v4 + 192) = 0LL;
        v8 = (_QWORD *)(v7 + 8);
        v9 = *(_QWORD **)(v7 + 8);
        if ( v9 )
        {
          *v8 = 0LL;
          *v8 = *v9;
          *v9 = v8;
          PatternEffectivePriority = ndisGetPatternEffectivePriority(v9 - 1);
          *(_DWORD *)(v14 + 36) = PatternEffectivePriority;
        }
        else
        {
          ndisInsertPatternListEntry(v4 + 976, v7);
          *(_DWORD *)(v10 + 36) = *(_DWORD *)(v10 + 32);
        }
        if ( (_UNKNOWN *)ndisGetOidSourceHandle(v1) == &ndisIntReqWmi )
        {
          ndisEnablePMParamForProtocolOffload(*(_QWORD *)(v1 + 40), v4 + 1140);
          ndisGetCombinedPMConfig(v4, v4 + 1120);
          ndisMiniportPMParametersUpdated(v4);
        }
      }
      if ( a1[3] )
      {
        v11 = *(_QWORD *)(v1 + 40);
        v12 = *(_QWORD *)(v1 + 160);
        *(_DWORD *)(v12 + 196) = *(_DWORD *)(v11 + 148);
        *(_DWORD *)(v12 + 40) = *(_DWORD *)(v11 + 148);
        *(_QWORD *)v12 = *(_QWORD *)(v3 + 512);
        *(_QWORD *)(v3 + 512) = v12;
      }
      v6 = a1[1];
      if ( v6 )
      {
        if ( (*(_DWORD *)(v1 + 88) & 0x4000) == 0 )
        {
          v15 = *(_QWORD *)(v1 + 40);
          v16 = *(_QWORD *)(v1 + 160);
          *(_DWORD *)(v16 + 196) = *(_DWORD *)(v15 + 148);
          *(_DWORD *)(v16 + 40) = *(_DWORD *)(v15 + 148);
          *(_QWORD *)v16 = *(_QWORD *)(v6 + 864);
          *(_QWORD *)(v6 + 864) = v16;
        }
      }
    }
  }
}
