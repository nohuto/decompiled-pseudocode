/*
 * XREFs of StorpTelemetryLogUnitPerfDataMeasures @ 0x1C003EEA0
 * Callers:
 *     StorpTelemetrySendUnitPerfData @ 0x1C0040FC0 (StorpTelemetrySendUnitPerfData.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0014C64 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0018D00 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0019BC0 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C0042814 (_TlgCreateSz.c)
 */

void __fastcall StorpTelemetryLogUnitPerfDataMeasures(const struct _TlgProvider_t *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  const WCHAR *v6; // r9
  int v7; // eax
  __int64 v8; // rcx
  unsigned __int64 v9; // kr00_8
  __int64 v10; // rbx
  __int64 v11; // rcx
  unsigned __int64 v12; // kr08_8
  __int64 v13; // rcx
  __int64 v14; // r10
  LPCWSTR v15; // r11
  LPCGUID v16; // r8
  LPCGUID v17; // r9
  char v18; // [rsp+30h] [rbp-D0h] BYREF
  char v19; // [rsp+31h] [rbp-CFh] BYREF
  char v20; // [rsp+32h] [rbp-CEh] BYREF
  char v21; // [rsp+33h] [rbp-CDh] BYREF
  unsigned __int16 v22; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v23; // [rsp+38h] [rbp-C8h] BYREF
  int v24; // [rsp+3Ch] [rbp-C4h] BYREF
  int v25; // [rsp+40h] [rbp-C0h] BYREF
  int v26; // [rsp+44h] [rbp-BCh] BYREF
  int v27; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+68h] [rbp-98h] BYREF
  __int64 v32; // [rsp+70h] [rbp-90h] BYREF
  __int64 v33; // [rsp+78h] [rbp-88h] BYREF
  struct _TlgProvider_t hProvider; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 *p_KeywordAll; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  int *v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  char *v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  char *v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]
  char *v43; // [rsp+100h] [rbp+0h]
  __int64 v44; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+130h] [rbp+30h] BYREF
  char *v48; // [rsp+140h] [rbp+40h]
  __int64 v49; // [rsp+148h] [rbp+48h]
  __int64 *v50; // [rsp+150h] [rbp+50h]
  __int64 v51; // [rsp+158h] [rbp+58h]
  int *v52; // [rsp+160h] [rbp+60h]
  __int64 v53; // [rsp+168h] [rbp+68h]
  int *v54; // [rsp+170h] [rbp+70h]
  __int64 v55; // [rsp+178h] [rbp+78h]
  int *v56; // [rsp+180h] [rbp+80h]
  __int64 v57; // [rsp+188h] [rbp+88h]
  __int64 *v58; // [rsp+190h] [rbp+90h]
  __int64 v59; // [rsp+198h] [rbp+98h]
  __int64 *v60; // [rsp+1A0h] [rbp+A0h]
  __int64 v61; // [rsp+1A8h] [rbp+A8h]
  __int64 *v62; // [rsp+1B0h] [rbp+B0h]
  __int64 v63; // [rsp+1B8h] [rbp+B8h]
  __int64 *v64; // [rsp+1C0h] [rbp+C0h]
  __int64 v65; // [rsp+1C8h] [rbp+C8h]
  __int64 *v66; // [rsp+1D0h] [rbp+D0h]
  __int64 v67; // [rsp+1D8h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned __int16 *v69; // [rsp+1F0h] [rbp+F0h]
  __int64 v70; // [rsp+1F8h] [rbp+F8h]
  __int64 v71; // [rsp+200h] [rbp+100h]
  int v72; // [rsp+208h] [rbp+108h]
  int v73; // [rsp+20Ch] [rbp+10Ch]
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+210h] [rbp+110h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+220h] [rbp+120h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v76; // [rsp+230h] [rbp+130h] BYREF
  struct _TlgProvider_t *p_hProvider; // [rsp+240h] [rbp+140h]
  __int64 v78; // [rsp+248h] [rbp+148h]
  unsigned __int16 *v79; // [rsp+250h] [rbp+150h]
  __int64 v80; // [rsp+258h] [rbp+158h]
  __int64 v81; // [rsp+260h] [rbp+160h]
  int v82; // [rsp+268h] [rbp+168h]
  int v83; // [rsp+26Ch] [rbp+16Ch]

  if ( (unsigned int)dword_1C004F010 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x400000000000uLL) )
    {
      v5 = *(_QWORD *)(v4 + 24);
      v24 = *(_DWORD *)(v5 + 56);
      v18 = *(_BYTE *)(v4 + 88);
      v19 = *(_BYTE *)(v4 + 89);
      v20 = *(_BYTE *)(v4 + 90);
      v6 = *(const WCHAR **)(v5 + 4800);
      v21 = *(_BYTE *)(a2 + 40);
      v28 = *(_QWORD *)(a2 + 96);
      v25 = *(_DWORD *)(v4 + 528);
      v7 = *(_DWORD *)(v4 + 532);
      v8 = *(_QWORD *)(a2 + 56);
      v26 = v7;
      v9 = *(_QWORD *)(a2 + 112);
      v29 = v8;
      v10 = *(_QWORD *)(a2 + 104);
      v30 = *(_QWORD *)(a2 + 64);
      v31 = *(_QWORD *)(a2 + 72);
      v11 = *(_QWORD *)(a2 + 80);
      v27 = v9 / 0x2710;
      v12 = *(_QWORD *)(a2 + 32);
      v23 = dword_1C004F480;
      hProvider.CallbackContext = (void *)(v5 + 5192);
      p_KeywordAll = &a1[26].KeywordAll;
      v37 = &v24;
      v32 = v11;
      v13 = *(_QWORD *)(a2 + 88);
      v39 = &v18;
      v33 = v13;
      v41 = &v19;
      v22 = HIWORD(TelemetryPerfContext);
      *(_QWORD *)&hProvider.LevelPlus1 = v12 / 0x2710;
      v43 = &v20;
      hProvider.AnnotationFunc = (void (*)(...))16;
      v36 = 16LL;
      v38 = 4LL;
      v40 = 1LL;
      v42 = 1LL;
      v44 = 1LL;
      TlgCreateWsz(&pDesc, v6);
      TlgCreateSz(&v46, (LPCSTR)a2);
      TlgCreateSz(&v47, (LPCSTR)(a2 + 9));
      v49 = 1LL;
      v50 = &v28;
      v48 = &v21;
      v52 = &v25;
      v51 = 8LL;
      v53 = 4LL;
      v54 = &v26;
      v55 = 4LL;
      v56 = &v27;
      v57 = 4LL;
      v58 = &v29;
      v60 = &v30;
      v62 = &v31;
      v64 = &v32;
      v66 = &v33;
      v59 = 8LL;
      v61 = 8LL;
      v63 = 8LL;
      v65 = 8LL;
      v67 = 8LL;
      TlgCreateWsz(&v68, L"Read, Write");
      v69 = &v22;
      v72 = 8 * v22;
      v70 = 2LL;
      v71 = v14;
      v73 = 0;
      TlgCreateWsz(&v74, v15);
      TlgCreateWsz(&v75, L"Flush, Unmap");
      TlgCreateWsz(&v76, L"64ms, 100ms, 100+ms");
      v78 = 8LL;
      v79 = &v23;
      v82 = 8 * v23;
      p_hProvider = &hProvider;
      v80 = 2LL;
      v81 = v10;
      v83 = 0;
      TlgWrite(&hProvider, &unk_1C00480F4, v16, v17, 0x1Eu, (EVENT_DATA_DESCRIPTOR *)&hProvider.KeywordAny);
    }
  }
}
