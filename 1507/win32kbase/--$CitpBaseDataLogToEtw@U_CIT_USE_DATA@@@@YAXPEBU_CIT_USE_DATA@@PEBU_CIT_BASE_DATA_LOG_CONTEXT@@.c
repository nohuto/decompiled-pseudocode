/*
 * XREFs of ??$CitpBaseDataLogToEtw@U_CIT_USE_DATA@@@@YAXPEBU_CIT_USE_DATA@@PEBU_CIT_BASE_DATA_LOG_CONTEXT@@@Z @ 0x1C00E1D14
 * Callers:
 *     ?CitpContextLogToEtw@@YAXPEBU_CIT_IMPACT_CONTEXT@@H@Z @ 0x1C00E2CD4 (-CitpContextLogToEtw@@YAXPEBU_CIT_IMPACT_CONTEXT@@H@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0057B54 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0057B78 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C005A2E0 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 */

char __fastcall CitpBaseDataLogToEtw<_CIT_USE_DATA>(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  size_t v3; // r8
  unsigned __int16 v6; // r10
  __int16 v7; // cx
  __int64 v8; // r9
  __int64 v9; // r11
  int v10; // ecx
  char *v11; // rcx
  const void *v12; // rdx
  __int16 *v13; // rax
  __int64 v14; // r11
  int v15; // eax
  __int64 v16; // r11
  int v17; // eax
  __int64 v18; // r11
  int v19; // eax
  __int16 v20; // cx
  char v22; // [rsp+30h] [rbp-D0h] BYREF
  char v23; // [rsp+31h] [rbp-CFh] BYREF
  __int16 v24; // [rsp+32h] [rbp-CEh] BYREF
  __int16 v25; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v26; // [rsp+36h] [rbp-CAh] BYREF
  int v27; // [rsp+38h] [rbp-C8h] BYREF
  int v28; // [rsp+3Ch] [rbp-C4h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+70h] [rbp-90h] BYREF
  __int16 *v32; // [rsp+80h] [rbp-80h]
  __int64 v33; // [rsp+88h] [rbp-78h]
  __int16 *v34; // [rsp+90h] [rbp-70h]
  __int64 v35; // [rsp+98h] [rbp-68h]
  __int64 v36; // [rsp+A0h] [rbp-60h]
  __int64 v37; // [rsp+A8h] [rbp-58h]
  __int64 v38; // [rsp+B0h] [rbp-50h]
  __int64 v39; // [rsp+B8h] [rbp-48h]
  __int64 *v40; // [rsp+C0h] [rbp-40h]
  __int64 v41; // [rsp+C8h] [rbp-38h]
  int *v42; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  int *v44; // [rsp+E0h] [rbp-20h]
  __int64 v45; // [rsp+E8h] [rbp-18h]
  char *v46; // [rsp+F0h] [rbp-10h]
  __int64 v47; // [rsp+F8h] [rbp-8h]
  char *v48; // [rsp+100h] [rbp+0h]
  __int64 v49; // [rsp+108h] [rbp+8h]
  __int16 *v50; // [rsp+110h] [rbp+10h]
  __int64 v51; // [rsp+118h] [rbp+18h]
  _QWORD *v52; // [rsp+120h] [rbp+20h]
  __int64 v53; // [rsp+128h] [rbp+28h]
  __int64 v54; // [rsp+130h] [rbp+30h]
  _QWORD v55[4]; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v56[4]; // [rsp+158h] [rbp+58h] BYREF
  _DWORD v57[2]; // [rsp+178h] [rbp+78h] BYREF

  v2 = *(unsigned int *)(a2 + 24);
  v3 = *(_QWORD *)(a1 + 8);
  if ( v2 >= v3 )
    LOBYTE(v2) = (unsigned __int8)memmove(*(void **)(a2 + 16), *(const void **)a1, v3);
  if ( !*(_DWORD *)(a2 + 56) )
  {
    if ( *(_DWORD *)(a2 + 60) )
    {
      if ( hProvider <= 5u )
        return v2;
      LOBYTE(v2) = TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000800uLL);
      if ( !(_BYTE)v2 )
        return v2;
      TlgCreateWsz(&pDesc, *(LPCWSTR *)(a2 + 40));
      TlgCreateWsz(&v31, *(LPCWSTR *)(a2 + 48));
      v8 = 0xFFFFFFFFLL;
      v32 = &v26;
      v24 = *(_WORD *)(a2 + 28);
      v34 = &v24;
      v36 = v16 + 560;
      v38 = a2 + 8;
      v40 = &qword_1C0101FF8;
      v17 = -1;
      if ( qword_1C0101FA0 / 0x989680uLL <= 0xFFFFFFFF )
        v17 = qword_1C0101FA0 / 0x989680uLL;
      v28 = v17;
      v42 = &v28;
      if ( qword_1C0101FA8 / 0x989680uLL <= 0xFFFFFFFF )
        v8 = (unsigned int)(qword_1C0101FA8 / 0x989680uLL);
      v12 = &unk_1C00EB05C;
    }
    else
    {
      if ( hProvider <= 5u )
        return v2;
      LOBYTE(v2) = TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000800uLL);
      if ( !(_BYTE)v2 )
        return v2;
      TlgCreateWsz(&pDesc, *(LPCWSTR *)(a2 + 40));
      TlgCreateWsz(&v31, *(LPCWSTR *)(a2 + 48));
      v8 = 0xFFFFFFFFLL;
      v32 = &v26;
      v24 = *(_WORD *)(a2 + 28);
      v34 = &v24;
      v36 = v18 + 560;
      v38 = a2 + 8;
      v40 = &qword_1C0101FF8;
      v19 = -1;
      if ( qword_1C0101FA0 / 0x989680uLL <= 0xFFFFFFFF )
        v19 = qword_1C0101FA0 / 0x989680uLL;
      v28 = v19;
      v42 = &v28;
      if ( qword_1C0101FA8 / 0x989680uLL <= 0xFFFFFFFF )
        v8 = (unsigned int)(qword_1C0101FA8 / 0x989680uLL);
      v12 = &unk_1C00EAF72;
    }
