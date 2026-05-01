/*
 * XREFs of ?_Rehash@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@AEAA_NE@Z @ 0x180006B10
 * Callers:
 *     ?_InsertNode@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@AEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@2@0_K@Z @ 0x180006C28 (-_InsertNode@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicati.c)
 * Callees:
 *     ?_InitBuckets@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEAAXXZ @ 0x1800044FC (-_InitBuckets@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfS.c)
 *     ?_FreeBuckets@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@AEAAXXZ @ 0x180006960 (-_FreeBuckets@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicat.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800208FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

char __fastcall utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,EnforcerApplicationState>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,EnforcerApplicationState>>,0>::_Rehash(
        __int64 a1,
        unsigned __int8 a2)
{
  char v2; // r14
  void *v5; // rsi
  _QWORD *v6; // rax
  __int64 v7; // rdi
  _QWORD *v8; // r11
  _QWORD *v9; // r10
  _QWORD *v10; // rcx
  _QWORD *v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // r9

  v2 = 0;
  if ( a2 <= 0x38u )
  {
    v5 = (unsigned __int64)(8LL << a2) > 0xFFFFFFFFFFFFFFFLL
       ? 0LL
       : operator new(16 * (8LL << a2), (const struct std::nothrow_t *)&unk_18003CF1A);
    if ( v5 )
    {
      v2 = 1;
      utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,EnforcerApplicationState>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,EnforcerApplicationState>>,0>::_FreeBuckets(a1);
      *(_QWORD *)(a1 + 16) = v5;
      *(_BYTE *)(a1 + 32) = a2;
      utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_InitBuckets(a1);
      v6 = *(_QWORD **)a1;
      v7 = (8LL << *(_BYTE *)(a1 + 32)) - 1;
      while ( v6 != (_QWORD *)a1 )
      {
        v8 = v6;
        v6 = (_QWORD *)*v6;
        v9 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 16 * (v7 & v8[2]));
        v10 = (_QWORD *)v9[1];
        if ( v10 )
        {
          v12 = (_QWORD *)*v10;
          if ( v12 != v8 )
          {
            v13 = *v8;
            v14 = *(_QWORD **)(*v8 + 8LL);
            *(_QWORD *)v8[1] = *v8;
            *(_QWORD *)(v13 + 8) = v8[1];
            v8[1] = v12[1];
            *(_QWORD *)v12[1] = v8;
            *v14 = v12;
            v12[1] = v14;
          }
        }
        else
        {
          *v9 = v8;
        }
        v9[1] = v8;
      }
    }
  }
  return v2;
}
