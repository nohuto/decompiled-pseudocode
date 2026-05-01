/*
 * XREFs of ?RmpActivityHostCommitSavingsCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x18002E160
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 */

__int64 __fastcall RmpActivityHostCommitSavingsCallback(struct _RM_ACTIVITY_HOST *a1, void *a2, int a3, int *a4)
{
  int v4; // edi
  const struct _TlgProvider_t *v8; // rcx
  const GUID *v9; // r8
  const GUID *v10; // r9
  bool v12; // [rsp+30h] [rbp-79h] BYREF
  unsigned int v13; // [rsp+34h] [rbp-75h] BYREF
  int v14; // [rsp+38h] [rbp-71h] BYREF
  __int64 v15; // [rsp+40h] [rbp-69h] BYREF
  int ProcessInformation; // [rsp+48h] [rbp-61h] BYREF
  unsigned int v17; // [rsp+4Ch] [rbp-5Dh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-39h] BYREF
  unsigned int *v19; // [rsp+90h] [rbp-19h]
  int v20; // [rsp+98h] [rbp-11h]
  int v21; // [rsp+9Ch] [rbp-Dh]
  __int64 *v22; // [rsp+A0h] [rbp-9h]
  int v23; // [rsp+A8h] [rbp-1h]
  int v24; // [rsp+ACh] [rbp+3h]
  bool *v25; // [rsp+B0h] [rbp+7h]
  int v26; // [rsp+B8h] [rbp+Fh]
  int v27; // [rsp+BCh] [rbp+13h]
  int *v28; // [rsp+C0h] [rbp+17h]
  int v29; // [rsp+C8h] [rbp+1Fh]
  int v30; // [rsp+CCh] [rbp+23h]

  v4 = *a4;
  memset_0(&ProcessInformation, 0, 0x20uLL);
  ProcessInformation = 3;
  v17 = v17 & 0xFFFFFFFE | (v4 != 0);
  v13 = NtSetInformationProcess(a2, (PROCESSINFOCLASS)65, &ProcessInformation, 0x20u);
  LODWORD(v8) = v13;
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn((TraceLoggingHProvider)v13, 0x11uLL) )
  {
    v21 = 0;
    v24 = 0;
    v19 = &v13;
    v15 = *((_QWORD *)a1 + 3);
    v12 = v4 != 0;
    v27 = 0;
    v30 = 0;
    v22 = &v15;
    v25 = &v12;
    v28 = &v14;
    v20 = (int)v9;
    v23 = 8;
    v26 = 1;
    v14 = a3;
    v29 = (int)v9;
    TlgWrite(v8, &unk_180041AE1, v9, v10, 6u, &pData);
    LODWORD(v8) = v13;
  }
  return (unsigned int)v8;
}
