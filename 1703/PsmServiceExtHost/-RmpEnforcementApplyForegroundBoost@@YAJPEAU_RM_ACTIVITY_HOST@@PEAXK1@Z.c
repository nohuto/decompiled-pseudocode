/*
 * XREFs of ?RmpEnforcementApplyForegroundBoost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180002CC0
 * Callers:
 *     ?RmpActivityHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x1800071B0 (-RmpActivityHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpEnforcementApplyForegroundBoost(struct _RM_ACTIVITY_HOST *a1, void *a2, int a3, void *a4)
{
  int v4; // ebx
  const GUID *v7; // r8
  const struct _TlgProvider_t *v8; // rcx
  const GUID *v9; // r9
  bool ProcessInformation[4]; // [rsp+38h] [rbp-49h] BYREF
  NTSTATUS v12; // [rsp+3Ch] [rbp-45h] BYREF
  int v13; // [rsp+40h] [rbp-41h] BYREF
  BOOL v14; // [rsp+44h] [rbp-3Dh] BYREF
  __int64 v15; // [rsp+48h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-29h] BYREF
  NTSTATUS *v17; // [rsp+78h] [rbp-9h]
  int v18; // [rsp+80h] [rbp-1h]
  int v19; // [rsp+84h] [rbp+3h]
  __int64 *v20; // [rsp+88h] [rbp+7h]
  int v21; // [rsp+90h] [rbp+Fh]
  int v22; // [rsp+94h] [rbp+13h]
  int *v23; // [rsp+98h] [rbp+17h]
  int v24; // [rsp+A0h] [rbp+1Fh]
  int v25; // [rsp+A4h] [rbp+23h]
  BOOL *v26; // [rsp+A8h] [rbp+27h]
  int v27; // [rsp+B0h] [rbp+2Fh]
  int v28; // [rsp+B4h] [rbp+33h]

  v4 = (int)a4;
  ProcessInformation[0] = (_DWORD)a4 != 0;
  v12 = NtSetInformationProcess(a2, ProcessForegroundInformation, ProcessInformation, 1u);
  LODWORD(v7) = v12;
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 0x11uLL) )
  {
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v17 = &v12;
    v15 = *((_QWORD *)a1 + 3);
    v20 = &v15;
    v23 = &v13;
    v18 = (int)v8;
    v21 = 8;
    v13 = a3;
    v28 = 0;
    v14 = v4 != 0;
    v26 = &v14;
    v24 = (int)v8;
    v27 = (int)v8;
    TlgWrite(v8, &unk_180044248, v7, v9, 6u, &pData);
    LODWORD(v7) = v12;
  }
  return (unsigned int)v7;
}
