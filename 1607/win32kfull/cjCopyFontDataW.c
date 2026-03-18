/*
 * XREFs of cjCopyFontDataW @ 0x1C0028D7C
 * Callers:
 *     ?WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z @ 0x1C0028378 (-WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z.c)
 * Callees:
 *     ?bIFIMetricsToLogFontW2@@YAHAEAVDCOBJ@@PEAUtagENUMLOGFONTEXW@@PEAU_IFIMETRICS@@VEFLOATEXT@@@Z @ 0x1C00234C8 (-bIFIMetricsToLogFontW2@@YAHAEAVDCOBJ@@PEAUtagENUMLOGFONTEXW@@PEAU_IFIMETRICS@@VEFLOATEXT@@@Z.c)
 *     ?bIFIMetricsToTextMetricW2@@YAHAEAVDCOBJ@@PEAU_NTMW_INTERNAL@@AEAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z @ 0x1C0023590 (-bIFIMetricsToTextMetricW2@@YAHAEAVDCOBJ@@PEAU_NTMW_INTERNAL@@AEAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0023CFC (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C0023DB0 (--1LFONTOBJ@@QEAA@XZ.c)
 *     ?lfOutPrecision@IFIOBJ@@QEAAEXZ @ 0x1C00266D0 (-lfOutPrecision@IFIOBJ@@QEAAEXZ.c)
 *     ?dpNtmi@PFEOBJ@@QEAAKXZ @ 0x1C0027AB4 (-dpNtmi@PFEOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0029B10 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C0029B44 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?vLookupScript@@YAXKPEAGK@Z @ 0x1C0060C14 (-vLookupScript@@YAXKPEAGK@Z.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 */

__int64 __fastcall cjCopyFontDataW(
        struct XDCOBJ *a1,
        __int64 a2,
        __int64 *a3,
        int a4,
        wchar_t *Src,
        unsigned int a6,
        int a7)
{
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v12; // rbx
  struct _IFIMETRICS *v13; // r14
  int v14; // r13d
  __m128i v15; // xmm1
  __m128i v16; // xmm6
  unsigned int v17; // eax
  __int64 v18; // r15
  unsigned int v19; // r8d
  const wchar_t *v20; // r8
  signed int flInfo; // eax
  int v22; // eax
  int v23; // eax
  bool v25; // zf
  struct HLFONT__ *v26; // rdx
  signed int v27; // ecx
  __m128i v28; // xmm1
  __m128i v29; // xmm0
  __m128 v30; // xmm1
  unsigned int *v31; // rdx
  int v32; // [rsp+20h] [rbp-50h]
  int y; // [rsp+40h] [rbp-30h]
  unsigned int v34; // [rsp+44h] [rbp-2Ch]
  struct LFONT *v35; // [rsp+48h] [rbp-28h] BYREF
  struct _IFIMETRICS *v36; // [rsp+50h] [rbp-20h] BYREF
  unsigned int x; // [rsp+E8h] [rbp+78h]

  v7 = 0LL;
  v8 = (__int64)a3;
  v9 = *a3;
  v12 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v35 = (struct LFONT *)v12;
  v13 = *(struct _IFIMETRICS **)(v9 + 32);
  v14 = *(_DWORD *)(v9 + 12) & 1;
  v36 = v13;
  y = v13->ptlAspect.y;
  x = v13->ptlAspect.x;
  if ( !v12 || v13->fwdWinAscender + v13->fwdWinDescender == 0 || v13->fwdUnitsPerEm == 0 )
    return v7;
  if ( v14 )
  {
    if ( (v13->flInfo & 0x3000010) != 0 )
      goto LABEL_5;
    y = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v35);
    x = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v35);
  }
  if ( (v13->flInfo & 0x3000010) == 0 )
  {
    v16 = (__m128i)x;
    goto LABEL_9;
  }
