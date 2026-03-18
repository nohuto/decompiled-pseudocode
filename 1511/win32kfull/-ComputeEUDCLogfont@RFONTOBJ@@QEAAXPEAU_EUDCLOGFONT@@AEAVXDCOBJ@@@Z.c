/*
 * XREFs of ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C0002FD8
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002667C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C029A544 (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C029A7D0 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C001AA10 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0022088 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C002213C (--1LFONTOBJ@@QEAA@XZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0027184 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C00E8B50 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     bFToL @ 0x1C0116F84 (bFToL.c)
 */

void __fastcall RFONTOBJ::ComputeEUDCLogfont(RFONTOBJ *this, struct _EUDCLOGFONT *a2, struct XDCOBJ *a3)
{
  struct XDCOBJ *v4; // r14
  struct HLFONT__ *v6; // rdx
  HDC *v7; // rdx
  __int64 v8; // rbx
  _DWORD *v9; // r11
  __int64 v10; // r13
  BOOL v11; // r12d
  bool v12; // zf
  __int64 v13; // rcx
  int v14; // ebx
  _DWORD *v15; // r14
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r11
  int v19; // r15d
  int v20; // eax
  int v21; // eax
  __int64 v22; // rax
  int v23; // ecx
  float v24; // xmm2_4
  float v25; // xmm1_4
  __int64 v26; // rdx
  unsigned int v27; // r8d
  unsigned int v28; // eax
  __int64 v29; // rcx
  int v30; // r8d
  int v31; // r9d
  _DWORD *v32; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v33[24]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v34[5]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v35; // [rsp+C0h] [rbp+40h] BYREF
  struct XDCOBJ *v36; // [rsp+D0h] [rbp+50h] BYREF
  int v37; // [rsp+D8h] [rbp+58h]

  v36 = a3;
  v4 = a3;
  v6 = *(struct HLFONT__ **)(*(_QWORD *)a3 + 2136LL);
  v35 = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v32, v6, (struct PDEVOBJ *)&v35);
  v7 = *(HDC **)v4;
  v35 = *(_QWORD *)this;
  v8 = *(_QWORD *)(v35 + 112);
  DCOBJ::DCOBJ((DCOBJ *)v33, *v7);
  IFIOBJR::IFIOBJR(
    (IFIOBJR *)v34,
    *(const struct _IFIMETRICS **)(v8 + 32),
    (struct RFONTOBJ *)&v35,
    (struct DCOBJ *)v33);
  v9 = v32;
  if ( !v32 )
    goto LABEL_15;
  v10 = v34[0];
  *(_DWORD *)a2 = *(unsigned __int16 *)(v34[0] + 52LL);
  *((_DWORD *)a2 + 1) = *(_DWORD *)(*(_QWORD *)this + 12LL);
  *((_DWORD *)a2 + 3) = v9[69];
  *((_DWORD *)a2 + 2) = v9[70];
  *((_DWORD *)a2 + 4) = v9[71];
  *((_DWORD *)a2 + 5) = v9[72];
  *((_DWORD *)a2 + 7) = 1065353216;
  v11 = (*(_DWORD *)(v10 + 48) & 0x401000) != 0;
  v12 = (*(_DWORD *)(v10 + 48) & 0x3000010) == 0;
  *((_DWORD *)a2 + 6) = *(_DWORD *)(v10 + 48) & 0x3000010;
  v13 = 2050LL;
  if ( v12 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 80LL) + 352LL) & 0x802) == 0x802 )
    {
      if ( v11 )
        *((_DWORD *)a2 + 2) = *(__int16 *)(v10 + 76);
      if ( _wcsicmp((const wchar_t *)(v10 + *(int *)(v10 + 16)), L"Ms Sans Serif") )
      {
        v22 = *(_QWORD *)this;
        if ( (ulFontLinkControl & 0x4000) != 0 )
          v23 = *(_DWORD *)(v22 + 316);
        else
          v23 = *(_DWORD *)(v22 + 308);
        *((_DWORD *)a2 + 3) = (v23 + 8) >> 4;
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
        LODWORD(v36) = 0;
        bFToL(2050LL, &v36, 0LL);
        *((_DWORD *)a2 + 2) = (_DWORD)v36;
      }
      LODWORD(v36) = 0;
      bFToL(v13, &v36, 0LL);
      *((_DWORD *)a2 + 3) = (_DWORD)v36;
    }
    if ( v11 )
      *((_DWORD *)a2 + 2) *= *(_DWORD *)(*(_QWORD *)this + 672LL);
    goto LABEL_14;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 80LL) + 352LL) & 0x802) == 0x802 )
  {
    v14 = (*(_DWORD *)(*(_QWORD *)this + 316LL) + 8) >> 4;
  }
  else
  {
    LODWORD(v35) = 0;
    bFToL(2050LL, &v35, 0LL);
    v14 = v35;
  }
  v15 = *(_DWORD **)this;
  LODWORD(v35) = 0;
  if ( v15[94] == 0x80000000 )
  {
    v37 = v15[52];
    bFToL(v13, &v35, 0LL);
    v19 = v14 - v35;
    if ( v11 && gbJpn98FixPitch == (_DWORD)v17 )
    {
      v37 = v15[51];
LABEL_37:
      LODWORD(v35) = v17 & v35;
      bFToL(v16, &v35, v17);
      *((_DWORD *)a2 + 2) = v35;
    }
  }
  else
  {
    bFToL(v13, &v35, 0LL);
    v19 = v35;
    if ( v11 && gbJpn98FixPitch == (_DWORD)v17 )
      goto LABEL_37;
  }
  if ( v19 < 0 )
    v20 = v14 + v19;
  else
    v20 = v14 - v19;
  *((_DWORD *)a2 + 3) = v20;
  if ( v20 <= 13 )
  {
    if ( v20 == 11 && v14 >= 12 )
    {
      *((_DWORD *)a2 + 3) = 12;
    }
    else if ( v20 == 13 )
    {
      if ( v14 >= 15 )
        v20 = 15;
      *((_DWORD *)a2 + 3) = v20;
    }
  }
  if ( *(_DWORD *)(v18 + 280) && !v11 )
  {
    *((_DWORD *)a2 + 2) = 0;
    v24 = *(float *)(*(_QWORD *)this + 144LL);
    v25 = *(float *)(*(_QWORD *)this + 128LL);
    *(float *)&v35 = v24;
    if ( (unsigned int)EFLOAT::bIsZero((EFLOAT *)&v35) )
    {
      v25 = *(float *)(v26 + 132);
      v24 = *(float *)(v26 + 148);
    }
    *((float *)a2 + 7) = v25 / v24;
  }
  v4 = v36;
LABEL_14:
  v21 = *(_DWORD *)(v10 + 48);
  if ( (v21 & 0x10) == 0 )
  {
    if ( (v21 & 0x200000) != 0 )
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
LABEL_15:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v33);
  v35 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v35);
  LFONTOBJ::~LFONTOBJ((LFONTOBJ *)&v32);
}
