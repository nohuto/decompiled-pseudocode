/*
 * XREFs of ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x1800112A8
 * Callers:
 *     ?RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@UEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z @ 0x180013DF0 (-RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@UEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z.c)
 * Callees:
 *     ??$_EqualRangeImpl@U_RM_PSM_APP_INSTANCE_ID@@@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBU_RM_PSM_APP_INSTANCE_ID@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@1@2AEA_K@Z @ 0x1800034E0 (--$_EqualRangeImpl@U_RM_PSM_APP_INSTANCE_ID@@@-$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U-$pair@$$C.c)
 *     ??$emplace@AEAU_RM_PSM_APP_INSTANCE_ID@@AEAUCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@QEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@utl@@_N@1@AEAU_RM_PSM_APP_INSTANCE_ID@@AEAUCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@Z @ 0x1800038B0 (--$emplace@AEAU_RM_PSM_APP_INSTANCE_ID@@AEAUCommitMemoryWnfStates@ResourceManager@ExecutionModel.c)
 *     ?CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME@@1@Z @ 0x180003A7C (-CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME.c)
 *     ?DeleteCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAU_WNF_STATE_NAME@@0@Z @ 0x180005490 (-DeleteCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAU_WNF_STATE_NAME@@0@Z.c)
 *     ?GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAGPEAKPEAT_RM_SID@@11PEA_K@Z @ 0x180011100 (-GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAGPEAKPEAT_RM_SID@@11PEA_K@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
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
  __int64 v11; // rdx
  char *v12; // rbx
  union _LARGE_INTEGER *v13; // rax
  LONGLONG QuadPart; // rcx
  unsigned int v15; // [rsp+40h] [rbp-C0h] BYREF
  union _LARGE_INTEGER *v16; // [rsp+48h] [rbp-B8h] BYREF
  int v17[2]; // [rsp+50h] [rbp-B0h] BYREF
  char v18; // [rsp+58h] [rbp-A8h]
  __int64 v19; // [rsp+60h] [rbp-A0h] BYREF
  _WNF_STATE_NAME v20[3]; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int16 v21[232]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v22[68]; // [rsp+250h] [rbp+150h] BYREF
  unsigned int v23; // [rsp+294h] [rbp+194h] BYREF
  unsigned int v24; // [rsp+298h] [rbp+198h] BYREF
  unsigned __int64 v25[2]; // [rsp+2A0h] [rbp+1A0h] BYREF

  v20[0] = 0LL;
  v20[1] = 0LL;
  v15 = 464;
  memset_0(v21, 0, 0x228uLL);
  v9 = *(__int64 (__fastcall **)(ExecutionModel::ResourceManager *, DWORD, unsigned __int16 *, unsigned int *, union _RM_SID *, unsigned int *, unsigned int *, unsigned __int64 *))(*(_QWORD *)this + 384LL);
  if ( v9 == ExecutionModel::ResourceManager::GetPSMInfo )
    result = ExecutionModel::ResourceManager::GetPSMInfo(this, a2, v21, &v15, (union _RM_SID *)v22, &v23, &v24, v25);
  else
    result = v9(this, a2, v21, &v15, (union _RM_SID *)v22, &v23, &v24, v25);
  if ( (int)result >= 0 )
  {
    v16 = 0LL;
    v12 = (char *)this + 272;
    utl::_HashTable<_RM_PSM_APP_INSTANCE_ID,utl::pair<_RM_PSM_APP_INSTANCE_ID const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_APP_INSTANCE_ID>,utl::equal_to<_RM_PSM_APP_INSTANCE_ID>,utl::allocator<utl::pair<_RM_PSM_APP_INSTANCE_ID const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_EqualRangeImpl<_RM_PSM_APP_INSTANCE_ID>(
      (__int64)v12,
      v11,
      (unsigned __int64)v21,
      &v16,
      v17,
      &v19);
    v13 = v16;
    if ( v16 == (union _LARGE_INTEGER *)v12 )
    {
      result = ExecutionModel::ResourceManager::CreateCommitMemoryWnfStates(pSid, v20, &v20[1]);
      if ( (int)result < 0 )
        return result;
      utl::_HashTable<_RM_PSM_APP_INSTANCE_ID,utl::pair<_RM_PSM_APP_INSTANCE_ID const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_APP_INSTANCE_ID>,utl::equal_to<_RM_PSM_APP_INSTANCE_ID>,utl::allocator<utl::pair<_RM_PSM_APP_INSTANCE_ID const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::emplace<_RM_PSM_APP_INSTANCE_ID &,ExecutionModel::ResourceManager::CommitMemoryWnfStates &>(
        (__int64)v12,
        (__int64)v17,
        (__int64)v21,
        v20);
      if ( !v18 )
      {
        ExecutionModel::ResourceManager::DeleteCommitMemoryWnfStates(v20, &v20[1]);
        return 2147942414LL;
      }
      v13 = *(union _LARGE_INTEGER **)v17;
    }
    *a4 = v13[72];
    QuadPart = v13[73].QuadPart;
    result = 0LL;
    a5->QuadPart = QuadPart;
  }
  return result;
}
