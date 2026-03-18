/*
 * XREFs of ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C00CADB4
 * Callers:
 *     NtGdiEllipse @ 0x1C0003530 (NtGdiEllipse.c)
 *     NtGdiRoundRect @ 0x1C0005000 (NtGdiRoundRect.c)
 *     GreRectangle @ 0x1C00A2BC4 (GreRectangle.c)
 *     NtGdiArcInternal @ 0x1C02A9320 (NtGdiArcInternal.c)
 * Callees:
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1C003280C (-vAbs@EFLOAT@@QEAAXXZ.c)
 *     ?efHalfDiff@@YA?AVEFLOAT@@JJ@Z @ 0x1C00328F8 (-efHalfDiff@@YA-AVEFLOAT@@JJ@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0032CA0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C009DA98 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

EBOX *__fastcall EBOX::EBOX(EBOX *this, struct DCOBJ *a2, struct _RECTL *a3, struct _LINEATTRS *a4, int a5)
{
  __int128 v5; // xmm0
  ERECTL *v6; // rdi
  __int64 v10; // rcx
  _DWORD *v11; // r14
  LONG v12; // r11d
  LONG v13; // r12d
  LONG y; // r9d
  LONG x; // r10d
  int v16; // r15d
  __int64 v17; // rcx
  int *v18; // rsi
  int v19; // r11d
  int v20; // r8d
  int v21; // edx
  int v22; // r9d
  int v24; // edx
  int v25; // ecx
  int v26; // eax
  int v27; // edx
  int v28; // eax
  int v29; // ecx
  int v30; // r10d
  LONG v31; // r8d
  LONG v32; // r9d
  LONG v33; // ecx
  LONG v34; // edx
  int v35; // eax
  int v36; // edi
  int v37; // edi
  int v38; // r10d
  int v39; // eax
  int v40; // ecx
  float v41; // xmm2_4
  int v42; // r9d
  int v43; // r11d
  int v44; // r10d
  int v45; // ecx
  int v46; // ecx
  int v47; // edx
  int v48; // eax
  int v49; // edx
  int v50; // eax
  int v51; // ecx
  int v52; // r8d
  float v53; // [rsp+20h] [rbp-40h] BYREF
  float v54; // [rsp+24h] [rbp-3Ch] BYREF
  int v55; // [rsp+28h] [rbp-38h] BYREF
  int v56; // [rsp+2Ch] [rbp-34h]
  int v57; // [rsp+30h] [rbp-30h]
  int v58; // [rsp+34h] [rbp-2Ch]
  _BYTE v59[16]; // [rsp+38h] [rbp-28h] BYREF
  struct _POINTL v60; // [rsp+48h] [rbp-18h] BYREF
  LONG v61; // [rsp+50h] [rbp-10h]
  LONG v62; // [rsp+54h] [rbp-Ch]

  v5 = (__int128)*a3;
  *(_DWORD *)this = 0;
  v6 = (EBOX *)((char *)this + 64);
  *((_DWORD *)this + 1) = 0;
  *((_OWORD *)this + 4) = v5;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 312LL) & 1) != 0 )
  {
    --*(_DWORD *)v6;
    --*((_DWORD *)this + 18);
  }
  v10 = *(_QWORD *)(*(_QWORD *)a2 + 80LL);
  if ( *(_DWORD *)(v10 + 68) == 2 )
  {
    ERECTL::vOrder(v6);
  }
  else
  {
    v24 = *(_DWORD *)(v10 + 352) & 0x100;
    if ( v24 && (v25 = *(_DWORD *)v6, v26 = *((_DWORD *)this + 18), *(_DWORD *)v6 < v26)
      || !v24 && (v25 = *(_DWORD *)v6, v26 = *((_DWORD *)this + 18), *(_DWORD *)v6 > v26) )
    {
      *(_DWORD *)v6 = v26;
      *((_DWORD *)this + 18) = v25;
    }
    v27 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 352LL) & 0x200;
    if ( v27 && (v28 = *((_DWORD *)this + 17), v29 = *((_DWORD *)this + 19), v28 < v29)
      || !v27 && (v28 = *((_DWORD *)this + 17), v29 = *((_DWORD *)this + 19), v28 > v29) )
    {
      *((_DWORD *)this + 19) = v28;
      *((_DWORD *)this + 17) = v29;
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 176LL) & 4) != 0 )
  {
    v40 = *((_DWORD *)this + 17);
    *((_DWORD *)this + 17) = *((_DWORD *)this + 19);
    *((_DWORD *)this + 19) = v40;
  }
  v60 = *(struct _POINTL *)v6;
  v61 = *((_DWORD *)v6 + 2);
  v62 = *((_DWORD *)v6 + 3);
  v11 = *(_DWORD **)(*(_QWORD *)a2 + 152LL);
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v59, a2, 0x204u);
  v12 = v62;
  v13 = v61;
  y = v60.y;
  x = v60.x;
  if ( (v11[12] & 0x10000) == 0 || (a4->fl & 1) == 0 )
    goto LABEL_8;
  v16 = 1;
  v41 = (float)(v11[38] >> 1);
  if ( (v11[38] & 1) != 0 )
    v41 = v41 + FP_0_5;
  LODWORD(v54) = efHalfDiff(v60.x, v61);
  LODWORD(v53) = efHalfDiff(v42, v43);
  EFLOAT::vAbs((EFLOAT *)&v54);
  EFLOAT::vAbs((EFLOAT *)&v53);
  if ( v41 > v54 || v41 > v53 )
  {
    *((_DWORD *)this + 1) = 1;
LABEL_8:
    v16 = 0;
  }
  v17 = *(_QWORD *)(*(_QWORD *)a2 + 80LL);
  if ( *(_DWORD *)(v17 + 68) == 2 || v16 || *((_DWORD *)this + 1) || (*(_DWORD *)(v17 + 352) & 0x20) != 0 )
  {
    v18 = (int *)((char *)this + 8);
    *((_DWORD *)this + 3) = y;
    *((_DWORD *)this + 5) = y;
    *((_DWORD *)this + 2) = v13;
    *((_DWORD *)this + 4) = x;
    *((_DWORD *)this + 6) = x;
    *((_DWORD *)this + 7) = v12;
    EXFORMOBJ::bXformRound((EXFORMOBJ *)v59, (struct _POINTL *)this + 1, (struct _POINTFIX *)this + 1, 3uLL);
    if ( a5 )
    {
      if ( v11[40] == 5 )
      {
        v19 = *v18;
        v20 = *((_DWORD *)this + 3);
        v21 = *((_DWORD *)this + 6);
        v22 = *((_DWORD *)this + 7);
        if ( (((unsigned __int8)v22 | (unsigned __int8)(v21 | v20 | *(_BYTE *)v18)) & 0xF) == 0 )
        {
          v44 = -4;
          v45 = -4;
          if ( v19 > v21 )
            v45 = 4;
          *((_DWORD *)this + 4) -= v45;
          *((_DWORD *)this + 6) = v21 - v45;
          if ( v22 > v20 )
            v44 = 4;
          *v18 = v19 + v45;
          *((_DWORD *)this + 5) -= v44;
          *((_DWORD *)this + 3) = v20 - v44;
          *((_DWORD *)this + 7) = v22 + v44;
        }
      }
    }
    if ( v16 )
    {
      v46 = v11[38];
      v47 = v46;
      v48 = *(_DWORD *)v6;
      v58 = v46;
      v57 = v46;
      if ( *((_DWORD *)this + 18) < v48 )
      {
        v47 = -v46;
        v57 = -v46;
      }
      if ( *((_DWORD *)this + 19) < *((_DWORD *)this + 17) )
      {
        v46 = -v46;
        v58 = v46;
      }
      v56 = v46;
      v55 = -v47;
      EXFORMOBJ::bXform((EXFORMOBJ *)v59, (struct _VECTORL *)&v55, (struct _VECTORFX *)&v55, 2uLL);
      v49 = v56 + 1;
      v50 = v58;
      v51 = v57 + 1;
      v52 = (v55 + 1) >> 1;
      *v18 += v52;
      v49 >>= 1;
      *((_DWORD *)this + 3) += v49;
      *((_DWORD *)this + 4) += v51 >> 1;
      *((_DWORD *)this + 5) += (v50 + 1) >> 1;
      *((_DWORD *)this + 6) -= v52;
      *((_DWORD *)this + 7) -= v49;
    }
  }
  else
  {
    EXFORMOBJ::bXformRound((EXFORMOBJ *)v59, &v60, (struct _POINTFIX *)&v60, 2uLL);
    v30 = 16;
    if ( a5 && v11[40] == 5 )
    {
      v33 = v60.y;
      v31 = v62;
      v34 = v60.x;
      v32 = v61;
      if ( (((unsigned __int8)v61 | (unsigned __int8)(LOBYTE(v60.x) | v62 | LOBYTE(v60.y))) & 0xF) == 0 )
      {
        v38 = -4;
        v39 = -4;
        if ( v61 > v60.x )
          v39 = 4;
        v32 = v39 + v61;
        v34 = v60.x - v39;
        if ( v62 > v60.y )
          v38 = 4;
        v33 = v60.y - v38;
        v31 = v38 + v62;
        v30 = 32;
      }
    }
    else
    {
      v31 = v62;
      v32 = v61;
      v33 = v60.y;
      v34 = v60.x;
    }
    v35 = v31 - v33;
    v36 = v32 - v34;
    if ( v32 - v34 < 0 )
      v36 = v34 - v32;
    if ( v36 < v30 )
      goto LABEL_58;
    v37 = v31 - v33;
    if ( v35 < 0 )
      v37 = v33 - v31;
    if ( v37 < v30 )
    {
LABEL_58:
      *(_DWORD *)this = 1;
      return this;
    }
    if ( v32 - v34 <= 0 )
      v34 -= v30;
    else
      v32 -= v30;
    if ( v35 <= 0 )
      v33 -= v30;
    else
      v31 -= v30;
    v18 = (int *)((char *)this + 8);
    *((_DWORD *)this + 3) = v33;
    *((_DWORD *)this + 2) = v32;
    *((_DWORD *)this + 4) = v34;
    *((_DWORD *)this + 5) = v33;
    *((_DWORD *)this + 6) = v34;
    *((_DWORD *)this + 7) = v31;
  }
  *((_QWORD *)this + 6) = *(_QWORD *)v18;
  *((_DWORD *)this + 12) -= *((_DWORD *)this + 4);
  *((_DWORD *)this + 13) -= *((_DWORD *)this + 5);
  *((_QWORD *)this + 7) = *((_QWORD *)this + 2);
  *((_DWORD *)this + 14) -= *((_DWORD *)this + 6);
  *((_DWORD *)this + 15) -= *((_DWORD *)this + 7);
  *((_QWORD *)this + 4) = *((_QWORD *)this + 3);
  *((_DWORD *)this + 8) += *((_DWORD *)this + 12);
  *((_DWORD *)this + 9) += *((_DWORD *)this + 13);
  *((_DWORD *)this + 12) = (*((_DWORD *)this + 12) + 1) >> 1;
  *((_DWORD *)this + 13) = (*((_DWORD *)this + 13) + 1) >> 1;
  *((_DWORD *)this + 14) = (*((_DWORD *)this + 14) + 1) >> 1;
  *((_DWORD *)this + 15) = (*((_DWORD *)this + 15) + 1) >> 1;
  *((_QWORD *)this + 5) = *((_QWORD *)this + 3);
  *((_DWORD *)this + 10) += *((_DWORD *)this + 12);
  *((_DWORD *)this + 11) += *((_DWORD *)this + 13);
  *((_DWORD *)this + 10) += *((_DWORD *)this + 14);
  *((_DWORD *)this + 11) += *((_DWORD *)this + 15);
  return this;
}
