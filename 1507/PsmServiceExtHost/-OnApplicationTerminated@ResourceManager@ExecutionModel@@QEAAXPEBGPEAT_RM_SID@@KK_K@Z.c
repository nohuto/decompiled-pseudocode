/*
 * XREFs of ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z @ 0x180011820
 * Callers:
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x1800115F0 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012140 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@UEAAJPEBGPEAXKK_K@Z @ 0x180036F80 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@UEAAJPEBGPEAXKK_K@Z.c)
 * Callees:
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180002D10 (-RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDEN.c)
 *     ?erase@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@utl@@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@utl@@@2@0@Z @ 0x180003418 (-erase@-$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U-$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApp.c)
 *     ??$_EqualRangeImpl@U_RM_PSM_APP_INSTANCE_ID@@@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBU_RM_PSM_APP_INSTANCE_ID@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@1@2AEA_K@Z @ 0x1800034E0 (--$_EqualRangeImpl@U_RM_PSM_APP_INSTANCE_ID@@@-$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U-$pair@$$C.c)
 *     ?DeleteCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAU_WNF_STATE_NAME@@0@Z @ 0x180005490 (-DeleteCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAU_WNF_STATE_NAME@@0@Z.c)
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     RmpActivityHostDelete @ 0x1800083A8 (RmpActivityHostDelete.c)
 *     ?PurgeResourceSets@ModernActivationResourceInfo@ExecutionModel@@QEAAXH@Z @ 0x180009AC0 (-PurgeResourceSets@ModernActivationResourceInfo@ExecutionModel@@QEAAXH@Z.c)
 *     RmpObjectRelease @ 0x180009F0C (RmpObjectRelease.c)
 *     ?RemoveExternalResources@ResourceManager@ExecutionModel@@QEAAXKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800117E0 (-RemoveExternalResources@ResourceManager@ExecutionModel@@QEAAXKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180024ED2 (memcpy_0.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 *     _TlgCreateSid @ 0x18002F820 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x18002F848 (_TlgCreateWsz.c)
 *     RmpActivityHostRemoveFromRemediationGroup @ 0x18003BE70 (RmpActivityHostRemoveFromRemediationGroup.c)
 */

