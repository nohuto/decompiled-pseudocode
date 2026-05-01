/*
 * XREFs of RmpEnforcementUpdateSwapState @ 0x180018878
 * Callers:
 *     RmpEnforcementOptimizeHost @ 0x1800198C4 (RmpEnforcementOptimizeHost.c)
 *     RmpEnforcementUnoptimizeHost @ 0x180019DBC (RmpEnforcementUnoptimizeHost.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180015F14 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     _TlgCreateSid @ 0x180017A10 (_TlgCreateSid.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpEnforcementUpdateSwapState(__int64 a1, int a2)
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
  unsigned int v15; // [rsp+48h] [rbp-C0h] BYREF
  int v16; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v17; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD JobInformation[2]; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  unsigned int *v22; // [rsp+98h] [rbp-70h]
  int v23; // [rsp+A0h] [rbp-68h]
  int v24; // [rsp+A4h] [rbp-64h]
  __int64 *v25; // [rsp+A8h] [rbp-60h]
  int v26; // [rsp+B0h] [rbp-58h]
  int v27; // [rsp+B4h] [rbp-54h]
  __int64 *v28; // [rsp+B8h] [rbp-50h]
  int v29; // [rsp+C0h] [rbp-48h]
  int v30; // [rsp+C4h] [rbp-44h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C8h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+D8h] [rbp-30h] BYREF
  int *v33; // [rsp+E8h] [rbp-20h]
  int v34; // [rsp+F0h] [rbp-18h]
  int v35; // [rsp+F4h] [rbp-14h]
  __int64 *v36; // [rsp+F8h] [rbp-10h]
  int v37; // [rsp+100h] [rbp-8h]
  int v38; // [rsp+104h] [rbp-4h]

  v4 = *(_BYTE *)(a1 + 820);
  if ( (v4 & 0x80u) != 0 )
    goto LABEL_8;
  v5 = *(_DWORD *)(a1 + 48);
  if ( v5 )
  {
    if ( v5 != 1 )
    {
      LODWORD(v6) = -1073741811;
      return (unsigned int)v6;
    }
    if ( a2 == ((v4 >> 3) & 1) )
      goto LABEL_8;
    v11 = *(void **)(a1 + 736);
    JobInformation[1] = 0LL;
    JobInformation[0] = 4LL;
    *(_WORD *)((char *)JobInformation + 5) = a2 != 0;
    v12 = NtSetInformationJobObject(v11, (JOBOBJECTINFOCLASS)18, JobInformation, 0x10u);
    LODWORD(v6) = v12;
    v15 = v12;
    if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn((TraceLoggingHProvider)v12, 0x11uLL) )
    {
      v24 = 0;
      v27 = 0;
      v30 = 0;
      pDesc.Reserved = 0;
      v22 = &v15;
      v18 = *(_QWORD *)(a1 + 24);
      v25 = &v18;
      v28 = (__int64 *)&v16;
      LODWORD(v17) = *(_DWORD *)(a1 + 56);
      pDesc.Ptr = (ULONGLONG)&v17;
      v23 = 4;
      v26 = 8;
      v16 = a2;
      v29 = 4;
      pDesc.Size = 4;
      TlgWrite(v6, &unk_1800430C5, v13, v14, 6u, &pData);
      goto LABEL_6;
    }
  }
  else
  {
    v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, bool))(*(_QWORD *)(*(_QWORD *)(a1 + 40)
                                                                                                + 72LL)
                                                                                    + 144LL))(
            a1 + 520,
            *(unsigned int *)(a1 + 588),
            a1 + 56,
            *(unsigned int *)(a1 + 592),
            *(_QWORD *)(a1 + 24),
            a2 != 0);
    LODWORD(v6) = v15;
    if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn((TraceLoggingHProvider)v15, 0x11uLL) )
    {
      v24 = 0;
      v27 = 0;
      v30 = 0;
      v22 = &v15;
      v19 = *(_QWORD *)(a1 + 24);
      v25 = &v19;
      v28 = &v17;
      v23 = 4;
      v26 = 8;
      LODWORD(v17) = a2;
      v29 = 4;
      TlgCreateWsz(&pDesc, (LPCWSTR)(a1 + 56));
      TlgCreateSid(&v32, (const SID *)(a1 + 520));
      v35 = 0;
      v7 = (const struct _TlgProvider_t *)*(unsigned int *)(a1 + 588);
      v38 = 0;
      v33 = &v16;
      LODWORD(v18) = *(_DWORD *)(a1 + 592);
      v36 = &v18;
      v16 = (int)v7;
      v34 = 4;
      v37 = 4;
      TlgWrite(v7, &unk_180043224, v8, v9, 9u, &pData);
LABEL_6:
      LODWORD(v6) = v15;
    }
  }
  if ( (int)v6 >= 0 )
LABEL_8:
    LODWORD(v6) = 0;
  return (unsigned int)v6;
}
