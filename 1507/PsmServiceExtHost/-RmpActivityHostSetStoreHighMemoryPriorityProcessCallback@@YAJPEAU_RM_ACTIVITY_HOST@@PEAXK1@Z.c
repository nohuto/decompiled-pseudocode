/*
 * XREFs of ?RmpActivityHostSetStoreHighMemoryPriorityProcessCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x1800238A0
 * Callers:
 *     RmpActivityHostActOnProcesses @ 0x18000AE60 (RmpActivityHostActOnProcesses.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostSetStoreHighMemoryPriorityProcessCallback(
        struct _RM_ACTIVITY_HOST *a1,
        void *a2,
        int a3,
        void *a4)
{
  unsigned int v5; // eax
  unsigned int v6; // ecx
  const GUID *v7; // r8
  const GUID *v8; // r9
  unsigned int v10; // [rsp+30h] [rbp-29h] BYREF
  int v11; // [rsp+34h] [rbp-25h] BYREF
  _QWORD v12[2]; // [rsp+38h] [rbp-21h] BYREF
  _DWORD SystemInformation[2]; // [rsp+48h] [rbp-11h] BYREF
  _QWORD *v14; // [rsp+50h] [rbp-9h]
  int v15; // [rsp+58h] [rbp-1h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp+7h] BYREF
  unsigned int *v17; // [rsp+80h] [rbp+27h]
  int v18; // [rsp+88h] [rbp+2Fh]
  int v19; // [rsp+8Ch] [rbp+33h]
  int *v20; // [rsp+90h] [rbp+37h]
  int v21; // [rsp+98h] [rbp+3Fh]
  int v22; // [rsp+9Ch] [rbp+43h]

  v12[1] = a2;
  SystemInformation[0] = 1;
  SystemInformation[1] = 20;
  v12[0] = 257LL;
  v15 = 16;
  v14 = v12;
  v5 = NtSetSystemInformation(SystemVerifierFaultsInformation|SystemLocksInformation, SystemInformation, 0x18u);
  v6 = v5;
  v10 = v5;
  if ( (unsigned int)dword_1800690A0 > 5 && TlgKeywordOn((TraceLoggingHProvider)v5, 1uLL) )
  {
    v19 = 0;
    v22 = 0;
    v17 = &v10;
    v20 = &v11;
    v18 = 4;
    v11 = a3;
    v21 = 4;
    TlgWrite((TraceLoggingHProvider)4, &unk_18005D05F, v7, v8, 4u, &pData);
    return v10;
  }
  return v6;
}
