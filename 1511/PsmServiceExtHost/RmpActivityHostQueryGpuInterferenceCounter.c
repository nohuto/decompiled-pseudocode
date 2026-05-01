/*
 * XREFs of RmpActivityHostQueryGpuInterferenceCounter @ 0x180047008
 * Callers:
 *     ?RmpActivityHostIsGpuInterfering@@YAJPEAU_RM_ACTIVITY_HOST@@PEAE@Z @ 0x180046264 (-RmpActivityHostIsGpuInterfering@@YAJPEAU_RM_ACTIVITY_HOST@@PEAE@Z.c)
 *     RmpGpuMonitorEnableForHost @ 0x1800468B0 (RmpGpuMonitorEnableForHost.c)
 * Callees:
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall RmpActivityHostQueryGpuInterferenceCounter(__int64 a1, _QWORD *a2)
{
  int v4; // ecx
  __int64 v5; // rcx
  const GUID *v6; // r8
  const GUID *cData; // r9
  __int64 v9; // rax
  NTSTATUS v10; // [rsp+30h] [rbp-29h] BYREF
  __int64 v11; // [rsp+38h] [rbp-21h] BYREF
  __int64 v12; // [rsp+40h] [rbp-19h] BYREF
  __int64 JobInformation; // [rsp+48h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  NTSTATUS *v15; // [rsp+70h] [rbp+17h]
  int v16; // [rsp+78h] [rbp+1Fh]
  int v17; // [rsp+7Ch] [rbp+23h]
  __int64 *v18; // [rsp+80h] [rbp+27h]
  int v19; // [rsp+88h] [rbp+2Fh]
  int v20; // [rsp+8Ch] [rbp+33h]

  v4 = *(_DWORD *)(a1 + 40);
  if ( !v4 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**((_QWORD **)RmSvcGlobals + 10) + 88LL))(
            *((_QWORD *)RmSvcGlobals + 10),
            a1,
            &v11);
    v5 = (unsigned int)v10;
    if ( v10 < 0 )
      goto LABEL_4;
    v9 = v11;
    goto LABEL_12;
  }
  if ( v4 == 1 )
  {
    v10 = NtQueryInformationJobObject(*(HANDLE *)(a1 + 712), JobObjectJobSetInformation|0x10, &JobInformation, 8u, 0LL);
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
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn((TraceLoggingHProvider)v5, 1uLL) )
  {
    v17 = 0;
    v20 = 0;
    v15 = &v10;
    v18 = &v12;
    v16 = (int)cData;
    v12 = a1;
    v19 = 8;
    TlgWrite((TraceLoggingHProvider)v5, &unk_180064BEF, v6, cData, (UINT32)cData, &pData);
    LODWORD(v5) = v10;
  }
  return (unsigned int)v5;
}
