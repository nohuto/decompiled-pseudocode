/*
 * XREFs of ??$_EqualRangeImpl@U_RM_PSM_APP_INSTANCE_ID@@@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBU_RM_PSM_APP_INSTANCE_ID@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@1@2AEA_K@Z @ 0x18001DED0
 * Callers:
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x18000F4CC (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 *     ?CommitMemoryLimitChange@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K2@Z @ 0x18000F650 (-CommitMemoryLimitChange@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K2@Z.c)
 *     ?UpdateCommitMemoryLevel@ResourceManager@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@W4RmCommitLevel@@@Z @ 0x18000F6B0 (-UpdateCommitMemoryLevel@ResourceManager@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@W4RmCommitL.c)
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z @ 0x18000FDA0 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z.c)
 * Callees:
 *     ??R?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@utl@@QEBA_NAEBU_RM_PSM_APP_INSTANCE_ID@@0@Z @ 0x18001EDB4 (--R-$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@utl@@QEBA_NAEBU_RM_PSM_APP_INSTANCE_ID@@0@Z.c)
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
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // rbx
  _QWORD *result; // rax
  _QWORD *i; // rsi
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // [rsp+50h] [rbp+8h]
  WCHAR v23; // [rsp+58h] [rbp+10h]

  if ( *(_QWORD *)(a1 + 16) )
  {
    v9 = (WCHAR *)(a3 + 464);
    v10 = (WCHAR *)a3;
    v11 = 314159LL;
    if ( a3 < a3 + 464 )
    {
      do
      {
        v23 = RtlUpcaseUnicodeChar(*v10++);
        v11 = HIBYTE(v23) + 37 * ((unsigned __int8)v23 + 37 * v11);
      }
      while ( v10 < v9 );
    }
    v12 = 11LL;
    do
    {
      v13 = *(unsigned __int8 *)v9;
      v9 += 4;
      v14 = *((unsigned __int8 *)v9 - 2)
          + 37
          * (*((unsigned __int8 *)v9 - 3)
           + 37
           * (*((unsigned __int8 *)v9 - 4)
            + 37
            * (*((unsigned __int8 *)v9 - 5)
             + 37 * (*((unsigned __int8 *)v9 - 6) + 37 * (*((unsigned __int8 *)v9 - 7) + 37 * (v13 + 37 * v11))))));
      v15 = *((unsigned __int8 *)v9 - 1);
      v11 = v15 + 37 * v14;
      --v12;
    }
    while ( v12 );
    v22 = v15 + 37 * v14;
    v16 = *(unsigned __int8 *)(a1 + 32);
    LODWORD(v22) = 32769 * (((unsigned int)(9 * v11) >> 11) ^ (9 * v11));
    v17 = *(_QWORD *)(a1 + 16) + 16 * (v22 & ((8LL << v16) - 1));
    v18 = *(_QWORD **)v17;
    if ( *(_QWORD *)v17 )
    {
      for ( i = **(_QWORD ***)(v17 + 8); v18 != i; v18 = (_QWORD *)*v18 )
      {
        v21 = v18[2];
        if ( v21 > v22 )
          break;
        if ( v21 >= v22 && (unsigned __int8)utl::equal_to<_RM_PSM_APP_INSTANCE_ID>::operator()(v16, a3, v18 + 3) )
        {
          *a4 = v18;
          *a5 = *v18;
          result = a6;
          *a6 = 1LL;
          return result;
        }
      }
    }
  }
  *a4 = a1;
  *a5 = a1;
  result = a6;
  *a6 = 0LL;
  return result;
}
