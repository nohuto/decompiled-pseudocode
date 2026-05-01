/*
 * XREFs of ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x18000B0A0
 * Callers:
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180005B60 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800080A0 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180006FF0 (-RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?RmpActivityHostGetTracingId@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_TRACING_ID@@@Z @ 0x180008C30 (-RmpActivityHostGetTracingId@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_TRACING_ID@@@Z.c)
 *     ?UpdateCommitMemoryLevel@ResourceManager@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@W4_RM_COMMIT_LEVEL@@1@Z @ 0x18000C6D0 (-UpdateCommitMemoryLevel@ResourceManager@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@W4_RM_COMMI.c)
 *     ?CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x18000D8D0 (-CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     ?RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x18001287C (-RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4.c)
 *     _TlgCreateWsz @ 0x180013700 (_TlgCreateWsz.c)
 *     ?RmpActivityHostNotifySubscribers@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x18001AB0C (-RmpActivityHostNotifySubscribers@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 *     ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x18002E330 (-RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@.c)
 *     ?RmpActivityHostUpdateCommitUseAsync@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002EC0C (-RmpActivityHostUpdateCommitUseAsync@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?TriggerOnCommitWarningCallback@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x1800343DC (-TriggerOnCommitWarningCallback@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 */

void __fastcall RmpActivityHostUpdateCommitUseState(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v6; // r8
  unsigned __int64 v7; // r8
  __int64 v8; // rcx
  void (__fastcall *v9)(__int64, __int64, __int64, _QWORD); // rax
  const struct _TlgProvider_t *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r9
  LPCGUID v13; // r8
  LPCGUID v14; // r9
  unsigned __int64 v15; // rcx
  bool v16; // cf
  unsigned int v17; // ecx
  ExecutionModel::ResourceSet *FirstResourceSet; // rax
  char v19; // [rsp+40h] [rbp-C0h] BYREF
  char v20; // [rsp+41h] [rbp-BFh] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  int v22; // [rsp+50h] [rbp-B0h] BYREF
  int v23; // [rsp+54h] [rbp-ACh] BYREF
  int v24; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v26; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v28[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v29; // [rsp+90h] [rbp-70h]
  WCHAR pwsz[268]; // [rsp+A0h] [rbp-60h] BYREF
  TraceLoggingHProvider hProvider; // [rsp+2B8h] [rbp+1B8h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+2D0h] [rbp+1D0h] BYREF
  void *v33; // [rsp+2E0h] [rbp+1E0h]
  int v34; // [rsp+2E8h] [rbp+1E8h]
  int v35; // [rsp+2ECh] [rbp+1ECh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+2F0h] [rbp+1F0h] BYREF
  int *v37; // [rsp+300h] [rbp+200h]
  __int64 v38; // [rsp+308h] [rbp+208h]
  char *v39; // [rsp+310h] [rbp+210h]
  __int64 v40; // [rsp+318h] [rbp+218h]
  __int64 *v41; // [rsp+320h] [rbp+220h]
  __int64 v42; // [rsp+328h] [rbp+228h]
  __int64 v43; // [rsp+330h] [rbp+230h]
  __int64 v44; // [rsp+338h] [rbp+238h]
  __int64 *v45; // [rsp+340h] [rbp+240h]
  __int64 v46; // [rsp+348h] [rbp+248h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+360h] [rbp+260h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+380h] [rbp+280h] BYREF
  int *v49; // [rsp+390h] [rbp+290h]
  __int64 v50; // [rsp+398h] [rbp+298h]
  char *v51; // [rsp+3A0h] [rbp+2A0h]
  __int64 v52; // [rsp+3A8h] [rbp+2A8h]
  __int64 *v53; // [rsp+3B0h] [rbp+2B0h]
  __int64 v54; // [rsp+3B8h] [rbp+2B8h]
  __int64 v55; // [rsp+3C0h] [rbp+2C0h]
  __int64 v56; // [rsp+3C8h] [rbp+2C8h]
  __int64 *v57; // [rsp+3D0h] [rbp+2D0h]
  __int64 v58; // [rsp+3D8h] [rbp+2D8h]
  _QWORD *v59; // [rsp+3E0h] [rbp+2E0h]
  __int64 v60; // [rsp+3E8h] [rbp+2E8h]
  _QWORD v61[4]; // [rsp+400h] [rbp+300h] BYREF

  v3 = *(_QWORD *)(a1 + 1016);
  v21 = a2;
  if ( v3 > a2 )
    a2 = v3;
  *(_QWORD *)(a1 + 1016) = a2;
  if ( a3 >= 4 && (int)RmpActivityHostQueryOfferedMemory((struct _RM_ACTIVITY_HOST *)a1, &v26) >= 0 )
  {
    v7 = v26;
    if ( v26 )
    {
      v15 = 0x100000LL;
      if ( v21 - 95LL * *(_QWORD *)(a1 + 968) / 0x64uLL > 0x100000 )
        v15 = v21 - 95LL * *(_QWORD *)(a1 + 968) / 0x64uLL;
      v16 = v15 < v26;
      v17 = *(unsigned __int8 *)(a1 + 820);
      v29 = 0LL;
      v28[1] = 0LL;
      if ( !v16 )
        v7 = -1LL;
      v28[0] = v7;
      LODWORD(v29) = (4 * !v16) | v29 & 0xFFFFFFF8 | (v17 >> 4) & 1;
      if ( (int)RmpActivityHostDecommitOfferedMemory(
                  (struct _RM_ACTIVITY_HOST *)a1,
                  (struct _RM_OFFERED_DECOMMIT_INFO *)v28) >= 0 )
      {
        RmpActivityHostUpdateCommitUseAsync((struct _RM_ACTIVITY_HOST *)a1);
        return;
      }
    }
  }
  v6 = *(unsigned int *)(a1 + 1032);
  if ( (_DWORD)v6 != a3 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 1528LL);
    v9 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v8 + 32LL);
    if ( (char *)v9 == (char *)ExecutionModel::ResourceManager::UpdateCommitMemoryLevel )
      ExecutionModel::ResourceManager::UpdateCommitMemoryLevel(v8, a1, v6, (unsigned int)a3);
    else
      v9(v8, a1, v6, (unsigned int)a3);
    RmpActivityHostNotifySubscribers(a1, v21, (unsigned int)a3);
    if ( !dword_18004D030 )
    {
LABEL_21:
      if ( a3 >= 4 && *(int *)(a1 + 1032) < 4 )
        ExecutionModel::ResourceManager::CheckPendingInternalResourceRequestsAsync(*(ExecutionModel::ResourceManager **)(*(_QWORD *)(a1 + 40) + 1528LL));
      *(_DWORD *)(a1 + 1032) = a3;
      goto LABEL_5;
    }
    RmpActivityHostGetTracingId((struct _RM_ACTIVITY_HOST *)a1, (struct _RM_ACTIVITY_HOST_TRACING_ID *)pwsz);
    v25 = *(_QWORD *)(a1 + 688);
    if ( a3 == 3 )
    {
      if ( (*(_BYTE *)(a1 + 1132) & 8) == 0 && *(_QWORD *)(a1 + 960) )
      {
LABEL_30:
        memset_0(v61, 0, sizeof(v61));
        if ( *(_DWORD *)(a1 + 56) == 1 )
        {
          v61[0] = *(unsigned int *)(a1 + 64);
        }
        else
        {
          v11 = *(_QWORD *)(a1 + 40);
          v12 = *(unsigned int *)(a1 + 600);
          v22 = 4;
          (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD, _QWORD *, int *))(*(_QWORD *)(v11 + 56)
                                                                                             + 152LL))(
            a1 + 528,
            *(unsigned int *)(a1 + 596),
            a1 + 64,
            v12,
            *(_QWORD *)(a1 + 24),
            v61,
            &v22);
        }
        if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v10, 0x400000000001uLL) )
        {
          TlgCreateWsz(&v48, pwsz);
          v49 = &v23;
          v51 = &v19;
          v53 = (__int64 *)&v21;
          v55 = a1 + 968;
          v57 = &v25;
          v59 = v61;
          v23 = (int)hProvider;
          v50 = 4LL;
          v19 = a3;
          v52 = 1LL;
          v54 = 8LL;
          v56 = 8LL;
          v58 = 8LL;
          v60 = 32LL;
          TlgWrite((TraceLoggingHProvider)(unsigned int)hProvider, &unk_18004194C, v13, v14, 9u, &pData);
        }
        if ( a3 == 3 )
          *(_DWORD *)(a1 + 1132) |= 8u;
        else
          *(_DWORD *)(a1 + 1132) |= 0x10u;
        goto LABEL_21;
      }
    }
    else if ( a3 == 4 && (*(_BYTE *)(a1 + 1132) & 0x10) == 0 && *(_QWORD *)(a1 + 968) )
    {
      goto LABEL_30;
    }
    if ( (unsigned int)dword_18004D030 > 4 && (qword_18004D040 & 1) != 0 && (qword_18004D048 & 1) == qword_18004D048 )
    {
      TlgCreateWsz(&pDesc, pwsz);
      v37 = &v24;
      v39 = &v20;
      v41 = (__int64 *)&v21;
      v43 = a1 + 968;
      v45 = &v25;
      v24 = (int)hProvider;
      v38 = 4LL;
      v20 = a3;
      v40 = 1LL;
      v42 = 8LL;
      v44 = 8LL;
      v46 = 8LL;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_18004D038;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180041810 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = 1LL;
      UserData.Size = *(unsigned __int16 *)off_18004D038;
      v33 = &unk_18004181B;
      UserData.Reserved = 2;
      v34 = 121;
      v35 = 1;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 8u, &UserData);
    }
    goto LABEL_21;
  }
LABEL_5:
  if ( a3 >= 3 && *(_DWORD *)(a1 + 56) == 1 )
  {
    FirstResourceSet = (ExecutionModel::ResourceSet *)RmpActivityHostGetFirstResourceSet(a1, 1LL);
    if ( FirstResourceSet )
      ExecutionModel::ResourceSet::TriggerOnCommitWarningCallback(FirstResourceSet);
  }
}
