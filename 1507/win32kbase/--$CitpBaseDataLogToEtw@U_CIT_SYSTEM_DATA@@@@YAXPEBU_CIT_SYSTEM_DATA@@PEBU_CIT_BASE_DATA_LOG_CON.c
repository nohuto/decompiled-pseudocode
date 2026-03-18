/*
 * XREFs of ??$CitpBaseDataLogToEtw@U_CIT_SYSTEM_DATA@@@@YAXPEBU_CIT_SYSTEM_DATA@@PEBU_CIT_BASE_DATA_LOG_CONTEXT@@@Z @ 0x1C00E177C
 * Callers:
 *     ?CitpContextLogToEtw@@YAXPEBU_CIT_IMPACT_CONTEXT@@H@Z @ 0x1C00E2CD4 (-CitpContextLogToEtw@@YAXPEBU_CIT_IMPACT_CONTEXT@@H@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0057B54 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0057B78 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C005A2E0 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 */

void __fastcall CitpBaseDataLogToEtw<_CIT_SYSTEM_DATA>(__int64 a1, __int64 a2)
{
  size_t v2; // rsi
  size_t *v3; // rdi
  __int64 v6; // r14
  __int64 v7; // r15
  size_t v8; // r8
  __int16 v9; // cx
  __int64 v10; // r9
  __int64 v11; // r10
  int v12; // ecx
  const void *v13; // rdx
  __int16 *v14; // rax
  __int64 v15; // r10
  int v16; // eax
  __int64 v17; // r10
  int v18; // eax
  __int64 v19; // r10
  int v20; // eax
  __int16 v21; // cx
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
  v3 = (size_t *)(a1 + 8);
  v6 = 0LL;
  v7 = 6LL;
  do
  {
    v8 = *v3;
    if ( v2 >= *v3 )
    {
      v2 -= v8;
      memmove((void *)(v6 + *(_QWORD *)(a2 + 16)), (const void *)*(v3 - 1), v8);
      v6 += *v3;
    }
    v3 += 2;
    --v7;
  }
  while ( v7 );
  if ( !*(_DWORD *)(a2 + 56) )
  {
    if ( *(_DWORD *)(a2 + 60) )
    {
      if ( hProvider <= 5u || !TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000800uLL) )
        return;
      TlgCreateWsz(&pDesc, *(LPCWSTR *)(a2 + 40));
      TlgCreateWsz(&v31, *(LPCWSTR *)(a2 + 48));
      v10 = 0xFFFFFFFFLL;
      v32 = &v26;
      v24 = *(_WORD *)(a2 + 28);
      v34 = &v24;
      v36 = v17 + 560;
      v38 = a2 + 8;
      v40 = &qword_1C0101FF8;
      v18 = -1;
      if ( qword_1C0101FA0 / 0x989680uLL <= 0xFFFFFFFF )
        v18 = qword_1C0101FA0 / 0x989680uLL;
      v28 = v18;
      v42 = &v28;
      if ( qword_1C0101FA8 / 0x989680uLL <= 0xFFFFFFFF )
        v10 = (unsigned int)(qword_1C0101FA8 / 0x989680uLL);
      v13 = &unk_1C00EB05C;
    }
    else
    {
      if ( hProvider <= 5u || !TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000800uLL) )
        return;
      TlgCreateWsz(&pDesc, *(LPCWSTR *)(a2 + 40));
      TlgCreateWsz(&v31, *(LPCWSTR *)(a2 + 48));
      v10 = 0xFFFFFFFFLL;
      v32 = &v26;
      v24 = *(_WORD *)(a2 + 28);
      v34 = &v24;
      v36 = v19 + 560;
      v38 = a2 + 8;
      v40 = &qword_1C0101FF8;
      v20 = -1;
      if ( qword_1C0101FA0 / 0x989680uLL <= 0xFFFFFFFF )
        v20 = qword_1C0101FA0 / 0x989680uLL;
      v28 = v20;
      v42 = &v28;
      if ( qword_1C0101FA8 / 0x989680uLL <= 0xFFFFFFFF )
        v10 = (unsigned int)(qword_1C0101FA8 / 0x989680uLL);
      v13 = &unk_1C00EAF72;
    }
