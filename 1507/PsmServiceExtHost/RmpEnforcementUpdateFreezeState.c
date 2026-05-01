/*
 * XREFs of RmpEnforcementUpdateFreezeState @ 0x180042530
 * Callers:
 *     RmpEnforcementUnoptimizeHost @ 0x180002494 (RmpEnforcementUnoptimizeHost.c)
 *     RmpEnforcementOptimizeHost @ 0x18000673C (RmpEnforcementOptimizeHost.c)
 *     RmpEnforcementWorkCallback @ 0x180006D40 (RmpEnforcementWorkCallback.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     ?FreezePureHost@ModernResourceEnforcer@@QEAAJPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x180033958 (-FreezePureHost@ModernResourceEnforcer@@QEAAJPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 */

__int64 __fastcall RmpEnforcementUpdateFreezeState(struct _RM_ACTIVITY_HOST *a1, char a2)
{
  int v3; // ecx
  const GUID *v4; // r9
  void *v5; // rcx
  int v6; // eax
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  const struct _TlgProvider_t *cData; // rcx
  const GUID *v11; // r8
  NTSTATUS v13; // [rsp+30h] [rbp-39h] BYREF
  __int64 v14; // [rsp+38h] [rbp-31h] BYREF
  int v15; // [rsp+40h] [rbp-29h] BYREF
  _QWORD JobInformation[3]; // [rsp+48h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-9h] BYREF
  NTSTATUS *v18; // [rsp+80h] [rbp+17h]
  int v19; // [rsp+88h] [rbp+1Fh]
  int v20; // [rsp+8Ch] [rbp+23h]
  __int64 *v21; // [rsp+90h] [rbp+27h]
  int v22; // [rsp+98h] [rbp+2Fh]
  int v23; // [rsp+9Ch] [rbp+33h]
  int *v24; // [rsp+A0h] [rbp+37h]
  int v25; // [rsp+A8h] [rbp+3Fh]
  int v26; // [rsp+ACh] [rbp+43h]

  v3 = *((_DWORD *)a1 + 10);
  if ( !v3 )
  {
    ModernResourceEnforcer::FreezePureHost(*((ModernResourceEnforcer **)RmSvcGlobals + 10), a1, a2);
    goto LABEL_16;
  }
  if ( v3 != 1 )
  {
    LODWORD(v4) = -1073741811;
    v13 = -1073741811;
    goto LABEL_6;
  }
  if ( ((*((_BYTE *)a1 + 772) & 0x40) != 0) == a2
    || (v5 = (void *)*((_QWORD *)a1 + 88),
        JobInformation[0] = 1LL,
        BYTE4(JobInformation[0]) = a2,
        JobInformation[1] = 0LL,
        v13 = NtSetInformationJobObject(v5, (JOBOBJECTINFOCLASS)18, JobInformation, 0x10u),
        LODWORD(v4) = v13,
        v13 >= 0) )
  {
LABEL_16:
    LODWORD(v4) = 0;
    return (unsigned int)v4;
  }
LABEL_6:
  v6 = *((_DWORD *)a1 + 10);
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      NtTerminateJobObject(*((HANDLE *)a1 + 88), -1073741271);
      if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 9uLL) )
      {
        v20 = 0;
        v23 = 0;
        v26 = 0;
        v18 = &v13;
        v14 = *((_QWORD *)a1 + 3);
        v21 = &v14;
        v15 = *((_DWORD *)a1 + 12);
        v24 = &v15;
        v19 = (int)v7;
        v22 = 8;
        v25 = (int)v7;
        TlgWrite(v7, &unk_18005D09F, v8, v9, 5u, &pData);
      }
      goto LABEL_11;
    }
  }
  else if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 9uLL) )
  {
    v20 = 0;
    v23 = 0;
    v18 = &v13;
    v14 = *((_QWORD *)a1 + 3);
    v21 = &v14;
    v19 = (int)cData;
    v22 = 8;
    TlgWrite(cData, &unk_18005D17B, v11, v4, (UINT32)cData, &pData);
LABEL_11:
    LODWORD(v4) = v13;
  }
  return (unsigned int)v4;
}
