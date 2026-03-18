/*
 * XREFs of ?TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGPEAU_LUID@@II@Z @ 0x1C00AC884
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00ABF5C (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C000AC10 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000D5D4 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C000D7EC (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 */

void __fastcall TraceLogDpiInfo(
        struct _DPI_INFORMATION *a1,
        const unsigned __int16 *a2,
        struct _LUID *a3,
        unsigned int a4,
        unsigned int a5)
{
  const struct _TlgProvider_t *v7; // rcx
  unsigned int v8; // ecx
  TraceLoggingHProvider v9; // rcx
  LPCGUID v10; // r9
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  int v12; // [rsp+34h] [rbp-CCh] BYREF
  int v13; // [rsp+38h] [rbp-C8h] BYREF
  int v14; // [rsp+3Ch] [rbp-C4h] BYREF
  int v15; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+44h] [rbp-BCh] BYREF
  int v17; // [rsp+48h] [rbp-B8h] BYREF
  int v18; // [rsp+4Ch] [rbp-B4h] BYREF
  int v19; // [rsp+50h] [rbp-B0h] BYREF
  int v20; // [rsp+54h] [rbp-ACh] BYREF
  int v21; // [rsp+58h] [rbp-A8h] BYREF
  int v22; // [rsp+5Ch] [rbp-A4h] BYREF
  int v23; // [rsp+60h] [rbp-A0h] BYREF
  int v24; // [rsp+64h] [rbp-9Ch] BYREF
  int v25; // [rsp+68h] [rbp-98h] BYREF
  int v26; // [rsp+6Ch] [rbp-94h] BYREF
  int v27; // [rsp+70h] [rbp-90h] BYREF
  int v28; // [rsp+74h] [rbp-8Ch] BYREF
  int v29; // [rsp+78h] [rbp-88h] BYREF
  int v30; // [rsp+7Ch] [rbp-84h] BYREF
  int v31; // [rsp+80h] [rbp-80h] BYREF
  int v32; // [rsp+84h] [rbp-7Ch] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  int *v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  int *v36; // [rsp+C0h] [rbp-40h]
  __int64 v37; // [rsp+C8h] [rbp-38h]
  int *v38; // [rsp+D0h] [rbp-30h]
  __int64 v39; // [rsp+D8h] [rbp-28h]
  int *v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  int *v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]
  int *v44; // [rsp+100h] [rbp+0h]
  __int64 v45; // [rsp+108h] [rbp+8h]
  int *v46; // [rsp+110h] [rbp+10h]
  __int64 v47; // [rsp+118h] [rbp+18h]
  int *v48; // [rsp+120h] [rbp+20h]
  __int64 v49; // [rsp+128h] [rbp+28h]
  int *v50; // [rsp+130h] [rbp+30h]
  __int64 v51; // [rsp+138h] [rbp+38h]
  char *v52; // [rsp+140h] [rbp+40h]
  __int64 v53; // [rsp+148h] [rbp+48h]
  int *v54; // [rsp+150h] [rbp+50h]
  __int64 v55; // [rsp+158h] [rbp+58h]
  int *v56; // [rsp+160h] [rbp+60h]
  __int64 v57; // [rsp+168h] [rbp+68h]
  int *v58; // [rsp+170h] [rbp+70h]
  __int64 v59; // [rsp+178h] [rbp+78h]
  int *v60; // [rsp+180h] [rbp+80h]
  __int64 v61; // [rsp+188h] [rbp+88h]
  int *v62; // [rsp+190h] [rbp+90h]
  __int64 v63; // [rsp+198h] [rbp+98h]
  int *v64; // [rsp+1A0h] [rbp+A0h]
  __int64 v65; // [rsp+1A8h] [rbp+A8h]
  int *v66; // [rsp+1B0h] [rbp+B0h]
  __int64 v67; // [rsp+1B8h] [rbp+B8h]
  int *v68; // [rsp+1C0h] [rbp+C0h]
  __int64 v69; // [rsp+1C8h] [rbp+C8h]
  int *v70; // [rsp+1D0h] [rbp+D0h]
  __int64 v71; // [rsp+1D8h] [rbp+D8h]
  int *v72; // [rsp+1E0h] [rbp+E0h]
  __int64 v73; // [rsp+1E8h] [rbp+E8h]
  int *v74; // [rsp+1F0h] [rbp+F0h]
  __int64 v75; // [rsp+1F8h] [rbp+F8h]
  int *v76; // [rsp+200h] [rbp+100h]
  __int64 v77; // [rsp+208h] [rbp+108h]
  int *v78; // [rsp+210h] [rbp+110h]
  __int64 v79; // [rsp+218h] [rbp+118h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+220h] [rbp+120h] BYREF

  DisplayScenarioJournalDPIInfo(a3, a4, a1, a5);
  if ( (unsigned int)hProvider > 5 )
  {
    if ( TlgKeywordOn(v7, 0x200000000000uLL) )
    {
      v8 = *((_DWORD *)a1 + 23);
      v12 = *((_DWORD *)a1 + 2);
      v34 = &v12;
      v28 = *((_DWORD *)a1 + 6);
      v36 = &v28;
      v14 = *((_DWORD *)a1 + 7);
      v38 = &v14;
      v24 = *((_DWORD *)a1 + 8);
      v40 = &v24;
      v16 = *((_DWORD *)a1 + 9);
      v42 = &v16;
      v32 = *((_DWORD *)a1 + 10);
      v44 = &v32;
      v18 = *((_DWORD *)a1 + 11);
      v46 = &v18;
      v26 = *((_DWORD *)a1 + 14);
      v48 = &v26;
      v20 = *((_DWORD *)a1 + 15);
      v50 = &v20;
      v52 = (char *)a1 + 64;
      v30 = *((_DWORD *)a1 + 20);
      v54 = &v30;
      v22 = *((_DWORD *)a1 + 22);
      v56 = &v22;
      v35 = 4LL;
      v11 = v8 & 1;
      v58 = &v11;
      v37 = 4LL;
      v13 = (v8 >> 1) & 1;
      v60 = &v13;
      v39 = 4LL;
      v15 = (v8 >> 2) & 1;
      v62 = &v15;
      v41 = 4LL;
      v43 = 4LL;
      v45 = 4LL;
      v47 = 4LL;
      v49 = 4LL;
      v51 = 4LL;
      v53 = 4LL;
      v55 = 4LL;
      v57 = 4LL;
      v59 = 4LL;
      v61 = 4LL;
      v63 = 4LL;
      v65 = 4LL;
      v17 = (v8 >> 3) & 1;
      v64 = &v17;
      v67 = 4LL;
      v19 = (v8 >> 4) & 1;
      v66 = &v19;
      v69 = 4LL;
      v21 = (v8 >> 5) & 1;
      v68 = &v21;
      v71 = 4LL;
      v23 = (v8 >> 6) & 1;
      v70 = &v23;
      v73 = 4LL;
      v25 = (v8 >> 7) & 1;
      v72 = &v25;
      v75 = 4LL;
      v27 = (v8 >> 8) & 1;
      v74 = &v27;
      v29 = (v8 >> 9) & 1;
      v31 = (v8 >> 10) & 1;
      v76 = &v29;
      v77 = 4LL;
      v78 = &v31;
      v79 = 4LL;
      TlgCreateWsz(&pDesc, a2);
      TlgWrite(v9, &unk_1C002FF4F, 0LL, v10, 0x1Au, &pData);
    }
  }
}
