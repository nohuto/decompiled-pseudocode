/*
 * XREFs of RmpCoreApiSetHostLimits @ 0x180019198
 * Callers:
 *     ?RmpRpExtSetHostLimit@@YAJ_K0PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180019350 (-RmpRpExtSetHostLimit@@YAJ_K0PEAU_RM_RESOURCE_LIMITS@@@Z.c)
 *     RmCoreRpcSrvSetHostLimits @ 0x18002E620 (RmCoreRpcSrvSetHostLimits.c)
 * Callees:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     RmpResourceLimitsAreLegal @ 0x180003104 (RmpResourceLimitsAreLegal.c)
 *     RmpActivityHostComputeCommitLimit @ 0x180008040 (RmpActivityHostComputeCommitLimit.c)
 *     RmpActivityHostApplyEnforcementSettings @ 0x18000A3C0 (RmpActivityHostApplyEnforcementSettings.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     RmpActivityHostFindByHostId @ 0x180018014 (RmpActivityHostFindByHostId.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

__int64 __fastcall RmpCoreApiSetHostLimits(__int64 a1, __int64 a2, __int64 a3)
{
  const struct _TlgProvider_t *v4; // rcx
  int v5; // eax
  _OWORD *v6; // rbx
  __int64 v7; // rax
  int v8; // eax
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  __int64 v13; // [rsp+38h] [rbp-79h] BYREF
  PVOID P; // [rsp+40h] [rbp-71h] BYREF
  __int64 v15; // [rsp+48h] [rbp-69h] BYREF
  __int64 v16; // [rsp+50h] [rbp-61h] BYREF
  __int128 Buf1; // [rsp+58h] [rbp-59h] BYREF
  __int128 v18; // [rsp+68h] [rbp-49h]
  __int128 v19; // [rsp+78h] [rbp-39h]
  __int64 v20; // [rsp+88h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-19h] BYREF
  __int64 *v22; // [rsp+B8h] [rbp+7h]
  __int64 v23; // [rsp+C0h] [rbp+Fh]
  __int64 *v24; // [rsp+C8h] [rbp+17h]
  __int64 v25; // [rsp+D0h] [rbp+1Fh]
  __int64 v26; // [rsp+D8h] [rbp+27h]
  __int64 v27; // [rsp+E0h] [rbp+2Fh]
  PVOID *p_P; // [rsp+E8h] [rbp+37h]
  __int64 v29; // [rsp+F0h] [rbp+3Fh]

  v15 = a2;
  v16 = 132LL;
  P = 0LL;
  v13 = 4LL;
  if ( RmpResourceLimitsAreLegal(a3, &v16, &v13) )
  {
    RtlEnterCriticalSection(&RmpGlobalLock);
    v5 = RmpActivityHostFindByHostId((__int64)RmSvcGlobals, v15, &P);
    v6 = P;
    LODWORD(v13) = v5;
    if ( v5 >= 0 )
    {
      v7 = *(_QWORD *)(a3 + 24);
      if ( (*(_BYTE *)(a3 + 48) & 0x10) != 0 )
        *((_QWORD *)P + 114) = v7;
      else
        *((_QWORD *)P + 115) = v7;
      Buf1 = v6[42];
      v18 = v6[43];
      v19 = v6[44];
      v20 = *((_QWORD *)v6 + 90);
      *(_QWORD *)&v18 = RmpActivityHostComputeCommitLimit(v6);
      v8 = RmpActivityHostApplyEnforcementSettings((struct _RM_ACTIVITY_HOST *)v6, (unsigned __int64 *)&Buf1, 0);
      if ( v8 >= 0 )
        v8 = 0;
      LODWORD(v13) = v8;
    }
    if ( v6 )
      RmpObjectRelease((volatile signed __int32 *)v6);
    RtlLeaveCriticalSection(&RmpGlobalLock);
  }
  else
  {
    LODWORD(v13) = -1073741583;
  }
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v4, 1uLL) )
  {
    v23 = 8LL;
    v22 = &v15;
    v24 = &v13;
    v26 = a3 + 24;
    LODWORD(P) = *(_DWORD *)(a3 + 48);
    p_P = &P;
    v25 = 4LL;
    v27 = 8LL;
    v29 = 4LL;
    TlgWrite(v9, &unk_18004080F, v10, v11, 6u, &pData);
  }
  return (unsigned int)v13;
}
