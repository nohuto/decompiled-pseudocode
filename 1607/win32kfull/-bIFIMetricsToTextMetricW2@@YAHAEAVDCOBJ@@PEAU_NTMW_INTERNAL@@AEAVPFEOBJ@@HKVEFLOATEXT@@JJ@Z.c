/*
 * XREFs of ?bIFIMetricsToTextMetricW2@@YAHAEAVDCOBJ@@PEAU_NTMW_INTERNAL@@AEAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z @ 0x1C0023590
 * Callers:
 *     cjCopyFontDataW @ 0x1C0028D7C (cjCopyFontDataW.c)
 * Callees:
 *     bFToL @ 0x1C0018BF4 (bFToL.c)
 *     ?fwdExternalLeading@IFIOBJ@@QEAAFXZ @ 0x1C0026784 (-fwdExternalLeading@IFIOBJ@@QEAAFXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0039508 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 */

__int64 __fastcall bIFIMetricsToTextMetricW2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        float a6,
        int a7,
        int a8)
{
  __int64 v11; // rdi
  int v12; // edx
  unsigned int v13; // esi
  int v14; // edx
  float v15; // xmm1_4
  char v16; // r8
  int v17; // eax
  char v18; // r8
  __int16 v19; // ax
  char v20; // r8
  int v21; // eax
  char v22; // r8
  int v23; // eax
  char v24; // r8
  struct XDCOBJ *v25; // r11
  int v26; // eax
  int v27; // ecx
  int v28; // edx
  char v29; // r9
  __int16 v30; // ax
  int v31; // eax
  int v32; // ecx
  __int64 v33; // rcx
  __int64 v34; // rax
  float v36; // xmm1_4
  float v37; // xmm0_4
  float v38; // xmm0_4
  char v39; // r8
  float v40; // xmm0_4
  char v41; // r8
  float v42; // xmm0_4
  char v43; // r8
  float v44; // xmm0_4
  char v45; // r8
  float v46; // xmm0_4
  char v47; // r8
  _DWORD v48[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v49[2]; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v50[3]; // [rsp+38h] [rbp-18h] BYREF
  float v51; // [rsp+88h] [rbp+38h] BYREF
  float v52; // [rsp+90h] [rbp+40h] BYREF

  v11 = *(_QWORD *)(*(_QWORD *)a3 + 32LL);
  v49[0] = v11;
  v12 = *(__int16 *)(v11 + 60) + *(__int16 *)(v11 + 62);
  if ( v12 == 0 || *(_WORD *)(v11 + 56) == 0 )
    return 0;
  v13 = 0;
  if ( (*(_DWORD *)(v11 + 48) & 0x3000010) != 0 )
  {
    a5 = 0;
    bFToL((float)v12 * a6, &a5, 0);
    v14 = a5;
    *(_DWORD *)(a2 + 8) = a5;
    a5 = 0;
    a6 = (float)v14;
    v15 = (float)v14 / (float)(*(__int16 *)(v11 + 60) + *(__int16 *)(v11 + 62));
    a6 = v15;
    bFToL((float)*(__int16 *)(v11 + 60) * v15, &a5, v16);
    *(_DWORD *)(a2 + 12) = a5;
    v17 = (__int16)(*(_WORD *)(v11 + 60) + *(_WORD *)(v11 + 62) - *(_WORD *)(v11 + 56));
    a5 = 0;
    bFToL((float)v17 * v15, &a5, v18);
    *(_DWORD *)(a2 + 20) = a5;
    a5 = 0;
    v19 = IFIOBJ::fwdExternalLeading((IFIOBJ *)v49);
    bFToL((float)v19 * v15, &a5, v20);
    *(_DWORD *)(a2 + 24) = a5;
    v21 = *(__int16 *)(v11 + 76);
    a5 = 0;
    bFToL((float)v21 * v15, &a5, v22);
    *(_DWORD *)(a2 + 28) = a5;
    v23 = *(__int16 *)(v11 + 78);
    a5 = 0;
    bFToL((float)v23 * v15, &a5, v24);
    v26 = a5;
  }
  else
  {
    *(_DWORD *)(a2 + 8) = v12;
    *(_DWORD *)(a2 + 12) = *(__int16 *)(v11 + 60);
    *(_DWORD *)(a2 + 20) = (__int16)(*(_WORD *)(v11 + 60) + *(_WORD *)(v11 + 62) - *(_WORD *)(v11 + 56));
    *(_DWORD *)(a2 + 24) = IFIOBJ::fwdExternalLeading((IFIOBJ *)v49);
    *(_DWORD *)(a2 + 28) = *(__int16 *)(v11 + 76);
    v26 = *(__int16 *)(v11 + 78);
  }
  *(_DWORD *)(a2 + 32) = v26;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v50, v25, 0x402u);
  if ( v50[0] )
  {
    if ( (*(_DWORD *)(v50[0] + 32LL) & 2) == 0 )
    {
      v48[1] = 0;
      v48[0] = 1065353216;
      if ( !EXFORMOBJ::bXform((EXFORMOBJ *)v50, (struct VECTORFL *)v48, (struct VECTORFL *)v48, 1uLL) )
        return v13;
      EFLOAT::eqLength(&v51, &a5, v48);
      v49[0] = 0x3F80000000000000LL;
      if ( (*(_DWORD *)(v50[0] + 32LL) & 2) == 0
        && !EXFORMOBJ::bXform((EXFORMOBJ *)v50, (struct VECTORFL *)v49, (struct VECTORFL *)v49, 1uLL) )
      {
        return v13;
      }
      EFLOAT::eqLength(&v52, &a5, v49);
      v36 = v52;
      v37 = (float)*(int *)(a2 + 8);
      a5 = 0;
      bFToL(v37 * v52, &a5, 0);
      v38 = (float)*(int *)(a2 + 12);
      *(_DWORD *)(a2 + 8) = a5;
      a5 = 0;
      bFToL(v38 * v36, &a5, v39);
      v40 = (float)*(int *)(a2 + 28);
      *(_DWORD *)(a2 + 12) = a5;
      a5 = 0;
      bFToL(v40 * v51, &a5, v41);
      v42 = (float)*(int *)(a2 + 32);
      *(_DWORD *)(a2 + 28) = a5;
      a5 = 0;
      bFToL(v42 * v51, &a5, v43);
      v44 = (float)*(int *)(a2 + 20);
      *(_DWORD *)(a2 + 32) = a5;
      a5 = 0;
      bFToL(v44 * v36, &a5, v45);
      v46 = (float)*(int *)(a2 + 24);
      *(_DWORD *)(a2 + 20) = a5;
      a5 = 0;
      bFToL(v46 * v36, &a5, v47);
      *(_DWORD *)(a2 + 24) = a5;
    }
    v27 = *(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 12);
    *(_DWORD *)(a2 + 44) = a7;
    *(_DWORD *)(a2 + 48) = a8;
    *(_DWORD *)(a2 + 16) = v27;
    *(_DWORD *)(a2 + 36) = *(unsigned __int16 *)(v11 + 46);
    *(_BYTE *)(a2 + 60) = -((*(_BYTE *)(v11 + 52) & 1) != 0);
    *(_BYTE *)(a2 + 61) = *(_BYTE *)(v11 + 52) & 2;
    *(_BYTE *)(a2 + 62) = *(_BYTE *)(v11 + 52) & 0x10;
    *(_WORD *)(a2 + 52) = *(_WORD *)(v11 + 112);
    *(_WORD *)(a2 + 54) = *(_WORD *)(v11 + 114);
    *(_WORD *)(a2 + 56) = *(_WORD *)(v11 + 116);
    *(_WORD *)(a2 + 58) = *(_WORD *)(v11 + 118);
    *(_BYTE *)(a2 + 64) = *(_BYTE *)(v11 + 44);
    v28 = *(_DWORD *)(v11 + 48);
    v29 = *(_BYTE *)(v11 + 45);
    *(_DWORD *)(a2 + 40) = 0;
    *(_DWORD *)(a2 + 68) = 0;
    *(_BYTE *)(a2 + 63) = ((v28 & 1) != 0 ? 6 : 0) | ((v28 & 0x401000) == 0) | v29 & 0xF0 | ((unsigned __int8)(v28 & 4) >> 1) | ((v28 & 8) != 0 ? 0xA : 0) | (a4 != 0 ? 8 : 0);
    v30 = *(_WORD *)(v11 + 52);
    if ( (v30 & 0x21) != 0 )
    {
      *(_DWORD *)(a2 + 68) = (v30 & 1) != 0;
      if ( (*(_BYTE *)(v11 + 52) & 0x20) != 0 )
        *(_DWORD *)(a2 + 68) |= 0x20u;
    }
    else
    {
      *(_DWORD *)(a2 + 68) = 64;
    }
    if ( (*(_DWORD *)(v11 + 48) & 0x20000000) != 0 )
      *(_DWORD *)(a2 + 68) |= 0x10000u;
    v31 = *(_DWORD *)(v11 + 48);
    if ( v31 < 0 )
    {
      if ( (v31 & 0x4000) != 0 )
        *(_DWORD *)(a2 + 68) |= 0x80000u;
      if ( (*(_DWORD *)(v11 + 48) & 0x4000000) != 0 )
        *(_DWORD *)(a2 + 68) |= 0x20000u;
      else
        *(_DWORD *)(a2 + 68) |= 0x100000u;
    }
    if ( (*(_DWORD *)(v11 + 48) & 0x40000) != 0 )
    {
      v32 = *(_DWORD *)(a2 + 68) | 0x200000;
      *(_DWORD *)(a2 + 68) = v32;
      if ( (*(_DWORD *)(v11 + 48) & 1) != 0 )
        *(_DWORD *)(a2 + 68) = v32 | 0x40000;
    }
    *(_DWORD *)(a2 + 72) = *(__int16 *)(v11 + 56);
    *(_DWORD *)(a2 + 76) = *(__int16 *)(v11 + 60) + *(__int16 *)(v11 + 62);
    *(_DWORD *)(a2 + 80) = *(__int16 *)(v11 + 76);
    *(_BYTE *)(a2 + 4) = *(_BYTE *)(v11 + 108);
    *(_BYTE *)(a2 + 5) = *(_BYTE *)(v11 + 109);
    *(_BYTE *)(a2 + 6) = *(_BYTE *)(v11 + 110);
    *(_BYTE *)(a2 + 7) = *(_BYTE *)(v11 + 111);
    v33 = *(_QWORD *)(*(_QWORD *)a3 + 32LL);
    if ( *(_DWORD *)(v33 + 4) > 4u && (v34 = *(int *)(v33 + 196), (_DWORD)v34) )
    {
      *(_OWORD *)(a2 + 84) = *(_OWORD *)(v34 + v11);
      *(_QWORD *)(a2 + 100) = *(_QWORD *)(v34 + v11 + 16);
    }
    else
    {
      *(_QWORD *)(a2 + 84) = 0LL;
      *(_QWORD *)(a2 + 92) = 0LL;
      *(_QWORD *)(a2 + 100) = 0LL;
    }
    return 1;
  }
  return v13;
}
