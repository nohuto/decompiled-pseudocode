/*
 * XREFs of ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x18002E330
 * Callers:
 *     ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x18000B0A0 (-RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 *     ?RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x1800336D8 (-RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REAS.c)
 *     ?RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800346C0 (-RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180006D00 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpActivityHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x1800071B0 (-RmpActivityHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostDecommitOfferedMemory(
        struct _RM_ACTIVITY_HOST *a1,
        struct _RM_OFFERED_DECOMMIT_INFO *a2)
{
  unsigned __int64 v2; // rsi
  int v3; // edi
  bool v4; // zf
  __int64 (__fastcall *v7)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *); // r9
  int v8; // edx
  const struct _TlgProvider_t *v9; // rcx
  int v10; // edx
  const GUID *v11; // r8
  const GUID *v12; // r9
  bool v13; // al
  bool v15; // [rsp+30h] [rbp-59h] BYREF
  int v16; // [rsp+34h] [rbp-55h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  int *v19; // [rsp+60h] [rbp-29h]
  int v20; // [rsp+68h] [rbp-21h]
  int v21; // [rsp+6Ch] [rbp-1Dh]
  unsigned __int64 *v22; // [rsp+70h] [rbp-19h]
  int v23; // [rsp+78h] [rbp-11h]
  int v24; // [rsp+7Ch] [rbp-Dh]
  char *v25; // [rsp+80h] [rbp-9h]
  int v26; // [rsp+88h] [rbp-1h]
  int v27; // [rsp+8Ch] [rbp+3h]
  bool *v28; // [rsp+90h] [rbp+7h]
  int v29; // [rsp+98h] [rbp+Fh]
  int v30; // [rsp+9Ch] [rbp+13h]

  v2 = 0LL;
  v3 = *((_DWORD *)a2 + 4) & 2;
  v4 = (*((_BYTE *)a2 + 16) & 1) == 0;
  v17 = 0LL;
  if ( v4 )
  {
    v8 = 0x2000;
    v7 = RmpActivityHostDecommitOfferedMemoryDxgCallback;
  }
  else
  {
    if ( v3 )
      RtlEnterCriticalSection(&RmpGlobalLock);
    RmpActivityHostQueryCommit(a1, 0LL, 0LL, &v17);
    if ( v3 )
      RtlLeaveCriticalSection(&RmpGlobalLock);
    v2 = v17;
    v7 = (__int64 (__fastcall *)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpActivityHostDecommitOfferedMemoryCommitSaveCallback;
    v8 = 8193;
  }
  v16 = RmpActivityHostActOnProcesses(a1, v8, 0, v7, a2);
  if ( v16 >= 0 )
  {
    if ( (*((_BYTE *)a2 + 16) & 1) != 0 )
    {
      if ( v3 )
        RtlEnterCriticalSection(&RmpGlobalLock);
      v16 = RmpActivityHostQueryCommit(a1, 0LL, 0LL, &v17);
      if ( v3 )
        RtlLeaveCriticalSection(&RmpGlobalLock);
      if ( v16 >= 0 && v2 >= v17 )
      {
        v4 = (*((_BYTE *)a2 + 16) & 4) == 0;
        *((_QWORD *)a2 + 1) = v2 - v17;
        if ( !v4 )
          *((_DWORD *)a1 + 204) |= 0x40u;
      }
    }
    if ( v3 )
      RtlEnterCriticalSection(&RmpGlobalLock);
    *((_QWORD *)a1 + 96) += *((_QWORD *)a2 + 1);
    if ( v3 )
      RtlLeaveCriticalSection(&RmpGlobalLock);
  }
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v9, 0x19uLL) )
  {
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v19 = &v16;
    v17 = *((_QWORD *)a1 + 3);
    v22 = &v17;
    v25 = (char *)a2 + 8;
    v13 = (*((_DWORD *)a2 + 4) & 2) != 0;
    v20 = 4;
    v30 = 0;
    v15 = v13;
    v28 = &v15;
    v23 = v10 - 17;
    v26 = v10 - 17;
    v29 = 1;
    TlgWrite((TraceLoggingHProvider)(unsigned int)(v10 - 17), &unk_1800414FA, v11, v12, 6u, &pData);
  }
  return (unsigned int)v16;
}
