/*
 * XREFs of ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18000F498
 * Callers:
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000ED40 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 * Callees:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     ?erase@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@2@0@Z @ 0x180006458 (-erase@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@R.c)
 *     ??$_EqualRangeImpl@U_RM_PSM_HOST_INFO@@@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBU_RM_PSM_HOST_INFO@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180006520 (--$_EqualRangeImpl@U_RM_PSM_HOST_INFO@@@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HO.c)
 *     _TlgCreateWsz @ 0x180015F14 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180017C20 (-RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@P.c)
 *     RmpActivityHostZeroProcessNotification @ 0x180019964 (RmpActivityHostZeroProcessNotification.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::ResourceManager::OnApplicationTerminated(
        ExecutionModel::ResourceManager *this,
        const WCHAR *a2)
{
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  _OWORD *v7; // rdx
  const WCHAR *v8; // rax
  __int64 v9; // r8
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int64 v18; // rcx
  __int128 v19; // xmm1
  __int64 v20; // rax
  __int64 v21; // rdx
  char *v22; // r14
  _QWORD *v23; // rbx
  const struct _TlgProvider_t *v24; // rcx
  const struct _TlgProvider_t *v25; // rcx
  LPCGUID v26; // r8
  LPCGUID v27; // r9
  PVOID P; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v30[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v31[560]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v32; // [rsp+280h] [rbp+180h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int64 *v34; // [rsp+2B0h] [rbp+1B0h]
  int v35; // [rsp+2B8h] [rbp+1B8h]
  int v36; // [rsp+2BCh] [rbp+1BCh]
  PVOID *p_P; // [rsp+2C0h] [rbp+1C0h]
  int v38; // [rsp+2C8h] [rbp+1C8h]
  int v39; // [rsp+2CCh] [rbp+1CCh]
  char *v40; // [rsp+2D0h] [rbp+1D0h]
  int v41; // [rsp+2D8h] [rbp+1D8h]
  int v42; // [rsp+2DCh] [rbp+1DCh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2E0h] [rbp+1E0h] BYREF

  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(this, 1uLL) )
    TlgWrite(v4, &unk_18003FF01, v5, v6, 2u, &pData);
  RtlEnterCriticalSection(&RmpGlobalLock);
  v7 = v31;
  v8 = a2;
  v9 = 4LL;
  do
  {
    v10 = *((_OWORD *)v8 + 1);
    *v7 = *(_OWORD *)v8;
    v11 = *((_OWORD *)v8 + 2);
    v7[1] = v10;
    v12 = *((_OWORD *)v8 + 3);
    v7[2] = v11;
    v13 = *((_OWORD *)v8 + 4);
    v7[3] = v12;
    v14 = *((_OWORD *)v8 + 5);
    v7[4] = v13;
    v15 = *((_OWORD *)v8 + 6);
    v7[5] = v14;
    v16 = *((_OWORD *)v8 + 7);
    v8 += 64;
    v7[6] = v15;
    v7 += 8;
    *(v7 - 1) = v16;
    --v9;
  }
  while ( v9 );
  v17 = *(_OWORD *)v8;
  v18 = *((_QWORD *)this + 28);
  v19 = *((_OWORD *)v8 + 1);
  v20 = *((_QWORD *)v8 + 4);
  *v7 = v17;
  v7[1] = v19;
  *((_QWORD *)v7 + 4) = v20;
  if ( (int)RmpActivityHostFindByTypeAndIdentifier(v18, 0LL, v31, &P) >= 0 )
  {
    RmpActivityHostZeroProcessNotification((struct _RM_ACTIVITY_HOST *)P);
    RmpObjectRelease((volatile signed __int32 *)P);
  }
  P = 0LL;
  v22 = (char *)this + 264;
  utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_EqualRangeImpl<_RM_PSM_HOST_INFO>(
    (__int64)v22,
    v21,
    (unsigned __int64)a2,
    &P,
    v30,
    &v29);
  v23 = P;
  if ( P != v22 )
  {
    NtDeleteWnfStateName((char *)P + 576);
    NtDeleteWnfStateName(v23 + 73);
    utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::erase(
      (__int64)v22,
      v30,
      v23,
      (_QWORD *)*v23);
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( (unsigned int)dword_18004C030 > 4 )
  {
    if ( TlgKeywordOn(v24, 9uLL) )
    {
      TlgCreateWsz(&pDesc, a2);
      v36 = 0;
      v39 = 0;
      v25 = (const struct _TlgProvider_t *)*((unsigned int *)a2 + 134);
      v42 = 0;
      v34 = &v29;
      LODWORD(P) = *((_DWORD *)a2 + 133);
      p_P = &P;
      v40 = (char *)(a2 + 272);
      LODWORD(v29) = (_DWORD)v25;
      v35 = 4;
      v38 = 4;
      v41 = 8;
      TlgWrite(v25, &unk_180040039, v26, v27, 6u, &v32);
    }
  }
}