LABEL_34:
    v20 = *(_WORD *)(a2 + 32);
    v44 = &v27;
    v46 = &v23;
    v25 = uMultiplier;
    v13 = &v25;
    v26 = v20;
    v11 = &v22;
    v33 = 2LL;
    v35 = 2LL;
    v37 = 8LL;
    v39 = 8LL;
    v27 = v8;
    v23 = 10;
    v22 = 12;
LABEL_35:
    v50 = v13;
    v52 = v55;
    v54 = a1 + 64;
    v55[1] = v56;
    v55[3] = a1 + 16;
    v56[1] = v57;
    v56[3] = *(_QWORD *)(a2 + 16);
    v57[0] = v6;
    v41 = 8LL;
    v47 = 1LL;
    v45 = 4LL;
    v43 = 4LL;
    v57[1] = 0;
    v56[2] = 2LL;
    v56[0] = 48LL;
    v55[2] = 2LL;
    v55[0] = 24LL;
    v53 = 2LL;
    v51 = 2LL;
    v49 = 1LL;
    v48 = v11;
    LOBYTE(v2) = TlgWrite((TraceLoggingHProvider)&hProvider, v12, 0LL, (LPCGUID)v8, 0x14u, &pData);
    return v2;
  }
  if ( !*(_DWORD *)(a2 + 60) )
  {
    if ( hProvider <= 5u )
      return v2;
    LOBYTE(v2) = TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000800uLL);
    if ( !(_BYTE)v2 )
      return v2;
    TlgCreateWsz(&pDesc, *(LPCWSTR *)(a2 + 40));
    TlgCreateWsz(&v31, *(LPCWSTR *)(a2 + 48));
    v8 = 0xFFFFFFFFLL;
    v32 = &v26;
    v24 = *(_WORD *)(a2 + 28);
    v34 = &v24;
    v36 = v14 + 560;
    v38 = a2 + 8;
    v40 = &qword_1C0101FF8;
    v15 = -1;
    if ( qword_1C0101FA0 / 0x989680uLL <= 0xFFFFFFFF )
      v15 = qword_1C0101FA0 / 0x989680uLL;
    v28 = v15;
    v42 = &v28;
    if ( qword_1C0101FA8 / 0x989680uLL <= 0xFFFFFFFF )
      v8 = (unsigned int)(qword_1C0101FA8 / 0x989680uLL);
    v12 = &unk_1C00EB157;
    goto LABEL_34;
  }
  if ( hProvider > 5u )
  {
    LOBYTE(v2) = TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000800uLL);
    if ( (_BYTE)v2 )
    {
      TlgCreateWsz(&pDesc, *(LPCWSTR *)(a2 + 40));
      TlgCreateWsz(&v31, *(LPCWSTR *)(a2 + 48));
      v7 = *(_WORD *)(a2 + 32);
      v32 = &v25;
      v8 = 0xFFFFFFFFLL;
      v24 = *(_WORD *)(a2 + 28);
      v34 = &v24;
      v36 = v9 + 560;
      v25 = v7;
      v38 = a2 + 8;
      v10 = -1;
      v33 = 2LL;
      v40 = &qword_1C0101FF8;
      v35 = 2LL;
      v42 = &v27;
      v37 = 8LL;
      if ( qword_1C0101FA0 / 0x989680uLL <= 0xFFFFFFFF )
        v10 = qword_1C0101FA0 / 0x989680uLL;
      v39 = 8LL;
      v27 = v10;
      v11 = &v23;
      v44 = &v28;
      v22 = 10;
      v46 = &v22;
      if ( qword_1C0101FA8 / 0x989680uLL <= 0xFFFFFFFF )
        v8 = (unsigned int)(qword_1C0101FA8 / 0x989680uLL);
      v12 = &unk_1C00EB249;
      v26 = uMultiplier;
      v13 = &v26;
      v28 = v8;
      v23 = 12;
      goto LABEL_35;
    }
  }
  return v2;
}