void __fastcall ExecutionModel::ResourceManager::OnApplicationTerminated(
        ExecutionModel::ResourceManager *this,
        LPCWSTR pwsz,
        SID *pSid,
        int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  unsigned __int64 v6; // rbx
  ULONG v11; // eax
  wchar_t *v12; // rdx
  __int64 v13; // rcx
  wchar_t *v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int64 v23; // rcx
  __int128 v24; // xmm1
  unsigned __int64 *v25; // rdi
  ExecutionModel::ModernActivationResourceInfo *v26; // rbx
  unsigned __int64 v27; // rbx
  ULONG v28; // eax
  __int64 v29; // rdx
  _QWORD *v30; // rbx
  TraceLoggingHProvider v31; // rcx
  LPCGUID v32; // r8
  LPCGUID v33; // r9
  PVOID P; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v35; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v36[2]; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t v37[232]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v38[68]; // [rsp+220h] [rbp+120h] BYREF
  int v39; // [rsp+264h] [rbp+164h]
  unsigned int v40; // [rsp+268h] [rbp+168h]
  unsigned __int64 v41; // [rsp+270h] [rbp+170h]
  wchar_t Destination[232]; // [rsp+280h] [rbp+180h] BYREF
  _BYTE v43[68]; // [rsp+450h] [rbp+350h] BYREF
  int v44; // [rsp+494h] [rbp+394h]
  unsigned int v45; // [rsp+498h] [rbp+398h]
  unsigned __int64 v46; // [rsp+4A0h] [rbp+3A0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+4B0h] [rbp+3B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+4D0h] [rbp+3D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+4E0h] [rbp+3E0h] BYREF
  __int64 *v50; // [rsp+4F0h] [rbp+3F0h]
  __int64 v51; // [rsp+4F8h] [rbp+3F8h]
  PVOID *p_P; // [rsp+500h] [rbp+400h]
  __int64 v53; // [rsp+508h] [rbp+408h]
  unsigned __int64 *v54; // [rsp+510h] [rbp+410h]
  __int64 v55; // [rsp+518h] [rbp+418h]

  v6 = a6;
  memset_0(Destination, 0, 0x228uLL);
  wcscpy_s(Destination, 0xE8uLL, pwsz);
  memset_0(v43, 0, sizeof(v43));
  v11 = RtlLengthSid(pSid);
  memcpy_0(v43, pSid, v11);
  v44 = a4;
  v45 = a5;
  v46 = v6;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v12 = v37;
  v13 = 4LL;
  v14 = Destination;
  do
  {
    v12 += 64;
    v15 = *(_OWORD *)v14;
    v16 = *((_OWORD *)v14 + 1);
    v14 += 64;
    *((_OWORD *)v12 - 8) = v15;
    v17 = *((_OWORD *)v14 - 6);
    *((_OWORD *)v12 - 7) = v16;
    v18 = *((_OWORD *)v14 - 5);
    *((_OWORD *)v12 - 6) = v17;
    v19 = *((_OWORD *)v14 - 4);
    *((_OWORD *)v12 - 5) = v18;
    v20 = *((_OWORD *)v14 - 3);
    *((_OWORD *)v12 - 4) = v19;
    v21 = *((_OWORD *)v14 - 2);
    *((_OWORD *)v12 - 3) = v20;
    v22 = *((_OWORD *)v14 - 1);
    *((_OWORD *)v12 - 2) = v21;
    *((_OWORD *)v12 - 1) = v22;
    --v13;
  }
  while ( v13 );
  v23 = *((_QWORD *)v14 + 4);
  v24 = *((_OWORD *)v14 + 1);
  *(_OWORD *)v12 = *(_OWORD *)v14;
  *((_OWORD *)v12 + 1) = v24;
  *((_QWORD *)v12 + 4) = v23;
  if ( (int)RmpActivityHostFindByTypeAndIdentifier(0, v37, (volatile signed __int32 **)&P) >= 0 )
  {
    v25 = (unsigned __int64 *)P;
    ExecutionModel::ResourceManager::RemoveExternalResources(this, 0, (struct _RM_ACTIVITY_HOST *)P);
    v26 = (ExecutionModel::ModernActivationResourceInfo *)v25[75];
    ExecutionModel::ModernActivationResourceInfo::PurgeResourceSets(v26, 0);
    if ( v25[108] )
      RmpActivityHostRemoveFromRemediationGroup(v25);
    else
      SetEvent(*((HANDLE *)RmSvcGlobals + 213));
    if ( *(ExecutionModel::ModernActivationResourceInfo **)v26 == v26
      && *((ExecutionModel::ModernActivationResourceInfo **)v26 + 3) == (ExecutionModel::ModernActivationResourceInfo *)((char *)v26 + 24)
      && *((ExecutionModel::ModernActivationResourceInfo **)v26 + 6) == (ExecutionModel::ModernActivationResourceInfo *)((char *)v26 + 48) )
    {
      RmpActivityHostDelete((PVOID **)v25);
    }
    else
    {
      QueryUnbiasedInterruptTime(v25 + 112);
    }
    RmpObjectRelease((volatile signed __int32 *)v25);
  }
  v27 = a6;
  memset_0(v37, 0, 0x228uLL);
  wcscpy_s(v37, 0xE8uLL, pwsz);
  memset_0(v38, 0, sizeof(v38));
  v28 = RtlLengthSid(pSid);
  memcpy_0(v38, pSid, v28);
  v39 = a4;
  v40 = a5;
  v41 = v27;
  P = 0LL;
  utl::_HashTable<_RM_PSM_APP_INSTANCE_ID,utl::pair<_RM_PSM_APP_INSTANCE_ID const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_APP_INSTANCE_ID>,utl::equal_to<_RM_PSM_APP_INSTANCE_ID>,utl::allocator<utl::pair<_RM_PSM_APP_INSTANCE_ID const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_EqualRangeImpl<_RM_PSM_APP_INSTANCE_ID>(
    (__int64)this + 272,
    v29,
    (unsigned __int64)v37,
    &P,
    v36,
    &v35);
  v30 = P;
  if ( P != (char *)this + 272 )
  {
    ExecutionModel::ResourceManager::DeleteCommitMemoryWnfStates(
      (struct _WNF_STATE_NAME *)P + 72,
      (struct _WNF_STATE_NAME *)P + 73);
    utl::_HashTable<_RM_PSM_APP_INSTANCE_ID,utl::pair<_RM_PSM_APP_INSTANCE_ID const,EnforcerApplicationState>,utl::hash<_RM_PSM_APP_INSTANCE_ID>,utl::equal_to<_RM_PSM_APP_INSTANCE_ID>,utl::allocator<utl::pair<_RM_PSM_APP_INSTANCE_ID const,EnforcerApplicationState>>,0>::erase(
      (__int64)this + 272,
      v36,
      v30,
      (_QWORD *)*v30);
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( (unsigned int)dword_1800690A0 > 4 && (qword_1800690B0 & 1) != 0 && (qword_1800690B8 & 1) == qword_1800690B8 )
  {
    TlgCreateWsz(&pDesc, pwsz);
    TlgCreateSid(&v49, pSid);
    LODWORD(v35) = a4;
    v50 = &v35;
    p_P = &P;
    v54 = &a6;
    v51 = 4LL;
    LODWORD(P) = a5;
    v53 = 4LL;
    v55 = 8LL;
    TlgWrite(v31, &unk_18005A49A, v32, v33, 7u, &pData);
  }
}
