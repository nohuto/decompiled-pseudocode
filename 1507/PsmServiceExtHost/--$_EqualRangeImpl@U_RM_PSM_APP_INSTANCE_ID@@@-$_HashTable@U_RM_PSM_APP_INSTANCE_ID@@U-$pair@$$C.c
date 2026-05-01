/*
 * XREFs of ??$_EqualRangeImpl@U_RM_PSM_APP_INSTANCE_ID@@@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBU_RM_PSM_APP_INSTANCE_ID@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@1@2AEA_K@Z @ 0x1800034E0
 * Callers:
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x1800112A8 (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z @ 0x180011820 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     ?PublishCommitMemoryLevelChange@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_KW4CommitLevelChange@2@@Z @ 0x180037620 (-PublishCommitMemoryLevelChange@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_KW4Comm.c)
 *     ?PublishCommitMemoryLimitChange@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K22@Z @ 0x1800376E0 (-PublishCommitMemoryLimitChange@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K22@Z.c)
 * Callees:
 *     ??R?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@utl@@QEBA_NAEBU_RM_PSM_APP_INSTANCE_ID@@0@Z @ 0x18000A12C (--R-$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@utl@@QEBA_NAEBU_RM_PSM_APP_INSTANCE_ID@@0@Z.c)
 */

_QWORD *__fastcall utl::_HashTable<_RM_PSM_APP_INSTANCE_ID,utl::pair<_RM_PSM_APP_INSTANCE_ID const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_APP_INSTANCE_ID>,utl::equal_to<_RM_PSM_APP_INSTANCE_ID>,utl::allocator<utl::pair<_RM_PSM_APP_INSTANCE_ID const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_EqualRangeImpl<_RM_PSM_APP_INSTANCE_ID>(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  WCHAR *v9; // rsi
  WCHAR *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  _QWORD *v17; // rbx
  _QWORD *result; // rax
  _QWORD *v19; // rsi
  unsigned __int64 v20; // rax
  WCHAR v21; // [rsp+48h] [rbp+10h]

  if ( !*(_QWORD *)(a1 + 16) )
    goto LABEL_7;
  v9 = (WCHAR *)(a3 + 464);
  v10 = (WCHAR *)a3;
  v11 = 314159LL;
  if ( a3 < a3 + 464 )
  {
    do
    {
      v21 = RtlUpcaseUnicodeChar(*v10++);
      v11 = HIBYTE(v21) + 37 * ((unsigned __int8)v21 + 37 * v11);
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
  v14 = 32769 * ((9 * v11) ^ ((unsigned __int64)(9 * v11) >> 11));
  v15 = *(unsigned __int8 *)(a1 + 32);
  v16 = *(_QWORD *)(a1 + 16) + 16 * (v14 & ((8LL << v15) - 1));
  v17 = *(_QWORD **)v16;
  if ( *(_QWORD *)v16 && (v19 = **(_QWORD ***)(v16 + 8), v17 != v19) )
  {
    while ( 1 )
    {
      v20 = v17[2];
      if ( v20 >= v14 )
      {
        if ( v20 > v14 )
          goto LABEL_7;
        if ( (unsigned __int8)utl::equal_to<_RM_PSM_APP_INSTANCE_ID>::operator()(v15, a3, v17 + 3) )
          break;
      }
      v17 = (_QWORD *)*v17;
      if ( v17 == v19 )
        goto LABEL_7;
    }
    *a4 = v17;
    *a5 = *v17;
    result = a6;
    *a6 = 1LL;
  }
  else
  {
LABEL_7:
    *a4 = a1;
    *a5 = a1;
    result = a6;
    *a6 = 0LL;
  }
  return result;
}