LABEL_5:
  if ( IFIOBJ::lfOutPrecision((IFIOBJ *)&v36) == 8 )
  {
    y = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v35);
    x = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v35);
  }
  if ( v14 )
  {
    v26 = *(struct HLFONT__ **)(v12 + 1464);
    if ( !v26 )
      return v7;
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v35, v26, 0LL);
    if ( !v35 )
    {
      LFONTOBJ::~LFONTOBJ(&v35);
      return v7;
    }
    v27 = *((_DWORD *)v35 + 69);
    if ( v27 >= 0 )
    {
      v28 = _mm_cvtsi32_si128(v27);
      v29 = _mm_cvtsi32_si128(v13->fwdWinAscender + v13->fwdWinDescender);
    }
    else
    {
      v28 = _mm_cvtsi32_si128(-v27);
      v29 = _mm_cvtsi32_si128(v13->fwdUnitsPerEm);
    }
    v30 = _mm_cvtepi32_ps(v28);
    v30.m128_f32[0] = v30.m128_f32[0] / _mm_cvtepi32_ps(v29).m128_f32[0];
    v16 = (__m128i)v30;
    LFONTOBJ::~LFONTOBJ(&v35);
  }
  else
  {
    v15 = (__m128i)COERCE_UNSIGNED_INT((float)(int)PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v35));
    *(float *)v15.m128i_i32 = (float)(*(float *)v15.m128i_i32 * 0.33333334) / (float)v13->fwdUnitsPerEm;
    v16 = v15;
  }
LABEL_9:
  if ( (unsigned int)bIFIMetricsToLogFontW2(a1, a2 + 12, v13, _mm_cvtsi128_si32(v16)) )
  {
    v34 = *(_DWORD *)(*(_QWORD *)v8 + 72LL);
    *(_DWORD *)a2 = v34;
    v17 = PFEOBJ::dpNtmi((PFEOBJ *)v8);
    LODWORD(v8) = 0;
    v18 = a2 + v17;
    *(_DWORD *)(a2 + 4) = v17;
    if ( (v13->flInfo & 0x4000) != 0 && v13->cjIfiExtra > 0xC )
    {
      v31 = (ULONG *)((char *)&v13->cjThis + v13[1].dpwszStyleName);
      v8 = v31[1];
      if ( (unsigned int)v8 > 0x10 )
        v8 = 16LL;
      memmove((void *)(a2 + 360), v31, 4 * v8 + 8);
      *(_DWORD *)(a2 + 364) = v8;
    }
    else
    {
      *(_QWORD *)(a2 + 360) = 134248036LL;
    }
    if ( (v13->flInfo & 0x4000) != 0 && v13->cjIfiExtra > 0x10 )
      memmove((void *)(v18 + 108), (char *)v13 + v13[1].dpwszFaceName, 40LL * (unsigned int)v8 + 8);
    else
      *(_QWORD *)(v18 + 108) = 134245473LL;
    if ( (unsigned int)bIFIMetricsToTextMetricW2((__int64)a1, v18, (__int64)a3, v14, v32, *(float *)v16.m128i_i32, y, x) )
    {
      if ( a7 )
      {
        *(_BYTE *)(a2 + 35) = a6;
        *(_BYTE *)(v18 + 64) = a6;
        vLookupScript(a6, (unsigned __int16 *)(a2 + 296), v19);
      }
      else
      {
        *(_WORD *)(a2 + 296) = 0;
      }
      v20 = Src;
      if ( !Src )
      {
        if ( a4 != 5 )
          goto LABEL_19;
        v20 = (const wchar_t *)(a2 + 104);
      }
      wcsncpy_s((wchar_t *)(a2 + 40), 0x20uLL, v20, 0x1FuLL);
      *(_WORD *)(a2 + 102) = 0;
LABEL_19:
      *(_DWORD *)(a2 + 8) = 0;
      flInfo = v13->flInfo;
      if ( (flInfo & 1) != 0 )
      {
        if ( (*(_DWORD *)(v12 + 56) & 1) != 0
          || (*(_DWORD *)(v12 + 2208) & 0x2000) != 0
          || (v22 = 2, *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 68LL) != 1) )
        {
          v22 = 0;
        }
        v23 = v22 | 4;
      }
      else
      {
        if ( (flInfo & 2) != 0 )
        {
          *(_DWORD *)(a2 + 8) = 1;
          goto LABEL_24;
        }
        v25 = flInfo >= 0;
        v23 = 0;
        if ( !v25 )
          v23 = 2;
      }
      *(_DWORD *)(a2 + 8) = v23;
LABEL_24:
      if ( v14 )
      {
        if ( (v13->flInfo & 0x3000010) != 0 )
          *(_DWORD *)(a2 + 8) = 2;
        else
          *(_DWORD *)(a2 + 8) |= 2u;
        if ( *(_DWORD *)(v12 + 2164) == 2 && (*(_DWORD *)(v12 + 2208) & 0x100) == 0 && (v13->flInfo & 0x3000010) != 0 )
          *(_DWORD *)(a2 + 8) |= 0x80000000;
      }
      return v34;
    }
  }
  return v7;
}
