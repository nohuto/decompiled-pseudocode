/*
 * XREFs of ?UpdateCommitMemoryLevel@ResourceManager@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@W4_RM_COMMIT_LEVEL@@1@Z @ 0x18000C6D0
 * Callers:
 *     ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x18000B0A0 (-RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x18000C360 (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 * Callees:
 *     ??$_EqualRangeImpl@U_RM_PSM_HOST_INFO@@@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBU_RM_PSM_HOST_INFO@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180017C40 (--$_EqualRangeImpl@U_RM_PSM_HOST_INFO@@@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$_ea_180017C40.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::UpdateCommitMemoryLevel(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned int v4; // edi
  __int64 v7; // rbx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+38h] [rbp-20h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h] BYREF
  int v14; // [rsp+68h] [rbp+10h] BYREF
  int v15; // [rsp+6Ch] [rbp+14h]

  v4 = 0;
  if ( !*(_DWORD *)(a2 + 56) && a3 != a4 )
  {
    v11 = 0LL;
    v7 = a1 + 248;
    utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_EqualRangeImpl<_RM_PSM_HOST_INFO>(
      a1 + 248,
      a2,
      a2 + 64,
      (unsigned int)&v11,
      (__int64)&v13,
      (__int64)&v12);
    if ( v11 != v7 )
    {
      v9 = *(_QWORD *)(v11 + 576);
      v14 = a3;
      v15 = a4;
      v10 = RtlPublishWnfStateData(v9, 0LL, &v14, 8LL, 0LL);
      if ( v10 >= 0 )
        return 0;
      return (unsigned int)v10;
    }
  }
  return v4;
}
