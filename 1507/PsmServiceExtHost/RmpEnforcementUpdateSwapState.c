/*
 * XREFs of RmpEnforcementUpdateSwapState @ 0x180006898
 * Callers:
 *     RmpEnforcementUnoptimizeHost @ 0x180002494 (RmpEnforcementUnoptimizeHost.c)
 *     RmpEnforcementOptimizeHost @ 0x18000673C (RmpEnforcementOptimizeHost.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     ?SetHostSwapState@ModernResourceEnforcer@@QEAAJPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x18000C0A0 (-SetHostSwapState@ModernResourceEnforcer@@QEAAJPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     _TlgCreateSid @ 0x18002F820 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x18002F848 (_TlgCreateWsz.c)
 */

__int64 __fastcall RmpEnforcementUpdateSwapState(struct _RM_ACTIVITY_HOST *a1, int a2)
{
  unsigned __int8 v4; // dl
  int v5; // ecx
  const struct _TlgProvider_t *v6; // rcx
  void *v7; // rcx
  unsigned int v8; // eax
  const GUID *v9; // r8
  const GUID *v10; // r9
  const struct _TlgProvider_t *v11; // rcx
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  unsigned int v15; // [rsp+38h] [rbp-79h] BYREF
  int v16; // [rsp+3Ch] [rbp-75h] BYREF
  int v17; // [rsp+40h] [rbp-71h] BYREF
  __int64 v18; // [rsp+48h] [rbp-69h] BYREF
  __int64 v19; // [rsp+50h] [rbp-61h] BYREF
  _QWORD JobInformation[2]; // [rsp+58h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-49h] BYREF
  unsigned int *v22; // [rsp+88h] [rbp-29h]
  int v23; // [rsp+90h] [rbp-21h]
  int v24; // [rsp+94h] [rbp-1Dh]
  __int64 *v25; // [rsp+98h] [rbp-19h]
  int v26; // [rsp+A0h] [rbp-11h]
  int v27; // [rsp+A4h] [rbp-Dh]
  int *v28; // [rsp+A8h] [rbp-9h]
  int v29; // [rsp+B0h] [rbp-1h]
  int v30; // [rsp+B4h] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B8h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+C8h] [rbp+17h] BYREF
  int *v33; // [rsp+D8h] [rbp+27h]
  int v34; // [rsp+E0h] [rbp+2Fh]
  int v35; // [rsp+E4h] [rbp+33h]
  __int64 *v36; // [rsp+E8h] [rbp+37h]
  int v37; // [rsp+F0h] [rbp+3Fh]
  int v38; // [rsp+F4h] [rbp+43h]

  v4 = *((_BYTE *)a1 + 772);
  if ( (v4 & 0x80u) != 0 )
    goto LABEL_14;
  v5 = *((_DWORD *)a1 + 10);
  if ( !v5 )
  {
    v15 = ModernResourceEnforcer::SetHostSwapState(*((ModernResourceEnforcer **)RmSvcGlobals + 10), a1, a2 != 0);
    LODWORD(v6) = v15;
    if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn((TraceLoggingHProvider)v15, 1uLL) )
    {
      v24 = 0;
      v27 = 0;
      v30 = 0;
      v22 = &v15;
      v19 = *((_QWORD *)a1 + 3);
      v25 = &v19;
      v28 = &v17;
      v23 = 4;
      v26 = 8;
      v17 = a2;
      v29 = 4;
      TlgCreateWsz(&pDesc, (LPCWSTR)a1 + 24);
      TlgCreateSid(&v32, (const SID *)((char *)a1 + 512));
      v35 = 0;
      v11 = (const struct _TlgProvider_t *)*((unsigned int *)a1 + 145);
      v38 = 0;
      v33 = &v16;
      LODWORD(v18) = *((_DWORD *)a1 + 146);
      v36 = &v18;
      v16 = (int)v11;
      v34 = 4;
      v37 = 4;
      TlgWrite(v11, &unk_18005CED3, v12, v13, 9u, &pData);
      goto LABEL_12;
    }
LABEL_13:
    if ( (int)v6 < 0 )
      return (unsigned int)v6;
LABEL_14:
    LODWORD(v6) = 0;
    return (unsigned int)v6;
  }
  if ( v5 == 1 )
  {
    if ( a2 == ((v4 >> 3) & 1) )
      goto LABEL_14;
    v7 = (void *)*((_QWORD *)a1 + 88);
    JobInformation[1] = 0LL;
    JobInformation[0] = 4LL;
    *(_WORD *)((char *)JobInformation + 5) = a2 != 0;
    v8 = NtSetInformationJobObject(v7, (JOBOBJECTINFOCLASS)18, JobInformation, 0x10u);
    LODWORD(v6) = v8;
    v15 = v8;
    if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn((TraceLoggingHProvider)v8, 1uLL) )
    {
      v24 = 0;
      v27 = 0;
      v30 = 0;
      pDesc.Reserved = 0;
      v22 = &v15;
      v18 = *((_QWORD *)a1 + 3);
      v25 = &v18;
      v28 = &v16;
      v17 = *((_DWORD *)a1 + 12);
      pDesc.Ptr = (ULONGLONG)&v17;
      v23 = 4;
      v26 = 8;
      v16 = a2;
      v29 = 4;
      pDesc.Size = 4;
      TlgWrite(v6, &unk_18005CF3C, v9, v10, 6u, &pData);
LABEL_12:
      LODWORD(v6) = v15;
      goto LABEL_13;
    }
    goto LABEL_13;
  }
  LODWORD(v6) = -1073741811;
  return (unsigned int)v6;
}
