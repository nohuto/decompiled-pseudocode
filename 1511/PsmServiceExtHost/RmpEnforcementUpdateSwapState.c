/*
 * XREFs of RmpEnforcementUpdateSwapState @ 0x18001CB14
 * Callers:
 *     RmpEnforcementUnoptimizeHost @ 0x1800046F8 (RmpEnforcementUnoptimizeHost.c)
 *     RmpEnforcementOptimizeHost @ 0x18001DBB0 (RmpEnforcementOptimizeHost.c)
 * Callees:
 *     ?SetHostSwapState@ModernResourceEnforcer@@QEAAJPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x18001748C (-SetHostSwapState@ModernResourceEnforcer@@QEAAJPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 *     _TlgCreateWsz @ 0x180019D30 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgCreateSid @ 0x18001CD1C (_TlgCreateSid.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpEnforcementUpdateSwapState(struct _RM_ACTIVITY_HOST *a1, int a2)
{
  unsigned __int8 v4; // dl
  int v5; // ecx
  const struct _TlgProvider_t *v6; // rcx
  const struct _TlgProvider_t *v7; // rcx
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  void *v11; // rcx
  unsigned int v12; // eax
  const GUID *v13; // r8
  const GUID *v14; // r9
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

  v4 = *((_BYTE *)a1 + 780);
  if ( (v4 & 0x80u) != 0 )
    goto LABEL_8;
  v5 = *((_DWORD *)a1 + 10);
  if ( v5 )
  {
    if ( v5 != 1 )
    {
      LODWORD(v6) = -1073741811;
      return (unsigned int)v6;
    }
    if ( a2 == ((v4 >> 3) & 1) )
      goto LABEL_8;
    v11 = (void *)*((_QWORD *)a1 + 89);
    JobInformation[1] = 0LL;
    JobInformation[0] = 4LL;
    *(_WORD *)((char *)JobInformation + 5) = a2 != 0;
    v12 = NtSetInformationJobObject(v11, (JOBOBJECTINFOCLASS)18, JobInformation, 0x10u);
    LODWORD(v6) = v12;
    v15 = v12;
    if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn((TraceLoggingHProvider)v12, 1uLL) )
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
      TlgWrite(v6, &unk_180064CEF, v13, v14, 6u, &pData);
      goto LABEL_6;
    }
  }
  else
  {
    v15 = ModernResourceEnforcer::SetHostSwapState(*((ModernResourceEnforcer **)RmSvcGlobals + 10), a1, a2 != 0);
    LODWORD(v6) = v15;
    if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn((TraceLoggingHProvider)v15, 1uLL) )
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
      v7 = (const struct _TlgProvider_t *)*((unsigned int *)a1 + 145);
      v38 = 0;
      v33 = &v16;
      LODWORD(v18) = *((_DWORD *)a1 + 146);
      v36 = &v18;
      v16 = (int)v7;
      v34 = 4;
      v37 = 4;
      TlgWrite(v7, &unk_180064C86, v8, v9, 9u, &pData);
LABEL_6:
      LODWORD(v6) = v15;
    }
  }
  if ( (int)v6 >= 0 )
LABEL_8:
    LODWORD(v6) = 0;
  return (unsigned int)v6;
}