LABEL_36:
    v21 = *(_WORD *)(a2 + 32);
    v44 = &v27;
    v46 = &v23;
    v48 = &v22;
    v25 = uMultiplier;
    v14 = &v25;
    v26 = v21;
    v33 = 2LL;
    v35 = 2LL;
    v37 = 8LL;
    v39 = 8LL;
    v27 = v10;
    v23 = 10;
    v22 = 12;
LABEL_37:
    v50 = v14;
    v52 = v55;
    v54 = a1 + 184;
    v55[1] = v56;
    v55[3] = a1 + 96;
    v56[1] = v57;
    v56[3] = *(_QWORD *)(a2 + 16);
    v57[0] = (unsigned __int16)v6;
    v41 = 8LL;
    v47 = 1LL;
    v45 = 4LL;
    v43 = 4LL;
    v57[1] = 0;
    v56[2] = 2LL;
    v56[0] = 88LL;
    v55[2] = 2LL;
    v55[0] = 28LL;
    v53 = 2LL;
    v51 = 2LL;
    v49 = 1LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, v13, 0LL, (LPCGUID)v10, 0x14u, &pData);
    return;
  }
  if ( !*(_DWORD *)(a2 + 60) )
  {
    if ( hProvider <= 5u || !TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000800uLL) )
      return;
    TlgCreateWsz(&pDesc, *(LPCWSTR *)(a2 + 40));
    TlgCreateWsz(&v31, *(LPCWSTR *)(a2 + 48));
    v10 = 0xFFFFFFFFLL;
    v32 = &v26;
    v24 = *(_WORD *)(a2 + 28);
    v34 = &v24;
    v36 = v15 + 560;
    v38 = a2 + 8;
    v40 = &qword_1C0101FF8;
    v16 = -1;
    if ( qword_1C0101FA0 / 0x989680uLL <= 0xFFFFFFFF )
      v16 = qword_1C0101FA0 / 0x989680uLL;
    v28 = v16;
    v42 = &v28;
    if ( qword_1C0101FA8 / 0x989680uLL <= 0xFFFFFFFF )
      v10 = (unsigned int)(qword_1C0101FA8 / 0x989680uLL);
    v13 = &unk_1C00EB157;
    goto LABEL_36;
  }
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000800uLL) )
  {
    TlgCreateWsz(&pDesc, *(LPCWSTR *)(a2 + 40));
    TlgCreateWsz(&v31, *(LPCWSTR *)(a2 + 48));
    v9 = *(_WORD *)(a2 + 32);
    v32 = &v25;
    v10 = 0xFFFFFFFFLL;
    v24 = *(_WORD *)(a2 + 28);
    v34 = &v24;
    v36 = v11 + 560;
    v25 = v9;
    v38 = a2 + 8;
    v12 = -1;
    v33 = 2LL;
    v40 = &qword_1C0101FF8;
    v35 = 2LL;
    v42 = &v27;
    v37 = 8LL;
    v39 = 8LL;
    if ( qword_1C0101FA0 / 0x989680uLL <= 0xFFFFFFFF )
      v12 = qword_1C0101FA0 / 0x989680uLL;
    v22 = 10;
    v27 = v12;
    v44 = &v28;
    v46 = &v22;
    v23 = 12;
    v48 = &v23;
    if ( qword_1C0101FA8 / 0x989680uLL <= 0xFFFFFFFF )
      v10 = (unsigned int)(qword_1C0101FA8 / 0x989680uLL);
    v13 = &unk_1C00EB249;
    v26 = uMultiplier;
    v14 = &v26;
    v28 = v10;
    goto LABEL_37;
  }
}
