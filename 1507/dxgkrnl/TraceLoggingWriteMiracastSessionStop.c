/*
 * XREFs of TraceLoggingWriteMiracastSessionStop @ 0x1C002A824
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x1C0025B74 (DpiMiracastTearDownAssociation.c)
 * Callees:
 *     _TlgWrite @ 0x1C000A0EC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C000A190 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1C000A1C8 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     RtlUnicodeStringPrintf @ 0x1C0028C68 (RtlUnicodeStringPrintf.c)
 */

char __fastcall TraceLoggingWriteMiracastSessionStop(__int64 a1, int a2, int a3)
{
  int v3; // r10d
  __int64 v7; // r9
  __int64 v8; // r8
  NTSTATUS v9; // eax
  wchar_t *Buffer; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  wchar_t *v13; // rcx
  const WCHAR *v14; // rcx
  int v15; // ecx
  int v16; // ecx
  const WCHAR *v17; // rdx
  int v18; // ecx
  unsigned int v19; // ecx
  int v20; // edx
  const struct _TlgProvider_t *v21; // rcx
  LPCGUID v22; // r9
  LPCGUID v23; // r10
  int cDataa; // [rsp+28h] [rbp-E0h]
  UINT32 cData[2]; // [rsp+28h] [rbp-E0h]
  int pDataa; // [rsp+30h] [rbp-D8h]
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+30h] [rbp-D8h]
  int v29; // [rsp+40h] [rbp-C8h]
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  int v31; // [rsp+58h] [rbp-B0h] BYREF
  int v32; // [rsp+5Ch] [rbp-ACh] BYREF
  int v33; // [rsp+60h] [rbp-A8h] BYREF
  int v34; // [rsp+64h] [rbp-A4h] BYREF
  int v35; // [rsp+68h] [rbp-A0h] BYREF
  int v36; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v37; // [rsp+70h] [rbp-98h] BYREF
  int v38; // [rsp+74h] [rbp-94h] BYREF
  int v39; // [rsp+78h] [rbp-90h] BYREF
  int v40; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v41; // [rsp+80h] [rbp-88h] BYREF
  int v42; // [rsp+84h] [rbp-84h] BYREF
  int v43; // [rsp+88h] [rbp-80h] BYREF
  int v44; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v45; // [rsp+90h] [rbp-78h] BYREF
  int v46; // [rsp+94h] [rbp-74h] BYREF
  int v47; // [rsp+98h] [rbp-70h] BYREF
  int v48; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v49; // [rsp+A0h] [rbp-68h] BYREF
  int v50; // [rsp+A4h] [rbp-64h] BYREF
  int v51; // [rsp+A8h] [rbp-60h] BYREF
  int v52; // [rsp+ACh] [rbp-5Ch] BYREF
  int v53; // [rsp+B0h] [rbp-58h] BYREF
  int v54; // [rsp+B4h] [rbp-54h] BYREF
  int v55; // [rsp+B8h] [rbp-50h] BYREF
  int v56; // [rsp+BCh] [rbp-4Ch] BYREF
  int v57; // [rsp+C0h] [rbp-48h] BYREF
  int v58; // [rsp+C4h] [rbp-44h] BYREF
  int v59; // [rsp+C8h] [rbp-40h] BYREF
  int v60; // [rsp+CCh] [rbp-3Ch] BYREF
  int v61; // [rsp+D0h] [rbp-38h] BYREF
  int v62; // [rsp+D4h] [rbp-34h] BYREF
  int v63; // [rsp+D8h] [rbp-30h] BYREF
  EVENT_DATA_DESCRIPTOR v64; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v65; // [rsp+108h] [rbp+0h]
  __int64 v66; // [rsp+110h] [rbp+8h]
  int *v67; // [rsp+118h] [rbp+10h]
  __int64 v68; // [rsp+120h] [rbp+18h]
  int *v69; // [rsp+128h] [rbp+20h]
  __int64 v70; // [rsp+130h] [rbp+28h]
  __int64 v71; // [rsp+138h] [rbp+30h]
  __int64 v72; // [rsp+140h] [rbp+38h]
  int *v73; // [rsp+148h] [rbp+40h]
  __int64 v74; // [rsp+150h] [rbp+48h]
  int *v75; // [rsp+158h] [rbp+50h]
  __int64 v76; // [rsp+160h] [rbp+58h]
  int *v77; // [rsp+168h] [rbp+60h]
  __int64 v78; // [rsp+170h] [rbp+68h]
  int *v79; // [rsp+178h] [rbp+70h]
  __int64 v80; // [rsp+180h] [rbp+78h]
  __int64 v81; // [rsp+188h] [rbp+80h]
  __int64 v82; // [rsp+190h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+198h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v84; // [rsp+1A8h] [rbp+A0h] BYREF
  int *v85; // [rsp+1B8h] [rbp+B0h]
  __int64 v86; // [rsp+1C0h] [rbp+B8h]
  int *v87; // [rsp+1C8h] [rbp+C0h]
  __int64 v88; // [rsp+1D0h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v89; // [rsp+1D8h] [rbp+D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v90; // [rsp+1E8h] [rbp+E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v91; // [rsp+1F8h] [rbp+F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v92; // [rsp+208h] [rbp+100h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v93; // [rsp+218h] [rbp+110h] BYREF
  int *v94; // [rsp+228h] [rbp+120h]
  __int64 v95; // [rsp+230h] [rbp+128h]
  int *v96; // [rsp+238h] [rbp+130h]
  __int64 v97; // [rsp+240h] [rbp+138h]
  struct _EVENT_DATA_DESCRIPTOR v98; // [rsp+248h] [rbp+140h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v99; // [rsp+258h] [rbp+150h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v100; // [rsp+268h] [rbp+160h] BYREF
  int *v101; // [rsp+278h] [rbp+170h]
  __int64 v102; // [rsp+280h] [rbp+178h]
  int *v103; // [rsp+288h] [rbp+180h]
  __int64 v104; // [rsp+290h] [rbp+188h]
  int *v105; // [rsp+298h] [rbp+190h]
  __int64 v106; // [rsp+2A0h] [rbp+198h]
  int *v107; // [rsp+2A8h] [rbp+1A0h]
  __int64 v108; // [rsp+2B0h] [rbp+1A8h]
  __int64 v109; // [rsp+2B8h] [rbp+1B0h]
  __int64 v110; // [rsp+2C0h] [rbp+1B8h]
  int *v111; // [rsp+2C8h] [rbp+1C0h]
  __int64 v112; // [rsp+2D0h] [rbp+1C8h]
  int *v113; // [rsp+2D8h] [rbp+1D0h]
  __int64 v114; // [rsp+2E0h] [rbp+1D8h]
  int *v115; // [rsp+2E8h] [rbp+1E0h]
  __int64 v116; // [rsp+2F0h] [rbp+1E8h]
  int *v117; // [rsp+2F8h] [rbp+1F0h]
  __int64 v118; // [rsp+300h] [rbp+1F8h]
  int *v119; // [rsp+308h] [rbp+200h]
  __int64 v120; // [rsp+310h] [rbp+208h]
  int *v121; // [rsp+318h] [rbp+210h]
  __int64 v122; // [rsp+320h] [rbp+218h]
  int *v123; // [rsp+328h] [rbp+220h]
  __int64 v124; // [rsp+330h] [rbp+228h]
  int *v125; // [rsp+338h] [rbp+230h]
  __int64 v126; // [rsp+340h] [rbp+238h]
  int *v127; // [rsp+348h] [rbp+240h]
  __int64 v128; // [rsp+350h] [rbp+248h]
  int *v129; // [rsp+358h] [rbp+250h]
  __int64 v130; // [rsp+360h] [rbp+258h]
  int *v131; // [rsp+368h] [rbp+260h]
  __int64 v132; // [rsp+370h] [rbp+268h]
  int *v133; // [rsp+378h] [rbp+270h]
  __int64 v134; // [rsp+380h] [rbp+278h]
  int *v135; // [rsp+388h] [rbp+280h]
  __int64 v136; // [rsp+390h] [rbp+288h]
  int *v137; // [rsp+398h] [rbp+290h]
  __int64 v138; // [rsp+3A0h] [rbp+298h]
  int *v139; // [rsp+3A8h] [rbp+2A0h]
  __int64 v140; // [rsp+3B0h] [rbp+2A8h]
  int *v141; // [rsp+3B8h] [rbp+2B0h]
  __int64 v142; // [rsp+3C0h] [rbp+2B8h]
  int *v143; // [rsp+3C8h] [rbp+2C0h]
  __int64 v144; // [rsp+3D0h] [rbp+2C8h]
  int *v145; // [rsp+3D8h] [rbp+2D0h]
  __int64 v146; // [rsp+3E0h] [rbp+2D8h]
  int *v147; // [rsp+3E8h] [rbp+2E0h]
  __int64 v148; // [rsp+3F0h] [rbp+2E8h]
  char v149; // [rsp+3F8h] [rbp+2F0h] BYREF
  char v150; // [rsp+428h] [rbp+320h] BYREF

  v3 = *(unsigned __int8 *)(a1 + 212);
  DestinationString.Buffer = (wchar_t *)&v149;
  v7 = *(unsigned __int8 *)(a1 + 209);
  v8 = *(unsigned __int8 *)(a1 + 208);
  v29 = *(unsigned __int8 *)(a1 + 213);
  pDataa = *(unsigned __int8 *)(a1 + 211);
  cDataa = *(unsigned __int8 *)(a1 + 210);
  *(_DWORD *)&DestinationString.Length = 2490368;
  v9 = RtlUnicodeStringPrintf(&DestinationString, L"%02X:%02X:%02X:%02X:%02X:%02X", v8, v7, cDataa, pDataa, v3, v29);
  Buffer = DestinationString.Buffer;
  if ( v9 )
    *DestinationString.Buffer = 0;
  else
    DestinationString.Buffer[(unsigned __int64)DestinationString.Length >> 1] = 0;
  v11 = *(_QWORD *)(a1 + 592);
  DestinationString.Buffer = (wchar_t *)&v150;
  LODWORD(pData) = (unsigned __int16)v11;
  *(_DWORD *)&DestinationString.Length = 4063232;
  cData[0] = WORD1(v11);
  LODWORD(v12) = RtlUnicodeStringPrintf(
                   &DestinationString,
                   L"%u.%u.%u.%u",
                   HIWORD(HIDWORD(v11)),
                   WORD2(v11),
                   *(_QWORD *)cData,
                   pData);
  v13 = DestinationString.Buffer;
  if ( (_DWORD)v12 )
  {
    *DestinationString.Buffer = 0;
  }
  else
  {
    v12 = (unsigned __int64)DestinationString.Length >> 1;
    DestinationString.Buffer[v12] = 0;
  }
  if ( (unsigned int)dword_1C0046830 > 5 )
  {
    LOBYTE(v12) = TlgKeywordOn((TraceLoggingHProvider)v13, 0x400000000000uLL);
    if ( (_BYTE)v12 )
    {
      v49 = *(_DWORD *)(a1 + 704);
      v65 = a1 + 112;
      v67 = &v49;
      v60 = *(_DWORD *)(a1 + 532);
      v69 = &v60;
      v71 = a1 + 620;
      v33 = *(_DWORD *)(a1 + 296);
      v73 = &v33;
      v62 = *(_DWORD *)(a1 + 700);
      v75 = &v62;
      v35 = *(_DWORD *)(a1 + 616);
      v77 = &v35;
      v51 = *(_DWORD *)(a1 + 696);
      v79 = &v51;
      v81 = a1 + 600;
      v66 = 16LL;
      v68 = 4LL;
      v70 = 4LL;
      v72 = 4LL;
      v74 = 4LL;
      v76 = 4LL;
      v78 = 4LL;
      v80 = 4LL;
      v82 = 16LL;
      TlgCreateWsz(&pDesc, v14);
      TlgCreateWsz(&v84, *(LPCWSTR *)(a1 + 256));
      v15 = *(_DWORD *)(a1 + 584);
      v85 = &v37;
      v59 = *(_DWORD *)(a1 + 580);
      v37 = v15;
      v87 = &v59;
      v86 = 4LL;
      v88 = 4LL;
      TlgCreateWsz(&v89, Buffer);
      TlgCreateWsz(&v90, *(LPCWSTR *)(a1 + 216));
      TlgCreateWsz(&v91, *(LPCWSTR *)(a1 + 224));
      TlgCreateWsz(&v92, *(LPCWSTR *)(a1 + 240));
      TlgCreateWsz(&v93, *(LPCWSTR *)(a1 + 248));
      v16 = *(_DWORD *)(a1 + 196);
      v17 = *(const WCHAR **)(a1 + 264);
      v94 = &v39;
      v53 = *(_DWORD *)(a1 + 200);
      v96 = &v53;
      v39 = v16;
      v95 = 4LL;
      v97 = 4LL;
      TlgCreateWsz(&v98, v17);
      TlgCreateWsz(&v99, *(LPCWSTR *)(a1 + 272));
      TlgCreateWsz(&v100, (LPCWSTR)(a1 + 624));
      v18 = *(_DWORD *)(a1 + 692);
      v101 = &v41;
      v63 = *(_QWORD *)(a1 + 488) >> 16;
      v103 = &v63;
      v43 = *(_QWORD *)(a1 + 496) >> 16;
      v105 = &v43;
      v55 = *(_QWORD *)(a1 + 504) >> 16;
      v107 = &v55;
      v109 = a1 + 480;
      v41 = v18;
      v19 = *(_DWORD *)(a1 + 480);
      v102 = 4LL;
      v45 = v19 & 1;
      v111 = &v45;
      v61 = (v19 >> 1) & 1;
      v104 = 4LL;
      v113 = &v61;
      v115 = &v47;
      v57 = *(_DWORD *)(a1 + 544);
      v117 = &v57;
      v31 = *(_DWORD *)(a1 + 536);
      v119 = &v31;
      v32 = *(_DWORD *)(a1 + 540);
      v121 = &v32;
      v123 = &v34;
      v36 = *(_DWORD *)(a1 + 752);
      v125 = &v36;
      v38 = *(_DWORD *)(a1 + 756);
      v106 = 4LL;
      v108 = 4LL;
      v110 = 4LL;
      v112 = 4LL;
      v114 = 4LL;
      v47 = (v19 >> 2) & 1;
      v116 = 4LL;
      v118 = 4LL;
      v120 = 4LL;
      v122 = 4LL;
      v34 = a2;
      v124 = 4LL;
      v126 = 4LL;
      v20 = *(_DWORD *)(a1 + 572);
      v127 = &v38;
      v40 = *(_DWORD *)(a1 + 764);
      v129 = &v40;
      v42 = *(_DWORD *)(a1 + 760);
      v131 = &v42;
      v44 = *(_DWORD *)(a1 + 560);
      v133 = &v44;
      v46 = *(_DWORD *)(a1 + 564);
      v135 = &v46;
      v21 = (const struct _TlgProvider_t *)(unsigned __int16)*(_DWORD *)(a1 + 568);
      v137 = &v48;
      v50 = *(_DWORD *)(a1 + 576);
      v139 = &v50;
      v52 = *(_DWORD *)(a1 + 548);
      v141 = &v52;
      v128 = 4LL;
      v54 = dword_1C0046FE0 - *(_DWORD *)(a1 + 552);
      v143 = &v54;
      v56 = *(_DWORD *)(a1 + 556);
      v145 = &v56;
      v147 = &v58;
      v130 = 4LL;
      v132 = 4LL;
      v134 = 4LL;
      v136 = 4LL;
      v48 = (_DWORD)v21 + (v20 << 16);
      v138 = 4LL;
      v140 = 4LL;
      v142 = 4LL;
      v144 = 4LL;
      v146 = 4LL;
      v58 = a3;
      v148 = 4LL;
      LOBYTE(v12) = TlgWrite(v21, &unk_1C002FFB7, v23, v22, 0x31u, &v64);
    }
  }
  return v12;
}
