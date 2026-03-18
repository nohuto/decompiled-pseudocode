/*
 * XREFs of ?bIFIMetricsToTextMetricW2@@YAHAEAVDCOBJ@@PEAU_NTMW_INTERNAL@@AEAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z @ 0x1C001D334
 * Callers:
 *     cjCopyFontDataW @ 0x1C001BCD8 (cjCopyFontDataW.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?fwdExternalLeading@IFIOBJ@@QEAAFXZ @ 0x1C001D7D4 (-fwdExternalLeading@IFIOBJ@@QEAAFXZ.c)
 *     bFToL @ 0x1C0116F84 (bFToL.c)
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
  BOOL v12; // r9d
  unsigned int v13; // esi
  __int64 v14; // rcx
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // r8
  __int16 v20; // ax
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  struct XDCOBJ *v26; // r11
  int v27; // eax
  int v28; // ecx
  int v29; // edx
  char v30; // r9
  __int16 v31; // cx
  int v32; // eax
  int v33; // ecx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rcx
  __int64 v47; // r8
  _DWORD v48[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v49[2]; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v50[3]; // [rsp+38h] [rbp-18h] BYREF
  int v51; // [rsp+88h] [rbp+38h] BYREF
  int v52; // [rsp+90h] [rbp+40h] BYREF

  v11 = *(_QWORD *)(*(_QWORD *)a3 + 32LL);
  v49[0] = v11;
  v12 = *(_WORD *)(v11 + 56) != 0;
  v13 = 0;
  v14 = v12 & (unsigned int)-(*(__int16 *)(v11 + 60) + *(__int16 *)(v11 + 62) != 0);
  if ( *(__int16 *)(v11 + 60) + *(__int16 *)(v11 + 62) != 0 && v12 )
  {
    if ( (*(_DWORD *)(v11 + 48) & 0x3000010) != 0 )
    {
      a5 = 0;
      bFToL(v14, &a5, 0LL);
      v15 = a5;
      *(_DWORD *)(a2 + 8) = a5;
      a5 = 0;
      a6 = (float)v15;
      v16 = (unsigned int)(*(__int16 *)(v11 + 60) + *(__int16 *)(v11 + 62));
      a6 = (float)v15 / (float)(*(__int16 *)(v11 + 60) + *(__int16 *)(v11 + 62));
      bFToL(v16, &a5, v17);
      *(_DWORD *)(a2 + 12) = a5;
      a5 = 0;
      bFToL(v18, &a5, v19);
      *(_DWORD *)(a2 + 20) = a5;
      a5 = 0;
      v20 = IFIOBJ::fwdExternalLeading((IFIOBJ *)v49);
      bFToL((unsigned int)v20, &a5, v21);
      *(_DWORD *)(a2 + 24) = a5;
      a5 = 0;
      bFToL(v22, &a5, v23);
      *(_DWORD *)(a2 + 28) = a5;
      a5 = 0;
      bFToL(v24, &a5, v25);
      v27 = a5;
    }
    else
    {
      *(_DWORD *)(a2 + 8) = *(__int16 *)(v11 + 60) + *(__int16 *)(v11 + 62);
      *(_DWORD *)(a2 + 12) = *(__int16 *)(v11 + 60);
      *(_DWORD *)(a2 + 20) = (__int16)(*(_WORD *)(v11 + 60) + *(_WORD *)(v11 + 62) - *(_WORD *)(v11 + 56));
      *(_DWORD *)(a2 + 24) = IFIOBJ::fwdExternalLeading((IFIOBJ *)v49);
      *(_DWORD *)(a2 + 28) = *(__int16 *)(v11 + 76);
      v27 = *(__int16 *)(v11 + 78);
    }
    *(_DWORD *)(a2 + 32) = v27;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v50, v26, 0x402u);
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
        a5 = 0;
        bFToL(v37, &a5, 0LL);
        *(_DWORD *)(a2 + 8) = a5;
        a5 = 0;
        bFToL(v38, &a5, v39);
        *(_DWORD *)(a2 + 12) = a5;
        a5 = 0;
        bFToL(v40, &a5, v41);
        *(_DWORD *)(a2 + 28) = a5;
        a5 = 0;
        bFToL(v42, &a5, v43);
        *(_DWORD *)(a2 + 32) = a5;
        a5 = 0;
        bFToL(v44, &a5, v45);
        *(_DWORD *)(a2 + 20) = a5;
        a5 = 0;
        bFToL(v46, &a5, v47);
        *(_DWORD *)(a2 + 24) = a5;
      }
      v28 = *(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 12);
      *(_DWORD *)(a2 + 44) = a7;
      *(_DWORD *)(a2 + 48) = a8;
      *(_DWORD *)(a2 + 16) = v28;
      *(_DWORD *)(a2 + 36) = *(unsigned __int16 *)(v11 + 46);
      *(_BYTE *)(a2 + 60) = -((*(_BYTE *)(v11 + 52) & 1) != 0);
      *(_BYTE *)(a2 + 61) = *(_BYTE *)(v11 + 52) & 2;
      *(_BYTE *)(a2 + 62) = *(_BYTE *)(v11 + 52) & 0x10;
      *(_WORD *)(a2 + 52) = *(_WORD *)(v11 + 112);
      *(_WORD *)(a2 + 54) = *(_WORD *)(v11 + 114);
      *(_WORD *)(a2 + 56) = *(_WORD *)(v11 + 116);
      *(_WORD *)(a2 + 58) = *(_WORD *)(v11 + 118);
      *(_BYTE *)(a2 + 64) = *(_BYTE *)(v11 + 44);
      v29 = *(_DWORD *)(v11 + 48);
      v30 = *(_BYTE *)(v11 + 45);
      *(_DWORD *)(a2 + 40) = 0;
      *(_DWORD *)(a2 + 68) = 0;
      *(_BYTE *)(a2 + 63) = ((v29 & 1) != 0 ? 6 : 0) | ((v29 & 0x401000) == 0) | v30 & 0xF0 | ((unsigned __int8)(v29 & 4) >> 1) | ((v29 & 8) != 0 ? 0xA : 0) | (a4 != 0 ? 8 : 0);
      v31 = *(_WORD *)(v11 + 52);
      if ( (v31 & 0x21) != 0 )
      {
        *(_DWORD *)(a2 + 68) = (v31 & 1) != 0;
        if ( (*(_BYTE *)(v11 + 52) & 0x20) != 0 )
          *(_DWORD *)(a2 + 68) |= 0x20u;
      }
      else
      {
        *(_DWORD *)(a2 + 68) = 64;
      }
      if ( (*(_DWORD *)(v11 + 48) & 0x20000000) != 0 )
        *(_DWORD *)(a2 + 68) |= 0x10000u;
      v32 = *(_DWORD *)(v11 + 48);
      if ( v32 < 0 )
      {
        if ( (v32 & 0x4000) != 0 )
          *(_DWORD *)(a2 + 68) |= 0x80000u;
        if ( (*(_DWORD *)(v11 + 48) & 0x4000000) != 0 )
          *(_DWORD *)(a2 + 68) |= 0x20000u;
        else
          *(_DWORD *)(a2 + 68) |= 0x100000u;
      }
      if ( (*(_DWORD *)(v11 + 48) & 0x40000) != 0 )
      {
        v33 = *(_DWORD *)(a2 + 68) | 0x200000;
        *(_DWORD *)(a2 + 68) = v33;
        if ( (*(_DWORD *)(v11 + 48) & 1) != 0 )
          *(_DWORD *)(a2 + 68) = v33 | 0x40000;
      }
      *(_DWORD *)(a2 + 72) = *(__int16 *)(v11 + 56);
      *(_DWORD *)(a2 + 76) = *(__int16 *)(v11 + 60) + *(__int16 *)(v11 + 62);
      *(_DWORD *)(a2 + 80) = *(__int16 *)(v11 + 76);
      *(_BYTE *)(a2 + 4) = *(_BYTE *)(v11 + 108);
      *(_BYTE *)(a2 + 5) = *(_BYTE *)(v11 + 109);
      *(_BYTE *)(a2 + 6) = *(_BYTE *)(v11 + 110);
      *(_BYTE *)(a2 + 7) = *(_BYTE *)(v11 + 111);
      v34 = *(_QWORD *)(*(_QWORD *)a3 + 32LL);
      if ( *(_DWORD *)(v34 + 4) > 4u && (v35 = *(int *)(v34 + 196), (_DWORD)v35) )
      {
        *(_OWORD *)(a2 + 84) = *(_OWORD *)(v35 + v11);
        *(_QWORD *)(a2 + 100) = *(_QWORD *)(v35 + v11 + 16);
      }
      else
      {
        *(_QWORD *)(a2 + 84) = 0LL;
        *(_QWORD *)(a2 + 92) = 0LL;
        *(_QWORD *)(a2 + 100) = 0LL;
      }
      return 1;
    }
  }
  return v13;
}
