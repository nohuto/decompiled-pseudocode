/*
 * XREFs of TraceLoggingWriteMiracastSessionStop @ 0x1C0031804
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x1C002CA34 (DpiMiracastTearDownAssociation.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C000B414 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000F358 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C000F3F4 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     RtlUnicodeStringPrintf @ 0x1C002FC90 (RtlUnicodeStringPrintf.c)
 */

char __fastcall TraceLoggingWriteMiracastSessionStop(__int64 a1, int a2, int a3)
{
  int v3; // r10d
  __int64 v7; // r9
  __int64 v8; // r8
  unsigned __int64 v9; // rax
  const WCHAR *v10; // r9
  int v11; // ecx
  const WCHAR *v12; // rdx
  int v13; // ecx
  unsigned int v14; // ecx
  int v15; // edx
  int v16; // ecx
  LPCGUID v17; // r9
  LPCGUID v18; // r10
  UINT32 cData; // [rsp+20h] [rbp-E0h]
  int pData; // [rsp+28h] [rbp-D8h]
  int v22; // [rsp+30h] [rbp-D0h]
  int v23; // [rsp+38h] [rbp-C8h]
  int v24; // [rsp+40h] [rbp-C0h] BYREF
  int v25; // [rsp+44h] [rbp-BCh] BYREF
  int v26; // [rsp+48h] [rbp-B8h] BYREF
  int v27; // [rsp+4Ch] [rbp-B4h] BYREF
  int v28; // [rsp+50h] [rbp-B0h] BYREF
  int v29; // [rsp+54h] [rbp-ACh] BYREF
  int v30; // [rsp+58h] [rbp-A8h] BYREF
  int v31; // [rsp+5Ch] [rbp-A4h] BYREF
  int v32; // [rsp+60h] [rbp-A0h] BYREF
  int v33; // [rsp+64h] [rbp-9Ch] BYREF
  int v34; // [rsp+68h] [rbp-98h] BYREF
  int v35; // [rsp+6Ch] [rbp-94h] BYREF
  int v36; // [rsp+70h] [rbp-90h] BYREF
  int v37; // [rsp+74h] [rbp-8Ch] BYREF
  int v38; // [rsp+78h] [rbp-88h] BYREF
  int v39; // [rsp+7Ch] [rbp-84h] BYREF
  int v40; // [rsp+80h] [rbp-80h] BYREF
  int v41; // [rsp+84h] [rbp-7Ch] BYREF
  int v42; // [rsp+88h] [rbp-78h] BYREF
  int v43; // [rsp+8Ch] [rbp-74h] BYREF
  int v44; // [rsp+90h] [rbp-70h] BYREF
  int v45; // [rsp+94h] [rbp-6Ch] BYREF
  int v46; // [rsp+98h] [rbp-68h] BYREF
  int v47; // [rsp+9Ch] [rbp-64h] BYREF
  int v48; // [rsp+A0h] [rbp-60h] BYREF
  int v49; // [rsp+A4h] [rbp-5Ch] BYREF
  int v50; // [rsp+A8h] [rbp-58h] BYREF
  int v51; // [rsp+ACh] [rbp-54h] BYREF
  int v52; // [rsp+B0h] [rbp-50h] BYREF
  int v53; // [rsp+B4h] [rbp-4Ch] BYREF
  int v54; // [rsp+B8h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR v56; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v57; // [rsp+F0h] [rbp-10h]
  __int64 v58; // [rsp+F8h] [rbp-8h]
  int *v59; // [rsp+100h] [rbp+0h]
  __int64 v60; // [rsp+108h] [rbp+8h]
  int *v61; // [rsp+110h] [rbp+10h]
  __int64 v62; // [rsp+118h] [rbp+18h]
  __int64 v63; // [rsp+120h] [rbp+20h]
  __int64 v64; // [rsp+128h] [rbp+28h]
  int *v65; // [rsp+130h] [rbp+30h]
  __int64 v66; // [rsp+138h] [rbp+38h]
  int *v67; // [rsp+140h] [rbp+40h]
  __int64 v68; // [rsp+148h] [rbp+48h]
  int *v69; // [rsp+150h] [rbp+50h]
  __int64 v70; // [rsp+158h] [rbp+58h]
  int *v71; // [rsp+160h] [rbp+60h]
  __int64 v72; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+170h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+180h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+190h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v76; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+1B0h] [rbp+B0h] BYREF
  int *v78; // [rsp+1C0h] [rbp+C0h]
  __int64 v79; // [rsp+1C8h] [rbp+C8h]
  int *v80; // [rsp+1D0h] [rbp+D0h]
  __int64 v81; // [rsp+1D8h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR v82; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v83; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v84; // [rsp+200h] [rbp+100h] BYREF
  int *v85; // [rsp+210h] [rbp+110h]
  __int64 v86; // [rsp+218h] [rbp+118h]
  int *v87; // [rsp+220h] [rbp+120h]
  __int64 v88; // [rsp+228h] [rbp+128h]
  int *v89; // [rsp+230h] [rbp+130h]
  __int64 v90; // [rsp+238h] [rbp+138h]
  int *v91; // [rsp+240h] [rbp+140h]
  __int64 v92; // [rsp+248h] [rbp+148h]
  __int64 v93; // [rsp+250h] [rbp+150h]
  __int64 v94; // [rsp+258h] [rbp+158h]
  int *v95; // [rsp+260h] [rbp+160h]
  __int64 v96; // [rsp+268h] [rbp+168h]
  int *v97; // [rsp+270h] [rbp+170h]
  __int64 v98; // [rsp+278h] [rbp+178h]
  int *v99; // [rsp+280h] [rbp+180h]
  __int64 v100; // [rsp+288h] [rbp+188h]
  int *v101; // [rsp+290h] [rbp+190h]
  __int64 v102; // [rsp+298h] [rbp+198h]
  int *v103; // [rsp+2A0h] [rbp+1A0h]
  __int64 v104; // [rsp+2A8h] [rbp+1A8h]
  int *v105; // [rsp+2B0h] [rbp+1B0h]
  __int64 v106; // [rsp+2B8h] [rbp+1B8h]
  int *v107; // [rsp+2C0h] [rbp+1C0h]
  __int64 v108; // [rsp+2C8h] [rbp+1C8h]
  int *v109; // [rsp+2D0h] [rbp+1D0h]
  __int64 v110; // [rsp+2D8h] [rbp+1D8h]
  int *v111; // [rsp+2E0h] [rbp+1E0h]
  __int64 v112; // [rsp+2E8h] [rbp+1E8h]
  int *v113; // [rsp+2F0h] [rbp+1F0h]
  __int64 v114; // [rsp+2F8h] [rbp+1F8h]
  int *v115; // [rsp+300h] [rbp+200h]
  __int64 v116; // [rsp+308h] [rbp+208h]
  int *v117; // [rsp+310h] [rbp+210h]
  __int64 v118; // [rsp+318h] [rbp+218h]
  int *v119; // [rsp+320h] [rbp+220h]
  __int64 v120; // [rsp+328h] [rbp+228h]
  int *v121; // [rsp+330h] [rbp+230h]
  __int64 v122; // [rsp+338h] [rbp+238h]
  int *v123; // [rsp+340h] [rbp+240h]
  __int64 v124; // [rsp+348h] [rbp+248h]
  int *v125; // [rsp+350h] [rbp+250h]
  __int64 v126; // [rsp+358h] [rbp+258h]
  int *v127; // [rsp+360h] [rbp+260h]
  __int64 v128; // [rsp+368h] [rbp+268h]
  int *v129; // [rsp+370h] [rbp+270h]
  __int64 v130; // [rsp+378h] [rbp+278h]
  int *v131; // [rsp+380h] [rbp+280h]
  __int64 v132; // [rsp+388h] [rbp+288h]
  char v133; // [rsp+390h] [rbp+290h] BYREF

  v3 = *(unsigned __int8 *)(a1 + 212);
  DestinationString.Buffer = (wchar_t *)&v133;
  v7 = *(unsigned __int8 *)(a1 + 209);
  v8 = *(unsigned __int8 *)(a1 + 208);
  v23 = *(unsigned __int8 *)(a1 + 213);
  v22 = v3;
  pData = *(unsigned __int8 *)(a1 + 211);
  cData = *(unsigned __int8 *)(a1 + 210);
  *(_DWORD *)&DestinationString.Length = 2490368;
  LODWORD(v9) = RtlUnicodeStringPrintf(
                  &DestinationString,
                  L"%02X:%02X:%02X:%02X:%02X:%02X",
                  v8,
                  v7,
                  cData,
                  pData,
                  v22,
                  v23);
  if ( (_DWORD)v9 )
  {
    *DestinationString.Buffer = 0;
  }
  else
  {
    v9 = (unsigned __int64)DestinationString.Length >> 1;
    DestinationString.Buffer[v9] = 0;
  }
  if ( (unsigned int)dword_1C00568C0 > 5 )
  {
    LOBYTE(v9) = TlgKeywordOn((TraceLoggingHProvider)&dword_1C00568C0, 0x800000000002uLL);
    if ( (_BYTE)v9 )
    {
      v24 = *(_DWORD *)(a1 + 804);
      v57 = a1 + 112;
      v59 = &v24;
      v25 = *(_DWORD *)(a1 + 668);
      v61 = &v25;
      v63 = a1 + 720;
      v26 = *(_DWORD *)(a1 + 424);
      v65 = &v26;
      v27 = *(_DWORD *)(a1 + 800);
      v67 = &v27;
      v28 = *(_DWORD *)(a1 + 716);
      v69 = &v28;
      v29 = *(_DWORD *)(a1 + 796);
      v71 = &v29;
      v58 = 16LL;
      v60 = 4LL;
      v62 = 4LL;
      v64 = 4LL;
      v66 = 4LL;
      v68 = 4LL;
      v70 = 4LL;
      v72 = 4LL;
      TlgCreateWsz(&pDesc, v10);
      TlgCreateWsz(&v74, *(LPCWSTR *)(a1 + 344));
      TlgCreateWsz(&v75, *(LPCWSTR *)(a1 + 352));
      TlgCreateWsz(&v76, *(LPCWSTR *)(a1 + 368));
      TlgCreateWsz(&v77, *(LPCWSTR *)(a1 + 376));
      v11 = *(_DWORD *)(a1 + 196);
      v12 = *(const WCHAR **)(a1 + 384);
      v78 = &v30;
      v31 = *(_DWORD *)(a1 + 200);
      v30 = v11;
      v80 = &v31;
      v79 = 4LL;
      v81 = 4LL;
      TlgCreateWsz(&v82, v12);
      TlgCreateWsz(&v83, *(LPCWSTR *)(a1 + 392));
      TlgCreateWsz(&v84, (LPCWSTR)(a1 + 724));
      v13 = *(_DWORD *)(a1 + 792);
      v85 = &v32;
      v33 = *(_QWORD *)(a1 + 624) >> 16;
      v87 = &v33;
      v32 = v13;
      v86 = 4LL;
      v88 = 4LL;
      v34 = *(_QWORD *)(a1 + 632) >> 16;
      v89 = &v34;
      v35 = *(_QWORD *)(a1 + 640) >> 16;
      v91 = &v35;
      v14 = *(_DWORD *)(a1 + 616);
      v93 = a1 + 616;
      v90 = 4LL;
      v36 = v14 & 1;
      v95 = &v36;
      v37 = (v14 >> 1) & 1;
      v92 = 4LL;
      v97 = &v37;
      v99 = &v38;
      v39 = *(_DWORD *)(a1 + 680);
      v101 = &v39;
      v40 = *(_DWORD *)(a1 + 672);
      v103 = &v40;
      v41 = *(_DWORD *)(a1 + 676);
      v105 = &v41;
      v107 = &v42;
      v43 = *(_DWORD *)(a1 + 848);
      v109 = &v43;
      v44 = *(_DWORD *)(a1 + 852);
      v111 = &v44;
      v45 = *(_DWORD *)(a1 + 860);
      v113 = &v45;
      v46 = *(_DWORD *)(a1 + 856);
      v115 = &v46;
      v47 = *(_DWORD *)(a1 + 696);
      v117 = &v47;
      v48 = *(_DWORD *)(a1 + 700);
      v94 = 4LL;
      v96 = 4LL;
      v98 = 4LL;
      v38 = (v14 >> 2) & 1;
      v100 = 4LL;
      v102 = 4LL;
      v104 = 4LL;
      v106 = 4LL;
      v42 = a2;
      v108 = 4LL;
      v110 = 4LL;
      v112 = 4LL;
      v114 = 4LL;
      v116 = 4LL;
      v118 = 4LL;
      v15 = *(_DWORD *)(a1 + 708);
      v119 = &v48;
      v16 = (unsigned __int16)*(_DWORD *)(a1 + 704);
      v121 = &v49;
      v50 = *(_DWORD *)(a1 + 712);
      v123 = &v50;
      v51 = *(_DWORD *)(a1 + 684);
      v125 = &v51;
      v120 = 4LL;
      v52 = dword_1C0057220 - *(_DWORD *)(a1 + 688);
      v127 = &v52;
      v53 = *(_DWORD *)(a1 + 692);
      v129 = &v53;
      v131 = &v54;
      v49 = v16 + (v15 << 16);
      v122 = 4LL;
      v124 = 4LL;
      v126 = 4LL;
      v128 = 4LL;
      v130 = 4LL;
      v54 = a3;
      v132 = 4LL;
      LOBYTE(v9) = TlgWrite((TraceLoggingHProvider)&dword_1C00568C0, &unk_1C003DB37, v18, v17, 0x2Cu, &v56);
    }
  }
  return v9;
}
