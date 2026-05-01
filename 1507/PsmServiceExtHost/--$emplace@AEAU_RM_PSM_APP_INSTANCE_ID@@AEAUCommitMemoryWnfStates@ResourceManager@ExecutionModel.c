/*
 * XREFs of ??$emplace@AEAU_RM_PSM_APP_INSTANCE_ID@@AEAUCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@QEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@utl@@_N@1@AEAU_RM_PSM_APP_INSTANCE_ID@@AEAUCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@Z @ 0x1800038B0
 * Callers:
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x1800112A8 (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 * Callees:
 *     ?_EmplaceImpl@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@2@@Z @ 0x1800037F4 (-_EmplaceImpl@-$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U-$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UComm.c)
 *     ??$?RU_RM_PSM_APP_INSTANCE_ID@@AEAU0@@?$construct@U_RM_PSM_APP_INSTANCE_ID@@@utl@@QEBA_NPEAU_RM_PSM_APP_INSTANCE_ID@@AEAU2@@Z @ 0x18000ACE8 (--$-RU_RM_PSM_APP_INSTANCE_ID@@AEAU0@@-$construct@U_RM_PSM_APP_INSTANCE_ID@@@utl@@QEBA_NPEAU_RM_.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180024D70 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180024D7C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall utl::_HashTable<_RM_PSM_APP_INSTANCE_ID,utl::pair<_RM_PSM_APP_INSTANCE_ID const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_APP_INSTANCE_ID>,utl::equal_to<_RM_PSM_APP_INSTANCE_ID>,utl::allocator<utl::pair<_RM_PSM_APP_INSTANCE_ID const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::emplace<_RM_PSM_APP_INSTANCE_ID &,ExecutionModel::ResourceManager::CommitMemoryWnfStates &>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _OWORD *a4)
{
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 *v11; // rdi
  char v12; // al
  __int64 *Block; // rax

  v8 = (__int64 *)operator new(0x250uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v8;
  if ( v8
    && (v12 = utl::construct<_RM_PSM_APP_INSTANCE_ID>::operator()<_RM_PSM_APP_INSTANCE_ID,_RM_PSM_APP_INSTANCE_ID &>(
                v9,
                v8 + 3,
                a3),
        *((_OWORD *)v11 + 36) = *a4,
        v12) )
  {
    Block = v11;
    v11 = 0LL;
  }
  else
  {
    Block = v11;
    if ( v11 )
      Block = 0LL;
  }
  utl::_HashTable<_RM_PSM_APP_INSTANCE_ID,utl::pair<_RM_PSM_APP_INSTANCE_ID const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_APP_INSTANCE_ID>,utl::equal_to<_RM_PSM_APP_INSTANCE_ID>,utl::allocator<utl::pair<_RM_PSM_APP_INSTANCE_ID const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_EmplaceImpl(
    a1,
    a2,
    v10,
    0LL,
    Block);
  if ( v11 )
    operator delete(v11);
  return a2;
}
