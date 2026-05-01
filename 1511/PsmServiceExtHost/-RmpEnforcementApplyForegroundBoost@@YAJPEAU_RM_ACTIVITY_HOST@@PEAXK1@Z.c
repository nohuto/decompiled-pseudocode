/*
 * XREFs of ?RmpEnforcementApplyForegroundBoost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x18001CD50
 * Callers:
 *     RmpActivityHostActOnProcesses @ 0x180018750 (RmpActivityHostActOnProcesses.c)
 * Callees:
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpEnforcementApplyForegroundBoost(struct _RM_ACTIVITY_HOST *a1, void *a2, int a3, void *a4)
{
  int v4; // ebx
  unsigned int v7; // r9d
  int v8; // ecx
  bool ProcessInformation[4]; // [rsp+30h] [rbp-59h] BYREF
  unsigned int v11; // [rsp+34h] [rbp-55h] BYREF
  BOOL v12; // [rsp+38h] [rbp-51h] BYREF
  int v13; // [rsp+3Ch] [rbp-4Dh] BYREF
  __int64 v14; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-29h] BYREF
  void *v17; // [rsp+70h] [rbp-19h]
  int v18; // [rsp+78h] [rbp-11h]
  int v19; // [rsp+7Ch] [rbp-Dh]
  unsigned int *v20; // [rsp+80h] [rbp-9h]
  int v21; // [rsp+88h] [rbp-1h]
  int v22; // [rsp+8Ch] [rbp+3h]
  __int64 *v23; // [rsp+90h] [rbp+7h]
  int v24; // [rsp+98h] [rbp+Fh]
  int v25; // [rsp+9Ch] [rbp+13h]
  int *v26; // [rsp+A0h] [rbp+17h]
  int v27; // [rsp+A8h] [rbp+1Fh]
  int v28; // [rsp+ACh] [rbp+23h]
  BOOL *v29; // [rsp+B0h] [rbp+27h]
  int v30; // [rsp+B8h] [rbp+2Fh]
  int v31; // [rsp+BCh] [rbp+33h]

  v4 = (int)a4;
  ProcessInformation[0] = (_DWORD)a4 != 0;
  v11 = NtSetInformationProcess(a2, ProcessForegroundInformation, ProcessInformation, 1u);
  v7 = v11;
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 1uLL) )
  {
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v20 = &v11;
    v14 = *((_QWORD *)a1 + 3);
    v23 = &v14;
    v26 = &v13;
    v21 = v8;
    v24 = 8;
    v13 = a3;
    v31 = 0;
    v12 = v4 != 0;
    v29 = &v12;
    v27 = v8;
    v30 = v8;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_180071068;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180064E2C - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_180071068;
    v17 = &unk_180064E37;
    UserData.Reserved = 2;
    v18 = 55;
    v19 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
    return v11;
  }
  return v7;
}
