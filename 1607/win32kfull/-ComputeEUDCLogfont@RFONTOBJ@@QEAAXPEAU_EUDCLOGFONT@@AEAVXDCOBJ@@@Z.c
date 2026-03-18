/*
 * XREFs of ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C0009500
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002C5A0 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C029A060 (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C029A324 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C00127D0 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C0014318 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     bFToL @ 0x1C0018BF4 (bFToL.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0023CFC (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C0023DB0 (--1LFONTOBJ@@QEAA@XZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

void __fastcall RFONTOBJ::ComputeEUDCLogfont(RFONTOBJ *this, struct _EUDCLOGFONT *a2, struct XDCOBJ *a3)
{
  struct XDCOBJ *v4; // r14
  struct HLFONT__ *v6; // rdx
  HDC *v7; // rdx
  __int64 v8; // rbx
  _DWORD *v9; // r11
  __int64 v10; // r13
  int v11; // eax
  BOOL v12; // r12d
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // ecx
  int v16; // ebx
  _DWORD *v17; // r14
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r11
  int v21; // r15d
  int v22; // eax
  float v23; // xmm2_4
  float v24; // xmm1_4
  __int64 v25; // rdx
  int v26; // eax
  unsigned int v27; // r8d
  unsigned int v28; // eax
  __int64 v29; // rcx
  int v30; // r8d
  int v31; // r9d
  _DWORD *v32; // [rsp+20h] [rbp-59h] BYREF
  _BYTE v33[16]; // [rsp+28h] [rbp-51h] BYREF
  _BYTE v34[40]; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v35[5]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v36; // [rsp+E0h] [rbp+67h] BYREF
  struct XDCOBJ *v37; // [rsp+F0h] [rbp+77h] BYREF
  int v38; // [rsp+F8h] [rbp+7Fh]

  v37 = a3;
  v4 = a3;
  v6 = *(struct HLFONT__ **)(*(_QWORD *)a3 + 2160LL);
  v36 = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v32, v6, (struct PDEVOBJ *)&v36);
  v7 = *(HDC **)v4;
  v36 = *(_QWORD *)this;
  v8 = *(_QWORD *)(v36 + 112);
  DCOBJ::DCOBJ((DCOBJ *)v33, *v7);
  IFIOBJR::IFIOBJR(
    (IFIOBJR *)v35,
    *(const struct _IFIMETRICS **)(v8 + 32),
    (struct RFONTOBJ *)&v36,
    (struct DCOBJ *)v33);
  v9 = v32;
  if ( !v32 )
    goto LABEL_57;
  v10 = v35[0];
  *(_DWORD *)a2 = *(unsigned __int16 *)(v35[0] + 52LL);
  *((_DWORD *)a2 + 1) = *(_DWORD *)(*(_QWORD *)this + 12LL);
  *((_DWORD *)a2 + 3) = v9[69];
  *((_DWORD *)a2 + 2) = v9[70];
  *((_DWORD *)a2 + 4) = v9[71];
  *((_DWORD *)a2 + 5) = v9[72];
  *((_DWORD *)a2 + 7) = 1065353216;
  v11 = *(_DWORD *)(v10 + 48);
  v12 = (v11 & 0x401000) != 0;
  v11 &= 0x3000010u;
  *((_DWORD *)a2 + 6) = v11;
  v13 = 2050LL;
  if ( v11 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 80LL) + 352LL) & 0x802) == 0x802 )
    {
      v16 = (*(_DWORD *)(*(_QWORD *)this + 316LL) + 8) >> 4;
    }
    else
    {
      LODWORD(v36) = 0;
      bFToL(2050LL, &v36, 0LL);
      v16 = v36;
    }
    v17 = *(_DWORD **)this;
    LODWORD(v36) = 0;
    if ( v17[94] == 0x80000000 )
    {
      v38 = v17[52];
      bFToL(v13, &v36, 0LL);
      v21 = v16 - v36;
      if ( v12 && gbJpn98FixPitch == (_DWORD)v19 )
      {
        v38 = v17[51];
LABEL_28:
        LODWORD(v36) = v19 & v36;
        bFToL(v18, &v36, v19);
        *((_DWORD *)a2 + 2) = v36;
      }
    }
    else
    {
      bFToL(v13, &v36, 0LL);
      v21 = v36;
      if ( v12 && gbJpn98FixPitch == (_DWORD)v19 )
        goto LABEL_28;
    }
    if ( v21 >= 0 )
      v22 = v16 - v21;
    else
      v22 = v16 + v21;
    *((_DWORD *)a2 + 3) = v22;
    if ( v22 <= 13 )
    {
      if ( v22 == 11 && v16 >= 12 )
      {
        *((_DWORD *)a2 + 3) = 12;
      }
      else if ( v22 == 13 )
      {
        if ( v16 >= 15 )
          v22 = 15;
        *((_DWORD *)a2 + 3) = v22;
      }
    }
    if ( *(_DWORD *)(v20 + 280) && !v12 )
    {
      *((_DWORD *)a2 + 2) = 0;
      v23 = *(float *)(*(_QWORD *)this + 144LL);
      v24 = *(float *)(*(_QWORD *)this + 128LL);
      *(float *)&v36 = v23;
      if ( (unsigned int)EFLOAT::bIsZero((EFLOAT *)&v36) )
      {
        v24 = *(float *)(v25 + 132);
        v23 = *(float *)(v25 + 148);
      }
      *((float *)a2 + 7) = v24 / v23;
    }
    v4 = v37;
    goto LABEL_46;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 80LL) + 352LL) & 0x802) == 0x802 )
  {
    if ( v12 )
      *((_DWORD *)a2 + 2) = *(__int16 *)(v10 + 76);
    if ( _wcsicmp((const wchar_t *)(v10 + *(int *)(v10 + 16)), L"Ms Sans Serif") )
    {
      v14 = *(_QWORD *)this;
      if ( (ulFontLinkControl & 0x4000) != 0 )
        v15 = *(_DWORD *)(v14 + 316);
      else
        v15 = *(_DWORD *)(v14 + 308);
      *((_DWORD *)a2 + 3) = (v15 + 8) >> 4;
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
    if ( v12 )
    {
      LODWORD(v37) = 0;
      bFToL(2050LL, &v37, 0LL);
      *((_DWORD *)a2 + 2) = (_DWORD)v37;
    }
    LODWORD(v37) = 0;
    bFToL(v13, &v37, 0LL);
    *((_DWORD *)a2 + 3) = (_DWORD)v37;
  }
  if ( v12 )
    *((_DWORD *)a2 + 2) *= *(_DWORD *)(*(_QWORD *)this + 672LL);
LABEL_46:
  v26 = *(_DWORD *)(v10 + 48);
  if ( (v26 & 0x10) == 0 )
  {
    if ( (v26 & 0x200000) != 0 )
    {
      if ( *((_DWORD *)a2 + 5) )
      {
        v27 = ((__int64 (*)(void))lNormAngle)();
        v28 = 900 * (v27 / 0x384);
        *((_DWORD *)a2 + 5) = v28;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 80LL) + 352LL) & 0x40) != 0 && v27 != v28 )
          *((_DWORD *)a2 + 5) = lNormAngle(v28 + 900);
      }
      v29 = *((unsigned int *)a2 + 4);
      if ( (_DWORD)v29 )
      {
        v30 = lNormAngle(v29);
        v31 = 900 * (v30 / 900);
        *((_DWORD *)a2 + 4) = v31;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 80LL) + 352LL) & 0x40) != 0 && v30 != v31 )
          *((_DWORD *)a2 + 4) = lNormAngle((unsigned int)(v31 + 900));
      }
    }
    else
    {
      *((_QWORD *)a2 + 2) = 0LL;
    }
  }
LABEL_57:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v33);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v34);
  v36 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v36);
  LFONTOBJ::~LFONTOBJ((LFONTOBJ *)&v32);
}
