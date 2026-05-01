/*
 * XREFs of ??$_EqualRangeImpl@U_RM_PSM_HOST_INFO@@@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBU_RM_PSM_HOST_INFO@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180017C40
 * Callers:
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x18000C360 (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 *     ?CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K1@Z @ 0x18000C588 (-CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K1@Z.c)
 *     ?UpdateCommitMemoryLevel@ResourceManager@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@W4_RM_COMMIT_LEVEL@@1@Z @ 0x18000C6D0 (-UpdateCommitMemoryLevel@ResourceManager@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@W4_RM_COMMI.c)
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18000D0B0 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z.c)
 * Callees:
 *     ??R?$equal_to@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NAEBU_RM_PSM_HOST_INFO@@0@Z @ 0x18001613C (--R-$equal_to@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NAEBU_RM_PSM_HOST_INFO@@0@Z.c)
 */

_QWORD *__fastcall utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_EqualRangeImpl<_RM_PSM_HOST_INFO>(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3,
        const wchar_t **a4,
        _QWORD *a5,
        _QWORD *a6)
{
  WCHAR *v9; // rsi
  WCHAR *v10; // rbx
  unsigned __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  const wchar_t *v16; // rbx
  _QWORD *result; // rax
  __int64 *i; // rsi
  unsigned __int64 v19; // rax
  WCHAR v20; // [rsp+48h] [rbp+10h]

  if ( *(_QWORD *)(a1 + 16) )
  {
    v9 = (WCHAR *)(a3 + 232);
    v10 = (WCHAR *)a3;
    v11 = 314159LL;
    if ( a3 < a3 + 232 )
    {
      do
      {
        v20 = RtlUpcaseUnicodeChar(*v10++);
        v11 = HIBYTE(v20) + 37 * ((unsigned __int8)v20 + 37 * v11);
      }
      while ( v10 < v9 );
    }
    v12 = 11LL;
    do
    {
      v13 = *(unsigned __int8 *)v9;
      v9 += 4;
      v11 = *((unsigned __int8 *)v9 - 1)
          + 37
          * (*((unsigned __int8 *)v9 - 2)
           + 37
           * (*((unsigned __int8 *)v9 - 3)
            + 37
            * (*((unsigned __int8 *)v9 - 4)
             + 37
             * (*((unsigned __int8 *)v9 - 5)
              + 37 * (*((unsigned __int8 *)v9 - 6) + 37 * (*((unsigned __int8 *)v9 - 7) + 37 * (v13 + 37 * v11)))))));
      --v12;
    }
    while ( v12 );
    v14 = *(unsigned __int8 *)(a1 + 32);
    v15 = *(_QWORD *)(a1 + 16) + 16 * (v11 & ((8LL << v14) - 1));
    v16 = *(const wchar_t **)v15;
    if ( *(_QWORD *)v15 )
    {
      for ( i = **(__int64 ***)(v15 + 8); v16 != (const wchar_t *)i; v16 = *(const wchar_t **)v16 )
      {
        v19 = *((_QWORD *)v16 + 2);
        if ( v19 > v11 )
          break;
        if ( v19 >= v11 && utl::equal_to<_RM_PSM_HOST_INFO>::operator()(v14, a3, v16 + 12) )
        {
          *a4 = v16;
          *a5 = *(_QWORD *)v16;
          result = a6;
          *a6 = 1LL;
          return result;
        }
      }
    }
  }
  *a4 = (const wchar_t *)a1;
  *a5 = a1;
  result = a6;
  *a6 = 0LL;
  return result;
}
