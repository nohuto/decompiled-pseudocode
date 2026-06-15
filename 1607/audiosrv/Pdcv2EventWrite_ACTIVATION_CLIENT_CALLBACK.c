/*
 * XREFs of Pdcv2EventWrite_ACTIVATION_CLIENT_CALLBACK @ 0x18008E77C
 * Callers:
 *     Pdcv2pActivationClientCallback @ 0x18008E1E0 (Pdcv2pActivationClientCallback.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004A28 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x180028F18 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     Template_qqzr1qzr3qqqxqpqqqzr13q @ 0x18008EDF8 (Template_qqzr1qzr3qqqxqpqqqzr13q.c)
 */

void __fastcall Pdcv2EventWrite_ACTIVATION_CLIENT_CALLBACK(__int64 a1, _DWORD *a2, int a3, int a4)
{
  int v4; // r14d
  __int64 v5; // rdi
  const WCHAR *v6; // rsi
  char v7; // r11
  ULONGLONG v9; // r15
  char v10; // r8
  const WCHAR *v11; // r12
  const WCHAR *v12; // r13
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // r9d
  int v16; // edi
  LPCGUID v17; // r8
  LPCGUID v18; // r9
  int v19; // [rsp+90h] [rbp-80h] BYREF
  int v20; // [rsp+94h] [rbp-7Ch] BYREF
  int v21; // [rsp+98h] [rbp-78h] BYREF
  int v22; // [rsp+9Ch] [rbp-74h] BYREF
  int v23; // [rsp+A0h] [rbp-70h] BYREF
  int v24; // [rsp+A4h] [rbp-6Ch] BYREF
  int v25; // [rsp+A8h] [rbp-68h] BYREF
  ULONGLONG v26; // [rsp+B0h] [rbp-60h] BYREF
  __int64 v27; // [rsp+B8h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-50h] BYREF
  int *v29; // [rsp+E0h] [rbp-30h]
  __int64 v30; // [rsp+E8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+100h] [rbp-10h] BYREF
  int *v33; // [rsp+110h] [rbp+0h]
  __int64 v34; // [rsp+118h] [rbp+8h]
  int *v35; // [rsp+120h] [rbp+10h]
  __int64 v36; // [rsp+128h] [rbp+18h]
  int *v37; // [rsp+130h] [rbp+20h]
  __int64 v38; // [rsp+138h] [rbp+28h]
  int *v39; // [rsp+140h] [rbp+30h]
  __int64 v40; // [rsp+148h] [rbp+38h]
  ULONGLONG *v41; // [rsp+150h] [rbp+40h]
  __int64 v42; // [rsp+158h] [rbp+48h]
  __int64 *v43; // [rsp+160h] [rbp+50h]
  __int64 v44; // [rsp+168h] [rbp+58h]
  int *v45; // [rsp+170h] [rbp+60h]
  __int64 v46; // [rsp+178h] [rbp+68h]
  int *v47; // [rsp+180h] [rbp+70h]
  __int64 v48; // [rsp+188h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+190h] [rbp+80h] BYREF

  v4 = -1;
  v23 = a4;
  v5 = -1LL;
  v22 = a3;
  v6 = &pwsz;
  v19 = -1;
  v7 = a4;
  v20 = -1;
  v21 = -1;
  v9 = -1LL;
  v10 = -1;
  v11 = &pwsz;
  v12 = &pwsz;
  if ( a2 )
  {
    v6 = (const WCHAR *)(a2 + 23);
    v4 = a2[56];
    v20 = a2[6];
    v19 = a2[55];
  }
  if ( a1 )
  {
    v12 = (const WCHAR *)(a1 + 72);
    v21 = *(_DWORD *)(a1 + 64);
    v11 = (const WCHAR *)(a1 + 328);
    v9 = GetTickCount64() - *(_QWORD *)(a1 + 40);
    v10 = v21;
    v7 = v23;
  }
  if ( (Microsoft_Windows_PDCEnableBits & 0x200000) != 0 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( v6[v13] );
    v14 = -1LL;
    do
      ++v14;
    while ( v11[v14] );
    do
      ++v5;
    while ( v12[v5] );
    v15 = v5;
    v16 = v19;
    Template_qqzr1qzr3qqqxqpqqqzr13q(
      v22,
      (_DWORD)a2,
      v20,
      v15,
      (__int64)v12,
      v14,
      (__int64)v11,
      v22,
      v4,
      v19,
      v9,
      v7,
      a1,
      v10);
  }
  else
  {
    v16 = v19;
  }
  if ( (unsigned int)dword_1800CA0C0 > 5 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1800CA0C0, 0x400000000000uLL) )
    {
      v29 = &v20;
      v19 = v4;
      v24 = v16;
      v26 = v9;
      v27 = a1;
      v25 = 2;
      v30 = 4LL;
      TlgCreateWsz(&pDesc, v12);
      TlgCreateWsz(&v32, v11);
      v34 = 4LL;
      v35 = &v19;
      v33 = &v22;
      v37 = &v24;
      v36 = 4LL;
      v39 = &v21;
      v38 = 4LL;
      v41 = &v26;
      v43 = &v27;
      v45 = &v23;
      v47 = &v25;
      v40 = 4LL;
      v42 = 8LL;
      v44 = 8LL;
      v46 = 4LL;
      v48 = 4LL;
      TlgCreateWsz(&v49, v6);
      TlgWrite((TraceLoggingHProvider)&dword_1800CA0C0, &unk_1800A88AD, v17, v18, 0xEu, &pData);
    }
  }
}
