/*
 * XREFs of ?RmpEnforcementApplyForegroundBoost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180004B80
 * Callers:
 *     RmpActivityHostActOnProcesses @ 0x1800077F4 (RmpActivityHostActOnProcesses.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

__int64 __fastcall RmpEnforcementApplyForegroundBoost(struct _RM_ACTIVITY_HOST *a1, void *a2, int a3, void *a4)
{
  int v4; // ebx
  const GUID *v7; // r8
  const struct _TlgProvider_t *v8; // rcx
  const GUID *v9; // r9
  bool ProcessInformation[4]; // [rsp+38h] [rbp-39h] BYREF
  NTSTATUS v12; // [rsp+3Ch] [rbp-35h] BYREF
  int v13; // [rsp+40h] [rbp-31h] BYREF
  BOOL v14; // [rsp+44h] [rbp-2Dh] BYREF
  __int64 v15; // [rsp+48h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-19h] BYREF
  NTSTATUS *v17; // [rsp+78h] [rbp+7h]
  int v18; // [rsp+80h] [rbp+Fh]
  int v19; // [rsp+84h] [rbp+13h]
  __int64 *v20; // [rsp+88h] [rbp+17h]
  int v21; // [rsp+90h] [rbp+1Fh]
  int v22; // [rsp+94h] [rbp+23h]
  int *v23; // [rsp+98h] [rbp+27h]
  int v24; // [rsp+A0h] [rbp+2Fh]
  int v25; // [rsp+A4h] [rbp+33h]
  BOOL *v26; // [rsp+A8h] [rbp+37h]
  int v27; // [rsp+B0h] [rbp+3Fh]
  int v28; // [rsp+B4h] [rbp+43h]

  v4 = (int)a4;
  ProcessInformation[0] = (_DWORD)a4 != 0;
  v12 = NtSetInformationProcess(a2, ProcessForegroundInformation, ProcessInformation, 1u);
  LODWORD(v7) = v12;
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 0x11uLL) )
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
    TlgWrite(v8, &unk_1800431E1, v7, v9, 6u, &pData);
    LODWORD(v7) = v12;
  }
  return (unsigned int)v7;
}
