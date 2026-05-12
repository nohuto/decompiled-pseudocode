/*
 * XREFs of StorpTelemetryLogUnitSmartAttributesMeasures @ 0x1C003F948
 * Callers:
 *     StorpTelemetrySendUnitSmartAttributes @ 0x1C00415F8 (StorpTelemetrySendUnitSmartAttributes.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0014C64 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0018D00 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0019BC0 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C0042814 (_TlgCreateSz.c)
 */

void __fastcall StorpTelemetryLogUnitSmartAttributesMeasures(const struct _TlgProvider_t *a1)
{
  __int64 v1; // rcx
  __int64 v2; // r9
  __int64 v3; // r11
  __int64 v4; // rdx
  _WORD *v5; // r10
  const WCHAR *v6; // r8
  char v7; // al
  __int64 v8; // rcx
  LPCSTR v9; // r11
  __int64 v10; // r11
  __int64 v11; // r10
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  char v14; // [rsp+30h] [rbp-D0h] BYREF
  char v15; // [rsp+31h] [rbp-CFh] BYREF
  char v16; // [rsp+32h] [rbp-CEh] BYREF
  _BYTE hProvider[69]; // [rsp+33h] [rbp-CDh] BYREF
  __int64 v18; // [rsp+78h] [rbp-88h] BYREF
  __int64 v19; // [rsp+80h] [rbp-80h] BYREF
  __int64 v20; // [rsp+88h] [rbp-78h] BYREF
  __int64 v21; // [rsp+90h] [rbp-70h] BYREF
  __int64 v22; // [rsp+98h] [rbp-68h] BYREF
  __int64 v23; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v24; // [rsp+A8h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v26; // [rsp+D0h] [rbp-30h]
  __int64 v27; // [rsp+D8h] [rbp-28h]
  __int64 v28; // [rsp+E0h] [rbp-20h]
  __int64 v29; // [rsp+E8h] [rbp-18h]
  _BYTE *v30; // [rsp+F0h] [rbp-10h]
  __int64 v31; // [rsp+F8h] [rbp-8h]
  char *v32; // [rsp+100h] [rbp+0h]
  __int64 v33; // [rsp+108h] [rbp+8h]
  char *v34; // [rsp+110h] [rbp+10h]
  __int64 v35; // [rsp+118h] [rbp+18h]
  char *v36; // [rsp+120h] [rbp+20h]
  __int64 v37; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+150h] [rbp+50h] BYREF
  _BYTE *v41; // [rsp+160h] [rbp+60h]
  __int64 v42; // [rsp+168h] [rbp+68h]
  _BYTE *v43; // [rsp+170h] [rbp+70h]
  __int64 v44; // [rsp+178h] [rbp+78h]
  _BYTE *v45; // [rsp+180h] [rbp+80h]
  __int64 v46; // [rsp+188h] [rbp+88h]
  _BYTE *v47; // [rsp+190h] [rbp+90h]
  __int64 v48; // [rsp+198h] [rbp+98h]
  _BYTE *v49; // [rsp+1A0h] [rbp+A0h]
  __int64 v50; // [rsp+1A8h] [rbp+A8h]
  _BYTE *v51; // [rsp+1B0h] [rbp+B0h]
  __int64 v52; // [rsp+1B8h] [rbp+B8h]
  _BYTE *v53; // [rsp+1C0h] [rbp+C0h]
  __int64 v54; // [rsp+1C8h] [rbp+C8h]
  _BYTE *v55; // [rsp+1D0h] [rbp+D0h]
  __int64 v56; // [rsp+1D8h] [rbp+D8h]
  _BYTE *v57; // [rsp+1E0h] [rbp+E0h]
  __int64 v58; // [rsp+1E8h] [rbp+E8h]
  _BYTE *v59; // [rsp+1F0h] [rbp+F0h]
  __int64 v60; // [rsp+1F8h] [rbp+F8h]
  _BYTE *v61; // [rsp+200h] [rbp+100h]
  __int64 v62; // [rsp+208h] [rbp+108h]
  _BYTE *v63; // [rsp+210h] [rbp+110h]
  __int64 v64; // [rsp+218h] [rbp+118h]
  _BYTE *v65; // [rsp+220h] [rbp+120h]
  __int64 v66; // [rsp+228h] [rbp+128h]
  _BYTE *v67; // [rsp+230h] [rbp+130h]
  __int64 v68; // [rsp+238h] [rbp+138h]
  __int64 *v69; // [rsp+240h] [rbp+140h]
  __int64 v70; // [rsp+248h] [rbp+148h]
  __int64 *v71; // [rsp+250h] [rbp+150h]
  __int64 v72; // [rsp+258h] [rbp+158h]
  __int64 *v73; // [rsp+260h] [rbp+160h]
  __int64 v74; // [rsp+268h] [rbp+168h]
  __int64 *v75; // [rsp+270h] [rbp+170h]
  __int64 v76; // [rsp+278h] [rbp+178h]
  __int64 *v77; // [rsp+280h] [rbp+180h]
  __int64 v78; // [rsp+288h] [rbp+188h]
  __int64 *v79; // [rsp+290h] [rbp+190h]
  __int64 v80; // [rsp+298h] [rbp+198h]
  __int64 *v81; // [rsp+2A0h] [rbp+1A0h]
  __int64 v82; // [rsp+2A8h] [rbp+1A8h]
  __int64 *v83; // [rsp+2B0h] [rbp+1B0h]
  __int64 v84; // [rsp+2B8h] [rbp+1B8h]
  __int64 v85; // [rsp+2C0h] [rbp+1C0h]
  __int64 v86; // [rsp+2C8h] [rbp+1C8h] BYREF

  if ( (unsigned int)dword_1C004F010 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x400000000000uLL) )
    {
      v4 = *(_QWORD *)(v1 + 24);
      v5 = *(_WORD **)(v3 + 40);
      *(_DWORD *)&hProvider[17] = *(_DWORD *)(v4 + 56);
      v14 = *(_BYTE *)(v1 + 88);
      v15 = *(_BYTE *)(v1 + 89);
      v16 = *(_BYTE *)(v1 + 90);
      v6 = *(const WCHAR **)(v4 + 4800);
      v7 = *(_BYTE *)(v1 + 1705);
      v8 = *(_QWORD *)(v3 + 32);
      hProvider[0] = v7;
      *(_DWORD *)&hProvider[21] = *(_DWORD *)v8;
      *(_WORD *)&hProvider[1] = *(_WORD *)(v8 + 4);
      *(_WORD *)&hProvider[5] = *v5;
      *(_WORD *)&hProvider[9] = *(_WORD *)(v3 + 48);
      *(_DWORD *)&hProvider[25] = *(_DWORD *)(v3 + 52);
      *(_WORD *)&hProvider[13] = *(_WORD *)(v3 + 56);
      hProvider[3] = *(_BYTE *)(v3 + 58);
      *(_OWORD *)&hProvider[29] = *(_OWORD *)(v3 + 64);
      *(_OWORD *)&hProvider[45] = *(_OWORD *)(v3 + 80);
      *(_QWORD *)&hProvider[61] = *(_QWORD *)(v3 + 96);
      v18 = *(_QWORD *)(v3 + 104);
      v19 = *(_QWORD *)(v3 + 112);
      v20 = *(_QWORD *)(v3 + 120);
      v21 = *(_QWORD *)(v3 + 128);
      v22 = *(_QWORD *)(v3 + 136);
      v23 = *(_QWORD *)(v3 + 144);
      v24 = *(_QWORD *)(v3 + 152);
      v26 = v4 + 5192;
      v27 = 16LL;
      v28 = v2 + 1688;
      v30 = &hProvider[17];
      v32 = &v14;
      v34 = &v15;
      v36 = &v16;
      v29 = 16LL;
      v31 = 4LL;
      v33 = 1LL;
      v35 = 1LL;
      v37 = 1LL;
      TlgCreateWsz(&pDesc, v6);
      TlgCreateSz(&v39, v9);
      TlgCreateSz(&v40, (LPCSTR)(v10 + 9));
      v42 = 1LL;
      v43 = &hProvider[21];
      v41 = hProvider;
      v45 = &hProvider[1];
      v47 = &hProvider[2];
      v49 = &hProvider[5];
      v51 = &hProvider[9];
      v53 = &hProvider[25];
      v55 = &hProvider[13];
      v57 = &hProvider[3];
      v59 = &hProvider[29];
      v61 = &hProvider[37];
      v63 = &hProvider[45];
      v65 = &hProvider[53];
      v67 = &hProvider[61];
      v69 = &v18;
      v71 = &v19;
      v73 = &v20;
      v75 = &v21;
      v77 = &v22;
      v79 = &v23;
      v81 = &v24;
      v83 = &v86;
      v44 = 4LL;
      v46 = 1LL;
      v48 = 1LL;
      v50 = 2LL;
      v52 = 2LL;
      v54 = 4LL;
      v56 = 2LL;
      v58 = 1LL;
      v60 = 8LL;
      v62 = 8LL;
      v64 = 8LL;
      v66 = 8LL;
      v68 = 8LL;
      v70 = 8LL;
      v72 = 8LL;
      v74 = 8LL;
      v76 = 8LL;
      v78 = 8LL;
      v80 = 8LL;
      v82 = 8LL;
      v84 = 2LL;
      v85 = v11;
      v86 = 512LL;
      TlgWrite((TraceLoggingHProvider)hProvider, &unk_1C0046B5E, v12, v13, 0x22u, &pData);
    }
  }
}
