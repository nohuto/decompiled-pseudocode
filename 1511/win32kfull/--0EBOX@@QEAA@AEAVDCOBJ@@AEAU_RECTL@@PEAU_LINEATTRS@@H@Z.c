/*
 * XREFs of ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C0003E90
 * Callers:
 *     NtGdiEllipse @ 0x1C0003B50 (NtGdiEllipse.c)
 *     GreRectangle @ 0x1C00FC0C4 (GreRectangle.c)
 *     NtGdiRoundRect @ 0x1C02937B0 (NtGdiRoundRect.c)
 *     NtGdiArcInternal @ 0x1C02A8B20 (NtGdiArcInternal.c)
 * Callees:
 *     ?efHalfDiff@@YA?AVEFLOAT@@JJ@Z @ 0x1C0018C18 (-efHalfDiff@@YA-AVEFLOAT@@JJ@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1C001AA28 (-vAbs@EFLOAT@@QEAAXXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0041DE4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

EBOX *__fastcall EBOX::EBOX(EBOX *this, struct DCOBJ *a2, struct _RECTL *a3, struct _LINEATTRS *a4, int a5)
{
  __int128 v5; // xmm0
  ERECTL *v6; // rdi
  __int64 v10; // rcx
  _DWORD *v11; // r14
  __int64 v12; // r8
  LONG v13; // r11d
  LONG v14; // r12d
  LONG y; // r9d
  LONG x; // r10d
  int v17; // r15d
  __int64 v18; // rcx
  int *v19; // rsi
  int v20; // r11d
  int v21; // r8d
  int v22; // edx
  int v23; // r9d
  int v25; // edx
  int v26; // ecx
  int v27; // eax
  int v28; // edx
  int v29; // eax
  int v30; // ecx
  int v31; // r10d
  LONG v32; // ecx
  LONG v33; // r8d
  LONG v34; // edx
  LONG v35; // r9d
  int v36; // r10d
  int v37; // eax
  int v38; // eax
  int v39; // edi
  int v40; // edi
  int v41; // ecx
  float v42; // xmm2_4
  unsigned int v43; // r11d
  __int64 v44; // r9
  __int64 v45; // r8
  int v46; // r10d
  int v47; // ecx
  int v48; // ecx
  int v49; // edx
  int v50; // eax
  int v51; // edx
  int v52; // eax
  int v53; // ecx
  int v54; // r8d
  float v55; // [rsp+20h] [rbp-40h] BYREF
  float v56; // [rsp+24h] [rbp-3Ch] BYREF
  int v57; // [rsp+28h] [rbp-38h] BYREF
  int v58; // [rsp+2Ch] [rbp-34h]
  int v59; // [rsp+30h] [rbp-30h]
  int v60; // [rsp+34h] [rbp-2Ch]
  _BYTE v61[16]; // [rsp+38h] [rbp-28h] BYREF
  struct _POINTL v62; // [rsp+48h] [rbp-18h] BYREF
  LONG v63; // [rsp+50h] [rbp-10h]
  LONG v64; // [rsp+54h] [rbp-Ch]

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
    v25 = *(_DWORD *)(v10 + 352) & 0x100;
    if ( v25 && (v26 = *(_DWORD *)v6, v27 = *((_DWORD *)this + 18), *(_DWORD *)v6 < v27)
      || !v25 && (v26 = *(_DWORD *)v6, v27 = *((_DWORD *)this + 18), *(_DWORD *)v6 > v27) )
    {
      *(_DWORD *)v6 = v27;
      *((_DWORD *)this + 18) = v26;
    }
    v28 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 352LL) & 0x200;
    if ( v28 && (v29 = *((_DWORD *)this + 17), v30 = *((_DWORD *)this + 19), v29 < v30)
      || !v28 && (v29 = *((_DWORD *)this + 17), v30 = *((_DWORD *)this + 19), v29 > v30) )
    {
      *((_DWORD *)this + 19) = v29;
      *((_DWORD *)this + 17) = v30;
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 176LL) & 4) != 0 )
  {
    v41 = *((_DWORD *)this + 17);
    *((_DWORD *)this + 17) = *((_DWORD *)this + 19);
    *((_DWORD *)this + 19) = v41;
  }
  v62 = *(struct _POINTL *)v6;
  v63 = *((_DWORD *)v6 + 2);
  v64 = *((_DWORD *)v6 + 3);
  v11 = *(_DWORD **)(*(_QWORD *)a2 + 152LL);
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v61, a2, 0x204u);
  v13 = v64;
  v14 = v63;
  y = v62.y;
  x = v62.x;
  if ( (v11[12] & 0x10000) == 0 || (a4->fl & 1) == 0 )
    goto LABEL_8;
  v17 = 1;
  v42 = (float)(v11[38] >> 1);
  if ( (v11[38] & 1) != 0 )
    v42 = v42 + FP_0_5;
  LODWORD(v56) = efHalfDiff((unsigned int)v62.x, (unsigned int)v63, v12, (unsigned int)v62.y);
  LODWORD(v55) = efHalfDiff((unsigned int)v44, v43, v45, v44);
  EFLOAT::vAbs((EFLOAT *)&v56);
  EFLOAT::vAbs((EFLOAT *)&v55);
  if ( v42 > v56 || v42 > v55 )
  {
    *((_DWORD *)this + 1) = 1;
LABEL_8:
    v17 = 0;
  }
  v18 = *(_QWORD *)(*(_QWORD *)a2 + 80LL);
  if ( *(_DWORD *)(v18 + 68) == 2 || v17 || *((_DWORD *)this + 1) || (*(_DWORD *)(v18 + 352) & 0x20) != 0 )
  {
    v19 = (int *)((char *)this + 8);
    *((_DWORD *)this + 3) = y;
    *((_DWORD *)this + 5) = y;
    *((_DWORD *)this + 2) = v14;
    *((_DWORD *)this + 4) = x;
    *((_DWORD *)this + 6) = x;
    *((_DWORD *)this + 7) = v13;
    EXFORMOBJ::bXformRound((EXFORMOBJ *)v61, (struct _POINTL *)this + 1, (struct _POINTFIX *)this + 1, 3uLL);
    if ( a5 )
    {
      if ( v11[40] == 5 )
      {
        v20 = *v19;
        v21 = *((_DWORD *)this + 3);
        v22 = *((_DWORD *)this + 6);
        v23 = *((_DWORD *)this + 7);
        if ( (((unsigned __int8)v23 | (unsigned __int8)(v22 | v21 | *(_BYTE *)v19)) & 0xF) == 0 )
        {
          v46 = -4;
          v47 = -4;
          if ( v20 > v22 )
            v47 = 4;
          *((_DWORD *)this + 4) -= v47;
          *((_DWORD *)this + 6) = v22 - v47;
          if ( v23 > v21 )
            v46 = 4;
          *v19 = v20 + v47;
          *((_DWORD *)this + 5) -= v46;
          *((_DWORD *)this + 3) = v21 - v46;
          *((_DWORD *)this + 7) = v23 + v46;
        }
      }
    }
    if ( v17 )
    {
      v48 = v11[38];
      v49 = v48;
      v50 = *(_DWORD *)v6;
      v60 = v48;
      v59 = v48;
      if ( *((_DWORD *)this + 18) < v50 )
      {
        v49 = -v48;
        v59 = -v48;
      }
      if ( *((_DWORD *)this + 19) < *((_DWORD *)this + 17) )
      {
        v48 = -v48;
        v60 = v48;
      }
      v58 = v48;
      v57 = -v49;
      EXFORMOBJ::bXform((EXFORMOBJ *)v61, (struct _VECTORL *)&v57, (struct _VECTORFX *)&v57, 2uLL);
      v51 = v58 + 1;
      v52 = v60;
      v53 = v59 + 1;
      v54 = (v57 + 1) >> 1;
      *v19 += v54;
      v51 >>= 1;
      *((_DWORD *)this + 3) += v51;
      *((_DWORD *)this + 4) += v53 >> 1;
      *((_DWORD *)this + 5) += (v52 + 1) >> 1;
      *((_DWORD *)this + 6) -= v54;
      *((_DWORD *)this + 7) -= v51;
    }
  }
  else
  {
    EXFORMOBJ::bXformRound((EXFORMOBJ *)v61, &v62, (struct _POINTFIX *)&v62, 2uLL);
    v31 = 16;
    if ( a5 && v11[40] == 5 )
    {
      v32 = v62.y;
      v33 = v64;
      v34 = v62.x;
      v35 = v63;
      if ( (((unsigned __int8)v63 | (unsigned __int8)(LOBYTE(v62.x) | v64 | LOBYTE(v62.y))) & 0xF) == 0 )
      {
        v36 = -4;
        v37 = -4;
        if ( v63 > v62.x )
          v37 = 4;
        v35 = v37 + v63;
        v34 = v62.x - v37;
        if ( v64 > v62.y )
          v36 = 4;
        v32 = v62.y - v36;
        v33 = v36 + v64;
        v31 = 32;
      }
    }
    else
    {
      v33 = v64;
      v35 = v63;
      v32 = v62.y;
      v34 = v62.x;
    }
    v38 = v33 - v32;
    v39 = v35 - v34;
    if ( v35 - v34 < 0 )
      v39 = v34 - v35;
    if ( v39 < v31 )
      goto LABEL_47;
    v40 = v33 - v32;
    if ( v38 < 0 )
      v40 = v32 - v33;
    if ( v40 < v31 )
    {
LABEL_47:
      *(_DWORD *)this = 1;
      return this;
    }
    if ( v35 - v34 <= 0 )
      v34 -= v31;
    else
      v35 -= v31;
    if ( v38 <= 0 )
      v32 -= v31;
    else
      v33 -= v31;
    v19 = (int *)((char *)this + 8);
    *((_DWORD *)this + 3) = v32;
    *((_DWORD *)this + 2) = v35;
    *((_DWORD *)this + 4) = v34;
    *((_DWORD *)this + 5) = v32;
    *((_DWORD *)this + 6) = v34;
    *((_DWORD *)this + 7) = v33;
  }
  *((_QWORD *)this + 6) = *(_QWORD *)v19;
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
