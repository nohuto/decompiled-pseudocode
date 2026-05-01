/*
 * XREFs of ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x18000E498
 * Callers:
 *     ?RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z @ 0x18000E1B8 (-RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z.c)
 * Callees:
 *     ?CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME@@1@Z @ 0x18000235C (-CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME.c)
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     RmpActivityHostPublishCommitLimit @ 0x1800035CC (RmpActivityHostPublishCommitLimit.c)
 *     ??$_EqualRangeImpl@U_RM_PSM_HOST_INFO@@@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBU_RM_PSM_HOST_INFO@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180006520 (--$_EqualRangeImpl@U_RM_PSM_HOST_INFO@@@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HO.c)
 *     ??$emplace@AEAU_RM_PSM_HOST_INFO@@AEAUCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@QEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@utl@@_N@1@AEAU_RM_PSM_HOST_INFO@@AEAUCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@Z @ 0x1800068CC (--$emplace@AEAU_RM_PSM_HOST_INFO@@AEAUCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@-$_.c)
 *     ?GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18000E470 (-GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?UpdateCommitMemoryLevel@ResourceManager@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@W4_RM_COMMIT_LEVEL@@1@Z @ 0x18000E6D0 (-UpdateCommitMemoryLevel@ResourceManager@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@W4_RM_COMMI.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180017C20 (-RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@P.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

int __fastcall ExecutionModel::ResourceManager::AddCommitMemoryWnfStates(
        ExecutionModel::ResourceManager *this,
        unsigned int a2,
        union _RM_SID *a3,
        union _LARGE_INTEGER *a4,
        union _LARGE_INTEGER *a5)
{
  int (__fastcall *v9)(ExecutionModel::ResourceManager *, unsigned int, struct _RM_PSM_HOST_INFO *); // rax
  int result; // eax
  __int64 v11; // rdx
  union _LARGE_INTEGER *v12; // rbx
  _OWORD *v13; // rcx
  __int64 v14; // rdx
  _OWORD *v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int64 v25; // rax
  volatile signed __int32 *v26; // rdi
  __int64 v27; // r9
  void (__fastcall *v28)(ExecutionModel::ResourceManager *, volatile signed __int32 *, _QWORD, __int64); // rax
  PVOID P; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+38h] [rbp-C8h] BYREF
  int v31[2]; // [rsp+40h] [rbp-C0h] BYREF
  char v32; // [rsp+48h] [rbp-B8h]
  __int64 v33; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v34; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v35[3]; // [rsp+68h] [rbp-98h] BYREF
  _OWORD v36[35]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v37[560]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v34 = 0uLL;
  memset_0(v36, 0, 0x228uLL);
  v9 = *(int (__fastcall **)(ExecutionModel::ResourceManager *, unsigned int, struct _RM_PSM_HOST_INFO *))(*(_QWORD *)this + 80LL);
  if ( v9 == ExecutionModel::ResourceManager::GetPSMInfo )
    result = ExecutionModel::ResourceManager::GetPSMInfo(this, a2, (struct _RM_PSM_HOST_INFO *)v36);
  else
    result = v9(this, a2, (struct _RM_PSM_HOST_INFO *)v36);
  if ( result >= 0 )
  {
    P = 0LL;
    utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_EqualRangeImpl<_RM_PSM_HOST_INFO>(
      (__int64)this + 264,
      v11,
      (unsigned __int64)v36,
      &P,
      v31,
      &v33);
    v12 = (union _LARGE_INTEGER *)P;
    if ( P == (char *)this + 264 )
    {
      result = ExecutionModel::ResourceManager::CreateCommitMemoryWnfStates(
                 a3,
                 (struct _WNF_STATE_NAME *)&v34,
                 (struct _WNF_STATE_NAME *)&v34 + 1);
      if ( result < 0 )
        return result;
      utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::emplace<_RM_PSM_HOST_INFO &,ExecutionModel::ResourceManager::CommitMemoryWnfStates &>(
        (__int64)this + 264,
        (__int64)v31,
        v36,
        &v34);
      if ( !v32 )
      {
        NtDeleteWnfStateName(&v34);
        NtDeleteWnfStateName((char *)&v34 + 8);
        return -2147024882;
      }
      v12 = *(union _LARGE_INTEGER **)v31;
      v13 = v37;
      v14 = 4LL;
      v15 = v36;
      do
      {
        v16 = v15[1];
        *v13 = *v15;
        v17 = v15[2];
        v13[1] = v16;
        v18 = v15[3];
        v13[2] = v17;
        v19 = v15[4];
        v13[3] = v18;
        v20 = v15[5];
        v13[4] = v19;
        v21 = v15[6];
        v13[5] = v20;
        v22 = v15[7];
        v15 += 8;
        v13[6] = v21;
        v13 += 8;
        *(v13 - 1) = v22;
        --v14;
      }
      while ( v14 );
      v23 = *v15;
      v24 = v15[1];
      v25 = *((_QWORD *)v15 + 4);
      *v13 = v23;
      v13[1] = v24;
      *((_QWORD *)v13 + 4) = v25;
      if ( (int)RmpActivityHostFindByTypeAndIdentifier(*((_QWORD *)this + 28), 0LL, v37, &P) < 0 )
      {
        v35[0] = 0LL;
        v35[1] = 0LL;
        RtlPublishWnfStateData(*((_QWORD *)&v34 + 1), 0LL, v35, 16LL, 0LL);
        v30 = 0x100000000LL;
        RtlPublishWnfStateData(v34, 0LL, &v30, 8LL, 0LL);
      }
      else
      {
        v26 = (volatile signed __int32 *)P;
        RmpActivityHostPublishCommitLimit((__int64)P, *((_QWORD *)P + 86), 1);
        v27 = *((unsigned int *)v26 + 248);
        v28 = *(void (__fastcall **)(ExecutionModel::ResourceManager *, volatile signed __int32 *, _QWORD, __int64))(*(_QWORD *)this + 72LL);
        if ( (char *)v28 == (char *)ExecutionModel::ResourceManager::UpdateCommitMemoryLevel )
          ExecutionModel::ResourceManager::UpdateCommitMemoryLevel(this, v26, 0LL, v27);
        else
          v28(this, v26, 0LL, v27);
        RmpObjectRelease(v26);
      }
    }
    *a4 = v12[72];
    *a5 = v12[73];
    return 0;
  }
  return result;
}
