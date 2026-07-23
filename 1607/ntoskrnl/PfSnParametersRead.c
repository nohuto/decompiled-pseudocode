/*
 * XREFs of PfSnParametersRead @ 0x1405723EC
 * Callers:
 *     PfpParametersWatcher @ 0x140669FB8 (PfpParametersWatcher.c)
 *     PfpParametersInitialize @ 0x1407B3C34 (PfpParametersInitialize.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x1400C265C (RtlStringCbCopyW.c)
 *     RtlStringCbCatW @ 0x1400C2858 (RtlStringCbCatW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _wcsupr @ 0x14014DFA8 (_wcsupr.c)
 *     PfpGetParameter @ 0x1405727EC (PfpGetParameter.c)
 *     PfSnParametersVerify @ 0x1405728CC (PfSnParametersVerify.c)
 */

__int64 __fastcall PfSnParametersRead(__int64 a1)
{
  __int64 v1; // rdi
  _OWORD *v3; // rax
  _OWORD *v4; // rdx
  __int64 v5; // rcx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 v14; // rax
  void *v15; // r15
  _DWORD *v16; // r14
  int v17; // r12d
  int *v18; // rbx
  const wchar_t **v19; // rsi
  const wchar_t *v20; // r13
  int v21; // eax
  const wchar_t *v22; // r8
  __int64 result; // rax
  _OWORD *v24; // rbx
  _OWORD *v25; // rax
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int64 v34; // rax
  __int64 v35; // [rsp+38h] [rbp-D0h] BYREF
  char *v36; // [rsp+40h] [rbp-C8h]
  _OWORD *v37; // [rsp+48h] [rbp-C0h]
  _BYTE v38[16]; // [rsp+58h] [rbp-B0h] BYREF
  char v39; // [rsp+68h] [rbp-A0h] BYREF
  wchar_t String[128]; // [rsp+E8h] [rbp-20h] BYREF
  wchar_t pszDest[80]; // [rsp+1F8h] [rbp+F0h] BYREF

  v1 = 3LL;
  v37 = (_OWORD *)(a1 + 96);
  v3 = (_OWORD *)(a1 + 96);
  v4 = v38;
  v5 = 3LL;
  do
  {
    v6 = v3[1];
    *v4 = *v3;
    v7 = v3[2];
    v4[1] = v6;
    v8 = v3[3];
    v4[2] = v7;
    v9 = v3[4];
    v4[3] = v8;
    v10 = v3[5];
    v4[4] = v9;
    v11 = v3[6];
    v4[5] = v10;
    v12 = v3[7];
    v3 += 8;
    v4[6] = v11;
    v4 += 8;
    *(v4 - 1) = v12;
    --v5;
  }
  while ( v5 );
  v13 = *v3;
  v14 = *((_QWORD *)v3 + 2);
  v15 = *(void **)(a1 + 8);
  *v4 = v13;
  *((_QWORD *)v4 + 2) = v14;
  v35 = 4LL;
  v16 = (_DWORD *)&v35 + 1;
  v17 = 0;
  if ( (int)PfpGetParameter(v15, (__int64)&v35) < 0 )
    v16 = 0LL;
  v36 = &v39;
  v18 = (int *)v38;
  v19 = (const wchar_t **)(a1 + 520);
  do
  {
    v20 = *v19;
    if ( v16 )
      v21 = 2 - ((*v16 & (1 << v17)) != 0);
    else
      v21 = 0;
    v22 = *v19;
    *v18 = v21;
    RtlStringCbCopyW(pszDest, 0xA0uLL, v22);
    RtlStringCbCatW(pszDest, 0xA0uLL, L"MaxNumPages");
    LODWORD(v35) = 4;
    PfpGetParameter(v15, (__int64)&v35);
    RtlStringCbCopyW(pszDest, 0xA0uLL, v20);
    RtlStringCbCatW(pszDest, 0xA0uLL, L"MaxNumSections");
    LODWORD(v35) = 4;
    PfpGetParameter(v15, (__int64)&v35);
    RtlStringCbCopyW(pszDest, 0xA0uLL, v20);
    RtlStringCbCatW(pszDest, 0xA0uLL, L"TimerPeriod");
    LODWORD(v35) = 8;
    PfpGetParameter(v15, (__int64)&v35);
    v36 += 16;
    ++v18;
    ++v17;
    ++v19;
  }
  while ( v17 < 2 );
  LODWORD(v35) = 96;
  PfpGetParameter(v15, (__int64)&v35);
  LODWORD(v35) = 4;
  PfpGetParameter(v15, (__int64)&v35);
  LODWORD(v35) = 4;
  PfpGetParameter(v15, (__int64)&v35);
  LODWORD(v35) = 4;
  PfpGetParameter(v15, (__int64)&v35);
  LODWORD(v35) = 256;
  PfpGetParameter(v15, (__int64)&v35);
  String[127] = 0;
  wcsupr(String);
  LODWORD(v35) = 4;
  PfpGetParameter(v15, (__int64)&v35);
  result = PfSnParametersVerify(v38);
  v24 = v37;
  if ( (int)result >= 0 )
  {
    v25 = v38;
    do
    {
      v26 = v25[1];
      *v24 = *v25;
      v27 = v25[2];
      v24[1] = v26;
      v28 = v25[3];
      v24[2] = v27;
      v29 = v25[4];
      v24[3] = v28;
      v30 = v25[5];
      v24[4] = v29;
      v31 = v25[6];
      v24[5] = v30;
      v32 = v25[7];
      v25 += 8;
      v24[6] = v31;
      v24 += 8;
      *(v24 - 1) = v32;
      --v1;
    }
    while ( v1 );
    v33 = *v25;
    v34 = *((_QWORD *)v25 + 2);
    *v24 = v33;
    *((_QWORD *)v24 + 2) = v34;
    return 0LL;
  }
  return result;
}
