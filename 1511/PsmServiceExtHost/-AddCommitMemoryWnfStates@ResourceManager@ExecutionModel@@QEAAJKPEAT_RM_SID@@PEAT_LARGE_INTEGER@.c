/*
 * XREFs of ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x18000F4CC
 * Callers:
 *     ?RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@UEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z @ 0x1800124E0 (-RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@UEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z.c)
 * Callees:
 *     ?GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAGPEAKPEAT_RM_SID@@11PEA_K@Z @ 0x18000F340 (-GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAGPEAKPEAT_RM_SID@@11PEA_K@Z.c)
 *     ??$_EqualRangeImpl@U_RM_PSM_APP_INSTANCE_ID@@@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBU_RM_PSM_APP_INSTANCE_ID@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@1@2AEA_K@Z @ 0x18001DED0 (--$_EqualRangeImpl@U_RM_PSM_APP_INSTANCE_ID@@@-$_HashTable@U_RM_PSM_APP_INSTANCE_ID_ea_18001DED0.c)
 *     ??$emplace@AEAU_RM_PSM_APP_INSTANCE_ID@@AEAUCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@QEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@utl@@_N@1@AEAU_RM_PSM_APP_INSTANCE_ID@@AEAUCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@Z @ 0x18001E2C0 (--$emplace@AEAU_RM_PSM_APP_INSTANCE_ID@@AEAUCommitMemoryWnfStates@ResourceManager@ExecutionModel.c)
 *     ?CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME@@1@Z @ 0x18001E360 (-CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME.c)
 *     ?DeleteCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAU_WNF_STATE_NAME@@0@Z @ 0x1800204B0 (-DeleteCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAU_WNF_STATE_NAME@@0@Z.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::AddCommitMemoryWnfStates(
        ExecutionModel::ResourceManager *this,
        DWORD a2,
        PSID pSid,
        union _LARGE_INTEGER *a4,
        union _LARGE_INTEGER *a5)
{
  __int64 (__fastcall *v9)(ExecutionModel::ResourceManager *, DWORD, unsigned __int16 *, unsigned int *, union _RM_SID *, unsigned int *, unsigned int *, unsigned __int64 *); // rsi
  __int64 result; // rax
  int v11; // edx
  char *v12; // rbx
  union _LARGE_INTEGER *v13; // rax
  LONGLONG QuadPart; // rcx
  unsigned int v15; // [rsp+40h] [rbp-C0h] BYREF
  union _LARGE_INTEGER *v16; // [rsp+48h] [rbp-B8h] BYREF
  int v17[2]; // [rsp+50h] [rbp-B0h] BYREF
  char v18; // [rsp+58h] [rbp-A8h]
  _BYTE v19[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+68h] [rbp-98h]
  _WNF_STATE_NAME v21; // [rsp+70h] [rbp-90h] BYREF
  struct _WNF_STATE_NAME v22; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int16 v23[232]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v24[68]; // [rsp+250h] [rbp+150h] BYREF
  unsigned int v25; // [rsp+294h] [rbp+194h] BYREF
  unsigned int v26; // [rsp+298h] [rbp+198h] BYREF
  unsigned __int64 v27[2]; // [rsp+2A0h] [rbp+1A0h] BYREF

  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v15 = 464;
  memset_0(v23, 0, 0x228uLL);
  v9 = *(__int64 (__fastcall **)(ExecutionModel::ResourceManager *, DWORD, unsigned __int16 *, unsigned int *, union _RM_SID *, unsigned int *, unsigned int *, unsigned __int64 *))(*(_QWORD *)this + 384LL);
  if ( v9 == ExecutionModel::ResourceManager::GetPSMInfo )
    result = ExecutionModel::ResourceManager::GetPSMInfo(this, a2, v23, &v15, (union _RM_SID *)v24, &v25, &v26, v27);
  else
    result = v9(this, a2, v23, &v15, (union _RM_SID *)v24, &v25, &v26, v27);
  if ( (int)result >= 0 )
  {
    v16 = 0LL;
    v12 = (char *)this + 288;
    utl::_HashTable<_RM_PSM_APP_INSTANCE_ID,utl::pair<_RM_PSM_APP_INSTANCE_ID const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_APP_INSTANCE_ID>,utl::equal_to<_RM_PSM_APP_INSTANCE_ID>,utl::allocator<utl::pair<_RM_PSM_APP_INSTANCE_ID const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_EqualRangeImpl<_RM_PSM_APP_INSTANCE_ID>(
      (_DWORD)v12,
      v11,
      (unsigned int)v23,
      (unsigned int)&v16,
      (__int64)v17,
      (__int64)v19);
    v13 = v16;
    if ( v16 == (union _LARGE_INTEGER *)v12 )
    {
      result = ExecutionModel::ResourceManager::CreateCommitMemoryWnfStates(pSid, &v21, &v22);
      if ( (int)result < 0 )
        return result;
      utl::_HashTable<_RM_PSM_APP_INSTANCE_ID,utl::pair<_RM_PSM_APP_INSTANCE_ID const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_APP_INSTANCE_ID>,utl::equal_to<_RM_PSM_APP_INSTANCE_ID>,utl::allocator<utl::pair<_RM_PSM_APP_INSTANCE_ID const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::emplace<_RM_PSM_APP_INSTANCE_ID &,ExecutionModel::ResourceManager::CommitMemoryWnfStates &>(
        (int)v12,
        (int)v17);
      if ( !v18 )
      {
        ExecutionModel::ResourceManager::DeleteCommitMemoryWnfStates(&v21, &v22);
        return 2147942414LL;
      }
      v13 = *(union _LARGE_INTEGER **)v17;
    }
    *a4 = v13[73];
    QuadPart = v13[74].QuadPart;
    result = 0LL;
    a5->QuadPart = QuadPart;
  }
  return result;
}
