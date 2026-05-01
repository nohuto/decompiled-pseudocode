/*
 * XREFs of ?PublishCommitMemoryLimitChange@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K22@Z @ 0x1800376E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_EqualRangeImpl@U_RM_PSM_APP_INSTANCE_ID@@@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBU_RM_PSM_APP_INSTANCE_ID@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@1@2AEA_K@Z @ 0x1800034E0 (--$_EqualRangeImpl@U_RM_PSM_APP_INSTANCE_ID@@@-$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U-$pair@$$C.c)
 *     RmpPsmAppInstanceIdInitializeFromCStr @ 0x180004CC0 (RmpPsmAppInstanceIdInitializeFromCStr.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     ?PublishCommitMemoryWnfStateData@ResourceManager@ExecutionModel@@SAJU_WNF_STATE_NAME@@PEAEK@Z @ 0x1800377B4 (-PublishCommitMemoryWnfStateData@ResourceManager@ExecutionModel@@SAJU_WNF_STATE_NAME@@PEAEK@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::PublishCommitMemoryLimitChange(
        ExecutionModel::ResourceManager *this,
        wchar_t *a2,
        union _RM_SID *a3,
        int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8)
{
  __int64 v9; // rdx
  struct _WNF_STATE_NAME v10; // rcx
  __int64 result; // rax
  ExecutionModel::ResourceManager *v12; // [rsp+30h] [rbp-278h] BYREF
  __int64 v13; // [rsp+38h] [rbp-270h] BYREF
  __int64 v14; // [rsp+40h] [rbp-268h] BYREF
  unsigned __int8 v15[8]; // [rsp+48h] [rbp-260h] BYREF
  unsigned __int64 v16; // [rsp+50h] [rbp-258h]
  wchar_t Destination[280]; // [rsp+60h] [rbp-248h] BYREF

  RmpPsmAppInstanceIdInitializeFromCStr(Destination, a2, a3, a4, a5, a6);
  v12 = 0LL;
  this = (ExecutionModel::ResourceManager *)((char *)this + 272);
  utl::_HashTable<_RM_PSM_APP_INSTANCE_ID,utl::pair<_RM_PSM_APP_INSTANCE_ID const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_APP_INSTANCE_ID>,utl::equal_to<_RM_PSM_APP_INSTANCE_ID>,utl::allocator<utl::pair<_RM_PSM_APP_INSTANCE_ID const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_EqualRangeImpl<_RM_PSM_APP_INSTANCE_ID>(
    (__int64)this,
    v9,
    (unsigned __int64)Destination,
    &v12,
    &v13,
    &v14);
  if ( v12 == this )
    return 0LL;
  v10 = (struct _WNF_STATE_NAME)*((_QWORD *)v12 + 73);
  *(_QWORD *)v15 = a7;
  v16 = a8;
  result = ExecutionModel::ResourceManager::PublishCommitMemoryWnfStateData(v10, v15, 0x10u);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
