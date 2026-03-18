/*
 * XREFs of ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C00656FC
 * Callers:
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C0049518 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0064DF8 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C0068118 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0049E20 (_TlgKeywordOn.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C004A1C0 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     _TlgWrite @ 0x1C004A48C (_TlgWrite.c)
 *     ?CitpPostUpdateUseInfoCalculate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C006553C (-CitpPostUpdateUseInfoCalculate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_POST_UPDATE_USE_INFO@@@Z.c)
 *     ?CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C0065CF0 (-CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 */

void __fastcall CitpPostUpdateUseInfoLog(struct _CIT_IMPACT_CONTEXT *a1, int a2)
{
  const GUID *v3; // r9
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // kr00_8
  unsigned __int16 v7; // cx
  int v8; // eax
  unsigned __int16 v9; // cx
  unsigned __int16 v10; // cx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int16 v27; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v28; // [rsp+3Ah] [rbp-CEh] BYREF
  int v29; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v30; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v31; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int v32; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v33; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v34; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v35; // [rsp+54h] [rbp-B4h] BYREF
  int v36; // [rsp+58h] [rbp-B0h] BYREF
  int v37; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v38; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v39; // [rsp+64h] [rbp-A4h] BYREF
  int v40; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v41; // [rsp+6Ch] [rbp-9Ch] BYREF
  int Data; // [rsp+70h] [rbp-98h] BYREF
  __int128 Data_8; // [rsp+78h] [rbp-90h] BYREF
  __int128 v44; // [rsp+88h] [rbp-80h] BYREF
  __int128 v45; // [rsp+98h] [rbp-70h] BYREF
  __int128 v46; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v47; // [rsp+B8h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C8h] [rbp-40h] BYREF
  __int128 *p_Data_8; // [rsp+E8h] [rbp-20h]
  __int64 v50; // [rsp+F0h] [rbp-18h]
  char *v51; // [rsp+F8h] [rbp-10h]
  __int64 v52; // [rsp+100h] [rbp-8h]
  char *v53; // [rsp+108h] [rbp+0h]
  __int64 v54; // [rsp+110h] [rbp+8h]
  char *v55; // [rsp+118h] [rbp+10h]
  __int64 v56; // [rsp+120h] [rbp+18h]
  char *v57; // [rsp+128h] [rbp+20h]
  __int64 v58; // [rsp+130h] [rbp+28h]
  char *v59; // [rsp+138h] [rbp+30h]
  __int64 v60; // [rsp+140h] [rbp+38h]
  __int128 *v61; // [rsp+148h] [rbp+40h]
  __int64 v62; // [rsp+150h] [rbp+48h]
  char *v63; // [rsp+158h] [rbp+50h]
  __int64 v64; // [rsp+160h] [rbp+58h]
  char *v65; // [rsp+168h] [rbp+60h]
  __int64 v66; // [rsp+170h] [rbp+68h]
  char *v67; // [rsp+178h] [rbp+70h]
  __int64 v68; // [rsp+180h] [rbp+78h]
  char *v69; // [rsp+188h] [rbp+80h]
  __int64 v70; // [rsp+190h] [rbp+88h]
  __int128 *v71; // [rsp+198h] [rbp+90h]
  __int64 v72; // [rsp+1A0h] [rbp+98h]
  char *v73; // [rsp+1A8h] [rbp+A0h]
  __int64 v74; // [rsp+1B0h] [rbp+A8h]
  char *v75; // [rsp+1B8h] [rbp+B0h]
  __int64 v76; // [rsp+1C0h] [rbp+B8h]
  char *v77; // [rsp+1C8h] [rbp+C0h]
  __int64 v78; // [rsp+1D0h] [rbp+C8h]
  __int128 *v79; // [rsp+1D8h] [rbp+D0h]
  __int64 v80; // [rsp+1E0h] [rbp+D8h]
  char *v81; // [rsp+1E8h] [rbp+E0h]
  __int64 v82; // [rsp+1F0h] [rbp+E8h]
  char *v83; // [rsp+1F8h] [rbp+F0h]
  __int64 v84; // [rsp+200h] [rbp+F8h]
  char *v85; // [rsp+208h] [rbp+100h]
  __int64 v86; // [rsp+210h] [rbp+108h]
  __int128 *v87; // [rsp+218h] [rbp+110h]
  __int64 v88; // [rsp+220h] [rbp+118h]
  char *v89; // [rsp+228h] [rbp+120h]
  __int64 v90; // [rsp+230h] [rbp+128h]
  int *p_Data; // [rsp+238h] [rbp+130h]
  __int64 v92; // [rsp+240h] [rbp+138h]
  __int16 *v93; // [rsp+248h] [rbp+140h]
  __int64 v94; // [rsp+250h] [rbp+148h]
  __int16 *v95; // [rsp+258h] [rbp+150h]
  __int64 v96; // [rsp+260h] [rbp+158h]
  int *v97; // [rsp+268h] [rbp+160h]
  __int64 v98; // [rsp+270h] [rbp+168h]
  int *v99; // [rsp+278h] [rbp+170h]
  __int64 v100; // [rsp+280h] [rbp+178h]
  int *v101; // [rsp+288h] [rbp+180h]
  __int64 v102; // [rsp+290h] [rbp+188h]
  int *v103; // [rsp+298h] [rbp+190h]
  __int64 v104; // [rsp+2A0h] [rbp+198h]
  int *v105; // [rsp+2A8h] [rbp+1A0h]
  __int64 v106; // [rsp+2B0h] [rbp+1A8h]
  int *v107; // [rsp+2B8h] [rbp+1B0h]
  __int64 v108; // [rsp+2C0h] [rbp+1B8h]
  int *v109; // [rsp+2C8h] [rbp+1C0h]
  __int64 v110; // [rsp+2D0h] [rbp+1C8h]
  int *v111; // [rsp+2D8h] [rbp+1D0h]
  __int64 v112; // [rsp+2E0h] [rbp+1D8h]
  int *v113; // [rsp+2E8h] [rbp+1E0h]
  __int64 v114; // [rsp+2F0h] [rbp+1E8h]
  int *v115; // [rsp+2F8h] [rbp+1F0h]
  __int64 v116; // [rsp+300h] [rbp+1F8h]
  int *v117; // [rsp+308h] [rbp+200h]
  __int64 v118; // [rsp+310h] [rbp+208h]
  int *v119; // [rsp+318h] [rbp+210h]
  __int64 v120; // [rsp+320h] [rbp+218h]
  int *v121; // [rsp+328h] [rbp+220h]
  __int64 v122; // [rsp+330h] [rbp+228h]
  char *v123; // [rsp+338h] [rbp+230h]
  __int64 v124; // [rsp+340h] [rbp+238h]
  int *v125; // [rsp+348h] [rbp+240h]
  __int64 v126; // [rsp+350h] [rbp+248h]
  int v127; // [rsp+380h] [rbp+278h] BYREF

  v127 = a2;
  if ( *((_WORD *)a1 + 320) )
  {
    CitpStatIncrement((unsigned __int16 *)a1 + 321, 1);
    CitpPostUpdateUseInfoCalculate(a1, (struct _CIT_POST_UPDATE_USE_INFO *)&Data_8);
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000800uLL) )
    {
      p_Data_8 = &Data_8;
      v51 = (char *)&Data_8 + 4;
      v53 = (char *)&Data_8 + 6;
      v55 = (char *)&Data_8 + 8;
      v57 = (char *)&Data_8 + 10;
      v59 = (char *)&Data_8 + 12;
      v61 = &v44;
      v63 = (char *)&v44 + 4;
      v65 = (char *)&v44 + 8;
      v67 = (char *)&v44 + 12;
      v69 = (char *)&v44 + 14;
      v71 = &v45;
      v73 = (char *)&v45 + 4;
      v75 = (char *)&v45 + 8;
      v77 = (char *)&v45 + 12;
      v79 = &v46;
      v81 = (char *)&v46 + 4;
      v83 = (char *)&v46 + 8;
      v85 = (char *)&v46 + 12;
      v87 = &v47;
      v89 = (char *)&v47 + 4;
      v4 = *((_QWORD *)a1 + 98);
      v50 = 4LL;
      v52 = 2LL;
      v54 = 2LL;
      v56 = 2LL;
      v58 = 2LL;
      v60 = 4LL;
      v62 = 4LL;
      v64 = 4LL;
      v66 = 2LL;
      v68 = 2LL;
      v70 = 2LL;
      v72 = 4LL;
      v74 = 4LL;
      v76 = 4LL;
      v78 = 4LL;
      v80 = 4LL;
      v82 = 4LL;
      v84 = 4LL;
      v86 = 4LL;
      v88 = 4LL;
      v90 = 4LL;
      if ( *((_QWORD *)&v47 + 1) <= v4 )
        v5 = 0LL;
      else
        v5 = *((_QWORD *)&v47 + 1) - v4;
      v92 = 4LL;
      v6 = v5;
      v7 = *((_WORD *)a1 + 358);
      v8 = -1;
      if ( v6 / 0x989680 <= 0xFFFFFFFF )
        v8 = v6 / 0x989680;
      Data = v8;
      p_Data = &Data;
      if ( WORD2(Data_8) > v7 )
        v28 = WORD2(Data_8) - v7;
      else
        v28 = 0;
      v9 = *((_WORD *)a1 + 359);
      v93 = &v28;
      v94 = 2LL;
      if ( WORD3(Data_8) > v9 )
        v27 = WORD3(Data_8) - v9;
      else
        v27 = 0;
      v10 = *((_WORD *)a1 + 360);
      v95 = &v27;
      v96 = 2LL;
      if ( WORD4(Data_8) <= v10 )
        LOWORD(v29) = 0;
      else
        LOWORD(v29) = WORD4(Data_8) - v10;
      v11 = *((_DWORD *)a1 + 181);
      v97 = &v29;
      v98 = 2LL;
      if ( HIDWORD(Data_8) <= v11 )
        v41 = 0;
      else
        v41 = HIDWORD(Data_8) - v11;
      v12 = *((_DWORD *)a1 + 182);
      v99 = (int *)&v41;
      v100 = 4LL;
      if ( (unsigned int)v44 <= v12 )
        v40 = 0;
      else
        v40 = v44 - v12;
      v13 = *((_DWORD *)a1 + 183);
      v101 = &v40;
      v102 = 4LL;
      if ( DWORD1(v44) <= v13 )
        v33 = 0;
      else
        v33 = DWORD1(v44) - v13;
      v14 = *((_DWORD *)a1 + 187);
      v103 = (int *)&v33;
      v104 = 4LL;
      if ( DWORD1(v45) <= v14 )
        v39 = 0;
      else
        v39 = DWORD1(v45) - v14;
      v15 = *((_DWORD *)a1 + 188);
      v105 = (int *)&v39;
      v106 = 4LL;
      if ( DWORD2(v45) <= v15 )
        v35 = 0;
      else
        v35 = DWORD2(v45) - v15;
      v16 = *((_DWORD *)a1 + 189);
      v107 = (int *)&v35;
      v108 = 4LL;
      if ( HIDWORD(v45) <= v16 )
        v30 = 0;
      else
        v30 = HIDWORD(v45) - v16;
      v17 = *((_DWORD *)a1 + 190);
      v109 = (int *)&v30;
      v110 = 4LL;
      if ( (unsigned int)v46 > v17 )
        v37 = v46 - v17;
      else
        v37 = 0;
      v18 = *((_DWORD *)a1 + 191);
      v111 = &v37;
      v112 = 4LL;
      if ( DWORD1(v46) > v18 )
        v31 = DWORD1(v46) - v18;
      else
        v31 = 0;
      v19 = *((_DWORD *)a1 + 192);
      v113 = (int *)&v31;
      v114 = 4LL;
      if ( DWORD2(v46) > v19 )
        v32 = DWORD2(v46) - v19;
      else
        v32 = 0;
      v20 = *((_DWORD *)a1 + 193);
      v115 = (int *)&v32;
      v116 = 4LL;
      if ( HIDWORD(v46) <= v20 )
        v34 = 0;
      else
        v34 = HIDWORD(v46) - v20;
      v21 = *((_DWORD *)a1 + 194);
      v117 = (int *)&v34;
      v118 = 4LL;
      if ( (unsigned int)v47 <= v21 )
        v36 = 0;
      else
        v36 = v47 - v21;
      v22 = *((_DWORD *)a1 + 195);
      v119 = &v36;
      v120 = 4LL;
      if ( DWORD1(v47) <= v22 )
        v38 = 0;
      else
        v38 = DWORD1(v47) - v22;
      v122 = 4LL;
      v121 = (int *)&v38;
      v123 = (char *)a1 + 548;
      v125 = &v127;
      v124 = 4LL;
      v126 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C00EDC68, 0LL, v3, 0x29u, &pData);
    }
    CitpPostUpdateUseInfoSave(a1, &Data_8);
    v23 = v44;
    *(_OWORD *)((char *)a1 + 712) = Data_8;
    v24 = v45;
    *(_OWORD *)((char *)a1 + 728) = v23;
    v25 = v46;
    *(_OWORD *)((char *)a1 + 744) = v24;
    v26 = v47;
    *(_OWORD *)((char *)a1 + 760) = v25;
    *(_OWORD *)((char *)a1 + 776) = v26;
  }
}
