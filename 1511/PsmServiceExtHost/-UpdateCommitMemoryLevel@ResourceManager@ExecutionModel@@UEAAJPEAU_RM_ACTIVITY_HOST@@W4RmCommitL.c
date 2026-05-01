/*
 * XREFs of ?UpdateCommitMemoryLevel@ResourceManager@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@W4RmCommitLevel@@@Z @ 0x18000F6B0
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z @ 0x18000CDE0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180010680 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 * Callees:
 *     ??$_EqualRangeImpl@U_RM_PSM_APP_INSTANCE_ID@@@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBU_RM_PSM_APP_INSTANCE_ID@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@1@2AEA_K@Z @ 0x18001DED0 (--$_EqualRangeImpl@U_RM_PSM_APP_INSTANCE_ID@@@-$_HashTable@U_RM_PSM_APP_INSTANCE_ID_ea_18001DED0.c)
 *     ?PublishCommitMemoryWnfStateData@ResourceManager@ExecutionModel@@SAJU_WNF_STATE_NAME@@PEAEK@Z @ 0x18003D888 (-PublishCommitMemoryWnfStateData@ResourceManager@ExecutionModel@@SAJU_WNF_STATE_NAME@@PEAEK@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::UpdateCommitMemoryLevel(
        struct _WNF_STATE_NAME *a1,
        __int64 a2,
        int a3)
{
  __int64 v3; // rax
  int v4; // r9d
  __int64 result; // rax
  struct _WNF_STATE_NAME *v6; // rbx
  char v7[24]; // [rsp+30h] [rbp-18h] BYREF
  struct _WNF_STATE_NAME *v8; // [rsp+58h] [rbp+10h] BYREF
  BOOL v9; // [rsp+60h] [rbp+18h] BYREF
  char v10; // [rsp+68h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a2 + 600);
  v4 = *(_DWORD *)(v3 + 48);
  *(_DWORD *)(v3 + 48) = a3;
  if ( !v4 )
    return 0LL;
  if ( v4 == a3 )
    return 0LL;
  v6 = a1 + 36;
  v8 = 0LL;
  v9 = v4 > a3;
  utl::_HashTable<_RM_PSM_APP_INSTANCE_ID,utl::pair<_RM_PSM_APP_INSTANCE_ID const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_APP_INSTANCE_ID>,utl::equal_to<_RM_PSM_APP_INSTANCE_ID>,utl::allocator<utl::pair<_RM_PSM_APP_INSTANCE_ID const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_EqualRangeImpl<_RM_PSM_APP_INSTANCE_ID>(
    (_DWORD)a1 + 288,
    a2,
    a2 + 48,
    (unsigned int)&v8,
    (__int64)v7,
    (__int64)&v10);
  if ( v8 == v6 )
    return 0LL;
  result = ExecutionModel::ResourceManager::PublishCommitMemoryWnfStateData(v8[73], (unsigned __int8 *)&v9, 4u);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
