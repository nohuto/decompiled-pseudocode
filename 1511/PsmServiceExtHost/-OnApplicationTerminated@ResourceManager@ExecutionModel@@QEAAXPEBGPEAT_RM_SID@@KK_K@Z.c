/*
 * XREFs of ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z @ 0x18000FDA0
 * Callers:
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000F8A0 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180010680 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@UEAAJPEBGPEAXKK_K@Z @ 0x18003D260 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@UEAAJPEBGPEAXKK_K@Z.c)
 * Callees:
 *     RmpActivityHostDelete @ 0x180007508 (RmpActivityHostDelete.c)
 *     ?PurgeResourceSets@ModernActivationResourceInfo@ExecutionModel@@QEAAXH@Z @ 0x18000A0A0 (-PurgeResourceSets@ModernActivationResourceInfo@ExecutionModel@@QEAAXH@Z.c)
 *     ?RemoveExternalResources@ResourceManager@ExecutionModel@@QEAAXKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000FD60 (-RemoveExternalResources@ResourceManager@ExecutionModel@@QEAAXKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _TlgCreateWsz @ 0x180019D30 (_TlgCreateWsz.c)
 *     RmpObjectRelease @ 0x18001BBFC (RmpObjectRelease.c)
 *     ?erase@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@2@0@Z @ 0x18001DE08 (-erase@-$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U-$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemor.c)
 *     ??$_EqualRangeImpl@U_RM_PSM_APP_INSTANCE_ID@@@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBU_RM_PSM_APP_INSTANCE_ID@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@1@2AEA_K@Z @ 0x18001DED0 (--$_EqualRangeImpl@U_RM_PSM_APP_INSTANCE_ID@@@-$_HashTable@U_RM_PSM_APP_INSTANCE_ID_ea_18001DED0.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001F5B0 (-RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDEN.c)
 *     ?DeleteCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAU_WNF_STATE_NAME@@0@Z @ 0x1800204B0 (-DeleteCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAU_WNF_STATE_NAME@@0@Z.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18002BC72 (memcpy_0.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 *     RmpActivityHostRemoveFromRemediationGroup @ 0x1800411E4 (RmpActivityHostRemoveFromRemediationGroup.c)
 */

