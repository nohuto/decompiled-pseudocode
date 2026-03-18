/*
 * XREFs of ?CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z @ 0x1C004D770
 * Callers:
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004FC0C (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C005034C (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0049E20 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C004A48C (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x1C00AA958 (_TlgCreateWsz.c)
 *     ?CitpProgramIdToString@@YAXPEBU_CIT_PROGRAM_ID@@PEAGI1I@Z @ 0x1C00E4C98 (-CitpProgramIdToString@@YAXPEBU_CIT_PROGRAM_ID@@PEAGI1I@Z.c)
 */

void __fastcall CitpInteractionSummaryStopTracking(struct _CIT_INTERACTION_SUMMARY *a1, int a2, unsigned int a3)
{
  __int64 v4; // rcx
  struct _CIT_INTERACTION_SUMMARY **v5; // rax
  struct _CIT_IMPACT_CONTEXT *v6; // rdi
  const GUID *v7; // r9
  __int64 v8; // r10
  char v9; // al
  __int64 v10; // r9
  char v11; // al
  __int64 v12; // r10
  LPCGUID v13; // r9
  unsigned int cData; // [rsp+28h] [rbp-E0h]
  char v15; // [rsp+38h] [rbp-D0h] BYREF
  char v16; // [rsp+39h] [rbp-CFh] BYREF
  char v17; // [rsp+3Ah] [rbp-CEh] BYREF
  char v18; // [rsp+3Bh] [rbp-CDh] BYREF
  int v19; // [rsp+3Ch] [rbp-CCh] BYREF
  int v20; // [rsp+40h] [rbp-C8h] BYREF
  int v21; // [rsp+44h] [rbp-C4h] BYREF
  _QWORD v22[2]; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  char *v24; // [rsp+78h] [rbp-90h]
  __int64 v25; // [rsp+80h] [rbp-88h]
  char *v26; // [rsp+88h] [rbp-80h]
  __int64 v27; // [rsp+90h] [rbp-78h]
  char *v28; // [rsp+98h] [rbp-70h]
  __int64 v29; // [rsp+A0h] [rbp-68h]
  char *v30; // [rsp+A8h] [rbp-60h]
  __int64 v31; // [rsp+B0h] [rbp-58h]
  _QWORD *v32; // [rsp+B8h] [rbp-50h]
  __int64 v33; // [rsp+C0h] [rbp-48h]
  int *v34; // [rsp+C8h] [rbp-40h]
  __int64 v35; // [rsp+D0h] [rbp-38h]
  char *v36; // [rsp+D8h] [rbp-30h]
  __int64 v37; // [rsp+E0h] [rbp-28h]
  char *v38; // [rsp+E8h] [rbp-20h]
  __int64 v39; // [rsp+F0h] [rbp-18h]
  int *v40; // [rsp+F8h] [rbp-10h]
  __int64 v41; // [rsp+100h] [rbp-8h]
  char *v42; // [rsp+108h] [rbp+0h]
  __int64 v43; // [rsp+110h] [rbp+8h]
  char *v44; // [rsp+118h] [rbp+10h]
  __int64 v45; // [rsp+120h] [rbp+18h]
  int *v46; // [rsp+128h] [rbp+20h]
  __int64 v47; // [rsp+130h] [rbp+28h]
  int *v48; // [rsp+138h] [rbp+30h]
  __int64 v49; // [rsp+140h] [rbp+38h]
  __int64 v50; // [rsp+148h] [rbp+40h]
  int v51; // [rsp+150h] [rbp+48h] BYREF
  int v52; // [rsp+154h] [rbp+4Ch]
  char *v53; // [rsp+158h] [rbp+50h]
  __int64 v54; // [rsp+160h] [rbp+58h]
  char *v55; // [rsp+168h] [rbp+60h]
  __int64 v56; // [rsp+170h] [rbp+68h]
  char *v57; // [rsp+178h] [rbp+70h]
  __int64 v58; // [rsp+180h] [rbp+78h]
  char *v59; // [rsp+188h] [rbp+80h]
  __int64 v60; // [rsp+190h] [rbp+88h]
  char *v61; // [rsp+198h] [rbp+90h]
  __int64 v62; // [rsp+1A0h] [rbp+98h]
  char *v63; // [rsp+1A8h] [rbp+A0h]
  __int64 v64; // [rsp+1B0h] [rbp+A8h]
  char *v65; // [rsp+1B8h] [rbp+B0h]
  __int64 v66; // [rsp+1C0h] [rbp+B8h]
  char *v67; // [rsp+1C8h] [rbp+C0h]
  __int64 v68; // [rsp+1D0h] [rbp+C8h]
  char *v69; // [rsp+1D8h] [rbp+D0h]
  __int64 v70; // [rsp+1E0h] [rbp+D8h]
  char *v71; // [rsp+1E8h] [rbp+E0h]
  __int64 v72; // [rsp+1F0h] [rbp+E8h]
  char *v73; // [rsp+1F8h] [rbp+F0h]
  __int64 v74; // [rsp+200h] [rbp+F8h]
  char *v75; // [rsp+208h] [rbp+100h]
  __int64 v76; // [rsp+210h] [rbp+108h]
  int *v77; // [rsp+218h] [rbp+110h]
  __int64 v78; // [rsp+220h] [rbp+118h]
  int *v79; // [rsp+228h] [rbp+120h]
  __int64 v80; // [rsp+230h] [rbp+128h]
  unsigned int *v81; // [rsp+238h] [rbp+130h]
  __int64 v82; // [rsp+240h] [rbp+138h]
  int *v83; // [rsp+248h] [rbp+140h]
  __int64 v84; // [rsp+250h] [rbp+148h]
  char *v85; // [rsp+258h] [rbp+150h]
  __int64 v86; // [rsp+260h] [rbp+158h]
  char *v87; // [rsp+268h] [rbp+160h]
  __int64 v88; // [rsp+270h] [rbp+168h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+278h] [rbp+170h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v90; // [rsp+288h] [rbp+180h] BYREF
  __int64 v91; // [rsp+298h] [rbp+190h]
  __int64 v92; // [rsp+2A0h] [rbp+198h]
  WCHAR pwsz[128]; // [rsp+2A8h] [rbp+1A0h] BYREF
  WCHAR v94[128]; // [rsp+3A8h] [rbp+2A0h] BYREF

  v4 = *(_QWORD *)a1;
  v5 = (struct _CIT_INTERACTION_SUMMARY **)*((_QWORD *)a1 + 1);
  if ( *(struct _CIT_INTERACTION_SUMMARY **)(v4 + 8) != a1 || *v5 != a1 )
    __fastfail(3u);
  *v5 = (struct _CIT_INTERACTION_SUMMARY *)v4;
  *(_QWORD *)(v4 + 8) = v5;
  *((_QWORD *)a1 + 1) = a1;
  *(_QWORD *)a1 = a1;
  if ( *((_DWORD *)a1 + 17) )
  {
    v6 = qword_1C0107180;
    v22[0] = *((_QWORD *)qword_1C0107180 + 105);
    v21 = a2 - *((_DWORD *)qword_1C0107180 + 212);
    if ( (*((_BYTE *)a1 + 64) & 1) != 0 )
    {
      CitpProgramIdToString((const struct _CIT_PROGRAM_ID *)(*((_QWORD *)a1 + 2) + 40LL), pwsz, a3, v94, cData);
      ++*((_QWORD *)v6 + 102);
      if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000800uLL) )
      {
        v24 = (char *)a1 + 48;
        v32 = v22;
        v26 = &v18;
        v34 = &v21;
        v25 = 16LL;
        v36 = (char *)a1 + 72;
        v20 = *((unsigned __int16 *)a1 + 33);
        v40 = &v20;
        v42 = (char *)a1 + 80;
        v44 = (char *)a1 + 88;
        LOWORD(v19) = *((_WORD *)a1 + 38);
        v46 = &v19;
        v48 = &v51;
        v50 = *((_QWORD *)a1 + 13);
        v51 = *((unsigned __int16 *)a1 + 56);
        v55 = (char *)a1 + 26;
        v57 = (char *)a1 + 28;
        v59 = (char *)a1 + 32;
        v61 = (char *)a1 + 34;
        v63 = (char *)a1 + 30;
        v67 = (char *)a1 + 38;
        v69 = (char *)a1 + 40;
        v71 = (char *)a1 + 42;
        v15 = *((_BYTE *)a1 + 44);
        v73 = &v15;
        v11 = *((_BYTE *)a1 + 45);
        v18 = v10;
        v27 = v10;
        v17 = v10;
        v28 = &v17;
        v29 = v10;
        v30 = (char *)a1 + 48;
        v31 = 16LL;
        v33 = 8LL;
        v35 = 4LL;
        v37 = 4LL;
        v38 = (char *)a1 + 68;
        v39 = 4LL;
        v41 = 4LL;
        v43 = 4LL;
        v45 = 4LL;
        v47 = 2LL;
        v49 = 2LL;
        v52 = 0;
        v53 = (char *)a1 + 24;
        v54 = 2LL;
        v56 = 2LL;
        v58 = 2LL;
        v60 = 2LL;
        v62 = 2LL;
        v64 = 2LL;
        v65 = (char *)a1 + 36;
        v66 = 2LL;
        v68 = 2LL;
        v70 = 2LL;
        v72 = 2LL;
        v74 = v10;
        v16 = v11;
        v76 = v10;
        v75 = &v16;
        v78 = 4LL;
        v77 = &dword_1C0107150;
        v79 = &dword_1C0107164;
        v81 = &dword_1C0107168;
        v83 = &dword_1C0107160;
        v85 = (char *)a1 + 96;
        v87 = (char *)v6 + 852;
        v80 = 4LL;
        v82 = 4LL;
        v84 = 4LL;
        v86 = 4LL;
        v88 = 4LL;
        TlgCreateWsz(&pDesc, pwsz);
        TlgCreateWsz(&v90, v94);
        v91 = v12;
        v92 = 8LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C00EE222, 0LL, v13, 0x25u, &pData);
      }
    }
    else
    {
      ++*((_QWORD *)qword_1C0107180 + 102);
      if ( hProvider > 5u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000800uLL) )
        {
          v24 = (char *)a1 + 48;
          v32 = v22;
          v26 = &v16;
          v34 = &v21;
          v25 = 16LL;
          v36 = (char *)a1 + 72;
          v20 = *((unsigned __int16 *)a1 + 33);
          v40 = &v20;
          v42 = (char *)a1 + 80;
          v44 = (char *)a1 + 88;
          LOWORD(v19) = *((_WORD *)a1 + 38);
          v46 = &v19;
          v48 = &v51;
          v50 = *((_QWORD *)a1 + 13);
          v51 = *((unsigned __int16 *)a1 + 56);
          v55 = (char *)a1 + 26;
          v57 = (char *)a1 + 28;
          v59 = (char *)a1 + 32;
          v61 = (char *)a1 + 34;
          v63 = (char *)a1 + 30;
          v67 = (char *)a1 + 38;
          v69 = (char *)a1 + 40;
          v71 = (char *)a1 + 42;
          v17 = *((_BYTE *)a1 + 44);
          v73 = &v17;
          v9 = *((_BYTE *)a1 + 45);
          v16 = v8;
          v27 = v8;
          v15 = v8;
          v28 = &v15;
          v29 = v8;
          v30 = (char *)a1 + 48;
          v31 = 16LL;
          v33 = 8LL;
          v35 = 4LL;
          v37 = 4LL;
          v38 = (char *)a1 + 68;
          v39 = 4LL;
          v41 = 4LL;
          v43 = 4LL;
          v45 = 4LL;
          v47 = 2LL;
          v49 = 2LL;
          v52 = 0;
          v53 = (char *)a1 + 24;
          v54 = 2LL;
          v56 = 2LL;
          v58 = 2LL;
          v60 = 2LL;
          v62 = 2LL;
          v64 = 2LL;
          v65 = (char *)a1 + 36;
          v66 = 2LL;
          v68 = 2LL;
          v70 = 2LL;
          v72 = 2LL;
          v74 = v8;
          v18 = v9;
          v75 = &v18;
          v77 = &dword_1C0107150;
          v79 = &dword_1C0107164;
          v81 = &dword_1C0107168;
          v83 = &dword_1C0107160;
          v85 = (char *)a1 + 96;
          v87 = (char *)v6 + 852;
          v76 = v8;
          v78 = 4LL;
          v80 = 4LL;
          v82 = 4LL;
          v84 = 4LL;
          v86 = 4LL;
          v88 = 4LL;
          pDesc.Ptr = (ULONGLONG)v7;
          *(_QWORD *)&pDesc.Size = 8LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C00EDFAB, 0LL, v7, 0x23u, &pData);
        }
      }
    }
  }
}
