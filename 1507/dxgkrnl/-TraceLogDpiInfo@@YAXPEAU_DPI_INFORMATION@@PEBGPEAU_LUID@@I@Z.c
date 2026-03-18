/*
 * XREFs of ?TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGPEAU_LUID@@I@Z @ 0x1C00AB910
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00AAFE8 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     _TlgWrite @ 0x1C000A0EC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C000A190 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1C000A1C8 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 */

void __fastcall TraceLogDpiInfo(
        struct _DPI_INFORMATION *a1,
        const unsigned __int16 *a2,
        struct _LUID *a3,
        unsigned int a4)
{
  const struct _TlgProvider_t *v6; // rcx
  unsigned int v7; // ecx
  TraceLoggingHProvider v8; // rcx
  LPCGUID v9; // r9
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+34h] [rbp-CCh] BYREF
  int v12; // [rsp+38h] [rbp-C8h] BYREF
  int v13; // [rsp+3Ch] [rbp-C4h] BYREF
  int v14; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+44h] [rbp-BCh] BYREF
  int v16; // [rsp+48h] [rbp-B8h] BYREF
  int v17; // [rsp+4Ch] [rbp-B4h] BYREF
  int v18; // [rsp+50h] [rbp-B0h] BYREF
  int v19; // [rsp+54h] [rbp-ACh] BYREF
  int v20; // [rsp+58h] [rbp-A8h] BYREF
  int v21; // [rsp+5Ch] [rbp-A4h] BYREF
  int v22; // [rsp+60h] [rbp-A0h] BYREF
  int v23; // [rsp+64h] [rbp-9Ch] BYREF
  int v24; // [rsp+68h] [rbp-98h] BYREF
  int v25; // [rsp+6Ch] [rbp-94h] BYREF
  int v26; // [rsp+70h] [rbp-90h] BYREF
  int v27; // [rsp+74h] [rbp-8Ch] BYREF
  int v28; // [rsp+78h] [rbp-88h] BYREF
  int v29; // [rsp+7Ch] [rbp-84h] BYREF
  int v30; // [rsp+80h] [rbp-80h] BYREF
  int v31; // [rsp+84h] [rbp-7Ch] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
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
  char *v51; // [rsp+140h] [rbp+40h]
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
  int *v67; // [rsp+1C0h] [rbp+C0h]
  __int64 v68; // [rsp+1C8h] [rbp+C8h]
  int *v69; // [rsp+1D0h] [rbp+D0h]
  __int64 v70; // [rsp+1D8h] [rbp+D8h]
  int *v71; // [rsp+1E0h] [rbp+E0h]
  __int64 v72; // [rsp+1E8h] [rbp+E8h]
  int *v73; // [rsp+1F0h] [rbp+F0h]
  __int64 v74; // [rsp+1F8h] [rbp+F8h]
  int *v75; // [rsp+200h] [rbp+100h]
  __int64 v76; // [rsp+208h] [rbp+108h]
  int *v77; // [rsp+210h] [rbp+110h]
  __int64 v78; // [rsp+218h] [rbp+118h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+220h] [rbp+120h] BYREF

  DisplayScenarioJournalDPIInfo(a3, a4, a1);
  if ( (unsigned int)dword_1C0046830 > 5 )
  {
    if ( TlgKeywordOn(v6, 0x200000000000uLL) )
    {
      v7 = *((_DWORD *)a1 + 23);
      v11 = *((_DWORD *)a1 + 2);
      v33 = &v11;
      v27 = *((_DWORD *)a1 + 6);
      v35 = &v27;
      v13 = *((_DWORD *)a1 + 7);
      v37 = &v13;
      v23 = *((_DWORD *)a1 + 8);
      v39 = &v23;
      v15 = *((_DWORD *)a1 + 9);
      v41 = &v15;
      v31 = *((_DWORD *)a1 + 10);
      v43 = &v31;
      v17 = *((_DWORD *)a1 + 11);
      v45 = &v17;
      v25 = *((_DWORD *)a1 + 14);
      v47 = &v25;
      v19 = *((_DWORD *)a1 + 15);
      v49 = &v19;
      v51 = (char *)a1 + 64;
      v29 = *((_DWORD *)a1 + 20);
      v53 = &v29;
      v21 = *((_DWORD *)a1 + 22);
      v55 = &v21;
      v34 = 4LL;
      v10 = v7 & 1;
      v57 = &v10;
      v36 = 4LL;
      v12 = (v7 >> 1) & 1;
      v59 = &v12;
      v38 = 4LL;
      v14 = (v7 >> 2) & 1;
      v61 = &v14;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 4LL;
      v46 = 4LL;
      v48 = 4LL;
      v50 = 4LL;
      v52 = 4LL;
      v54 = 4LL;
      v56 = 4LL;
      v58 = 4LL;
      v60 = 4LL;
      v62 = 4LL;
      v64 = 4LL;
      v16 = (v7 >> 3) & 1;
      v63 = &v16;
      v66 = 4LL;
      v18 = (v7 >> 4) & 1;
      v65 = &v18;
      v68 = 4LL;
      v20 = (v7 >> 5) & 1;
      v67 = &v20;
      v70 = 4LL;
      v22 = (v7 >> 6) & 1;
      v69 = &v22;
      v72 = 4LL;
      v24 = (v7 >> 7) & 1;
      v71 = &v24;
      v74 = 4LL;
      v26 = (v7 >> 8) & 1;
      v73 = &v26;
      v28 = (v7 >> 9) & 1;
      v30 = (v7 >> 10) & 1;
      v75 = &v28;
      v76 = 4LL;
      v77 = &v30;
      v78 = 4LL;
      TlgCreateWsz(&pDesc, a2);
      TlgWrite(v8, &unk_1C002FD8F, 0LL, v9, 0x1Au, &pData);
    }
  }
}