void __fastcall ExecutionModel::ResourceManager::OnApplicationTerminated(
        ExecutionModel::ResourceManager *this,
        LPCWSTR pwsz,
        union _RM_SID *Src,
        int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  unsigned __int64 v6; // rbx
  ULONG v11; // eax
  _BYTE *v12; // rdx
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
  unsigned __int64 *v25; // rbx
  ExecutionModel::ModernActivationResourceInfo *v26; // rdi
  unsigned __int64 v27; // rbx
  ULONG v28; // eax
  int v29; // edx
  struct _WNF_STATE_NAME *v30; // rbx
  unsigned __int8 v31; // cl
  int v32; // eax
  int v33; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v34; // [rsp+34h] [rbp-CCh] BYREF
  struct _WNF_STATE_NAME *v35; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v38[8]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v39[8]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v40[8]; // [rsp+68h] [rbp-98h] BYREF
  wchar_t v41[232]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v42[68]; // [rsp+240h] [rbp+140h] BYREF
  int v43; // [rsp+284h] [rbp+184h]
  unsigned int v44; // [rsp+288h] [rbp+188h]
  unsigned __int64 v45; // [rsp+290h] [rbp+190h]
  wchar_t Destination[232]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v47[68]; // [rsp+470h] [rbp+370h] BYREF
  int v48; // [rsp+4B4h] [rbp+3B4h]
  unsigned int v49; // [rsp+4B8h] [rbp+3B8h]
  unsigned __int64 v50; // [rsp+4C0h] [rbp+3C0h]
  _BYTE v51[560]; // [rsp+4D0h] [rbp+3D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+700h] [rbp+600h] BYREF
  void *v53; // [rsp+710h] [rbp+610h]
  int v54; // [rsp+718h] [rbp+618h]
  int v55; // [rsp+71Ch] [rbp+61Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+720h] [rbp+620h] BYREF
  union _RM_SID *v57; // [rsp+730h] [rbp+630h]
  int v58; // [rsp+738h] [rbp+638h]
  int v59; // [rsp+73Ch] [rbp+63Ch]
  int *v60; // [rsp+740h] [rbp+640h]
  __int64 v61; // [rsp+748h] [rbp+648h]
  unsigned int *v62; // [rsp+750h] [rbp+650h]
  __int64 v63; // [rsp+758h] [rbp+658h]
  unsigned __int64 *v64; // [rsp+760h] [rbp+660h]
  __int64 v65; // [rsp+768h] [rbp+668h]

  v6 = a6;
  memset_0(Destination, 0, 0x228uLL);
  wcscpy_s(Destination, 0xE8uLL, pwsz);
  memset_0(v47, 0, sizeof(v47));
  v11 = RtlLengthSid(Src);
  memcpy_0(v47, Src, v11);
  v48 = a4;
  v49 = a5;
  v50 = v6;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v12 = v51;
  v13 = 4LL;
  v14 = Destination;
  do
  {
    v12 += 128;
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
  if ( (int)RmpActivityHostFindByTypeAndIdentifier(0LL, v51, &P) >= 0 )
  {
    v25 = (unsigned __int64 *)P;
    ExecutionModel::ResourceManager::RemoveExternalResources(this, 0, (struct _RM_ACTIVITY_HOST *)P);
    v26 = (ExecutionModel::ModernActivationResourceInfo *)v25[75];
    ExecutionModel::ModernActivationResourceInfo::PurgeResourceSets(v26, 0);
    if ( v25[112] )
      RmpActivityHostRemoveFromRemediationGroup(v25);
    else
      SetEvent(*((HANDLE *)RmSvcGlobals + 204));
    if ( *(ExecutionModel::ModernActivationResourceInfo **)v26 == v26
      && *((ExecutionModel::ModernActivationResourceInfo **)v26 + 3) == (ExecutionModel::ModernActivationResourceInfo *)((char *)v26 + 24) )
    {
      RmpActivityHostDelete((PVOID **)v25);
    }
    else
    {
      QueryUnbiasedInterruptTime(v25 + 116);
    }
    RmpObjectRelease(v25);
  }
  v27 = a6;
  memset_0(v41, 0, 0x228uLL);
  wcscpy_s(v41, 0xE8uLL, pwsz);
  memset_0(v42, 0, sizeof(v42));
  v28 = RtlLengthSid(Src);
  memcpy_0(v42, Src, v28);
  v43 = a4;
  v44 = a5;
  v45 = v27;
  v35 = 0LL;
  utl::_HashTable<_RM_PSM_APP_INSTANCE_ID,utl::pair<_RM_PSM_APP_INSTANCE_ID const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_APP_INSTANCE_ID>,utl::equal_to<_RM_PSM_APP_INSTANCE_ID>,utl::allocator<utl::pair<_RM_PSM_APP_INSTANCE_ID const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_EqualRangeImpl<_RM_PSM_APP_INSTANCE_ID>(
    (_DWORD)this + 288,
    v29,
    (unsigned int)v41,
    (unsigned int)&v35,
    (__int64)v38,
    (__int64)v40);
  v30 = v35;
  if ( v35 != (struct _WNF_STATE_NAME *)((char *)this + 288) )
  {
    ExecutionModel::ResourceManager::DeleteCommitMemoryWnfStates(v35 + 73, v35 + 74);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))utl::_HashTable<_RM_PSM_APP_INSTANCE_ID,utl::pair<_RM_PSM_APP_INSTANCE_ID const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_APP_INSTANCE_ID>,utl::equal_to<_RM_PSM_APP_INSTANCE_ID>,utl::allocator<utl::pair<_RM_PSM_APP_INSTANCE_ID const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::erase)(
      (char *)this + 288,
      v39,
      v30,
      *v30);
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( (unsigned int)dword_180071060 > 4 && (qword_180071070 & 1) != 0 && (qword_180071078 & 1) == qword_180071078 )
  {
    TlgCreateWsz(&pDesc, pwsz);
    v31 = *((_BYTE *)Src + 1);
    if ( v31 > 0xFu )
      v32 = 15;
    else
      v32 = v31;
    v57 = Src;
    v58 = 4 * v32 + 8;
    v59 = 0;
    v60 = &v33;
    v62 = &v34;
    v64 = &a6;
    v33 = a4;
    v61 = 4LL;
    v34 = a5;
    v63 = 4LL;
    v65 = 8LL;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_180071068;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180061D51 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_180071068;
    v53 = &unk_180061D5C;
    UserData.Reserved = 2;
    v54 = 76;
    v55 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
  }
}
