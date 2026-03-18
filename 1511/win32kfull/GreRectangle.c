/*
 * XREFs of GreRectangle @ 0x1C00FC0C4
 * Callers:
 *     NtGdiRectangle @ 0x1C00FC010 (NtGdiRectangle.c)
 * Callees:
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C0003E90 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     ??1PATHSTACKOBJ@@QEAA@XZ @ 0x1C0010348 (--1PATHSTACKOBJ@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0010368 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00161E0 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002D98C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0041DE4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0041E08 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C00FC4C8 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     bFToL @ 0x1C0116F84 (bFToL.c)
 *     ?vInit@RECTANGLEPATHOBJ@@QEAAXPEAU_RECTL@@H@Z @ 0x1C0148428 (-vInit@RECTANGLEPATHOBJ@@QEAAXPEAU_RECTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall GreRectangle(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  POINTL *v8; // rcx
  unsigned int v9; // edi
  POINTL v10; // rdx
  int v11; // ebx
  __int64 v12; // rbx
  int v13; // r8d
  LONG x; // r13d
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r8
  LONG v19; // eax
  unsigned int v20; // eax
  int v22; // ecx
  LONG v23; // eax
  int v24; // ecx
  int v25; // ecx
  LONG v26; // eax
  LONG v27; // eax
  LONG left; // ebx
  int v29; // r11d
  int v30; // ecx
  LONG v31; // eax
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  LONG v35; // eax
  int v36; // ecx
  int v37; // ecx
  LONG v38; // eax
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r8
  int v43; // ecx
  __int64 v44; // r8
  __int64 v45; // rcx
  int v46; // eax
  __int64 v47; // r8
  __int64 v48; // rcx
  int v49; // ecx
  __int64 v50; // r8
  __int64 v51; // rcx
  int v52; // ecx
  LONG v53; // eax
  int v54; // ecx
  int v55; // ecx
  LONG v56; // eax
  int v57; // ecx
  __int64 v58; // r8
  __int64 v59; // rcx
  int v60; // eax
  __int64 v61; // r8
  __int64 v62; // rcx
  int v63; // ecx
  __int64 v64; // r8
  __int64 v65; // rcx
  LINEATTRS *v66; // rbx
  POINTL v67; // rax
  ULONG iJoin; // edi
  unsigned int v69; // ecx
  POINTL v70; // rbx
  int v71; // [rsp+30h] [rbp-D0h] BYREF
  struct tagRECT v72; // [rsp+38h] [rbp-C8h] BYREF
  POINTL *v73[2]; // [rsp+48h] [rbp-B8h] BYREF
  LINEATTRS *v74; // [rsp+58h] [rbp-A8h]
  struct _XFORMOBJ v75[2]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v76[2]; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL v77; // [rsp+78h] [rbp-88h] BYREF
  struct _POINTL v78; // [rsp+80h] [rbp-80h] BYREF
  PATHOBJ v79; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v80; // [rsp+C8h] [rbp-38h]
  PATHOBJ ppo; // [rsp+390h] [rbp+290h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v73, a1);
  v8 = v73[0];
  if ( !v73[0] || (v73[0][4].y & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    goto LABEL_3;
  }
  v10 = v73[0][10];
  v9 = 1;
  if ( (*(_DWORD *)(*(_QWORD *)&v10 + 312LL) & 1) != 0 )
  {
    --a2;
    --a4;
  }
  v11 = *(_DWORD *)(*(_QWORD *)&v10 + 8LL);
  v72.left = a2;
  v72.top = a3;
  v72.right = a4;
  v72.bottom = a5;
  if ( (v11 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v73[0], *(_QWORD *)(*(_QWORD *)&v10 + 16LL));
    v8 = v73[0];
  }
  if ( (v11 & 0x2000) != 0 )
    GreDCSelectPen(v8, *(_QWORD *)(*(_QWORD *)&v8[10] + 24LL));
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v75, (struct XDCOBJ *)v73, 0x204u);
  v12 = *(_QWORD *)&v75[0].ulReserved;
  v13 = *(_DWORD *)(*(_QWORD *)&v75[0].ulReserved + 32LL);
  if ( (v13 & 1) == 0 || (x = v73[0][22].x, (x & 1) != 0) )
  {
LABEL_47:
    v66 = (LINEATTRS *)&v73[0][23];
    EBOX::EBOX((EBOX *)v76, (struct DCOBJ *)v73, (struct _RECTL *)&v72, (struct _LINEATTRS *)&v73[0][23], 0);
    if ( v76[0] )
      goto LABEL_22;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v79, (DC **)v73, 1);
    if ( v80 )
    {
      if ( EPATHOBJ::bMoveTo((EPATHOBJ *)&v79, 0LL, &v77)
        && EPATHOBJ::bPolyLineTo((EPATHOBJ *)&v79, 0LL, &v78, 3u)
        && EPATHOBJ::bCloseFigure((EPATHOBJ *)&v79) )
      {
        if ( (v73[0][22].x & 1) == 0 )
        {
          v67 = v73[0][19];
          if ( v76[1] )
          {
            v70 = v73[0][18];
            v73[0][18] = v67;
            v73[0][41].y |= 1u;
            v69 = EPATHOBJ::bStrokeAndOrFill(&v79, v73, 0LL, 0LL, 2u);
            v73[0][18] = v70;
            v73[0][41].y |= 1u;
          }
          else
          {
            iJoin = v66->iJoin;
            if ( (*(_DWORD *)(*(_QWORD *)&v67 + 48LL) & 0x800) != 0 )
              v66->iJoin = 2;
            v69 = EPATHOBJ::bStrokeAndOrFill(&v79, v73, v66, v75, 3u);
            v66->iJoin = iJoin;
          }
          v9 = v69;
        }
        goto LABEL_51;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v9 = 0;
LABEL_51:
    PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)&v79);
    goto LABEL_22;
  }
  if ( (struct PEN *)v73[0][19] != gpPenNull )
  {
    v74 = (LINEATTRS *)&v73[0][23];
    if ( (v73[0][23].x & 1) == 0 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&v73[0][10] + 68LL) == 2 )
      {
        if ( (v13 & 2) != 0 )
        {
          v52 = (*(_DWORD *)(*(_QWORD *)&v75[0].ulReserved + 24LL) + 15) >> 4;
          v72.left = a2 + v52;
          v53 = v52 + a4;
          v54 = *(_DWORD *)(*(_QWORD *)&v75[0].ulReserved + 28LL);
          v72.right = v53;
          v55 = (v54 + 15) >> 4;
          v72.top = v55 + a3;
          v56 = v55 + a5;
        }
        else
        {
          v71 = 0;
          bFToL(gpPenNull, &v71, 0LL);
          v57 = v71;
          v71 &= v58;
          v59 = (unsigned int)((*(_DWORD *)(v12 + 24) + v57 + 15) >> 4);
          v72.left = v59;
          bFToL(v59, &v71, v58);
          v60 = v71;
          v71 &= v61;
          v72.right = (*(_DWORD *)(v12 + 24) + v60 + 15) >> 4;
          bFToL(v62, &v71, v61);
          v63 = v71;
          v71 &= v64;
          v65 = (unsigned int)((*(_DWORD *)(v12 + 28) + v63 + 15) >> 4);
          v72.top = v65;
          bFToL(v65, &v71, v64);
          v56 = (*(_DWORD *)(v12 + 28) + v71 + 15) >> 4;
        }
        v72.bottom = v56;
        ERECTL::vOrder((ERECTL *)&v72);
        left = v72.left;
      }
      else
      {
        if ( (v13 & 2) != 0 )
        {
          v22 = ((*(int *)(*(_QWORD *)&v75[0].ulReserved + 24LL) >> 3) + 1) >> 1;
          v72.left = a2 + v22;
          v23 = v22 + a4;
          v24 = *(int *)(*(_QWORD *)&v75[0].ulReserved + 28LL) >> 3;
          v72.right = v23;
          v25 = (v24 + 1) >> 1;
          v72.top = v25 + a3;
          v26 = v25 + a5;
        }
        else
        {
          v71 = 0;
          bFToL(gpPenNull, &v71, 0LL);
          v43 = *(_DWORD *)(v12 + 24) + v71;
          v71 &= v44;
          v45 = (unsigned int)(((v43 >> 3) + 1) >> 1);
          v72.left = v45;
          bFToL(v45, &v71, v44);
          v46 = *(_DWORD *)(v12 + 24) + v71;
          v71 &= v47;
          v72.right = ((v46 >> 3) + 1) >> 1;
          bFToL(v48, &v71, v47);
          v49 = *(_DWORD *)(v12 + 28) + v71;
          v71 &= v50;
          v51 = (unsigned int)(((v49 >> 3) + 1) >> 1);
          v72.top = v51;
          bFToL(v51, &v71, v50);
          v26 = (((*(_DWORD *)(v12 + 28) + v71) >> 3) + 1) >> 1;
        }
        v72.bottom = v26;
        ERECTL::vOrder((ERECTL *)&v72);
        v27 = v72.bottom - 1;
        left = v72.left;
        --v72.right;
        --v72.bottom;
        if ( v72.left > v72.right || v72.top > v27 )
          goto LABEL_22;
      }
      RECTANGLEPATHOBJ::vInit((RECTANGLEPATHOBJ *)&ppo, (struct _RECTL *)&v72, x & 4);
      if ( (struct BRUSH *)v73[0][18] == gpbrNull )
      {
        if ( (v73[0][4].y & 0x40) != 0 )
        {
          v72.left = a2;
          v72.top = a3;
          v72.right = a4;
          v72.bottom = a5;
          XDCOBJ::vAccumulate((XDCOBJ *)v73, (struct ERECTL *)&v72);
        }
        goto LABEL_32;
      }
      v72.left = left + 1;
      v72.top = v29 + 1;
      if ( IsRectEmptyInl(&v72) || (unsigned int)GreRectBlt((struct DCOBJ *)v73, (struct ERECTL *)&v72) )
      {
LABEL_32:
        v20 = EPATHOBJ::bStrokeAndOrFill(&ppo, v73, v74, 0LL, 1u);
        goto LABEL_21;
      }
LABEL_3:
      v9 = 0;
      goto LABEL_22;
    }
    goto LABEL_47;
  }
  if ( (struct BRUSH *)v73[0][18] != gpbrNull || (v73[0][4].y & 0x40) != 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)&v73[0][10] + 68LL) == 2 )
    {
      if ( (v13 & 2) != 0 )
      {
        v34 = (*(_DWORD *)(*(_QWORD *)&v75[0].ulReserved + 24LL) + 15) >> 4;
        v72.left = a2 + v34;
        v35 = v34 + a4;
        v36 = *(_DWORD *)(*(_QWORD *)&v75[0].ulReserved + 28LL);
        v72.right = v35;
        v37 = (v36 + 15) >> 4;
        v72.top = v37 + a3;
        v38 = v37 + a5;
      }
      else
      {
        v71 = 0;
        bFToL(gpbrNull, &v71, 0LL);
        v72.left = (*(_DWORD *)(v12 + 24) + v71 + 15) >> 4;
        v71 = 0;
        bFToL((unsigned int)v72.left, &v71, v39);
        v72.right = (*(_DWORD *)(v12 + 24) + v71 + 15) >> 4;
        v71 = 0;
        bFToL(v40, &v71, v41);
        v72.top = (*(_DWORD *)(v12 + 28) + v71 + 15) >> 4;
        v71 = 0;
        bFToL((unsigned int)v72.top, &v71, v42);
        v38 = (*(_DWORD *)(v12 + 28) + v71 + 15) >> 4;
      }
      v72.bottom = v38;
      ERECTL::vOrder((ERECTL *)&v72);
    }
    else
    {
      if ( (v13 & 2) != 0 )
      {
        v30 = ((*(int *)(*(_QWORD *)&v75[0].ulReserved + 24LL) >> 3) + 1) >> 1;
        v72.left = a2 + v30;
        v31 = v30 + a4;
        v32 = *(int *)(*(_QWORD *)&v75[0].ulReserved + 28LL) >> 3;
        v72.right = v31;
        v33 = (v32 + 1) >> 1;
        v72.top = v33 + a3;
        v19 = v33 + a5;
      }
      else
      {
        v71 = 0;
        bFToL(gpbrNull, &v71, 0LL);
        v72.left = (((*(_DWORD *)(v12 + 24) + v71) >> 3) + 1) >> 1;
        v71 = 0;
        bFToL((unsigned int)v72.left, &v71, v15);
        v72.right = (((*(_DWORD *)(v12 + 24) + v71) >> 3) + 1) >> 1;
        v71 = 0;
        bFToL(v16, &v71, v17);
        v72.top = (((*(_DWORD *)(v12 + 28) + v71) >> 3) + 1) >> 1;
        v71 = 0;
        bFToL((unsigned int)v72.top, &v71, v18);
        v19 = (((*(_DWORD *)(v12 + 28) + v71) >> 3) + 1) >> 1;
      }
      v72.bottom = v19;
      ERECTL::vOrder((ERECTL *)&v72);
      --v72.right;
      --v72.bottom;
    }
    if ( !IsRectEmptyInl(&v72) )
    {
      v20 = GreRectBlt((struct DCOBJ *)v73, (struct ERECTL *)&v72);
LABEL_21:
      v9 = v20;
    }
  }
LABEL_22:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v73);
  return v9;
}
