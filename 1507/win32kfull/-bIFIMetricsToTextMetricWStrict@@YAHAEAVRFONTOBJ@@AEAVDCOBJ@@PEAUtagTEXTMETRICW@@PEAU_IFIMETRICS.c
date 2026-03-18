/*
 * XREFs of ?bIFIMetricsToTextMetricWStrict@@YAHAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x1C00380C4
 * Callers:
 *     bIFIMetricsToTextMetricW @ 0x1C00378F4 (bIFIMetricsToTextMetricW.c)
 *     cjIFIMetricsToOTMW @ 0x1C0037998 (cjIFIMetricsToOTMW.c)
 * Callees:
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C002B0DC (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     ?fwdExternalLeading@IFIOBJ@@QEAAFXZ @ 0x1C0031534 (-fwdExternalLeading@IFIOBJ@@QEAAFXZ.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C00385A4 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     GetAppCompatFlags @ 0x1C005CA60 (GetAppCompatFlags.c)
 *     bFToL @ 0x1C00A95A4 (bFToL.c)
 */

__int64 __fastcall bIFIMetricsToTextMetricWStrict(
        struct RFONTOBJ *this,
        struct DCOBJ *a2,
        struct tagTEXTMETRICW *a3,
        struct _IFIMETRICS *a4)
{
  char v7; // r15
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rcx
  LONG v11; // edx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  LONG v19; // ecx
  char v20; // al
  int v21; // edx
  __int64 v22; // rax
  __int64 result; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  int v27; // ebx
  char v28; // r9
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // r8
  int AppCompatFlags; // eax
  _QWORD v36[2]; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int16 v37; // [rsp+34h] [rbp-2Ch]
  char v38; // [rsp+36h] [rbp-2Ah]
  LONG v39; // [rsp+44h] [rbp-1Ch]
  LONG v40; // [rsp+48h] [rbp-18h]
  LONG v41; // [rsp+4Ch] [rbp-14h]
  LONG v42; // [rsp+50h] [rbp-10h]
  LONG v43; // [rsp+54h] [rbp-Ch]
  LONG v44; // [rsp+58h] [rbp-8h]
  LONG v45; // [rsp+A8h] [rbp+48h] BYREF
  int v46; // [rsp+B0h] [rbp+50h]
  struct _IFIMETRICS *v47; // [rsp+B8h] [rbp+58h]

