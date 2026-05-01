/*
 * XREFs of RmpActivityHostQueryGpuInterferenceCounter @ 0x180037490
 * Callers:
 *     ?RmpActivityHostIsGpuInterfering@@YAJPEAU_RM_ACTIVITY_HOST@@PEAE@Z @ 0x180034A10 (-RmpActivityHostIsGpuInterfering@@YAJPEAU_RM_ACTIVITY_HOST@@PEAE@Z.c)
 *     RmpGpuMonitorEnableForHost @ 0x180035004 (RmpGpuMonitorEnableForHost.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpActivityHostQueryGpuInterferenceCounter(__int64 a1, _QWORD *a2)
{
  int v4; // ecx
  __int64 v5; // rcx
  const GUID *cData; // r8
  const GUID *v7; // r9
  __int64 v9; // rax
  NTSTATUS v10; // [rsp+30h] [rbp-19h] BYREF
  __int64 JobInformation; // [rsp+38h] [rbp-11h] BYREF
  __int64 v12; // [rsp+40h] [rbp-9h] BYREF
  __int64 v13; // [rsp+48h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp+7h] BYREF
  NTSTATUS *v15; // [rsp+70h] [rbp+27h]
  int v16; // [rsp+78h] [rbp+2Fh]
  int v17; // [rsp+7Ch] [rbp+33h]
  __int64 *v18; // [rsp+80h] [rbp+37h]
  int v19; // [rsp+88h] [rbp+3Fh]
  int v20; // [rsp+8Ch] [rbp+43h]

  v4 = *(_DWORD *)(a1 + 48);
  if ( !v4 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**(_QWORD **)(*(_QWORD *)(a1 + 40) + 72LL) + 88LL))(
            *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
            a1,
            &v12);
    v5 = (unsigned int)v10;
    if ( v10 < 0 )
      goto LABEL_4;
    v9 = v12;
    goto LABEL_12;
  }
  if ( v4 == 1 )
  {
    v10 = NtQueryInformationJobObject(*(HANDLE *)(a1 + 736), JobObjectJobSetInformation|0x10, &JobInformation, 8u, 0LL);
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
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn((TraceLoggingHProvider)v5, 1uLL) )
  {
    v17 = 0;
    v20 = 0;
    v15 = &v10;
    v18 = &v13;
    v16 = (int)cData;
    v13 = a1;
    v19 = 8;
    TlgWrite((TraceLoggingHProvider)v5, &unk_180043391, cData, v7, (UINT32)cData, &pData);
    LODWORD(v5) = v10;
  }
  return (unsigned int)v5;
}
