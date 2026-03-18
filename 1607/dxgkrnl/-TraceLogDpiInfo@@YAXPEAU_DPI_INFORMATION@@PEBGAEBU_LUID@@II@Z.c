/*
 * XREFs of ?TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGAEBU_LUID@@II@Z @ 0x1C00BAA9C
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00BABE0 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C000B414 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000F358 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C000F3F4 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 */

void __fastcall TraceLogDpiInfo(
        struct _DPI_INFORMATION *a1,
        const unsigned __int16 *a2,
        const struct _LUID *a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v7; // r8d
  LPCGUID v8; // r9
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  int v11; // [rsp+38h] [rbp-C8h] BYREF
  int v12; // [rsp+3Ch] [rbp-C4h] BYREF
  int v13; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+44h] [rbp-BCh] BYREF
  int v15; // [rsp+48h] [rbp-B8h] BYREF
  int v16; // [rsp+4Ch] [rbp-B4h] BYREF
  int v17; // [rsp+50h] [rbp-B0h] BYREF
  int v18; // [rsp+54h] [rbp-ACh] BYREF
  int v19; // [rsp+58h] [rbp-A8h] BYREF
  int v20; // [rsp+5Ch] [rbp-A4h] BYREF
  int v21; // [rsp+60h] [rbp-A0h] BYREF
  int v22; // [rsp+64h] [rbp-9Ch] BYREF
  int v23; // [rsp+68h] [rbp-98h] BYREF
  int v24; // [rsp+6Ch] [rbp-94h] BYREF
  int v25; // [rsp+70h] [rbp-90h] BYREF
  int v26; // [rsp+74h] [rbp-8Ch] BYREF
  int v27; // [rsp+78h] [rbp-88h] BYREF
  int v28; // [rsp+7Ch] [rbp-84h] BYREF
  int v29; // [rsp+80h] [rbp-80h] BYREF
  int v30; // [rsp+84h] [rbp-7Ch] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
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
  char *v50; // [rsp+140h] [rbp+40h]
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
  int *v64; // [rsp+1B0h] [rbp+B0h]
  __int64 v65; // [rsp+1B8h] [rbp+B8h]
  int *v66; // [rsp+1C0h] [rbp+C0h]
  __int64 v67; // [rsp+1C8h] [rbp+C8h]
  int *v68; // [rsp+1D0h] [rbp+D0h]
  __int64 v69; // [rsp+1D8h] [rbp+D8h]
  int *v70; // [rsp+1E0h] [rbp+E0h]
  __int64 v71; // [rsp+1E8h] [rbp+E8h]
  int *v72; // [rsp+1F0h] [rbp+F0h]
  __int64 v73; // [rsp+1F8h] [rbp+F8h]
  int *v74; // [rsp+200h] [rbp+100h]
  __int64 v75; // [rsp+208h] [rbp+108h]
  int *v76; // [rsp+210h] [rbp+110h]
  __int64 v77; // [rsp+218h] [rbp+118h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+220h] [rbp+120h] BYREF

  DisplayScenarioJournalDPIInfo(a3, a4, a1, a5);
  if ( (unsigned int)dword_1C00568C0 > 5 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C00568C0, 0x200000000001uLL) )
    {
      v7 = *((_DWORD *)a1 + 23);
      v9 = *((_DWORD *)a1 + 2);
      v32 = &v9;
      v10 = *((_DWORD *)a1 + 6);
      v34 = &v10;
      v11 = *((_DWORD *)a1 + 7);
      v36 = &v11;
      v12 = *((_DWORD *)a1 + 8);
      v38 = &v12;
      v13 = *((_DWORD *)a1 + 9);
      v40 = &v13;
      v14 = *((_DWORD *)a1 + 10);
      v42 = &v14;
      v15 = *((_DWORD *)a1 + 11);
      v44 = &v15;
      v16 = *((_DWORD *)a1 + 14);
      v46 = &v16;
      v17 = *((_DWORD *)a1 + 15);
      v48 = &v17;
      v50 = (char *)a1 + 64;
      v18 = *((_DWORD *)a1 + 20);
      v52 = &v18;
      v19 = *((_DWORD *)a1 + 22);
      v54 = &v19;
      v33 = 4LL;
      v20 = v7 & 1;
      v56 = &v20;
      v35 = 4LL;
      v21 = (v7 >> 1) & 1;
      v58 = &v21;
      v37 = 4LL;
      v22 = (v7 >> 2) & 1;
      v60 = &v22;
      v39 = 4LL;
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
      v23 = (v7 >> 3) & 1;
      v62 = &v23;
      v65 = 4LL;
      v24 = (v7 >> 4) & 1;
      v64 = &v24;
      v67 = 4LL;
      v25 = (v7 >> 5) & 1;
      v66 = &v25;
      v69 = 4LL;
      v26 = (v7 >> 6) & 1;
      v68 = &v26;
      v71 = 4LL;
      v27 = (v7 >> 7) & 1;
      v70 = &v27;
      v73 = 4LL;
      v28 = (v7 >> 8) & 1;
      v72 = &v28;
      v29 = (v7 >> 9) & 1;
      v75 = 4LL;
      v74 = &v29;
      v30 = (v7 >> 10) & 1;
      v76 = &v30;
      v77 = 4LL;
      TlgCreateWsz(&pDesc, a2);
      TlgWrite((TraceLoggingHProvider)&dword_1C00568C0, &unk_1C003D90F, 0LL, v8, 0x1Au, &pData);
    }
  }
}
