/*
 * XREFs of ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C000A694
 * Callers:
 *     GreRectangle @ 0x1C000E9CC (GreRectangle.c)
 *     NtGdiEllipse @ 0x1C0292B20 (NtGdiEllipse.c)
 *     NtGdiRoundRect @ 0x1C0292D40 (NtGdiRoundRect.c)
 *     NtGdiArcInternal @ 0x1C02AA770 (NtGdiArcInternal.c)
 * Callees:
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1C00143BC (-vAbs@EFLOAT@@QEAAXXZ.c)
 *     ?efHalfDiff@@YA?AVEFLOAT@@JJ@Z @ 0x1C0014404 (-efHalfDiff@@YA-AVEFLOAT@@JJ@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00356B4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0039508 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

EBOX *__fastcall EBOX::EBOX(EBOX *this, struct DCOBJ *a2, struct _RECTL *a3, struct _LINEATTRS *a4, int a5)
{
  __int128 v5; // xmm0
  ERECTL *v6; // rdi
  __int64 v10; // rcx
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  _DWORD *v17; // r14
  __int64 v18; // r8
  LONG v19; // r11d
  LONG v20; // r12d
  LONG y; // r9d
  LONG x; // r10d
  int v23; // r15d
  __int64 v24; // rcx
  signed int v25; // r11d
  LONG v26; // r9d
  LONG v27; // r10d
  LONG v28; // ecx
  LONG v29; // r8d
  int v30; // edi
  int *v31; // rsi
  int v33; // ecx
  float v34; // xmm2_4
  unsigned int v35; // r11d
  __int64 v36; // r9
  __int64 v37; // r8
  int v38; // edx
  int v39; // eax
  int v40; // r11d
  int v41; // r9d
  int v42; // r8d
  int v43; // r10d
  int v44; // edx
  int v45; // ecx
  int v46; // ecx
  int v47; // edx
  int v48; // eax
  int v49; // edx
  int v50; // eax
  int v51; // ecx
  int v52; // r8d
  float v53; // [rsp+30h] [rbp-40h] BYREF
  float v54; // [rsp+34h] [rbp-3Ch] BYREF
  int v55; // [rsp+38h] [rbp-38h] BYREF
  int v56; // [rsp+3Ch] [rbp-34h]
  int v57; // [rsp+40h] [rbp-30h]
  int v58; // [rsp+44h] [rbp-2Ch]
  _BYTE v59[16]; // [rsp+48h] [rbp-28h] BYREF
  struct _POINTL v60; // [rsp+58h] [rbp-18h] BYREF
  LONG v61; // [rsp+60h] [rbp-10h]
  LONG v62; // [rsp+64h] [rbp-Ch]

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
    v11 = *(_DWORD *)(v10 + 352) & 0x100;
    if ( v11 && (v12 = *(_DWORD *)v6, v13 = *((_DWORD *)this + 18), *(_DWORD *)v6 < v13)
      || !v11 && (v12 = *(_DWORD *)v6, v13 = *((_DWORD *)this + 18), *(_DWORD *)v6 > v13) )
    {
      *(_DWORD *)v6 = v13;
      *((_DWORD *)this + 18) = v12;
    }
    v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 352LL) & 0x200;
    if ( v14 && (v15 = *((_DWORD *)this + 17), v16 = *((_DWORD *)this + 19), v15 < v16)
      || !v14 && (v15 = *((_DWORD *)this + 17), v16 = *((_DWORD *)this + 19), v15 > v16) )
    {
      *((_DWORD *)this + 19) = v15;
      *((_DWORD *)this + 17) = v16;
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 176LL) & 4) != 0 )
  {
    v33 = *((_DWORD *)this + 17);
    *((_DWORD *)this + 17) = *((_DWORD *)this + 19);
    *((_DWORD *)this + 19) = v33;
  }
  v60 = *(struct _POINTL *)v6;
  v61 = *((_DWORD *)v6 + 2);
  v62 = *((_DWORD *)v6 + 3);
  v17 = *(_DWORD **)(*(_QWORD *)a2 + 152LL);
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v59, a2, 0x204u);
  v19 = v62;
  v20 = v61;
  y = v60.y;
  x = v60.x;
  if ( (v17[12] & 0x10000) == 0 || (a4->fl & 1) == 0 )
    goto LABEL_13;
  v23 = 1;
  v34 = (float)(v17[38] >> 1);
  if ( (v17[38] & 1) != 0 )
    v34 = v34 + FP_0_5;
  LODWORD(v53) = efHalfDiff((unsigned int)v60.x, (unsigned int)v61, v18, (unsigned int)v60.y);
  LODWORD(v54) = efHalfDiff((unsigned int)v36, v35, v37, v36);
  EFLOAT::vAbs((EFLOAT *)&v53);
  EFLOAT::vAbs((EFLOAT *)&v54);
  if ( v34 > v53 || v34 > v54 )
  {
    *((_DWORD *)this + 1) = 1;
LABEL_13:
    v23 = 0;
  }
  v24 = *(_QWORD *)(*(_QWORD *)a2 + 80LL);
  if ( *(_DWORD *)(v24 + 68) == 2 || v23 || *((_DWORD *)this + 1) || (*(_DWORD *)(v24 + 352) & 0x20) != 0 )
  {
    v31 = (int *)((char *)this + 8);
    *((_DWORD *)this + 3) = y;
    *((_DWORD *)this + 5) = y;
    *((_DWORD *)this + 2) = v20;
    *((_DWORD *)this + 4) = x;
    *((_DWORD *)this + 6) = x;
    *((_DWORD *)this + 7) = v19;
    EXFORMOBJ::bXformRound((EXFORMOBJ *)v59, (struct _POINTL *)this + 1, (struct _POINTFIX *)this + 1, 3uLL);
    if ( a5 )
    {
      if ( v17[40] == 5 )
      {
        v40 = *v31;
        v41 = *((_DWORD *)this + 3);
        v42 = *((_DWORD *)this + 6);
        v43 = *((_DWORD *)this + 7);
        if ( (((unsigned __int8)v43 | (unsigned __int8)(v42 | v41 | *(_BYTE *)v31)) & 0xF) == 0 )
        {
          v44 = -4;
          v45 = -4;
          if ( v40 > v42 )
            v45 = 4;
          *((_DWORD *)this + 4) -= v45;
          *((_DWORD *)this + 6) = v42 - v45;
          if ( v43 > v41 )
            v44 = 4;
          *v31 = v40 + v45;
          *((_DWORD *)this + 5) -= v44;
          *((_DWORD *)this + 3) = v41 - v44;
          *((_DWORD *)this + 7) = v43 + v44;
        }
      }
    }
    if ( v23 )
    {
      v46 = v17[38];
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
      EXFORMOBJ::bXform((EXFORMOBJ *)v59, (struct _VECTORL *)&v55, (struct _VECTORFX *)&v55, 2uLL, 0);
      v49 = v56 + 1;
      v50 = v58;
      v51 = v57 + 1;
      v52 = (v55 + 1) >> 1;
      *v31 += v52;
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
    v25 = 16;
    if ( a5 && v17[40] == 5 )
    {
      v28 = v60.y;
      v26 = v62;
      v29 = v60.x;
      v27 = v61;
      if ( (((unsigned __int8)v61 | (unsigned __int8)(LOBYTE(v60.x) | v62 | LOBYTE(v60.y))) & 0xF) == 0 )
      {
        v38 = -4;
        v39 = -4;
        if ( v61 > v60.x )
          v39 = 4;
        v25 = 32;
        v27 = v39 + v61;
        v29 = v60.x - v39;
        if ( v62 > v60.y )
          v38 = 4;
        v28 = v60.y - v38;
        v26 = v38 + v62;
      }
    }
    else
    {
      v26 = v62;
      v27 = v61;
      v28 = v60.y;
      v29 = v60.x;
    }
    v30 = v26 - v28;
    if ( (int)abs32(v27 - v29) < v25 || (int)abs32(v30) < v25 )
    {
      *(_DWORD *)this = 1;
      return this;
    }
    if ( v27 - v29 <= 0 )
      v29 -= v25;
    else
      v27 -= v25;
    if ( v30 <= 0 )
      v28 -= v25;
    else
      v26 -= v25;
    v31 = (int *)((char *)this + 8);
    *((_DWORD *)this + 3) = v28;
    *((_DWORD *)this + 2) = v27;
    *((_DWORD *)this + 4) = v29;
    *((_DWORD *)this + 5) = v28;
    *((_DWORD *)this + 6) = v29;
    *((_DWORD *)this + 7) = v26;
  }
  *((_QWORD *)this + 6) = *(_QWORD *)v31;
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