  v47 = a4;
  IFIOBJR::IFIOBJR((IFIOBJR *)v36, a4, this, a2);
  v7 = 8;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 352LL) & 0x802) == 0x802 )
  {
    a3->tmHeight = (*(_DWORD *)(*(_QWORD *)this + 316LL) + 8) >> 4;
    a3->tmAscent = (*(_DWORD *)(*(_QWORD *)this + 308LL) + 8) >> 4;
    a3->tmOverhang = RFONTOBJ::lOverhang(this);
  }
  else
  {
    v45 = 0;
    bFToL(2050LL, &v45, 0LL);
    a3->tmHeight = v45;
    v45 = 0;
    bFToL(v24, &v45, v25);
    a3->tmAscent = v45;
    RFONTOBJ::lOverhang(this);
    v45 = 0;
    bFToL(v26, &v45, 0LL);
    a3->tmOverhang = v45;
  }
  v8 = v36[0];
  if ( (*(_DWORD *)(v36[0] + 48LL) & 0x3000010) != 0 )
  {
    v9 = *(_QWORD *)this;
    v45 = 0;
    v10 = *(unsigned int *)(v9 + 376);
    if ( (_DWORD)v10 == 0x80000000 )
    {
      v46 = *(_DWORD *)(v9 + 208);
      bFToL(v10, &v45, 0LL);
      v11 = a3->tmHeight - v45;
    }
    else
    {
      bFToL(v10, &v45, 0LL);
      v11 = v45;
    }
    a3->tmInternalLeading = v11;
    v12 = *(_QWORD *)this;
    v45 = 0;
    v13 = *(unsigned int *)(v12 + 372);
    if ( (_DWORD)v13 == 0x80000000 )
      v13 = (unsigned int)(__int16)IFIOBJ::fwdExternalLeading((IFIOBJ *)v36);
    bFToL(v13, &v45, 0LL);
    a3->tmExternalLeading = v45;
    v15 = *(_QWORD *)this;
    v45 = 0;
    v16 = *(unsigned int *)(v15 + 380);
    if ( (_DWORD)v16 == 0x80000000 )
      v46 = *(_DWORD *)(v15 + 204);
    bFToL(v16, &v45, v14);
    a3->tmMaxCharWidth = v45;
    v17 = *(_QWORD *)this;
    v45 = 0;
    v18 = *(unsigned int *)(v17 + 384);
    if ( (_DWORD)v18 == 0x80000000 )
      v46 = *(_DWORD *)(v17 + 204);
    bFToL(v18, &v45, 0LL);
    a3->tmAveCharWidth = v45;
  }
  else if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 352LL) & 0x802) == 0x802 )
  {
    a3->tmMaxCharWidth = v39;
    a3->tmAveCharWidth = v40;
    a3->tmInternalLeading = v41;
    a3->tmExternalLeading = v42;
  }
  else
  {
    v45 = 0;
    bFToL(2050LL, &v45, 0LL);
    a3->tmMaxCharWidth = v45;
    v45 = 0;
    bFToL(v29, &v45, v30);
    a3->tmAveCharWidth = v45;
    v45 = 0;
    bFToL(v31, &v45, v32);
    a3->tmInternalLeading = v45;
    v45 = 0;
    bFToL(v33, &v45, v34);
    a3->tmExternalLeading = v45;
  }
  v19 = a3->tmHeight - a3->tmAscent;
  a3->tmWeight = v37;
  v20 = v38 & 1;
  a3->tmDescent = v19;
  a3->tmItalic = -(v20 != 0);
  a3->tmUnderlined = *(_BYTE *)(v8 + 52) & 2;
  a3->tmStruckOut = *(_BYTE *)(v8 + 52) & 0x10;
  v21 = *(_DWORD *)(*(_QWORD *)a2 + 2168LL);
  a3->tmUnderlined = -((v21 & 0x20) != 0);
  a3->tmStruckOut = -((v21 & 0x80u) != 0);
  a3->tmFirstChar = *(_WORD *)(v8 + 112);
  a3->tmLastChar = *(_WORD *)(v8 + 114);
  a3->tmDefaultChar = *(_WORD *)(v8 + 116);
  a3->tmBreakChar = *(_WORD *)(v8 + 118);
  a3->tmCharSet = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 66LL);
  if ( (*(_DWORD *)(v8 + 48) & 1) != 0 )
  {
    v22 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    if ( (*(_DWORD *)(v22 + 56) & 1) != 0
      || (*(_DWORD *)(v22 + 2208) & 0x2000) != 0
      || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 68LL) != 1
      || gbDBCSCodePage && (AppCompatFlags = GetAppCompatFlags(0LL), AppCompatFlags < 0) )
    {
      v7 = 0;
    }
    a3->tmPitchAndFamily = ((*(_DWORD *)(v8 + 48) & 1) != 0 ? 6 : 0) | ((*(_DWORD *)(v8 + 48) & 0x401000) == 0) | *(_BYTE *)(v8 + 45) & 0xF0 | ((*(_DWORD *)(v8 + 48) & 4u) >> 1) | v7;
  }
  else
  {
    v27 = *(_DWORD *)(*(_QWORD *)this + 88LL) != 0 ? 8 : 0;
    if ( (v47->flInfo & 8) == 0 || gbDBCSCodePage && (int)GetAppCompatFlags(0LL) < 0 )
      v28 = 0;
    else
      v28 = 10;
    a3->tmPitchAndFamily = ((*(_DWORD *)(v8 + 48) & 1) != 0 ? 6 : 0) | ((*(_DWORD *)(v8 + 48) & 0x401000) == 0) | *(_BYTE *)(v8 + 45) & 0xF0 | ((*(_DWORD *)(v8 + 48) & 4u) >> 1) | v28 | v27;
  }
  result = 1LL;
  a3->tmDigitizedAspectX = v43;
  a3->tmDigitizedAspectY = v44;
  return result;
}
