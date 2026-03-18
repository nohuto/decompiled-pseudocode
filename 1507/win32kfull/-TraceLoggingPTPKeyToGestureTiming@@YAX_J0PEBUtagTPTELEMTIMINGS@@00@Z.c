/*
 * XREFs of ?TraceLoggingPTPKeyToGestureTiming@@YAX_J0PEBUtagTPTELEMTIMINGS@@00@Z @ 0x1C02245A8
 * Callers:
 *     ?TPAAPOnKeyPress@@YAXH@Z @ 0x1C01F2170 (-TPAAPOnKeyPress@@YAXH@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C007D678 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C007E128 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingPTPKeyToGestureTiming(
        const struct _TlgProvider_t *a1,
        __int64 a2,
        const struct tagTPTELEMTIMINGS *a3,
        __int64 a4,
        TraceLoggingHProvider hProvider)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  const GUID *v7; // r9
  __int64 v8; // r10
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+34h] [rbp-CCh] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  int v15; // [rsp+3Ch] [rbp-C4h] BYREF
  int v16; // [rsp+40h] [rbp-C0h] BYREF
  int v17; // [rsp+44h] [rbp-BCh] BYREF
  int v18; // [rsp+48h] [rbp-B8h] BYREF
  int v19; // [rsp+4Ch] [rbp-B4h] BYREF
  int v20; // [rsp+50h] [rbp-B0h] BYREF
  int v21; // [rsp+54h] [rbp-ACh] BYREF
  int v22; // [rsp+58h] [rbp-A8h] BYREF
  int v23; // [rsp+5Ch] [rbp-A4h] BYREF
  int v24; // [rsp+60h] [rbp-A0h] BYREF
  int v25; // [rsp+64h] [rbp-9Ch] BYREF
  int v26; // [rsp+68h] [rbp-98h] BYREF
  int v27; // [rsp+6Ch] [rbp-94h] BYREF
  int v28; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  int *v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  int *v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h]
  int *v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  int *v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  int *v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  int *v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  int *v42; // [rsp+100h] [rbp+0h]
  __int64 v43; // [rsp+108h] [rbp+8h]
  int *v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+118h] [rbp+18h]
  int *v46; // [rsp+120h] [rbp+20h]
  __int64 v47; // [rsp+128h] [rbp+28h]
  int *v48; // [rsp+130h] [rbp+30h]
  __int64 v49; // [rsp+138h] [rbp+38h]
  int *v50; // [rsp+140h] [rbp+40h]
  __int64 v51; // [rsp+148h] [rbp+48h]
  int *v52; // [rsp+150h] [rbp+50h]
  __int64 v53; // [rsp+158h] [rbp+58h]
  int *v54; // [rsp+160h] [rbp+60h]
  __int64 v55; // [rsp+168h] [rbp+68h]
  int *v56; // [rsp+170h] [rbp+70h]
  __int64 v57; // [rsp+178h] [rbp+78h]
  int *v58; // [rsp+180h] [rbp+80h]
  __int64 v59; // [rsp+188h] [rbp+88h]
  int *v60; // [rsp+190h] [rbp+90h]
  __int64 v61; // [rsp+198h] [rbp+98h]
  int *v62; // [rsp+1A0h] [rbp+A0h]
  __int64 v63; // [rsp+1A8h] [rbp+A8h]

  if ( (unsigned int)dword_1C031D7B0 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x200000000000uLL) )
    {
      v31 = 4LL;
      v33 = 4LL;
      v28 = 1000 * v5 / (__int64)hProvider;
      v30 = &v28;
      v35 = 4LL;
      v37 = 4LL;
      v39 = 4LL;
      v14 = 1000 * v8 / (__int64)hProvider;
      v32 = &v14;
      v9 = 1000LL * *(_QWORD *)v6;
      v41 = 4LL;
      v43 = 4LL;
      v45 = 4LL;
      v22 = v9 / (__int64)hProvider;
      v34 = &v22;
      v10 = 1000LL * *(_QWORD *)(v6 + 8);
      v47 = 4LL;
      v49 = 4LL;
      v51 = 4LL;
      v16 = v10 / (__int64)hProvider;
      v36 = &v16;
      v11 = 1000LL * *(_QWORD *)(v6 + 16);
      v53 = 4LL;
      v55 = 4LL;
      v26 = v11 / (__int64)hProvider;
      v38 = &v26;
      v18 = 1000LL * *(_QWORD *)(v6 + 24) / (__int64)hProvider;
      v40 = &v18;
      v24 = *(_DWORD *)(v6 + 32);
      v42 = &v24;
      v20 = *(_DWORD *)(v6 + 36);
      v44 = &v20;
      v12 = *(_DWORD *)(v6 + 40);
      v46 = &v12;
      v13 = *(_DWORD *)(v6 + 44);
      v48 = &v13;
      v15 = *(_DWORD *)(v6 + 48);
      v50 = &v15;
      v17 = *(_DWORD *)(v6 + 52);
      v52 = &v17;
      v19 = *(_DWORD *)(v6 + 56);
      v54 = &v19;
      v21 = *(_DWORD *)(v6 + 60);
      v56 = &v21;
      v23 = *(_DWORD *)(v6 + 64);
      v58 = &v23;
      v25 = *(_DWORD *)(v6 + 68);
      v60 = &v25;
      v57 = 4LL;
      v59 = 4LL;
      v61 = 4LL;
      v27 = 1000 * (__int64)v7 / (__int64)hProvider;
      v62 = &v27;
      v63 = 4LL;
      TlgWrite(hProvider, &unk_1C02EA7CF, (LPCGUID)v6, v7, 0x13u, &pData);
    }
  }
}
