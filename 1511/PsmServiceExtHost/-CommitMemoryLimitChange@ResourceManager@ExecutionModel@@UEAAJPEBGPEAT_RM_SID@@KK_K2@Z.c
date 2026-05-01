/*
 * XREFs of ?CommitMemoryLimitChange@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K2@Z @ 0x18000F650
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z @ 0x18000CDE0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180010680 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 * Callees:
 *     RmpPsmAppInstanceIdInitializeFromCStr @ 0x180002A70 (RmpPsmAppInstanceIdInitializeFromCStr.c)
 *     ??$_EqualRangeImpl@U_RM_PSM_APP_INSTANCE_ID@@@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBU_RM_PSM_APP_INSTANCE_ID@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@1@2AEA_K@Z @ 0x18001DED0 (--$_EqualRangeImpl@U_RM_PSM_APP_INSTANCE_ID@@@-$_HashTable@U_RM_PSM_APP_INSTANCE_ID_ea_18001DED0.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     ?PublishCommitMemoryWnfStateData@ResourceManager@ExecutionModel@@SAJU_WNF_STATE_NAME@@PEAEK@Z @ 0x18003D888 (-PublishCommitMemoryWnfStateData@ResourceManager@ExecutionModel@@SAJU_WNF_STATE_NAME@@PEAEK@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::CommitMemoryLimitChange(
        ExecutionModel::ResourceManager *this,
        wchar_t *a2,
        union _RM_SID *a3,
        int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned __int64 a7)
{
  __int64 result; // rax
  char *v9; // rdi
  int v10; // edx
  __int64 v11; // rbx
  struct _WNF_STATE_NAME v12; // rcx
  __int64 v13; // [rsp+30h] [rbp-288h] BYREF
  _BYTE v14[8]; // [rsp+38h] [rbp-280h] BYREF
  _BYTE v15[8]; // [rsp+40h] [rbp-278h] BYREF
  unsigned __int8 v16[8]; // [rsp+48h] [rbp-270h] BYREF
  unsigned __int64 v17; // [rsp+50h] [rbp-268h]
  wchar_t Destination[280]; // [rsp+60h] [rbp-258h] BYREF

  if ( !a7 )
    return 0LL;
  RmpPsmAppInstanceIdInitializeFromCStr(Destination, a2, a3, a4, a5, a6);
  v13 = 0LL;
  v9 = (char *)this + 288;
  utl::_HashTable<_RM_PSM_APP_INSTANCE_ID,utl::pair<_RM_PSM_APP_INSTANCE_ID const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_APP_INSTANCE_ID>,utl::equal_to<_RM_PSM_APP_INSTANCE_ID>,utl::allocator<utl::pair<_RM_PSM_APP_INSTANCE_ID const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_EqualRangeImpl<_RM_PSM_APP_INSTANCE_ID>(
    (_DWORD)v9,
    v10,
    (unsigned int)Destination,
    (unsigned int)&v13,
    (__int64)v14,
    (__int64)v15);
  v11 = v13;
  if ( (char *)v13 == v9 || *(_QWORD *)(v13 + 576) == a7 )
    return 0LL;
  v12 = *(struct _WNF_STATE_NAME *)(v13 + 592);
  *(_QWORD *)v16 = *(_QWORD *)(v13 + 576);
  v17 = a7;
  result = ExecutionModel::ResourceManager::PublishCommitMemoryWnfStateData(v12, v16, 0x10u);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(v11 + 576) = a7;
    return 0LL;
  }
  return result;
}
