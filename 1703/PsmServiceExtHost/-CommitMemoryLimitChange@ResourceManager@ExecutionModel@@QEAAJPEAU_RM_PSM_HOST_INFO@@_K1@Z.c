/*
 * XREFs of ?CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K1@Z @ 0x18000C588
 * Callers:
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x180008E60 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 *     ?RmpActivityHostPublishCommitLimit@@YAJPEAU_RM_ACTIVITY_HOST@@_KK@Z @ 0x18001B27C (-RmpActivityHostPublishCommitLimit@@YAJPEAU_RM_ACTIVITY_HOST@@_KK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ??$_EqualRangeImpl@U_RM_PSM_HOST_INFO@@@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBU_RM_PSM_HOST_INFO@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180017C40 (--$_EqualRangeImpl@U_RM_PSM_HOST_INFO@@@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$_ea_180017C40.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::CommitMemoryLimitChange(
        ExecutionModel::ResourceManager *this,
        struct _RM_PSM_HOST_INFO *a2,
        __int64 a3,
        __int64 a4)
{
  char *v4; // rbx
  unsigned int v5; // edi
  __int64 v8; // rcx
  unsigned int v9; // eax
  const struct _TlgProvider_t *v10; // rcx
  const GUID *v11; // r8
  const GUID *v12; // r9
  unsigned int v13; // [rsp+30h] [rbp-89h] BYREF
  __int64 v14; // [rsp+38h] [rbp-81h] BYREF
  __int64 v15; // [rsp+40h] [rbp-79h] BYREF
  __int64 v16; // [rsp+48h] [rbp-71h] BYREF
  _BYTE v17[8]; // [rsp+50h] [rbp-69h] BYREF
  _BYTE v18[8]; // [rsp+58h] [rbp-61h] BYREF
  _QWORD v19[2]; // [rsp+60h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-49h] BYREF
  int *v21; // [rsp+90h] [rbp-29h]
  __int64 v22; // [rsp+98h] [rbp-21h]
  char *v23; // [rsp+A0h] [rbp-19h]
  __int64 v24; // [rsp+A8h] [rbp-11h]
  __int64 *v25; // [rsp+B0h] [rbp-9h]
  __int64 v26; // [rsp+B8h] [rbp-1h]
  __int64 *v27; // [rsp+C0h] [rbp+7h]
  __int64 v28; // [rsp+C8h] [rbp+Fh]

  v15 = a3;
  v4 = (char *)this + 248;
  v16 = a4;
  v5 = 0;
  v14 = 0LL;
  utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_EqualRangeImpl<_RM_PSM_HOST_INFO>(
    (_DWORD)this + 248,
    (_DWORD)a2,
    (_DWORD)a2,
    (unsigned int)&v14,
    (__int64)v18,
    (__int64)v17);
  if ( (char *)v14 != v4 )
  {
    v8 = *(_QWORD *)(v14 + 584);
    v19[0] = v15;
    v19[1] = v16;
    v9 = RtlPublishWnfStateData(v8, 0LL, v19, 16LL, 0LL);
    LODWORD(v10) = v9;
    v13 = v9;
    if ( (unsigned int)dword_18004D030 > 5 && TlgKeywordOn((TraceLoggingHProvider)v9, 1uLL) )
    {
      v22 = 4LL;
      v21 = (int *)&v13;
      v23 = (char *)a2 + 544;
      v25 = &v15;
      v27 = &v16;
      v24 = 8LL;
      v26 = 8LL;
      v28 = 8LL;
      TlgWrite(v10, &unk_18003FE75, v11, v12, 6u, &pData);
      LODWORD(v10) = v13;
    }
    if ( (int)v10 >= 0 )
      LODWORD(v10) = 0;
    return (unsigned int)v10;
  }
  return v5;
}
