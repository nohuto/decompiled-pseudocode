/*
 * XREFs of ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x18000D650
 * Callers:
 *     RmpActivityHostComputeAndApplyEnforcementSettings @ 0x180007AA0 (RmpActivityHostComputeAndApplyEnforcementSettings.c)
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180009A90 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180007418 (-RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4.c)
 *     RmpActivityHostGetTracingId @ 0x18000A170 (RmpActivityHostGetTracingId.c)
 *     ?UpdateCommitMemoryLevel@ResourceManager@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@W4_RM_COMMIT_LEVEL@@1@Z @ 0x18000E6D0 (-UpdateCommitMemoryLevel@ResourceManager@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@W4_RM_COMMI.c)
 *     ?CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x1800106CC (-CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x180015F14 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     TraceLoggingProviderEnabled @ 0x180017F14 (TraceLoggingProviderEnabled.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 *     RmpActivityHostDecommitOfferedMemory @ 0x18002EE78 (RmpActivityHostDecommitOfferedMemory.c)
 *     RmpActivityHostQueryOfferedMemory @ 0x18002F36C (RmpActivityHostQueryOfferedMemory.c)
 *     RmpActivityHostUpdateCommitUseAsync @ 0x18002F7EC (RmpActivityHostUpdateCommitUseAsync.c)
 *     ?TriggerOnCommitWarningCallback@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x180036410 (-TriggerOnCommitWarningCallback@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 */

void __fastcall RmpActivityHostUpdateCommitUseState(__int64 a1, unsigned __int64 a2, int a3)
{
  bool v5; // zf
  __int64 v6; // r8
  __int64 v7; // rcx
  void (__fastcall *v8)(__int64, __int64, __int64, _QWORD); // rax
  UCHAR v9; // dl
  const struct _TlgProvider_t *v10; // rcx
  const struct _TlgProvider_t *v11; // rcx
  const GUID *v12; // r8
  const GUID *v13; // r9
  const void *v14; // rdx
  __int64 v15; // r8
  unsigned __int64 v16; // rcx
  bool v17; // cf
  char v18; // cl
  ExecutionModel::ResourceSet *FirstResourceSet; // rax
  char v20; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v23[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A8h]
  WCHAR pwsz[268]; // [rsp+60h] [rbp-A0h] BYREF
  TraceLoggingHProvider hProvider; // [rsp+278h] [rbp+178h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+290h] [rbp+190h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+2B0h] [rbp+1B0h] BYREF
  unsigned __int64 *v29; // [rsp+2C0h] [rbp+1C0h]
  __int64 v30; // [rsp+2C8h] [rbp+1C8h]
  char *v31; // [rsp+2D0h] [rbp+1D0h]
  __int64 v32; // [rsp+2D8h] [rbp+1D8h]
  __int64 *v33; // [rsp+2E0h] [rbp+1E0h]
  __int64 v34; // [rsp+2E8h] [rbp+1E8h]
  __int64 v35; // [rsp+2F0h] [rbp+1F0h]
  __int64 v36; // [rsp+2F8h] [rbp+1F8h]
  __int64 *v37; // [rsp+300h] [rbp+200h]
  __int64 v38; // [rsp+308h] [rbp+208h]
  unsigned __int64 v39; // [rsp+348h] [rbp+248h] BYREF

  v39 = a2;
  if ( *(_QWORD *)(a1 + 976) > a2 )
    a2 = *(_QWORD *)(a1 + 976);
  v5 = *(_QWORD *)(a1 + 960) == 0LL;
  *(_QWORD *)(a1 + 976) = a2;
  if ( !v5 )
  {
    if ( a3 >= 4 && (int)RmpActivityHostQueryOfferedMemory(a1, &v21) >= 0 )
    {
      v15 = v21;
      if ( v21 )
      {
        v16 = 0x100000LL;
        if ( v39 - 95LL * *(_QWORD *)(a1 + 936) / 0x64uLL > 0x100000 )
          v16 = v39 - 95LL * *(_QWORD *)(a1 + 936) / 0x64uLL;
        v17 = v16 < v21;
        v18 = *(_BYTE *)(a1 + 820);
        v24 = 0LL;
        v23[1] = 0LL;
        if ( !v17 )
          v15 = -1LL;
        v23[0] = v15;
        LODWORD(v24) = ((v18 & 0x10) != 0) | v24 & 0xFFFFFFF8 | (4 * !v17);
        if ( (int)RmpActivityHostDecommitOfferedMemory((struct _RM_ACTIVITY_HOST *)a1, v23) >= 0 )
        {
          RmpActivityHostUpdateCommitUseAsync(a1);
          return;
        }
      }
    }
    v6 = *(unsigned int *)(a1 + 992);
    if ( (_DWORD)v6 == a3 )
      goto LABEL_6;
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 3344LL);
    v8 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v7 + 72LL);
    if ( (char *)v8 == (char *)ExecutionModel::ResourceManager::UpdateCommitMemoryLevel )
      ExecutionModel::ResourceManager::UpdateCommitMemoryLevel(v7, a1, v6, (unsigned int)a3);
    else
      v8(v7, a1, v6, (unsigned int)a3);
    if ( TraceLoggingProviderEnabled(v10, v9, 0LL) )
    {
      RmpActivityHostGetTracingId(a1, (__int64)pwsz);
      v22 = *(_QWORD *)(a1 + 688);
      if ( a3 >= 3 )
      {
        if ( (unsigned int)dword_18004C030 <= 4 || !TlgKeywordOn(v11, 0x400000000001uLL) )
          goto LABEL_16;
        TlgCreateWsz(&pDesc, pwsz);
        v14 = &unk_180040918;
      }
      else
      {
        if ( (unsigned int)dword_18004C030 <= 4 || !TlgKeywordOn(v11, 1uLL) )
          goto LABEL_16;
        TlgCreateWsz(&pDesc, pwsz);
        v14 = &unk_180040D4A;
      }
      v29 = &v21;
      v31 = &v20;
      v33 = (__int64 *)&v39;
      v35 = a1 + 936;
      v37 = &v22;
      v38 = 8LL;
      v36 = 8LL;
      v34 = 8LL;
      v32 = 1LL;
      v20 = a3;
      v30 = 4LL;
      LODWORD(v21) = (_DWORD)hProvider;
      TlgWrite((TraceLoggingHProvider)(unsigned int)hProvider, v14, v12, v13, 8u, &pData);
    }
LABEL_16:
    if ( a3 >= 4 && *(int *)(a1 + 992) < 4 )
      ExecutionModel::ResourceManager::CheckPendingInternalResourceRequestsAsync(*(ExecutionModel::ResourceManager **)(*(_QWORD *)(a1 + 40) + 3344LL));
    *(_DWORD *)(a1 + 992) = a3;
LABEL_6:
    if ( a3 >= 3 && *(_DWORD *)(a1 + 48) == 1 )
    {
      FirstResourceSet = (ExecutionModel::ResourceSet *)RmpActivityHostGetFirstResourceSet(a1, 1);
      if ( FirstResourceSet )
        ExecutionModel::ResourceSet::TriggerOnCommitWarningCallback(FirstResourceSet);
    }
  }
}
