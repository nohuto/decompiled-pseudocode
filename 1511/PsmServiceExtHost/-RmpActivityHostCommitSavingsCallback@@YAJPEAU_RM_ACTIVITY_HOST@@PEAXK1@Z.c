/*
 * XREFs of ?RmpActivityHostCommitSavingsCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180046ED0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostCommitSavingsCallback(struct _RM_ACTIVITY_HOST *a1, void *a2, int a3, int *a4)
{
  int v4; // ebx
  const struct _TlgProvider_t *v7; // rcx
  int v8; // edx
  const GUID *v9; // r8
  const GUID *v10; // r9
  bool v12; // [rsp+38h] [rbp-39h] BYREF
  unsigned int v13; // [rsp+3Ch] [rbp-35h] BYREF
  int v14; // [rsp+40h] [rbp-31h] BYREF
  _BYTE ProcessInformation[12]; // [rsp+48h] [rbp-29h] BYREF
  int v16; // [rsp+54h] [rbp-1Dh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-19h] BYREF
  unsigned int *v18; // [rsp+78h] [rbp+7h]
  int v19; // [rsp+80h] [rbp+Fh]
  int v20; // [rsp+84h] [rbp+13h]
  _BYTE *v21; // [rsp+88h] [rbp+17h]
  int v22; // [rsp+90h] [rbp+1Fh]
  int v23; // [rsp+94h] [rbp+23h]
  bool *v24; // [rsp+98h] [rbp+27h]
  int v25; // [rsp+A0h] [rbp+2Fh]
  int v26; // [rsp+A4h] [rbp+33h]
  int *v27; // [rsp+A8h] [rbp+37h]
  int v28; // [rsp+B0h] [rbp+3Fh]
  int v29; // [rsp+B4h] [rbp+43h]

  v4 = *a4;
  v16 = 0;
  *(_DWORD *)ProcessInformation = 2;
  *(_QWORD *)&ProcessInformation[4] = v4 != 0;
  v13 = NtSetInformationProcess(a2, (PROCESSINFOCLASS)65, ProcessInformation, 0x10u);
  LODWORD(v7) = v13;
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn((TraceLoggingHProvider)v13, 1uLL) )
  {
    v20 = 0;
    v23 = 0;
    v18 = &v13;
    *(_QWORD *)ProcessInformation = *((_QWORD *)a1 + 3);
    v12 = v4 != 0;
    v26 = 0;
    v29 = 0;
    v21 = ProcessInformation;
    v24 = &v12;
    v27 = &v14;
    v19 = (int)v10;
    v22 = 8;
    v25 = v8;
    v14 = a3;
    v28 = (int)v10;
    TlgWrite(v7, &unk_180064BA2, v9, v10, 6u, &pData);
    LODWORD(v7) = v13;
  }
  return (unsigned int)v7;
}
