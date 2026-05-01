/*
 * XREFs of ?_FindKey@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@AEAA_NV?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@utl@@@2@AEBU_RM_PSM_HOST_INFO@@_KPEAPEAU?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@2@@Z @ 0x180015EF0
 * Callers:
 *     ?_EmplaceImpl@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@2@@Z @ 0x180016090 (-_EmplaceImpl@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicat.c)
 * Callees:
 *     ??R?$equal_to@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NAEBU_RM_PSM_HOST_INFO@@0@Z @ 0x18001613C (--R-$equal_to@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NAEBU_RM_PSM_HOST_INFO@@0@Z.c)
 *     ?_InitBuckets@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEAAXXZ @ 0x180018F88 (-_InitBuckets@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfS.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021734 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

char __fastcall utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,EnforcerApplicationState>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,EnforcerApplicationState>>,0>::_FindKey(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        unsigned __int64 a4,
        _QWORD *a5)
{
  char v5; // di
  _QWORD *i; // rbx
  __int64 v10; // r8
  unsigned __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rcx
  _QWORD *v14; // rsi
  char result; // al
  void *v16; // r10
  bool v17; // zf
  __int64 v18; // r10

  v5 = 0;
  i = 0LL;
  v10 = *(_QWORD *)(a1 + 16);
  v11 = 8LL << *(_BYTE *)(a1 + 32);
  v12 = a4 & (v11 - 1);
  if ( v10 )
  {
    v13 = 2 * v12;
    if ( *(_QWORD *)(v10 + 16 * v12) )
    {
      if ( a2 && a2 != (_QWORD *)a1 && ((v11 - 1) & a2[2]) == v12 )
      {
        for ( i = a2; i != *(_QWORD **)(v10 + 16 * v12); i = (_QWORD *)i[1] )
        {
          if ( a4 > i[2] )
            break;
        }
      }
      else
      {
        i = *(_QWORD **)(v10 + 16 * v12);
      }
      v14 = **(_QWORD ***)(v10 + 16 * v12 + 8);
      while ( i != v14 )
      {
        if ( i[2] >= a4 )
        {
          if ( i[2] > a4 )
            break;
          if ( (unsigned __int8)utl::equal_to<_RM_PSM_HOST_INFO>::operator()(v13, a3, i + 3) )
          {
            v5 = 1;
            break;
          }
        }
        i = (_QWORD *)*i;
      }
    }
  }
  else
  {
    if ( v11 > 0xFFFFFFFFFFFFFFFLL )
      v16 = 0LL;
    else
      v16 = operator new(16 * v11, (const struct std::nothrow_t *)&unk_18003CFF1);
    *(_QWORD *)(a1 + 16) = v16;
    v17 = v16 == 0LL;
    if ( v16 )
    {
      utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_InitBuckets(a1);
      v17 = v18 == 0;
    }
    v5 = v17;
  }
  result = v5;
  *a5 = i;
  return result;
}
