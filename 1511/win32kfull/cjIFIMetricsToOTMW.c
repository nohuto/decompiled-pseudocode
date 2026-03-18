/*
 * XREFs of cjIFIMetricsToOTMW @ 0x1C00E7ED0
 * Callers:
 *     GreGetOutlineTextMetricsInternalW @ 0x1C00E8DF8 (GreGetOutlineTextMetricsInternalW.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C001AA10 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C001B5E8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?bIFIMetricsToTextMetricWStrict@@YAHAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x1C00E86A0 (-bIFIMetricsToTextMetricWStrict@@YAHAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C00E8B50 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ?cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z @ 0x1C00E9050 (-cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z.c)
 *     bFToL @ 0x1C0116F84 (bFToL.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z @ 0x1C02A86A0 (-vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z.c)
 */

__int64 __fastcall cjIFIMetricsToOTMW(
        _BYTE *a1,
        unsigned int *a2,
        struct RFONTOBJ *a3,
        struct DCOBJ *a4,
        struct _IFIMETRICS *a5,
        int a6)
{
  unsigned int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // rax
  float v13; // xmm3_4
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rcx
  __int64 v60; // r8
  unsigned int v61; // eax
  int v62; // eax
  unsigned int *v63; // r12
  unsigned __int64 v64; // r14
  __int64 v65; // r15
  __int64 v66; // rcx
  __int64 v67; // rcx
  unsigned int v68; // r14d
  char *v69; // r12
  __int64 v70; // rcx
  __int64 v71; // rcx
  unsigned int v72; // r14d
  char *v73; // r12
  __int64 v74; // r15
  __int64 result; // rax
  BOOL IsZero; // eax
  __int64 v77; // rcx
  int v78; // eax
  float v79; // [rsp+20h] [rbp-60h] BYREF
  _DWORD v80[3]; // [rsp+24h] [rbp-5Ch] BYREF
  __int64 v81; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int16 v82; // [rsp+46h] [rbp-3Ah]

  IFIOBJR::IFIOBJR((IFIOBJR *)&v81, a5, a3, a4);
  v10 = 0;
  if ( a5->fwdWinAscender + a5->fwdWinDescender == 0
    || a5->fwdUnitsPerEm == 0
    || !(unsigned int)bIFIMetricsToTextMetricWStrict(a3, a4, (struct tagTEXTMETRICW *)(a2 + 1), a5) )
  {
    return v10;
  }
  a1[4] = a5->chFirstChar;
  a1[5] = a5->chLastChar;
  a1[6] = a5->chDefaultChar;
  a1[7] = a5->chBreakChar;
  v12 = *(_QWORD *)a3;
  if ( *(_DWORD *)(*(_QWORD *)a3 + 212LL) )
  {
    v14 = v81;
    a2[21] = *(_DWORD *)(v81 + 140);
    a2[22] = *(_DWORD *)(v14 + 136);
    a2[24] = *(__int16 *)(v14 + 56);
    a2[25] = *(__int16 *)(v14 + 70);
    a2[26] = *(__int16 *)(v14 + 72);
    a2[27] = *(__int16 *)(v14 + 74);
    a2[30] = *(_DWORD *)(v14 + 144);
    a2[31] = *(_DWORD *)(v14 + 148);
    a2[32] = *(_DWORD *)(v14 + 152);
    a2[33] = *(_DWORD *)(v14 + 156);
    a2[34] = *(__int16 *)(v14 + 64);
    a2[35] = *(__int16 *)(v14 + 66);
    a2[36] = *(__int16 *)(v14 + 68);
    a2[38] = *(__int16 *)(v14 + 84);
    a2[39] = *(__int16 *)(v14 + 86);
    a2[40] = *(__int16 *)(v14 + 88);
    a2[41] = *(__int16 *)(v14 + 90);
    a2[42] = *(__int16 *)(v14 + 92);
    a2[43] = *(__int16 *)(v14 + 94);
    a2[44] = *(__int16 *)(v14 + 96);
    a2[45] = *(__int16 *)(v14 + 98);
    a2[46] = *(__int16 *)(v14 + 104);
    a2[47] = *(__int16 *)(v14 + 106);
    a2[48] = *(__int16 *)(v14 + 100);
    a2[49] = *(__int16 *)(v14 + 102);
    a2[29] = *(__int16 *)(v14 + 82);
    a2[28] = *(__int16 *)(v14 + 80);
    goto LABEL_8;
  }
  v13 = *(float *)(v12 + 204);
  v79 = *(float *)(v12 + 208);
  if ( v13 == v79 )
  {
    v14 = v81;
    a2[21] = *(_DWORD *)(v81 + 140);
  }
  else
  {
    IsZero = EFLOAT::bIsZero((EFLOAT *)&v79);
    v14 = v81;
    a2[21] = *(_DWORD *)(v81 + 140);
    if ( !IsZero )
    {
      v79 = 0.0;
      bFToL(v11, &v79, 0LL);
      *((float *)a2 + 22) = v79;
      goto LABEL_7;
    }
  }
  a2[22] = *(_DWORD *)(v14 + 136);
LABEL_7:
  a2[24] = *(__int16 *)(v14 + 56);
  v79 = 0.0;
  bFToL(v11, &v79, 0LL);
  *((float *)a2 + 25) = v79;
  v79 = 0.0;
  bFToL(v15, &v79, v16);
  *((float *)a2 + 26) = v79;
  v79 = 0.0;
  bFToL(v17, &v79, v18);
  *((float *)a2 + 27) = v79;
  v79 = 0.0;
  bFToL(v19, &v79, v20);
  *((float *)a2 + 31) = v79;
  v79 = 0.0;
  bFToL(v21, &v79, v22);
  *((float *)a2 + 30) = v79;
  v79 = 0.0;
  bFToL(v23, &v79, v24);
  *((float *)a2 + 33) = v79;
  v79 = 0.0;
  bFToL(v25, &v79, v26);
  *((float *)a2 + 32) = v79;
  v79 = 0.0;
  bFToL(v27, &v79, v28);
  *((float *)a2 + 34) = v79;
  v79 = 0.0;
  bFToL(v29, &v79, v30);
  *((float *)a2 + 35) = v79;
  v79 = 0.0;
  bFToL(v31, &v79, v32);
  *((float *)a2 + 36) = v79;
  v79 = 0.0;
  bFToL(v33, &v79, v34);
  *((float *)a2 + 38) = v79;
  v79 = 0.0;
  bFToL(v35, &v79, v36);
  *((float *)a2 + 39) = v79;
  v79 = 0.0;
  bFToL(v37, &v79, v38);
  *((float *)a2 + 40) = v79;
  v79 = 0.0;
  bFToL(v39, &v79, v40);
  *((float *)a2 + 41) = v79;
  v79 = 0.0;
  bFToL(v41, &v79, v42);
  *((float *)a2 + 42) = v79;
  v79 = 0.0;
  bFToL(v43, &v79, v44);
  *((float *)a2 + 43) = v79;
  v79 = 0.0;
  bFToL(v45, &v79, v46);
  *((float *)a2 + 44) = v79;
  v79 = 0.0;
  bFToL(v47, &v79, v48);
  *((float *)a2 + 45) = v79;
  v79 = 0.0;
  bFToL(v49, &v79, v50);
  *((float *)a2 + 46) = v79;
  v79 = 0.0;
  bFToL(v51, &v79, v52);
  *((float *)a2 + 47) = v79;
  v79 = 0.0;
  bFToL(v53, &v79, v54);
  *((float *)a2 + 48) = v79;
  v79 = 0.0;
  bFToL(v55, &v79, v56);
  *((float *)a2 + 49) = v79;
  v79 = 0.0;
  bFToL(v57, &v79, v58);
  *((float *)a2 + 29) = v79;
  v79 = 0.0;
  bFToL(v59, &v79, v60);
  *((float *)a2 + 28) = v79;
LABEL_8:
  v61 = *(_DWORD *)(v14 + 32);
  a2[23] = v61;
  if ( !v61 )
  {
    v62 = *(_DWORD *)(v14 + 140);
    if ( v62 <= 0 || *(_DWORD *)(v14 + 136) )
    {
      vArctan(
        (unsigned int)_mm_cvtsi128_si32((__m128i)COERCE_UNSIGNED_INT((float)v62)),
        (unsigned int)_mm_cvtsi128_si32((__m128i)COERCE_UNSIGNED_INT((float)-*(_DWORD *)(v14 + 136))),
        v80,
        &v79);
      v79 = 0.0;
      bFToL(v77, &v79, 0LL);
      v78 = LODWORD(v79);
      *((float *)a2 + 23) = v79;
      if ( v78 > 1800 )
        a2[23] = v78 - 3600;
    }
  }
  cjOTMAWSize(a5, a2);
  *(_QWORD *)((char *)a2 + 65) = *(_QWORD *)(v14 + 172);
  *(_WORD *)((char *)a2 + 73) = *(_WORD *)(v14 + 180);
  a2[19] = v82;
  a2[20] = *(unsigned __int16 *)(v14 + 54);
  a2[37] = *(__int16 *)(v14 + 58);
  if ( a6 )
  {
    v63 = a2 + 58;
    v64 = ((unsigned __int64)*a2 - 232) >> 1;
    *((_QWORD *)a2 + 25) = 232LL;
    StringCchCopyW((char *)a2 + 232, (unsigned int)v64, (char *)(v14 + *(int *)(v14 + 8)));
    v65 = -1LL;
    v66 = -1LL;
    do
      ++v66;
    while ( *((_WORD *)v63 + v66) );
    v67 = (unsigned int)(v66 + 1);
    v68 = v64 - v67;
    v69 = (char *)v63 + 2 * v67;
    *((_QWORD *)a2 + 26) = v69 - (char *)a2;
    StringCchCopyW(v69, v68, (char *)(v14 + *(int *)(v14 + 16)));
    v70 = -1LL;
    do
      ++v70;
    while ( *(_WORD *)&v69[2 * v70] );
    v71 = (unsigned int)(v70 + 1);
    v72 = v68 - v71;
    v73 = &v69[2 * v71];
    *((_QWORD *)a2 + 27) = v73 - (char *)a2;
    StringCchCopyW(v73, v72, (char *)(v14 + *(int *)(v14 + 12)));
    do
      ++v65;
    while ( *(_WORD *)&v73[2 * v65] );
    v74 = (unsigned int)(v65 + 1);
    *((_QWORD *)a2 + 28) = &v73[2 * v74] - (char *)a2;
    StringCchCopyW(&v73[2 * v74], v72 - (unsigned int)v74, (char *)(v14 + *(int *)(v14 + 20)));
    return *a2;
  }
  *((_QWORD *)a2 + 25) = 0LL;
  result = 232LL;
  *((_QWORD *)a2 + 26) = 0LL;
  *((_QWORD *)a2 + 27) = 0LL;
  *((_QWORD *)a2 + 28) = 0LL;
  return result;
}
