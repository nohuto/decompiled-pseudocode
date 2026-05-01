/*
 * XREFs of ?UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x18000F300
 * Callers:
 *     ?RmSrvResourceSetUpdateProperties@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180014990 (-RmSrvResourceSetUpdateProperties@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAT_RM_ACTIVITY_IMPORTANCE@@PE.c)
 * Callees:
 *     RmpResourceLimitsAreLegal @ 0x180003EA8 (RmpResourceLimitsAreLegal.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180005B60 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x18000D8D0 (-CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180011DF0 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpImportanceIsValidForConfiguration@@YAKT_RM_ACTIVITY_IMPORTANCE@@T_RM_POLICY_CUSTOMIZATION_FLAGS@@@Z @ 0x180013B68 (-RmpImportanceIsValidForConfiguration@@YAKT_RM_ACTIVITY_IMPORTANCE@@T_RM_POLICY_CUSTOMIZATION_FL.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::UpdateImportanceAndResourceLimits(
        ExecutionModel::ResourceSet *this,
        union _RM_ACTIVITY_IMPORTANCE *a2,
        struct _RM_RESOURCE_LIMITS *a3)
{
  int v4; // r14d
  unsigned int v7; // ebx
  const struct _TlgProvider_t *v8; // rcx
  const GUID *cData; // r9
  const struct _TlgProvider_t *v10; // rcx
  const struct _TlgProvider_t *v11; // rcx
  const GUID *v12; // r8
  const GUID *v13; // r9
  struct _RM_ACTIVITY_HOST *v14; // rcx
  unsigned int v15; // edx
  int v17; // edi
  int v18; // ebx
  const struct _TlgProvider_t *v19; // rcx
  const GUID *v20; // r8
  int v21; // ecx
  int v22; // [rsp+30h] [rbp-A9h] BYREF
  __int64 v23; // [rsp+38h] [rbp-A1h] BYREF
  __int64 v24; // [rsp+40h] [rbp-99h] BYREF
  __int64 v25; // [rsp+48h] [rbp-91h] BYREF
  __int64 v26; // [rsp+50h] [rbp-89h] BYREF
  __int64 v27; // [rsp+58h] [rbp-81h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-79h] BYREF
  __int64 *v29; // [rsp+80h] [rbp-59h]
  __int64 v30; // [rsp+88h] [rbp-51h]
  __int64 *v31; // [rsp+90h] [rbp-49h]
  __int64 v32; // [rsp+98h] [rbp-41h]
  __int64 *v33; // [rsp+A0h] [rbp-39h]
  __int64 v34; // [rsp+A8h] [rbp-31h]
  __int64 *v35; // [rsp+B0h] [rbp-29h]
  const GUID *v36; // [rsp+B8h] [rbp-21h]
  __int64 *v37; // [rsp+C0h] [rbp-19h]
  const GUID *v38; // [rsp+C8h] [rbp-11h]
  __int64 *v39; // [rsp+D0h] [rbp-9h]
  const GUID *v40; // [rsp+D8h] [rbp-1h]

  v4 = 0;
  v7 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 208LL) + 508LL);
  if ( a3 )
  {
    v23 = 672LL;
    if ( !RmpResourceLimitsAreLegal((__int64)a3, &v23, 0LL) )
    {
      v4 = -1073741584;
      return v4 | 0x10000000u;
    }
  }
  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( !a2 || (unsigned int)RmpImportanceIsValidForConfiguration(*(unsigned int *)a2, v7) )
  {
    LODWORD(cData) = 8;
    if ( a3 )
    {
      v17 = *((_DWORD *)this + 363);
      v18 = *((_DWORD *)a3 + 14);
      if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v8, 1uLL) )
      {
        v25 = *((_QWORD *)this + 230);
        v29 = &v25;
        v31 = (__int64 *)&v22;
        v33 = &v23;
        v26 = *((_QWORD *)this + 183);
        v35 = &v26;
        v27 = *((_QWORD *)a3 + 6);
        v37 = &v27;
        v24 = *(_QWORD *)a3;
        v39 = &v24;
        v30 = (__int64)cData;
        v22 = v17;
        v32 = 4LL;
        LODWORD(v23) = v18;
        v34 = 4LL;
        v36 = cData;
        v38 = cData;
        v40 = cData;
        TlgWrite(v19, &unk_1800431FB, v20, cData, (UINT32)cData, &pData);
        LODWORD(cData) = 8;
      }
      if ( (*(_BYTE *)a3 & 0x20) != 0 )
      {
        v21 = v18 & 3;
        if ( (v17 & 3) != v21 )
        {
          *((_DWORD *)this + 363) &= 0xFFFFFFFC;
          *((_DWORD *)this + 363) |= v21;
        }
      }
      if ( *(char *)a3 < 0 && ((unsigned __int8)(v17 ^ v18) & (unsigned __int8)cData) != 0 )
      {
        *((_DWORD *)this + 363) &= ~8u;
        *((_DWORD *)this + 363) |= (unsigned int)cData & v18;
      }
      if ( (*(_DWORD *)a3 & 0x200LL) != 0 )
        *((_QWORD *)this + 183) = *((_QWORD *)a3 + 6);
    }
    if ( !a2 )
      goto LABEL_15;
    v10 = (const struct _TlgProvider_t *)*(unsigned int *)a2;
    if ( (_DWORD)v10 == *((_DWORD *)this + 356) )
      goto LABEL_15;
    if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v10, 1uLL) )
    {
      v24 = *((_QWORD *)this + 230);
      v29 = &v24;
      v31 = &v23;
      v33 = (__int64 *)&v22;
      v30 = 8LL;
      LODWORD(v23) = (_DWORD)v12;
      v32 = 4LL;
      v22 = (int)v11;
      v34 = 4LL;
      TlgWrite(v11, &unk_180042D9F, v12, v13, 5u, &pData);
    }
    *((_DWORD *)this + 356) = *(_DWORD *)a2;
    if ( (*(_WORD *)a2 & 0x100) != 0 )
      *((_DWORD *)this + 351) &= ~0x80u;
    ExecutionModel::ResourceManager::CheckPendingInternalResourceRequestsAsync(*((ExecutionModel::ResourceManager **)this
                                                                               + 3));
    v14 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)this + 174);
    if ( *((_BYTE *)this + 12) )
    {
      v15 = 2;
    }
    else
    {
      if ( !v14 )
      {
LABEL_15:
        if ( *((_BYTE *)this + 12) )
          RmpActivityHostComputeAndApplyEnforcementSettings(*((struct _RM_ACTIVITY_HOST **)this + 174));
        goto LABEL_17;
      }
      v15 = 1;
    }
    RmpActivityHostResourceSetsChanged(v14, v15);
    goto LABEL_15;
  }
  v4 = -1073741585;
LABEL_17:
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return v4 | 0x10000000u;
}
