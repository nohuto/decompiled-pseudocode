/*
 * XREFs of GreRectangle @ 0x1C00A2BC4
 * Callers:
 *     NtGdiRectangle @ 0x1C00A2B10 (NtGdiRectangle.c)
 * Callees:
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0019E40 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0032CA0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00918C4 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C009DA98 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C00A289C (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     bFToL @ 0x1C00A95A4 (bFToL.c)
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C00CADB4 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00CB118 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C00CB138 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00CC880 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?vInit@RECTANGLEPATHOBJ@@QEAAXPEAU_RECTL@@H@Z @ 0x1C011E350 (-vInit@RECTANGLEPATHOBJ@@QEAAXPEAU_RECTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreRectangle(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v12; // rbx
  int v13; // r8d
  int v14; // r13d
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
  LINEATTRS *v34; // rbx
  __int64 v35; // rax
  ULONG iJoin; // edi
  unsigned int v37; // ecx
  int v38; // ecx
  LONG v39; // eax
  int v40; // ecx
  int v41; // ecx
  LONG v42; // eax
  __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r8
  int v47; // ecx
  __int64 v48; // r8
  __int64 v49; // rcx
  int v50; // eax
  __int64 v51; // r8
  __int64 v52; // rcx
  int v53; // ecx
  __int64 v54; // r8
  __int64 v55; // rcx
  int v56; // ecx
  LONG v57; // eax
  int v58; // ecx
  int v59; // ecx
  LONG v60; // eax
  int v61; // ecx
  __int64 v62; // r8
  __int64 v63; // rcx
  int v64; // eax
  __int64 v65; // r8
  __int64 v66; // rcx
  int v67; // ecx
  __int64 v68; // r8
  __int64 v69; // rcx
  __int64 v70; // rbx
  int v71; // [rsp+30h] [rbp-D0h] BYREF
  struct tagRECT v72; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v73[6]; // [rsp+48h] [rbp-B8h] BYREF
  LINEATTRS *v74; // [rsp+78h] [rbp-88h]
  struct _XFORMOBJ v75[2]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v76[2]; // [rsp+90h] [rbp-70h] BYREF
  struct _POINTL v77; // [rsp+98h] [rbp-68h] BYREF
  struct _POINTL v78; // [rsp+A0h] [rbp-60h] BYREF
  PATHOBJ v79; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v80; // [rsp+E8h] [rbp-18h]
  PATHOBJ ppo; // [rsp+3B0h] [rbp+2B0h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v73, a1);
  v8 = v73[0];
  if ( !v73[0] || (*(_DWORD *)(v73[0] + 36LL) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    goto LABEL_3;
  }
  v10 = *(_QWORD *)(v73[0] + 80LL);
  v9 = 1;
  if ( (*(_DWORD *)(v10 + 312) & 1) != 0 )
  {
    --a2;
    --a4;
  }
  v11 = *(_DWORD *)(v10 + 8);
  v72.left = a2;
  v72.top = a3;
  v72.right = a4;
  v72.bottom = a5;
  if ( (v11 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v73[0], *(_QWORD *)(v10 + 16));
    v8 = v73[0];
  }
  if ( (v11 & 0x2000) != 0 )
    GreDCSelectPen(v8, *(_QWORD *)(*(_QWORD *)(v8 + 80) + 24LL));
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v75, (struct XDCOBJ *)v73, 0x204u);
  v12 = *(_QWORD *)&v75[0].ulReserved;
  v13 = *(_DWORD *)(*(_QWORD *)&v75[0].ulReserved + 32LL);
  if ( (v13 & 1) == 0 || (v14 = *(_DWORD *)(v73[0] + 176LL), (v14 & 1) != 0) )
  {
LABEL_38:
    v34 = (LINEATTRS *)(v73[0] + 184LL);
    EBOX::EBOX((EBOX *)v76, (struct DCOBJ *)v73, (struct _RECTL *)&v72, (struct _LINEATTRS *)(v73[0] + 184LL), 0);
    if ( v76[0] )
      goto LABEL_22;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v79, (struct XDCOBJ *)v73, 1);
    if ( v80 )
    {
      if ( EPATHOBJ::bMoveTo((EPATHOBJ *)&v79, 0LL, &v77)
        && EPATHOBJ::bPolyLineTo((EPATHOBJ *)&v79, 0LL, &v78, 3u)
        && EPATHOBJ::bCloseFigure((EPATHOBJ *)&v79) )
      {
        if ( (*(_DWORD *)(v73[0] + 176LL) & 1) == 0 )
        {
          v35 = *(_QWORD *)(v73[0] + 152LL);
          if ( v76[1] )
          {
            v70 = *(_QWORD *)(v73[0] + 144LL);
            *(_QWORD *)(v73[0] + 144LL) = v35;
            *(_DWORD *)(v73[0] + 332LL) |= 1u;
            v37 = EPATHOBJ::bStrokeAndOrFill(&v79, (struct XDCOBJ *)v73, 0LL, 0LL, 2u);
            *(_QWORD *)(v73[0] + 144LL) = v70;
            *(_DWORD *)(v73[0] + 332LL) |= 1u;
          }
          else
          {
            iJoin = v34->iJoin;
            if ( (*(_DWORD *)(v35 + 48) & 0x800) != 0 )
              v34->iJoin = 2;
            v37 = EPATHOBJ::bStrokeAndOrFill(&v79, (struct XDCOBJ *)v73, v34, v75, 3u);
            v34->iJoin = iJoin;
          }
          v9 = v37;
        }
        goto LABEL_49;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v9 = 0;
LABEL_49:
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&v79);
    goto LABEL_22;
  }
  if ( *(struct PEN **)(v73[0] + 152LL) != gpPenNull )
  {
    v74 = (LINEATTRS *)(v73[0] + 184LL);
    if ( (*(_DWORD *)(v73[0] + 184LL) & 1) == 0 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v73[0] + 80LL) + 68LL) == 2 )
      {
        if ( (v13 & 2) != 0 )
        {
          v56 = (*(_DWORD *)(*(_QWORD *)&v75[0].ulReserved + 24LL) + 15) >> 4;
          v72.left = a2 + v56;
          v57 = v56 + a4;
          v58 = *(_DWORD *)(*(_QWORD *)&v75[0].ulReserved + 28LL);
          v72.right = v57;
          v59 = (v58 + 15) >> 4;
          v72.top = v59 + a3;
          v60 = v59 + a5;
        }
        else
        {
          v71 = 0;
          bFToL(gpPenNull, &v71, 0LL);
          v61 = v71;
          v71 &= v62;
          v63 = (unsigned int)((*(_DWORD *)(v12 + 24) + v61 + 15) >> 4);
          v72.left = v63;
          bFToL(v63, &v71, v62);
          v64 = v71;
          v71 &= v65;
          v72.right = (*(_DWORD *)(v12 + 24) + v64 + 15) >> 4;
          bFToL(v66, &v71, v65);
          v67 = v71;
          v71 &= v68;
          v69 = (unsigned int)((*(_DWORD *)(v12 + 28) + v67 + 15) >> 4);
          v72.top = v69;
          bFToL(v69, &v71, v68);
          v60 = (*(_DWORD *)(v12 + 28) + v71 + 15) >> 4;
        }
        v72.bottom = v60;
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
          v47 = *(_DWORD *)(v12 + 24) + v71;
          v71 &= v48;
          v49 = (unsigned int)(((v47 >> 3) + 1) >> 1);
          v72.left = v49;
          bFToL(v49, &v71, v48);
          v50 = *(_DWORD *)(v12 + 24) + v71;
          v71 &= v51;
          v72.right = ((v50 >> 3) + 1) >> 1;
          bFToL(v52, &v71, v51);
          v53 = *(_DWORD *)(v12 + 28) + v71;
          v71 &= v54;
          v55 = (unsigned int)(((v53 >> 3) + 1) >> 1);
          v72.top = v55;
          bFToL(v55, &v71, v54);
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
      RECTANGLEPATHOBJ::vInit((RECTANGLEPATHOBJ *)&ppo, (struct _RECTL *)&v72, v14 & 4);
      if ( *(struct BRUSH **)(v73[0] + 144LL) == gpbrNull )
      {
        if ( (*(_DWORD *)(v73[0] + 36LL) & 0x40) != 0 )
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
        v20 = EPATHOBJ::bStrokeAndOrFill(&ppo, (struct XDCOBJ *)v73, v74, 0LL, 1u);
        goto LABEL_21;
      }
LABEL_3:
      v9 = 0;
      goto LABEL_22;
    }
    goto LABEL_38;
  }
  if ( *(struct BRUSH **)(v73[0] + 144LL) != gpbrNull || (*(_DWORD *)(v73[0] + 36LL) & 0x40) != 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(v73[0] + 80LL) + 68LL) == 2 )
    {
      if ( (v13 & 2) != 0 )
      {
        v38 = (*(_DWORD *)(*(_QWORD *)&v75[0].ulReserved + 24LL) + 15) >> 4;
        v72.left = a2 + v38;
        v39 = v38 + a4;
        v40 = *(_DWORD *)(*(_QWORD *)&v75[0].ulReserved + 28LL);
        v72.right = v39;
        v41 = (v40 + 15) >> 4;
        v72.top = v41 + a3;
        v42 = v41 + a5;
      }
      else
      {
        v71 = 0;
        bFToL(gpbrNull, &v71, 0LL);
        v72.left = (*(_DWORD *)(v12 + 24) + v71 + 15) >> 4;
        v71 = 0;
        bFToL((unsigned int)v72.left, &v71, v43);
        v72.right = (*(_DWORD *)(v12 + 24) + v71 + 15) >> 4;
        v71 = 0;
        bFToL(v44, &v71, v45);
        v72.top = (*(_DWORD *)(v12 + 28) + v71 + 15) >> 4;
        v71 = 0;
        bFToL((unsigned int)v72.top, &v71, v46);
        v42 = (*(_DWORD *)(v12 + 28) + v71 + 15) >> 4;
      }
      v72.bottom = v42;
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
  DCOBJ::~DCOBJ((DCOBJ *)v73);
  return v9;
}
