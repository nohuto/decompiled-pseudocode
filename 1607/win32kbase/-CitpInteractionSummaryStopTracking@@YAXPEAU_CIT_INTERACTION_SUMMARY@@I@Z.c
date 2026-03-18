/*
 * XREFs of ?CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z @ 0x1C000F624
 * Callers:
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C000E77C (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C000EA00 (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C000FA24 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00111F8 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x1C00B3BE4 (_TlgCreateWsz.c)
 */

void __fastcall CitpInteractionSummaryStopTracking(struct _CIT_INTERACTION_SUMMARY *a1, int a2)
{
  __int64 v3; // rcx
  struct _CIT_INTERACTION_SUMMARY **v4; // rax
  __int16 *v5; // r12
  struct _CIT_IMPACT_CONTEXT *v6; // rsi
  char *v7; // r15
  char *v8; // r14
  unsigned int *v9; // rbx
  const GUID *v10; // r9
  __int64 v11; // r10
  int v12; // r11d
  char v13; // al
  __int64 v14; // r11
  const WCHAR *v15; // r13
  const WCHAR *v16; // rdi
  const WCHAR *v17; // r9
  __int64 v18; // r11
  __int64 v19; // r10
  __int16 v20; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v21; // [rsp+3Ah] [rbp-CEh] BYREF
  char v22; // [rsp+3Ch] [rbp-CCh] BYREF
  __int16 v23; // [rsp+3Eh] [rbp-CAh] BYREF
  LPCWSTR pwsz; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+88h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+98h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+A8h] [rbp-60h] BYREF
  __int64 *v32; // [rsp+B8h] [rbp-50h]
  __int64 v33; // [rsp+C0h] [rbp-48h]
  __int64 *v34; // [rsp+C8h] [rbp-40h]
  __int64 v35; // [rsp+D0h] [rbp-38h]
  char *v36; // [rsp+D8h] [rbp-30h]
  __int64 v37; // [rsp+E0h] [rbp-28h]
  __int16 *v38; // [rsp+E8h] [rbp-20h]
  __int64 v39; // [rsp+F0h] [rbp-18h]
  LPCWSTR *v40; // [rsp+F8h] [rbp-10h]
  __int64 v41; // [rsp+100h] [rbp-8h]
  __int64 v42; // [rsp+108h] [rbp+0h]
  __int64 v43; // [rsp+110h] [rbp+8h]
  __int64 *v44; // [rsp+118h] [rbp+10h]
  __int64 v45; // [rsp+120h] [rbp+18h]
  __int16 *v46; // [rsp+128h] [rbp+20h]
  __int64 v47; // [rsp+130h] [rbp+28h]
  __int64 *v48; // [rsp+138h] [rbp+30h]
  __int64 v49; // [rsp+140h] [rbp+38h]
  __int16 *v50; // [rsp+148h] [rbp+40h]
  __int64 v51; // [rsp+150h] [rbp+48h] BYREF
  LPCWSTR *p_pwsz; // [rsp+158h] [rbp+50h]
  __int64 v53; // [rsp+160h] [rbp+58h]
  char *v54; // [rsp+168h] [rbp+60h]
  __int64 v55; // [rsp+170h] [rbp+68h]
  char *v56; // [rsp+178h] [rbp+70h]
  __int64 v57; // [rsp+180h] [rbp+78h]
  __int16 *v58; // [rsp+188h] [rbp+80h]
  __int64 v59; // [rsp+190h] [rbp+88h]
  __int64 *v60; // [rsp+198h] [rbp+90h]
  __int64 v61; // [rsp+1A0h] [rbp+98h]
  char *v62; // [rsp+1A8h] [rbp+A0h]
  __int64 v63; // [rsp+1B0h] [rbp+A8h] BYREF
  char *v64; // [rsp+1B8h] [rbp+B0h]
  __int64 v65; // [rsp+1C0h] [rbp+B8h]
  char *v66; // [rsp+1C8h] [rbp+C0h]
  __int64 v67; // [rsp+1D0h] [rbp+C8h]
  char *v68; // [rsp+1D8h] [rbp+D0h]
  __int64 v69; // [rsp+1E0h] [rbp+D8h]
  char *v70; // [rsp+1E8h] [rbp+E0h]
  __int64 v71; // [rsp+1F0h] [rbp+E8h]
  char *v72; // [rsp+1F8h] [rbp+F0h]
  __int64 v73; // [rsp+200h] [rbp+F8h]
  __int16 *v74; // [rsp+208h] [rbp+100h]
  __int64 v75; // [rsp+210h] [rbp+108h]
  int *v76; // [rsp+218h] [rbp+110h]
  __int64 v77; // [rsp+220h] [rbp+118h]
  int *v78; // [rsp+228h] [rbp+120h]
  __int64 v79; // [rsp+230h] [rbp+128h]
  unsigned int *v80; // [rsp+238h] [rbp+130h]
  __int64 v81; // [rsp+240h] [rbp+138h]
  int *v82; // [rsp+248h] [rbp+140h]
  __int64 v83; // [rsp+250h] [rbp+148h]
  __int16 *v84; // [rsp+258h] [rbp+150h]
  __int64 v85; // [rsp+260h] [rbp+158h]
  char *v86; // [rsp+268h] [rbp+160h]
  __int64 v87; // [rsp+270h] [rbp+168h]
  int *v88; // [rsp+278h] [rbp+170h]
  __int64 v89; // [rsp+280h] [rbp+178h]
  int *v90; // [rsp+288h] [rbp+180h]
  __int64 v91; // [rsp+290h] [rbp+188h]
  unsigned int *v92; // [rsp+298h] [rbp+190h]
  __int64 v93; // [rsp+2A0h] [rbp+198h]
  int *v94; // [rsp+2A8h] [rbp+1A0h]
  __int64 v95; // [rsp+2B0h] [rbp+1A8h]
  __int64 v96; // [rsp+2B8h] [rbp+1B0h]
  __int64 v97; // [rsp+2C0h] [rbp+1B8h]
  char *v98; // [rsp+2C8h] [rbp+1C0h]
  __int64 v99; // [rsp+2D0h] [rbp+1C8h]
  char *v100; // [rsp+2D8h] [rbp+1D0h]
  __int64 v101; // [rsp+2E0h] [rbp+1D8h]
  char *v102; // [rsp+2E8h] [rbp+1E0h]
  __int64 v103; // [rsp+2F0h] [rbp+1E8h]
  unsigned int *v104; // [rsp+2F8h] [rbp+1F0h]
  __int64 v105; // [rsp+300h] [rbp+1F8h]

  v3 = *(_QWORD *)a1;
  v4 = (struct _CIT_INTERACTION_SUMMARY **)*((_QWORD *)a1 + 1);
  if ( *(struct _CIT_INTERACTION_SUMMARY **)(v3 + 8) != a1 || *v4 != a1 )
    __fastfail(3u);
  *v4 = (struct _CIT_INTERACTION_SUMMARY *)v3;
  v5 = (__int16 *)((char *)a1 + 72);
  *(_QWORD *)(v3 + 8) = v4;
  *((_QWORD *)a1 + 1) = a1;
  *(_QWORD *)a1 = a1;
  if ( *((_DWORD *)a1 + 18) )
  {
    v6 = qword_1C011E5D0;
    v7 = (char *)a1 + 40;
    v8 = (char *)a1 + 24;
    v9 = (unsigned int *)((char *)qword_1C011E5D0 + 856);
    v26 = *((_QWORD *)qword_1C011E5D0 + 110);
    LODWORD(v25) = a2 - *((_DWORD *)qword_1C011E5D0 + 222);
    ++*((_QWORD *)qword_1C011E5D0 + 107);
    if ( (*((_BYTE *)a1 + 68) & 1) != 0 )
    {
      v14 = *((_QWORD *)a1 + 2);
      pwsz = &::pwsz;
      v15 = &::pwsz;
      v16 = &::pwsz;
      if ( *(_QWORD *)(v14 + 40) )
      {
        if ( *(_DWORD *)(v14 + 72) == 1 )
        {
          pwsz = *(LPCWSTR *)(v14 + 40);
          if ( *(_QWORD *)(v14 + 48) )
            v15 = *(const WCHAR **)(v14 + 48);
        }
        else if ( *(_QWORD *)(v14 + 48) )
        {
          v16 = *(const WCHAR **)(v14 + 48);
        }
      }
      if ( dword_1C01187D0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01187D0, 0x800000000800uLL) )
      {
        TlgCreateWsz(&pDesc, v17);
        TlgCreateWsz(&v29, pwsz);
        TlgCreateWsz(&v30, v15);
        TlgCreateWsz(&v31, v16);
        v33 = 4LL;
        v34 = (__int64 *)(v18 + 64);
        v32 = (__int64 *)(v18 + 68);
        v36 = &v22;
        v35 = 4LL;
        v38 = &v20;
        v40 = (LPCWSTR *)((char *)&v20 + 1);
        v42 = v19 + 52;
        v22 = 1;
        v44 = &v26;
        v46 = (__int16 *)&v25;
        v48 = (__int64 *)(v19 + 76);
        LODWORD(pwsz) = *(unsigned __int16 *)(v19 + 70);
        p_pwsz = &pwsz;
        v54 = (char *)(v19 + 84);
        v56 = (char *)(v19 + 92);
        v23 = *(_WORD *)(v19 + 80);
        v58 = &v23;
        v60 = &v63;
        v62 = *(char **)(v19 + 104);
        v63 = *(unsigned __int16 *)(v19 + 112);
        v66 = v8 + 2;
        v68 = v8 + 4;
        v70 = v8 + 8;
        v37 = 1LL;
        v20 = 257;
        v39 = 1LL;
        v41 = 1LL;
        v43 = 16LL;
        v45 = 8LL;
        v47 = 4LL;
        v49 = 4LL;
        v50 = v5;
        v51 = 4LL;
        v53 = 4LL;
        v55 = 4LL;
        v57 = 4LL;
        v59 = 2LL;
        v61 = 2LL;
        v64 = v8;
        v65 = 2LL;
        v67 = 2LL;
        v69 = 2LL;
        v71 = 2LL;
        v73 = 2LL;
        v72 = v8 + 10;
        v74 = (__int16 *)(v8 + 6);
        v78 = (int *)(v7 + 2);
        v80 = (unsigned int *)(v7 + 4);
        v82 = (int *)(v7 + 6);
        LOBYTE(v21) = v7[8];
        v84 = &v21;
        HIBYTE(v21) = v7[9];
        v86 = (char *)&v21 + 1;
        v88 = &dword_1C011E5A0;
        v90 = &dword_1C011E5B4;
        v92 = &dword_1C011E5B8;
        v94 = &dword_1C011E5B0;
        v96 = v19 + 100;
        v98 = (char *)v6 + 892;
        v100 = v8 + 12;
        v102 = v8 + 14;
        v75 = 2LL;
        v76 = (int *)v7;
        v77 = 2LL;
        v79 = 2LL;
        v81 = 2LL;
        v83 = 2LL;
        v85 = 1LL;
        v87 = 1LL;
        v89 = 4LL;
        v91 = 4LL;
        v93 = 4LL;
        v95 = 4LL;
        v97 = 4LL;
        v99 = 4LL;
        v101 = 2LL;
        v103 = 2LL;
        v104 = v9;
        v105 = 8LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C01187D0, &unk_1C01045D5, 0LL, 0LL, 0x2Bu, &pData);
      }
    }
    else
    {
      ++*(_QWORD *)v9;
      if ( dword_1C01187D0 > 5u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01187D0, 0x800000000800uLL) )
        {
          pDesc.Ptr = (ULONGLONG)v10;
          v29.Ptr = (ULONGLONG)&v21 + 1;
          v30.Ptr = (ULONGLONG)&v21;
          v32 = &v26;
          v34 = &v25;
          v36 = (char *)(v11 + 76);
          LODWORD(pwsz) = *(unsigned __int16 *)(v11 + 70);
          v40 = &pwsz;
          v42 = v11 + 84;
          v44 = (__int64 *)(v11 + 92);
          v23 = *(_WORD *)(v11 + 80);
          v46 = &v23;
          v48 = &v51;
          v50 = *(__int16 **)(v11 + 104);
          LODWORD(v51) = *(unsigned __int16 *)(v11 + 112);
          v54 = v8 + 2;
          v56 = v8 + 4;
          v58 = (__int16 *)(v8 + 8);
          v60 = (__int64 *)(v8 + 10);
          v62 = v8 + 6;
          v66 = v7 + 2;
          v68 = v7 + 4;
          v70 = v7 + 6;
          HIBYTE(v20) = v7[8];
          v72 = (char *)&v20 + 1;
          v13 = v7[9];
          *(_QWORD *)&pDesc.Size = 16LL;
          *(_QWORD *)&v29.Size = 1LL;
          v21 = 257;
          *(_QWORD *)&v30.Size = 1LL;
          v31.Ptr = (ULONGLONG)v10;
          *(_QWORD *)&v31.Size = 16LL;
          v33 = 8LL;
          v35 = 4LL;
          v37 = 4LL;
          v38 = v5;
          v39 = 4LL;
          v41 = 4LL;
          v43 = 4LL;
          v45 = 4LL;
          v47 = 2LL;
          v49 = 2LL;
          HIDWORD(v51) = v12;
          p_pwsz = (LPCWSTR *)v8;
          v53 = 2LL;
          v55 = 2LL;
          v57 = 2LL;
          v59 = 2LL;
          v61 = 2LL;
          v63 = 2LL;
          v64 = v7;
          v65 = 2LL;
          v67 = 2LL;
          v69 = 2LL;
          v71 = 2LL;
          v73 = 1LL;
          LOBYTE(v20) = v13;
          v74 = &v20;
          v76 = &dword_1C011E5A0;
          v78 = &dword_1C011E5B4;
          v80 = &dword_1C011E5B8;
          v82 = &dword_1C011E5B0;
          v84 = (__int16 *)(v11 + 100);
          v86 = (char *)v6 + 892;
          v88 = (int *)(v8 + 12);
          v90 = (int *)(v8 + 14);
          v75 = 1LL;
          v77 = 4LL;
          v79 = 4LL;
          v81 = 4LL;
          v83 = 4LL;
          v85 = 4LL;
          v87 = 4LL;
          v89 = 2LL;
          v91 = 2LL;
          v92 = v9;
          v93 = 8LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C01187D0, &unk_1C010433A, 0LL, v10, 0x25u, &pData);
        }
      }
    }
  }
}
