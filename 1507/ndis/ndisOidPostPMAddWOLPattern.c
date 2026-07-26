/*
 * XREFs of ndisOidPostPMAddWOLPattern @ 0x1C000E1B0
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C000E404 (ndisGetOidSourceHandle.c)
 *     ndisMiniportPostAddWOLPattern @ 0x1C000E424 (ndisMiniportPostAddWOLPattern.c)
 *     ndisGetCombinedPMConfig @ 0x1C001BE60 (ndisGetCombinedPMConfig.c)
 *     ndisEnablePMParamForPattern @ 0x1C00443B0 (ndisEnablePMParamForPattern.c)
 *     ndisMiniportPostAddWakeUpPattern @ 0x1C0044C60 (ndisMiniportPostAddWakeUpPattern.c)
 *     ndisMiniportPMParametersUpdated @ 0x1C00ACAAC (ndisMiniportPMParametersUpdated.c)
 */

void __fastcall ndisOidPostPMAddWOLPattern(_QWORD *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbp
  __int64 v4; // rbx
  int v5; // eax
  unsigned __int8 v6; // al
  PVOID *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  PVOID *v13; // r14
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx

  v1 = a1[4];
  v3 = a1[3];
  v4 = *a1;
  v5 = *(_DWORD *)(v1 + 88);
  if ( (v5 & 0x40000) == 0 && (v5 & 0x80000) == 0 )
  {
    if ( *((_DWORD *)a1 + 10) )
    {
      v13 = *(PVOID **)(v1 + 144);
      if ( v13 )
      {
        ExFreePoolWithTag(v13[3], 0);
        *(_DWORD *)(v1 + 32) = *(_DWORD *)v13;
        *(_QWORD *)(v1 + 40) = v13[1];
        *(_DWORD *)(v1 + 48) = *((_DWORD *)v13 + 4);
        ExFreePoolWithTag(v13, 0);
        *(_QWORD *)(v1 + 144) = 0LL;
      }
      if ( a1[3] )
      {
        v14 = *(void **)(v1 + 160);
        if ( v14 )
          ExFreePoolWithTag(v14, 0);
      }
      if ( a1[1] )
      {
        if ( (*(_DWORD *)(v1 + 88) & 0x4000) == 0 )
        {
          v15 = *(void **)(v1 + 160);
          if ( v15 )
            ExFreePoolWithTag(v15, 0);
        }
      }
      if ( *a1 )
      {
        v16 = *(void **)(v4 + 192);
        *(_QWORD *)(v4 + 192) = 0LL;
        if ( v16 )
          ExFreePoolWithTag(v16, 0);
        if ( *(_DWORD *)(v1 + 48) >= 0x98u )
          *(_DWORD *)(*(_QWORD *)(v1 + 40) + 148LL) = 0;
      }
    }
    else
    {
      if ( v4 )
      {
        v6 = *(_BYTE *)(v4 + 32);
        if ( v6 > 6u || v6 == 6 && *(_BYTE *)(v4 + 33) >= 0x14u )
        {
          ndisMiniportPostAddWOLPattern(*a1, v1);
          if ( (_UNKNOWN *)ndisGetOidSourceHandle(v1) == &ndisIntReqWmi )
          {
            ndisEnablePMParamForPattern(*(_QWORD *)(v1 + 40), v4 + 1140);
            ndisGetCombinedPMConfig(v4, v4 + 1120);
            ndisMiniportPMParametersUpdated(v4);
          }
        }
        else
        {
          ndisMiniportPostAddWakeUpPattern(*a1, v1);
          v7 = *(PVOID **)(v1 + 144);
          ExFreePoolWithTag(v7[3], 0);
          *(_DWORD *)(v1 + 32) = *(_DWORD *)v7;
          *(_QWORD *)(v1 + 40) = v7[1];
          *(_DWORD *)(v1 + 48) = *((_DWORD *)v7 + 4);
          ExFreePoolWithTag(v7, 0);
          *(_QWORD *)(v1 + 144) = 0LL;
          *(_DWORD *)(*(_QWORD *)(v1 + 40) + 148LL) = *(_DWORD *)(v1 + 152);
        }
      }
      if ( a1[3] )
      {
        v8 = *(_QWORD *)(v1 + 40);
        v9 = *(_QWORD *)(v1 + 160);
        *(_DWORD *)(v9 + 196) = *(_DWORD *)(v8 + 148);
        *(_DWORD *)(v9 + 40) = *(_DWORD *)(v8 + 148);
        *(_QWORD *)v9 = *(_QWORD *)(v3 + 504);
        *(_QWORD *)(v3 + 504) = v9;
      }
      v10 = a1[1];
      if ( v10 )
      {
        if ( (*(_DWORD *)(v1 + 88) & 0x4000) == 0 )
        {
          v11 = *(_QWORD *)(v1 + 40);
          v12 = *(_QWORD *)(v1 + 160);
          *(_DWORD *)(v12 + 196) = *(_DWORD *)(v11 + 148);
          *(_DWORD *)(v12 + 40) = *(_DWORD *)(v11 + 148);
          *(_QWORD *)v12 = *(_QWORD *)(v10 + 856);
          *(_QWORD *)(v10 + 856) = v12;
        }
      }
    }
  }
}
