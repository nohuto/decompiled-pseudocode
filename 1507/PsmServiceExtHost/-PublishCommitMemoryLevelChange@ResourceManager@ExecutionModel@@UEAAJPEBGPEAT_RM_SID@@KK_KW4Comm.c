/*
 * XREFs of ?PublishCommitMemoryLevelChange@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_KW4CommitLevelChange@2@@Z @ 0x180037620
 * Callers:
 *     <none>
 * Callees:
 *     ??$_EqualRangeImpl@U_RM_PSM_APP_INSTANCE_ID@@@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBU_RM_PSM_APP_INSTANCE_ID@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@1@2AEA_K@Z @ 0x1800034E0 (--$_EqualRangeImpl@U_RM_PSM_APP_INSTANCE_ID@@@-$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U-$pair@$$C.c)
 *     RmpPsmAppInstanceIdInitializeFromCStr @ 0x180004CC0 (RmpPsmAppInstanceIdInitializeFromCStr.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     ?PublishCommitMemoryWnfStateData@ResourceManager@ExecutionModel@@SAJU_WNF_STATE_NAME@@PEAEK@Z @ 0x1800377B4 (-PublishCommitMemoryWnfStateData@ResourceManager@ExecutionModel@@SAJU_WNF_STATE_NAME@@PEAEK@Z.c)
 */

__int64 ExecutionModel::ResourceManager::PublishCommitMemoryLevelChange(
        __int64 a1,
        wchar_t *a2,
        void *a3,
        int a4,
        int a5,
        __int64 a6,
        ...)
{
  __int64 v7; // rdx
  __int64 result; // rax
  struct _WNF_STATE_NAME *v9; // [rsp+30h] [rbp-268h] BYREF
  __int64 v10; // [rsp+38h] [rbp-260h] BYREF
  __int64 v11; // [rsp+40h] [rbp-258h] BYREF
  wchar_t Destination[280]; // [rsp+50h] [rbp-248h] BYREF
  va_list va; // [rsp+2D0h] [rbp+38h] BYREF

  va_start(va, a6);
  RmpPsmAppInstanceIdInitializeFromCStr(Destination, a2, a3, a4, a5, a6);
  v9 = 0LL;
  a1 += 272LL;
  utl::_HashTable<_RM_PSM_APP_INSTANCE_ID,utl::pair<_RM_PSM_APP_INSTANCE_ID const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_APP_INSTANCE_ID>,utl::equal_to<_RM_PSM_APP_INSTANCE_ID>,utl::allocator<utl::pair<_RM_PSM_APP_INSTANCE_ID const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_EqualRangeImpl<_RM_PSM_APP_INSTANCE_ID>(
    a1,
    v7,
    (unsigned __int64)Destination,
    &v9,
    &v11,
    &v10);
  if ( v9 == (struct _WNF_STATE_NAME *)a1 )
    return 0LL;
  result = ExecutionModel::ResourceManager::PublishCommitMemoryWnfStateData(v9[72], (unsigned __int8 *)va, 4u);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
