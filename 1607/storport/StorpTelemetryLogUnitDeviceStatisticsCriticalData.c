/*
 * XREFs of StorpTelemetryLogUnitDeviceStatisticsCriticalData @ 0x1C003DBA4
 * Callers:
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C0040278 (StorpTelemetrySendUnitDeviceStatistics.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0014C64 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0018D00 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0019BC0 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C0042814 (_TlgCreateSz.c)
 */

void __fastcall StorpTelemetryLogUnitDeviceStatisticsCriticalData(__int64 a1)
{
  __int64 v1; // rcx
  _BYTE *v2; // r9
  __int64 v3; // r10
  __int64 v4; // rcx
  _BYTE *v5; // r8
  _QWORD *v6; // rbx
  const WCHAR *v7; // r9
  __int16 v8; // ax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r14
  unsigned __int16 v16; // r13
  __int64 v17; // rax
  _QWORD *v18; // r11
  unsigned __int16 v19; // r12
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rsi
  unsigned __int16 v24; // r15
  __int64 v25; // rax
  LPCSTR v26; // r10
  __int64 v27; // r10
  __int64 v28; // r11
  LPCGUID v29; // r9
  char v30; // [rsp+30h] [rbp-D0h] BYREF
  char v31; // [rsp+31h] [rbp-CFh] BYREF
  char v32; // [rsp+32h] [rbp-CEh] BYREF
  char v33; // [rsp+33h] [rbp-CDh] BYREF
  char v34; // [rsp+34h] [rbp-CCh] BYREF
  struct _TlgProvider_t hProvider; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+78h] [rbp-88h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-60h]
  __int64 v39; // [rsp+A8h] [rbp-58h]
  _BYTE *v40; // [rsp+B0h] [rbp-50h]
  __int64 v41; // [rsp+B8h] [rbp-48h]
  void (__fastcall **p_EnableCallback)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *); // [rsp+C0h] [rbp-40h]
  __int64 v43; // [rsp+C8h] [rbp-38h]
  char *v44; // [rsp+D0h] [rbp-30h]
  __int64 v45; // [rsp+D8h] [rbp-28h]
  char *v46; // [rsp+E0h] [rbp-20h]
  __int64 v47; // [rsp+E8h] [rbp-18h]
  char *v48; // [rsp+F0h] [rbp-10h]
  __int64 v49; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+120h] [rbp+20h] BYREF
  struct _TlgProvider_t *p_hProvider; // [rsp+130h] [rbp+30h]
  __int64 v54; // [rsp+138h] [rbp+38h]
  _DWORD *v55; // [rsp+140h] [rbp+40h]
  __int64 v56; // [rsp+148h] [rbp+48h]
  _QWORD *v57; // [rsp+150h] [rbp+50h]
  _DWORD v58[2]; // [rsp+158h] [rbp+58h] BYREF
  char *v59; // [rsp+160h] [rbp+60h]
  __int64 v60; // [rsp+168h] [rbp+68h]
  unsigned __int64 *p_KeywordAny; // [rsp+170h] [rbp+70h]
  __int64 v62; // [rsp+178h] [rbp+78h]
  void **p_CallbackContext; // [rsp+180h] [rbp+80h]
  __int64 v64; // [rsp+188h] [rbp+88h]
  _DWORD *v65; // [rsp+190h] [rbp+90h]
  __int64 v66; // [rsp+198h] [rbp+98h]
  void (*AnnotationFunc)(...); // [rsp+1A0h] [rbp+A0h]
  _DWORD v68[2]; // [rsp+1A8h] [rbp+A8h] BYREF
  _DWORD *v69; // [rsp+1B0h] [rbp+B0h]
  __int64 v70; // [rsp+1B8h] [rbp+B8h]
  __int64 v71; // [rsp+1C0h] [rbp+C0h]
  _DWORD v72[2]; // [rsp+1C8h] [rbp+C8h] BYREF
  _DWORD *v73; // [rsp+1D0h] [rbp+D0h]
  __int64 v74; // [rsp+1D8h] [rbp+D8h]
  __int64 v75; // [rsp+1E0h] [rbp+E0h]
  _DWORD v76[2]; // [rsp+1E8h] [rbp+E8h] BYREF
  char *v77; // [rsp+1F0h] [rbp+F0h]
  __int64 v78; // [rsp+1F8h] [rbp+F8h]
  unsigned __int64 *p_KeywordAll; // [rsp+200h] [rbp+100h]
  __int64 v80; // [rsp+208h] [rbp+108h]
  _DWORD *v81; // [rsp+210h] [rbp+110h]
  __int64 v82; // [rsp+218h] [rbp+118h]
  __int64 v83; // [rsp+220h] [rbp+120h]
  _DWORD v84[2]; // [rsp+228h] [rbp+128h] BYREF
  char *v85; // [rsp+230h] [rbp+130h]
  __int64 v86; // [rsp+238h] [rbp+138h]
  _DWORD *v87; // [rsp+240h] [rbp+140h]
  __int64 v88; // [rsp+248h] [rbp+148h]
  __int64 v89; // [rsp+250h] [rbp+150h]
  _DWORD v90[2]; // [rsp+258h] [rbp+158h] BYREF
  char *v91; // [rsp+260h] [rbp+160h]
  __int64 v92; // [rsp+268h] [rbp+168h]
  unsigned __int64 *p_RegHandle; // [rsp+270h] [rbp+170h]
  __int64 v94; // [rsp+278h] [rbp+178h]
  char *v95; // [rsp+280h] [rbp+180h]
  __int64 v96; // [rsp+288h] [rbp+188h]
  _DWORD *v97; // [rsp+290h] [rbp+190h]
  __int64 v98; // [rsp+298h] [rbp+198h]
  __int64 v99; // [rsp+2A0h] [rbp+1A0h]
  _DWORD v100[2]; // [rsp+2A8h] [rbp+1A8h] BYREF
  char *v101; // [rsp+2B0h] [rbp+1B0h]
  __int64 v102; // [rsp+2B8h] [rbp+1B8h]

  ++*(_BYTE *)(a1 + 1704);
  if ( (unsigned int)dword_1C004F010 > 5 && TlgKeywordOn((TraceLoggingHProvider)a1, 0x800000000000uLL) )
  {
    v4 = *(_QWORD *)(v1 + 24);
    v5 = v2 + 1688;
    v6 = *(_QWORD **)(v3 + 40);
    LODWORD(hProvider.EnableCallback) = *(_DWORD *)(v4 + 56);
    v32 = v2[88];
    v33 = v2[89];
    v34 = v2[90];
    v7 = *(const WCHAR **)(v4 + 4800);
    v8 = *(_WORD *)(v3 + 96);
    LOWORD(hProvider.LevelPlus1) = **(_WORD **)(v3 + 32);
    *((_WORD *)&hProvider.LevelPlus1 + 2) = v8;
    v9 = v6[1];
    if ( v9 >= 0 || (HIDWORD(hProvider.ProviderMetadataPtr) = v6[1], (v9 & 0x4000000000000000LL) == 0) )
      HIDWORD(hProvider.ProviderMetadataPtr) = -1;
    v10 = v6[2];
    if ( (v10 & 0x8000000000000000uLL) == 0
      || (LODWORD(hProvider.KeywordAny) = v6[2], (v10 & 0x4000000000000000LL) == 0) )
    {
      LODWORD(hProvider.KeywordAny) = -1;
    }
    v11 = v6[9];
    if ( v11 < 0 && (v11 & 0x4000000000000000LL) != 0 )
      hProvider.CallbackContext = (void *)(unsigned __int16)v11;
    else
      hProvider.CallbackContext = (void *)-1LL;
    v12 = *(_QWORD *)(v3 + 64);
    hProvider.AnnotationFunc = *(void (**)(...))(v3 + 48);
    *((_WORD *)&hProvider.LevelPlus1 + 3) = *(_WORD *)(v3 + 98);
    v36 = *(_QWORD *)(v3 + 56);
    LODWORD(hProvider.ProviderMetadataPtr) = *(_DWORD *)(v3 + 100);
    v13 = *(_QWORD *)(v12 + 8);
    if ( (v13 & 0x8000000000000000uLL) == 0
      || (HIDWORD(hProvider.KeywordAny) = *(_QWORD *)(v12 + 8), (v13 & 0x4000000000000000LL) == 0) )
    {
      HIDWORD(hProvider.KeywordAny) = -1;
    }
    v14 = *(_QWORD *)(v12 + 16);
    if ( (v14 & 0x8000000000000000uLL) == 0
      || (LODWORD(hProvider.KeywordAll) = *(_QWORD *)(v12 + 16), (v14 & 0x4000000000000000LL) == 0) )
    {
      LODWORD(hProvider.KeywordAll) = -1;
    }
    v15 = *(_QWORD *)(v3 + 72);
    v16 = *(_WORD *)(v3 + 104);
    v17 = *(_QWORD *)(v15 + 8);
    if ( (v17 & 0x8000000000000000uLL) == 0 || (v30 = *(_QWORD *)(v15 + 8), (v17 & 0x4000000000000000LL) == 0) )
      v30 = -1;
    v18 = *(_QWORD **)(v3 + 80);
    v19 = *(_WORD *)(v3 + 106);
    v20 = v18[1];
    if ( v20 < 0 && (v20 & 0x4000000000000000LL) != 0 )
      HIDWORD(hProvider.KeywordAll) = (unsigned __int8)v20;
    else
      HIDWORD(hProvider.KeywordAll) = -1;
    v21 = v18[2];
    if ( (v21 & 0x8000000000000000uLL) == 0
      || (LODWORD(hProvider.RegHandle) = v18[2], (v21 & 0x4000000000000000LL) == 0) )
    {
      LODWORD(hProvider.RegHandle) = -1;
    }
    v22 = v18[3];
    if ( (v22 & 0x8000000000000000uLL) == 0
      || (HIDWORD(hProvider.RegHandle) = v18[3], (v22 & 0x4000000000000000LL) == 0) )
    {
      HIDWORD(hProvider.RegHandle) = -1;
    }
    v23 = *(_QWORD *)(v3 + 88);
    v24 = *(_WORD *)(v3 + 108);
    v25 = *(_QWORD *)(v23 + 8);
    if ( v25 >= 0 || (v31 = *(_QWORD *)(v23 + 8), (v25 & 0x4000000000000000LL) == 0) )
      v31 = -1;
    v38 = v4 + 5192;
    p_EnableCallback = &hProvider.EnableCallback;
    v39 = 16LL;
    v44 = &v32;
    v40 = v5;
    v46 = &v33;
    v48 = &v34;
    v41 = 16LL;
    v43 = 4LL;
    v45 = 1LL;
    v47 = 1LL;
    v49 = 1LL;
    TlgCreateWsz(&pDesc, v7);
    TlgCreateSz(&v51, v26);
    TlgCreateSz(&v52, (LPCSTR)(v27 + 9));
    v54 = 2LL;
    v56 = 2LL;
    v55 = v58;
    v58[0] = *((unsigned __int16 *)&hProvider.LevelPlus1 + 2);
    v59 = (char *)&hProvider.ProviderMetadataPtr + 4;
    p_KeywordAny = &hProvider.KeywordAny;
    p_CallbackContext = &hProvider.CallbackContext;
    v65 = v68;
    AnnotationFunc = hProvider.AnnotationFunc;
    v68[0] = *((unsigned __int16 *)&hProvider.LevelPlus1 + 3);
    v69 = v72;
    v71 = v36;
    v72[0] = LOWORD(hProvider.ProviderMetadataPtr);
    v73 = v76;
    v76[0] = WORD1(hProvider.ProviderMetadataPtr);
    v77 = (char *)&hProvider.KeywordAny + 4;
    p_KeywordAll = &hProvider.KeywordAll;
    v81 = v84;
    v84[0] = v16;
    p_hProvider = &hProvider;
    v57 = v6;
    v58[1] = 0;
    v60 = 4LL;
    v62 = 4LL;
    v64 = 8LL;
    v66 = 2LL;
    v68[1] = 0;
    v70 = 2LL;
    v72[1] = 0;
    v74 = 2LL;
    v75 = v12;
    v76[1] = 0;
    v78 = 4LL;
    v80 = 4LL;
    v82 = 2LL;
    v83 = v15;
    v84[1] = 0;
    v86 = 1LL;
    v85 = &v30;
    v87 = v90;
    v90[0] = v19;
    v91 = (char *)&hProvider.KeywordAll + 4;
    p_RegHandle = &hProvider.RegHandle;
    v95 = (char *)&hProvider.RegHandle + 4;
    v97 = v100;
    v100[0] = v24;
    v101 = &v31;
    v88 = 2LL;
    v89 = v28;
    v90[1] = 0;
    v92 = 4LL;
    v94 = 4LL;
    v96 = 4LL;
    v98 = 2LL;
    v99 = v23;
    v100[1] = 0;
    v102 = 1LL;
    TlgWrite(&hProvider, &unk_1C0047EA5, 0LL, v29, 0x24u, &pData);
  }
}
