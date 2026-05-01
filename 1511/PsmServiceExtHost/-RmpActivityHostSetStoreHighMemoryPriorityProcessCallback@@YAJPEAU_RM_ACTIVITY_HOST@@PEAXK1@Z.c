/*
 * XREFs of ?RmpActivityHostSetStoreHighMemoryPriorityProcessCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x18001F410
 * Callers:
 *     RmpActivityHostActOnProcesses @ 0x180018750 (RmpActivityHostActOnProcesses.c)
 * Callees:
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostSetStoreHighMemoryPriorityProcessCallback(
        struct _RM_ACTIVITY_HOST *a1,
        void *a2,
        int a3,
        void *a4)
{
  unsigned int v5; // eax
  unsigned int v6; // ecx
  int v7; // edx
  const GUID *v8; // r8
  const GUID *v9; // r9
  unsigned int v11; // [rsp+30h] [rbp-29h] BYREF
  int v12; // [rsp+34h] [rbp-25h] BYREF
  _QWORD v13[2]; // [rsp+38h] [rbp-21h] BYREF
  _DWORD SystemInformation[2]; // [rsp+48h] [rbp-11h] BYREF
  _QWORD *v15; // [rsp+50h] [rbp-9h]
  int v16; // [rsp+58h] [rbp-1h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp+7h] BYREF
  unsigned int *v18; // [rsp+80h] [rbp+27h]
  int v19; // [rsp+88h] [rbp+2Fh]
  int v20; // [rsp+8Ch] [rbp+33h]
  int *v21; // [rsp+90h] [rbp+37h]
  int v22; // [rsp+98h] [rbp+3Fh]
  int v23; // [rsp+9Ch] [rbp+43h]

  v13[1] = a2;
  SystemInformation[0] = 1;
  SystemInformation[1] = 20;
  v13[0] = 257LL;
  v16 = 16;
  v15 = v13;
  v5 = NtSetSystemInformation(SystemVerifierFaultsInformation|SystemLocksInformation, SystemInformation, 0x18u);
  v6 = v5;
  v11 = v5;
  if ( (unsigned int)dword_180071060 > 5 && TlgKeywordOn((TraceLoggingHProvider)v5, 1uLL) )
  {
    v20 = 0;
    v23 = 0;
    v18 = &v11;
    v21 = &v12;
    v19 = v7 + 3;
    v12 = a3;
    v22 = v7 + 3;
    TlgWrite((TraceLoggingHProvider)(unsigned int)(v7 + 3), &unk_180064DA2, v8, v9, v7 + 3, &pData);
    return v11;
  }
  return v6;
}
