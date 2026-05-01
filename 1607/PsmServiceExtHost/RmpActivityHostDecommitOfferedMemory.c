/*
 * XREFs of RmpActivityHostDecommitOfferedMemory @ 0x18002EE78
 * Callers:
 *     ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x18000D650 (-RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 *     RmpPolicyReclaimHostList @ 0x180034270 (RmpPolicyReclaimHostList.c)
 *     ?RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180034470 (-RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     RmpActivityHostActOnProcesses @ 0x1800077F4 (RmpActivityHostActOnProcesses.c)
 *     RmpActivityHostQueryCommit @ 0x18000AFD0 (RmpActivityHostQueryCommit.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostDecommitOfferedMemory(struct _RM_ACTIVITY_HOST *a1, _BYTE *a2)
{
  unsigned __int64 v2; // rsi
  int v5; // ebx
  void *v6; // r9
  int v7; // edx
  const struct _TlgProvider_t *v8; // rcx
  bool v9; // zf
  int v10; // edx
  const GUID *v11; // r8
  const GUID *v12; // r9
  bool v13; // al
  bool v15; // [rsp+30h] [rbp-49h] BYREF
  int v16; // [rsp+34h] [rbp-45h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  int *v19; // [rsp+60h] [rbp-19h]
  int v20; // [rsp+68h] [rbp-11h]
  int v21; // [rsp+6Ch] [rbp-Dh]
  unsigned __int64 *v22; // [rsp+70h] [rbp-9h]
  int v23; // [rsp+78h] [rbp-1h]
  int v24; // [rsp+7Ch] [rbp+3h]
  char *v25; // [rsp+80h] [rbp+7h]
  int v26; // [rsp+88h] [rbp+Fh]
  int v27; // [rsp+8Ch] [rbp+13h]
  bool *v28; // [rsp+90h] [rbp+17h]
  int v29; // [rsp+98h] [rbp+1Fh]
  int v30; // [rsp+9Ch] [rbp+23h]

  v2 = 0LL;
  v5 = ((unsigned __int8)~a2[16] >> 1) & 1;
  v17 = 0LL;
  if ( (a2[16] & 1) != 0 )
  {
    if ( !v5 )
      RtlEnterCriticalSection(&RmpGlobalLock);
    RmpActivityHostQueryCommit((__int64)a1, 0LL, &v17);
    if ( !v5 )
      RtlLeaveCriticalSection(&RmpGlobalLock);
    v2 = v17;
    v6 = RmpActivityHostDecommitOfferedMemoryCommitSaveCallback;
    v7 = 521;
  }
  else
  {
    v7 = 1024;
    v6 = RmpActivityHostDecommitOfferedMemoryDxgCallback;
  }
  v16 = RmpActivityHostActOnProcesses(a1, v7, 0, (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v6, a2);
  if ( v16 >= 0 )
  {
    if ( (a2[16] & 1) != 0 )
    {
      if ( !v5 )
        RtlEnterCriticalSection(&RmpGlobalLock);
      v16 = RmpActivityHostQueryCommit((__int64)a1, 0LL, &v17);
      if ( !v5 )
        RtlLeaveCriticalSection(&RmpGlobalLock);
      if ( v16 >= 0 && v2 >= v17 )
      {
        v9 = (a2[16] & 4) == 0;
        *((_QWORD *)a2 + 1) = v2 - v17;
        if ( !v9 )
          *((_DWORD *)a1 + 204) |= 0x40u;
      }
    }
    if ( !v5 )
      RtlEnterCriticalSection(&RmpGlobalLock);
    *((_QWORD *)a1 + 96) += *((_QWORD *)a2 + 1);
    if ( !v5 )
      RtlLeaveCriticalSection(&RmpGlobalLock);
  }
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v8, 0x19uLL) )
  {
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v19 = &v16;
    v17 = *((_QWORD *)a1 + 3);
    v22 = &v17;
    v25 = a2 + 8;
    v13 = (*((_DWORD *)a2 + 4) & 2) != 0;
    v20 = 4;
    v30 = 0;
    v15 = v13;
    v28 = &v15;
    v23 = v10 - 17;
    v26 = v10 - 17;
    v29 = 1;
    TlgWrite((TraceLoggingHProvider)(unsigned int)(v10 - 17), &unk_18004099D, v11, v12, 6u, &pData);
  }
  return (unsigned int)v16;
}
