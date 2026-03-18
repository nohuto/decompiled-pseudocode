/*
 * XREFs of cjCopyFontDataW @ 0x1C0030450
 * Callers:
 *     ?WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z @ 0x1C0030118 (-WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z.c)
 * Callees:
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0029850 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C0029904 (--1LFONTOBJ@@QEAA@XZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0030CB4 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C0030CF4 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?bIFIMetricsToLogFontW2@@YAHAEAVDCOBJ@@PEAUtagENUMLOGFONTEXW@@PEAU_IFIMETRICS@@VEFLOATEXT@@@Z @ 0x1C0030FCC (-bIFIMetricsToLogFontW2@@YAHAEAVDCOBJ@@PEAUtagENUMLOGFONTEXW@@PEAU_IFIMETRICS@@VEFLOATEXT@@@Z.c)
 *     ?bIFIMetricsToTextMetricW2@@YAHAEAVDCOBJ@@PEAU_NTMW_INTERNAL@@AEAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z @ 0x1C0031094 (-bIFIMetricsToTextMetricW2@@YAHAEAVDCOBJ@@PEAU_NTMW_INTERNAL@@AEAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z.c)
 *     ?lfOutPrecision@IFIOBJ@@QEAAEXZ @ 0x1C0031558 (-lfOutPrecision@IFIOBJ@@QEAAEXZ.c)
 *     ?dpNtmi@PFEOBJ@@QEAAKXZ @ 0x1C0031B74 (-dpNtmi@PFEOBJ@@QEAAKXZ.c)
 *     ?vLookupScript@@YAXKPEAGK@Z @ 0x1C0031D74 (-vLookupScript@@YAXKPEAGK@Z.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall cjCopyFontDataW(__int64 a1, __int64 a2, __int64 *a3, int a4, wchar_t *Src, unsigned int a6, int a7)
{
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v12; // rbx
  __int64 v13; // r14
  unsigned int v14; // r13d
  __m128i v15; // xmm1
  __m128i v16; // xmm6
  unsigned int v17; // eax
  __int64 v18; // r15
  unsigned int v19; // r8d
  const wchar_t *v20; // r8
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  struct HLFONT__ *v25; // rdx
  signed int v26; // ecx
  __m128i v27; // xmm1
  __m128i v28; // xmm0
  __m128 v29; // xmm1
  unsigned int *v30; // rdx
  unsigned int v31; // [rsp+44h] [rbp-2Ch]
  struct LFONT *v32; // [rsp+48h] [rbp-28h] BYREF
  __int64 v33; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v37; // [rsp+E8h] [rbp+78h]

  v7 = 0LL;
  v8 = (__int64)a3;
  v9 = *a3;
  v12 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v32 = (struct LFONT *)v12;
  v13 = *(_QWORD *)(v9 + 32);
  v14 = *(_DWORD *)(v9 + 12) & 1;
  v33 = v13;
  v37 = *(_DWORD *)(v13 + 128);
  if ( !v12 || *(__int16 *)(v13 + 60) + *(__int16 *)(v13 + 62) == 0 || *(_WORD *)(v13 + 56) == 0 )
    return v7;
  if ( v14 )
  {
    if ( (*(_DWORD *)(v13 + 48) & 0x3000010) != 0 )
      goto LABEL_5;
    PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v32);
    v37 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v32);
  }
  if ( (*(_DWORD *)(v13 + 48) & 0x3000010) == 0 )
  {
    v16 = (__m128i)v37;
    goto LABEL_9;
  }
LABEL_5:
  if ( IFIOBJ::lfOutPrecision((IFIOBJ *)&v33) == 8 )
  {
    PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v32);
    PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v32);
  }
  if ( v14 )
  {
    v25 = *(struct HLFONT__ **)(v12 + 1464);
    if ( !v25 )
      return v7;
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v32, v25, 0LL);
    if ( !v32 )
    {
      LFONTOBJ::~LFONTOBJ(&v32);
      return v7;
    }
    v26 = *((_DWORD *)v32 + 69);
    if ( v26 >= 0 )
    {
      v27 = _mm_cvtsi32_si128(v26);
      v28 = _mm_cvtsi32_si128(*(__int16 *)(v13 + 60) + *(__int16 *)(v13 + 62));
    }
    else
    {
      v27 = _mm_cvtsi32_si128(-v26);
      v28 = _mm_cvtsi32_si128(*(__int16 *)(v13 + 56));
    }
    v29 = _mm_cvtepi32_ps(v27);
    v29.m128_f32[0] = v29.m128_f32[0] / _mm_cvtepi32_ps(v28).m128_f32[0];
    v16 = (__m128i)v29;
    LFONTOBJ::~LFONTOBJ(&v32);
  }
  else
  {
    v15 = (__m128i)COERCE_UNSIGNED_INT((float)(int)PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v32));
    *(float *)v15.m128i_i32 = (float)(*(float *)v15.m128i_i32 * 0.33333334) / (float)*(__int16 *)(v13 + 56);
    v16 = v15;
  }
LABEL_9:
  if ( (unsigned int)bIFIMetricsToLogFontW2(a1, a2 + 12, v13, (unsigned int)_mm_cvtsi128_si32(v16)) )
  {
    v31 = *(_DWORD *)(*(_QWORD *)v8 + 72LL);
    *(_DWORD *)a2 = v31;
    v17 = PFEOBJ::dpNtmi((PFEOBJ *)v8);
    LODWORD(v8) = 0;
    v18 = a2 + v17;
    *(_DWORD *)(a2 + 4) = v17;
    if ( (*(_DWORD *)(v13 + 48) & 0x4000) != 0 && *(_DWORD *)(v13 + 4) > 0xCu )
    {
      v30 = (unsigned int *)(v13 + *(int *)(v13 + 204));
      v8 = v30[1];
      if ( (unsigned int)v8 > 0x10 )
        v8 = 16LL;
      memmove((void *)(a2 + 360), v30, 4 * v8 + 8);
      *(_DWORD *)(a2 + 364) = v8;
    }
    else
    {
      *(_QWORD *)(a2 + 360) = 134248036LL;
    }
    if ( (*(_DWORD *)(v13 + 48) & 0x4000) != 0 && *(_DWORD *)(v13 + 4) > 0x10u )
      memmove((void *)(v18 + 108), (const void *)(v13 + *(int *)(v13 + 208)), 40LL * (unsigned int)v8 + 8);
    else
      *(_QWORD *)(v18 + 108) = 134245473LL;
    if ( (unsigned int)bIFIMetricsToTextMetricW2(a1, v18, a3, v14) )
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
      v21 = *(_DWORD *)(v13 + 48);
      if ( (v21 & 1) != 0 )
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
        if ( (v21 & 2) != 0 )
        {
          *(_DWORD *)(a2 + 8) = 1;
          goto LABEL_24;
        }
        v23 = 0;
        if ( v21 < 0 )
          v23 = 2;
      }
      *(_DWORD *)(a2 + 8) = v23;
LABEL_24:
      if ( v14 )
      {
        if ( (*(_DWORD *)(v13 + 48) & 0x3000010) != 0 )
          *(_DWORD *)(a2 + 8) = 2;
        else
          *(_DWORD *)(a2 + 8) |= 2u;
        if ( *(_DWORD *)(v12 + 2164) == 2
          && (*(_DWORD *)(v12 + 2208) & 0x100) == 0
          && (*(_DWORD *)(v13 + 48) & 0x3000010) != 0 )
        {
          *(_DWORD *)(a2 + 8) |= 0x80000000;
        }
      }
      return v31;
    }
  }
  return v7;
}
