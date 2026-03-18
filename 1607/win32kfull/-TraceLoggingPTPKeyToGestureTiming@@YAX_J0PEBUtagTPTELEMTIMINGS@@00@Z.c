/*
 * XREFs of ?TraceLoggingPTPKeyToGestureTiming@@YAX_J0PEBUtagTPTELEMTIMINGS@@00@Z @ 0x1C021E6C8
 * Callers:
 *     ?TPAAPOnKeyPress@@YAXH@Z @ 0x1C01E86D0 (-TPAAPOnKeyPress@@YAXH@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00E56D0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingPTPKeyToGestureTiming(
        __int64 a1,
        __int64 a2,
        const struct tagTPTELEMTIMINGS *a3,
        __int64 a4,
        LPCGUID pActivityId)
{
  const GUID *v6; // r9
  __int64 v7; // r10
  __int64 v8; // r11
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
  int v29; // [rsp+74h] [rbp-8Ch] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  int *v31; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  int *v33; // [rsp+B0h] [rbp-50h]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  int *v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  int *v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  int *v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  int *v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]
  int *v43; // [rsp+100h] [rbp+0h]
  __int64 v44; // [rsp+108h] [rbp+8h]
  int *v45; // [rsp+110h] [rbp+10h]
  __int64 v46; // [rsp+118h] [rbp+18h]
  int *v47; // [rsp+120h] [rbp+20h]
  __int64 v48; // [rsp+128h] [rbp+28h]
  int *v49; // [rsp+130h] [rbp+30h]
  __int64 v50; // [rsp+138h] [rbp+38h]
  int *v51; // [rsp+140h] [rbp+40h]
  __int64 v52; // [rsp+148h] [rbp+48h]
  int *v53; // [rsp+150h] [rbp+50h]
  __int64 v54; // [rsp+158h] [rbp+58h]
  int *v55; // [rsp+160h] [rbp+60h]
  __int64 v56; // [rsp+168h] [rbp+68h]
  int *v57; // [rsp+170h] [rbp+70h]
  __int64 v58; // [rsp+178h] [rbp+78h]
  int *v59; // [rsp+180h] [rbp+80h]
  __int64 v60; // [rsp+188h] [rbp+88h]
  int *v61; // [rsp+190h] [rbp+90h]
  __int64 v62; // [rsp+198h] [rbp+98h]
  int *v63; // [rsp+1A0h] [rbp+A0h]
  __int64 v64; // [rsp+1A8h] [rbp+A8h]
  int *v65; // [rsp+1B0h] [rbp+B0h]
  __int64 v66; // [rsp+1B8h] [rbp+B8h]

  if ( dword_1C0320840 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0320840, 0x200000000000uLL) )
    {
      v32 = 4LL;
      v34 = 4LL;
      v36 = 4LL;
      v12 = 1000 * a1 / (__int64)pActivityId;
      v31 = &v12;
      v38 = 4LL;
      v40 = 4LL;
      v42 = 4LL;
      v13 = 1000 * v8 / (__int64)pActivityId;
      v33 = &v13;
      v9 = 1000LL * *(_QWORD *)v7;
      v44 = 4LL;
      v46 = 4LL;
      v48 = 4LL;
      v14 = v9 / (__int64)pActivityId;
      v35 = &v14;
      v10 = 1000LL * *(_QWORD *)(v7 + 8);
      v50 = 4LL;
      v52 = 4LL;
      v54 = 4LL;
      v15 = v10 / (__int64)pActivityId;
      v37 = &v15;
      v11 = 1000LL * *(_QWORD *)(v7 + 16);
      v56 = 4LL;
      v16 = v11 / (__int64)pActivityId;
      v39 = &v16;
      v17 = 1000LL * *(_QWORD *)(v7 + 24) / (__int64)pActivityId;
      v41 = &v17;
      v18 = 1000LL * *(_QWORD *)(v7 + 32) / (__int64)pActivityId;
      v43 = &v18;
      v19 = *(_DWORD *)(v7 + 40);
      v45 = &v19;
      v20 = *(_DWORD *)(v7 + 44);
      v47 = &v20;
      v21 = *(_DWORD *)(v7 + 48);
      v49 = &v21;
      v22 = *(_DWORD *)(v7 + 52);
      v51 = &v22;
      v23 = *(_DWORD *)(v7 + 56);
      v53 = &v23;
      v24 = *(_DWORD *)(v7 + 60);
      v55 = &v24;
      v25 = *(_DWORD *)(v7 + 64);
      v57 = &v25;
      v26 = *(_DWORD *)(v7 + 68);
      v59 = &v26;
      v27 = *(_DWORD *)(v7 + 72);
      v61 = &v27;
      v28 = *(_DWORD *)(v7 + 76);
      v63 = &v28;
      v58 = 4LL;
      v60 = 4LL;
      v62 = 4LL;
      v29 = 1000 * (__int64)v6 / (__int64)pActivityId;
      v65 = &v29;
      v64 = 4LL;
      v66 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C0320840, &unk_1C02EEBE4, pActivityId, v6, 0x14u, &pData);
    }
  }
}
