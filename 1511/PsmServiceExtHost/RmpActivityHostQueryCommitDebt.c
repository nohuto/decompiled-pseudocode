/*
 * XREFs of RmpActivityHostQueryCommitDebt @ 0x180005A94
 * Callers:
 *     ?RmpTelemetryLogGlobalState@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180005B08 (-RmpTelemetryLogGlobalState@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000C690 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ.c)
 *     RmpActivityHostQueryCommit @ 0x180015DC0 (RmpActivityHostQueryCommit.c)
 * Callees:
 *     RmpActivityHostActOnProcesses @ 0x180018750 (RmpActivityHostActOnProcesses.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostQueryCommitDebt(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  const GUID *v4; // r9
  const struct _TlgProvider_t *cData; // rcx
  const GUID *v7; // r8
  int v8; // [rsp+30h] [rbp-9h] BYREF
  __int64 v9; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  int *v11; // [rsp+60h] [rbp+27h]
  int v12; // [rsp+68h] [rbp+2Fh]
  int v13; // [rsp+6Ch] [rbp+33h]
  __int64 *v14; // [rsp+70h] [rbp+37h]
  int v15; // [rsp+78h] [rbp+3Fh]
  int v16; // [rsp+7Ch] [rbp+43h]

  *a2 = 0LL;
  v3 = RmpActivityHostActOnProcesses((struct _RM_ACTIVITY_HOST *)a1, a2);
  v8 = v3;
  LODWORD(v4) = v3;
  if ( v3 >= 0 || v3 == -1073741772 || v3 == -1073741275 || v3 == -1073741251 )
  {
    LODWORD(v4) = 0;
  }
  else if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 1uLL) )
  {
    v13 = 0;
    v16 = 0;
    v11 = &v8;
    v9 = *(_QWORD *)(a1 + 24);
    v14 = &v9;
    v12 = (int)cData;
    v15 = 8;
    TlgWrite(cData, &unk_180064D35, v7, v4, (UINT32)cData, &pData);
    LODWORD(v4) = v8;
  }
  return (unsigned int)v4;
}
