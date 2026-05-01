/*
 * XREFs of ?RmpActivityHostQueryGpuInterferenceCounter@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x1800376F0
 * Callers:
 *     ?RmpActivityHostIsGpuInterfering@@YAJPEAU_RM_ACTIVITY_HOST@@PEAE@Z @ 0x1800355D0 (-RmpActivityHostIsGpuInterfering@@YAJPEAU_RM_ACTIVITY_HOST@@PEAE@Z.c)
 *     ?RmpGpuMonitorEnableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800358A4 (-RmpGpuMonitorEnableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpActivityHostQueryGpuInterferenceCounter(struct _RM_ACTIVITY_HOST *a1, unsigned __int64 *a2)
{
  int v4; // ecx
  __int64 v5; // rcx
  const GUID *cData; // r8
  const GUID *v7; // r9
  unsigned __int64 v9; // rax
  NTSTATUS v10; // [rsp+40h] [rbp-29h] BYREF
  unsigned __int64 JobInformation; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int64 v12; // [rsp+50h] [rbp-19h] BYREF
  struct _RM_ACTIVITY_HOST *v13; // [rsp+58h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-9h] BYREF
  NTSTATUS *v15; // [rsp+80h] [rbp+17h]
  int v16; // [rsp+88h] [rbp+1Fh]
  int v17; // [rsp+8Ch] [rbp+23h]
  struct _RM_ACTIVITY_HOST **v18; // [rsp+90h] [rbp+27h]
  int v19; // [rsp+98h] [rbp+2Fh]
  int v20; // [rsp+9Ch] [rbp+33h]

  v4 = *((_DWORD *)a1 + 14);
  if ( !v4 )
  {
    v10 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, unsigned __int64 *))(*(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL)
                                                                                                + 168LL))(
            (char *)a1 + 528,
            *((unsigned int *)a1 + 149),
            (char *)a1 + 64,
            *((unsigned int *)a1 + 150),
            *((_QWORD *)a1 + 3),
            &v12);
    v5 = (unsigned int)v10;
    if ( v10 < 0 )
      goto LABEL_4;
    v9 = v12;
    goto LABEL_12;
  }
  if ( v4 == 1 )
  {
    v10 = NtQueryInformationJobObject(*((HANDLE *)a1 + 92), JobObjectJobSetInformation|0x10, &JobInformation, 8u, 0LL);
    v5 = (unsigned int)v10;
    if ( v10 < 0 )
      goto LABEL_4;
    v9 = JobInformation;
LABEL_12:
    *a2 = v9;
    LODWORD(v5) = 0;
    return (unsigned int)v5;
  }
  v5 = 3221225711LL;
  v10 = -1073741585;
LABEL_4:
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn((TraceLoggingHProvider)v5, 1uLL) )
  {
    v17 = 0;
    v20 = 0;
    v15 = &v10;
    v18 = &v13;
    v16 = (int)cData;
    v13 = a1;
    v19 = 8;
    TlgWrite((TraceLoggingHProvider)v5, &unk_180044523, cData, v7, (UINT32)cData, &pData);
    LODWORD(v5) = v10;
  }
  return (unsigned int)v5;
}
