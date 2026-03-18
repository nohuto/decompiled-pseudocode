/*
 * XREFs of ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C010FEB8
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002DF20 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C029AA84 (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C029AD48 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0029850 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C0029904 (--1LFONTOBJ@@QEAA@XZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002F3C8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C00327F4 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C00385A4 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     bFToL @ 0x1C00A95A4 (bFToL.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

void __fastcall RFONTOBJ::ComputeEUDCLogfont(RFONTOBJ *this, struct _EUDCLOGFONT *a2, struct XDCOBJ *a3)
{
  struct XDCOBJ *v4; // r14
  struct HLFONT__ *v6; // rdx
  HDC *v7; // rdx
  __int64 v8; // rbx
  struct LFONT *v9; // r11
  __int64 v10; // r13
  BOOL v11; // r12d
  int v12; // ecx
  __int64 v13; // rax
  int v14; // ebx
  __int64 v15; // r14
  int v16; // eax
  int v17; // eax
  int v18; // r8d
  __int64 v19; // r11
  int v20; // r15d
  int v21; // eax
  int v22; // eax
  float v23; // xmm0_4
  __int64 v24; // rax
  int v25; // ecx
  int v26; // eax
  __int64 v27; // rax
  __m128i v28; // xmm0
  float v29; // xmm0_4
  float v30; // xmm2_4
  float v31; // xmm1_4
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned int v34; // r8d
  unsigned int v35; // eax
  __int64 v36; // rcx
  int v37; // r8d
  int v38; // r9d
  struct LFONT *v39; // [rsp+20h] [rbp-59h] BYREF
  _BYTE v40[56]; // [rsp+28h] [rbp-51h] BYREF
  _QWORD v41[5]; // [rsp+60h] [rbp-19h] BYREF
  int v42; // [rsp+88h] [rbp+Fh]
  __int64 v43; // [rsp+E0h] [rbp+67h] BYREF
  struct XDCOBJ *v44; // [rsp+F0h] [rbp+77h] BYREF
  float v45; // [rsp+F8h] [rbp+7Fh]

  v44 = a3;
  v4 = a3;
  v6 = *(struct HLFONT__ **)(*(_QWORD *)a3 + 2160LL);
  v43 = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v39, v6, (struct PDEVOBJ *)&v43);
  v7 = *(HDC **)v4;
  v43 = *(_QWORD *)this;
  v8 = *(_QWORD *)(v43 + 112);
  DCOBJ::DCOBJ((DCOBJ *)v40, *v7);
  IFIOBJR::IFIOBJR(
    (IFIOBJR *)v41,
    *(const struct _IFIMETRICS **)(v8 + 32),
    (struct RFONTOBJ *)&v43,
    (struct DCOBJ *)v40);
  v9 = v39;
  if ( !v39 )
    goto LABEL_15;
  v10 = v41[0];
  *(_DWORD *)a2 = *(unsigned __int16 *)(v41[0] + 52LL);
  *((_DWORD *)a2 + 1) = *(_DWORD *)(*(_QWORD *)this + 12LL);
  *((_DWORD *)a2 + 3) = *((_DWORD *)v9 + 69);
  *((_DWORD *)a2 + 2) = *((_DWORD *)v9 + 70);
  *((_DWORD *)a2 + 4) = *((_DWORD *)v9 + 71);
  *((_DWORD *)a2 + 5) = *((_DWORD *)v9 + 72);
  *((_DWORD *)a2 + 7) = 1065353216;
  v11 = (*(_DWORD *)(v10 + 48) & 0x401000) != 0;
  v12 = *(_DWORD *)(v10 + 48) & 0x3000010;
  *((_DWORD *)a2 + 6) = v12;
  if ( !v12 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 80LL) + 352LL) & 0x802) == 0x802 )
    {
      if ( v11 )
        *((_DWORD *)a2 + 2) = *(__int16 *)(v10 + 76);
      if ( _wcsicmp((const wchar_t *)(v10 + *(int *)(v10 + 16)), L"Ms Sans Serif") )
      {
        v24 = *(_QWORD *)this;
        if ( (ulFontLinkControl & 0x4000) != 0 )
          v25 = *(_DWORD *)(v24 + 316);
        else
          v25 = *(_DWORD *)(v24 + 308);
        *((_DWORD *)a2 + 3) = (v25 + 8) >> 4;
      }
      else if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 316LL) - 193) > 0x4E )
      {
        *((_DWORD *)a2 + 3) = (*(_DWORD *)(*(_QWORD *)this + 308LL) + 8) >> 4;
      }
      else
      {
        *((_DWORD *)a2 + 3) = 12;
      }
    }
    else
    {
      if ( v11 )
      {
        v26 = 16 * *(__int16 *)(v10 + 76);
        LODWORD(v44) = 0;
        bFToL((float)v26 * *(float *)(*(_QWORD *)this + 684LL), &v44, 0);
        *((_DWORD *)a2 + 2) = (_DWORD)v44;
      }
      v27 = *(_QWORD *)this;
      LODWORD(v44) = 0;
      if ( (ulFontLinkControl & 0x4000) != 0 )
        v28 = _mm_cvtsi32_si128(*(_DWORD *)(v27 + 316));
      else
        v28 = _mm_cvtsi32_si128(*(_DWORD *)(v27 + 308));
      bFToL(_mm_cvtepi32_ps(v28).m128_f32[0] * *(float *)(v27 + 688), &v44, 0);
      *((_DWORD *)a2 + 3) = (_DWORD)v44;
    }
    if ( v11 )
      *((_DWORD *)a2 + 2) *= *(_DWORD *)(*(_QWORD *)this + 672LL);
    goto LABEL_14;
  }
  v13 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 80LL) + 352LL) & 0x802) == 0x802 )
  {
    v14 = (*(_DWORD *)(v13 + 316) + 8) >> 4;
  }
  else
  {
    v23 = (float)*(int *)(v13 + 316);
    LODWORD(v43) = 0;
    bFToL(v23 * *(float *)(v13 + 688), &v43, 0);
    v14 = v43;
  }
  v15 = *(_QWORD *)this;
  LODWORD(v43) = 0;
  v16 = *(_DWORD *)(v15 + 376);
  if ( v16 == 0x80000000 )
  {
    v17 = *(__int16 *)(v10 + 56);
    v45 = *(float *)(v15 + 208);
    bFToL((float)v17 * v45, &v43, 0);
    v20 = v14 - v43;
    if ( v11 && gbJpn98FixPitch == v18 )
    {
      v45 = *(float *)(v15 + 204);
      v29 = (float)v42 * v45;
LABEL_41:
      LODWORD(v43) = v18 & v43;
      bFToL(v29, &v43, v18);
      *((_DWORD *)a2 + 2) = v43;
    }
  }
  else
  {
    bFToL((float)v16 * *(float *)(v15 + 688), &v43, 0);
    v20 = v43;
    if ( v11 && gbJpn98FixPitch == v18 )
    {
      v29 = (float)*(int *)(v15 + 384) * *(float *)(v15 + 684);
      goto LABEL_41;
    }
  }
  if ( v20 < 0 )
    v21 = v14 + v20;
  else
    v21 = v14 - v20;
  *((_DWORD *)a2 + 3) = v21;
  if ( v21 <= 13 )
  {
    if ( v21 == 11 && v14 >= 12 )
    {
      *((_DWORD *)a2 + 3) = 12;
    }
    else if ( v21 == 13 )
    {
      if ( v14 >= 15 )
        v21 = 15;
      *((_DWORD *)a2 + 3) = v21;
    }
  }
  if ( *(_DWORD *)(v19 + 280) && !v11 )
  {
    *((_DWORD *)a2 + 2) = 0;
    v30 = *(float *)(*(_QWORD *)this + 144LL);
    v31 = *(float *)(*(_QWORD *)this + 128LL);
    *(float *)&v43 = v30;
    if ( EFLOAT::bIsZero((EFLOAT *)&v43) )
    {
      v31 = *(float *)(v32 + 132);
      v30 = *(float *)(v32 + 148);
    }
    *((float *)a2 + 7) = v31 / v30;
  }
  v4 = v44;
LABEL_14:
  v22 = *(_DWORD *)(v10 + 48);
  if ( (v22 & 0x10) == 0 )
  {
    if ( (v22 & 0x200000) != 0 )
    {
      v33 = *((unsigned int *)a2 + 5);
      if ( (_DWORD)v33 )
      {
        v34 = lNormAngle(v33);
        v35 = 900 * (v34 / 0x384);
        *((_DWORD *)a2 + 5) = v35;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 80LL) + 352LL) & 0x40) != 0 && v34 != v35 )
          *((_DWORD *)a2 + 5) = lNormAngle(v35 + 900);
      }
      v36 = *((unsigned int *)a2 + 4);
      if ( (_DWORD)v36 )
      {
        v37 = lNormAngle(v36);
        v38 = 900 * (v37 / 900);
        *((_DWORD *)a2 + 4) = v38;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 80LL) + 352LL) & 0x40) != 0 && v37 != v38 )
          *((_DWORD *)a2 + 4) = lNormAngle((unsigned int)(v38 + 900));
      }
    }
    else
    {
      *((_QWORD *)a2 + 2) = 0LL;
    }
  }
LABEL_15:
  DCOBJ::~DCOBJ((DCOBJ *)v40);
  v43 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v43);
  LFONTOBJ::~LFONTOBJ(&v39);
}
