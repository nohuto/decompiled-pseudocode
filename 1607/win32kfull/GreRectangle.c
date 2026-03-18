/*
 * XREFs of GreRectangle @ 0x1C000E9CC
 * Callers:
 *     NtGdiRectangle @ 0x1C000E8C0 (NtGdiRectangle.c)
 * Callees:
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C000A694 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C000F1C8 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     ?vInit@RECTANGLEPATHOBJ@@QEAAXPEAU_RECTL@@H@Z @ 0x1C000F434 (-vInit@RECTANGLEPATHOBJ@@QEAAXPEAU_RECTL@@H@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0011870 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0011890 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0014BC0 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     bFToL @ 0x1C0018BF4 (bFToL.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0035534 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00356B4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0039508 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0049304 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall GreRectangle(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // edi
  int v11; // ebx
  __int64 v12; // rbx
  int v13; // r8d
  int v14; // r13d
  int v15; // ecx
  LONG v16; // eax
  int v17; // ecx
  int v18; // ecx
  LONG v19; // eax
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r8
  int v24; // ecx
  LONG v25; // eax
  int v26; // ecx
  int v27; // ecx
  LONG v28; // eax
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r8
  unsigned int v33; // eax
  int v34; // ecx
  LONG v35; // eax
  int v36; // ecx
  int v37; // ecx
  LONG v38; // eax
  int v39; // ecx
  __int64 v40; // r8
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // r8
  __int64 v44; // rcx
  int v45; // ecx
  __int64 v46; // r8
  __int64 v47; // rcx
  LONG v48; // eax
  LONG left; // ebx
  int v50; // ecx
  LONG v51; // eax
  int v52; // ecx
  int v53; // ecx
  LONG v54; // eax
  int v55; // ecx
  __int64 v56; // r8
  __int64 v57; // rcx
  int v58; // eax
  __int64 v59; // r8
  __int64 v60; // rcx
  int v61; // ecx
  __int64 v62; // r8
  __int64 v63; // rcx
  int v64; // r11d
  LINEATTRS *v65; // rbx
  __int64 v66; // rax
  ULONG iJoin; // edi
  unsigned int v68; // ecx
  __int64 v69; // rbx
  int v71; // [rsp+30h] [rbp-D0h] BYREF
  struct _RECTL v72; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v73[2]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v74[32]; // [rsp+58h] [rbp-A8h] BYREF
  LINEATTRS *v75; // [rsp+78h] [rbp-88h]
  struct _XFORMOBJ v76[2]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v77[2]; // [rsp+90h] [rbp-70h] BYREF
  struct _POINTL v78; // [rsp+98h] [rbp-68h] BYREF
  struct _POINTL v79; // [rsp+A0h] [rbp-60h] BYREF
  PATHOBJ v80; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v81; // [rsp+E8h] [rbp-18h]
  PATHOBJ ppo; // [rsp+3B0h] [rbp+2B0h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v73, a1);
  v8 = v73[0];
  if ( !v73[0] || (*(_DWORD *)(v73[0] + 36LL) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
LABEL_61:
    v10 = 0;
    goto LABEL_62;
  }
  v9 = *(_QWORD *)(v73[0] + 80LL);
  v10 = 1;
  if ( (*(_DWORD *)(v9 + 312) & 1) != 0 )
  {
    --a2;
    --a4;
  }
  v11 = *(_DWORD *)(v9 + 8);
  v72.left = a2;
  v72.top = a3;
  v72.right = a4;
  v72.bottom = a5;
  if ( (v11 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v73[0], *(_QWORD *)(v9 + 16));
    v8 = v73[0];
  }
  if ( (v11 & 0x2000) != 0 )
    GreDCSelectPen(v8, *(_QWORD *)(*(_QWORD *)(v8 + 80) + 24LL));
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v76, (struct XDCOBJ *)v73, 0x204u);
  v12 = *(_QWORD *)&v76[0].ulReserved;
  v13 = *(_DWORD *)(*(_QWORD *)&v76[0].ulReserved + 32LL);
  if ( (v13 & 1) == 0 || (v14 = *(_DWORD *)(v73[0] + 176LL), (v14 & 1) != 0) )
  {
LABEL_45:
    v65 = (LINEATTRS *)(v73[0] + 184LL);
    EBOX::EBOX((EBOX *)v77, (struct DCOBJ *)v73, &v72, (struct _LINEATTRS *)(v73[0] + 184LL), 0);
    if ( v77[0] )
      goto LABEL_62;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v80, (struct XDCOBJ *)v73, 1);
    if ( v81 )
    {
      if ( EPATHOBJ::bMoveTo((EPATHOBJ *)&v80, 0LL, &v78)
        && EPATHOBJ::bPolyLineTo((EPATHOBJ *)&v80, 0LL, &v79, 3u)
        && EPATHOBJ::bCloseFigure((EPATHOBJ *)&v80) )
      {
        if ( (*(_DWORD *)(v73[0] + 176LL) & 1) == 0 )
        {
          v66 = *(_QWORD *)(v73[0] + 152LL);
          if ( v77[1] )
          {
            v69 = *(_QWORD *)(v73[0] + 144LL);
            *(_QWORD *)(v73[0] + 144LL) = v66;
            *(_DWORD *)(v73[0] + 332LL) |= 1u;
            v68 = EPATHOBJ::bStrokeAndOrFill(&v80, (struct XDCOBJ *)v73, 0LL, 0LL, 2u);
            *(_QWORD *)(v73[0] + 144LL) = v69;
            *(_DWORD *)(v73[0] + 332LL) |= 1u;
          }
          else
          {
            iJoin = v65->iJoin;
            if ( (*(_DWORD *)(v66 + 48) & 0x800) != 0 )
              v65->iJoin = 2;
            v68 = EPATHOBJ::bStrokeAndOrFill(&v80, (struct XDCOBJ *)v73, v65, v76, 3u);
            v65->iJoin = iJoin;
          }
          v10 = v68;
        }
        goto LABEL_49;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v10 = 0;
LABEL_49:
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&v80);
    goto LABEL_62;
  }
  if ( *(struct PEN **)(v73[0] + 152LL) != gpPenNull )
  {
    v75 = (LINEATTRS *)(v73[0] + 184LL);
    if ( (*(_DWORD *)(v73[0] + 184LL) & 1) == 0 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v73[0] + 80LL) + 68LL) == 2 )
      {
        if ( (v13 & 2) != 0 )
        {
          v50 = (*(_DWORD *)(*(_QWORD *)&v76[0].ulReserved + 24LL) + 15) >> 4;
          v72.left = a2 + v50;
          v51 = v50 + a4;
          v52 = *(_DWORD *)(*(_QWORD *)&v76[0].ulReserved + 28LL);
          v72.right = v51;
          v53 = (v52 + 15) >> 4;
          v72.top = v53 + a3;
          v54 = v53 + a5;
        }
        else
        {
          v71 = 0;
          bFToL(gpPenNull, &v71, 0LL);
          v55 = v71;
          v71 &= v56;
          v57 = (unsigned int)((*(_DWORD *)(v12 + 24) + v55 + 15) >> 4);
          v72.left = v57;
          bFToL(v57, &v71, v56);
          v58 = v71;
          v71 &= v59;
          v72.right = (*(_DWORD *)(v12 + 24) + v58 + 15) >> 4;
          bFToL(v60, &v71, v59);
          v61 = v71;
          v71 &= v62;
          v63 = (unsigned int)((*(_DWORD *)(v12 + 28) + v61 + 15) >> 4);
          v72.top = v63;
          bFToL(v63, &v71, v62);
          v54 = (*(_DWORD *)(v12 + 28) + v71 + 15) >> 4;
        }
        v72.bottom = v54;
        ERECTL::vOrder((ERECTL *)&v72);
        left = v72.left;
      }
      else
      {
        if ( (v13 & 2) != 0 )
        {
          v34 = ((*(int *)(*(_QWORD *)&v76[0].ulReserved + 24LL) >> 3) + 1) >> 1;
          v72.left = a2 + v34;
          v35 = v34 + a4;
          v36 = *(int *)(*(_QWORD *)&v76[0].ulReserved + 28LL) >> 3;
          v72.right = v35;
          v37 = (v36 + 1) >> 1;
          v72.top = v37 + a3;
          v38 = v37 + a5;
        }
        else
        {
          v71 = 0;
          bFToL(gpPenNull, &v71, 0LL);
          v39 = *(_DWORD *)(v12 + 24) + v71;
          v71 &= v40;
          v41 = (unsigned int)(((v39 >> 3) + 1) >> 1);
          v72.left = v41;
          bFToL(v41, &v71, v40);
          v42 = *(_DWORD *)(v12 + 24) + v71;
          v71 &= v43;
          v72.right = ((v42 >> 3) + 1) >> 1;
          bFToL(v44, &v71, v43);
          v45 = *(_DWORD *)(v12 + 28) + v71;
          v71 &= v46;
          v47 = (unsigned int)(((v45 >> 3) + 1) >> 1);
          v72.top = v47;
          bFToL(v47, &v71, v46);
          v38 = (((*(_DWORD *)(v12 + 28) + v71) >> 3) + 1) >> 1;
        }
        v72.bottom = v38;
        ERECTL::vOrder((ERECTL *)&v72);
        v48 = v72.bottom - 1;
        left = v72.left;
        --v72.right;
        --v72.bottom;
        if ( v72.left > v72.right || v72.top > v48 )
          goto LABEL_62;
      }
      RECTANGLEPATHOBJ::vInit((RECTANGLEPATHOBJ *)&ppo, &v72, v14 & 4);
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
      }
      else
      {
        v72.left = left + 1;
        v72.top = v64 + 1;
        if ( !(unsigned int)IsRectEmptyInl((const struct tagRECT *)&v72)
          && !(unsigned int)GreRectBlt((struct DCOBJ *)v73, (struct ERECTL *)&v72) )
        {
          goto LABEL_61;
        }
      }
      v33 = EPATHOBJ::bStrokeAndOrFill(&ppo, (struct XDCOBJ *)v73, v75, 0LL, 1u);
      goto LABEL_44;
    }
    goto LABEL_45;
  }
  if ( *(struct BRUSH **)(v73[0] + 144LL) != gpbrNull || (*(_DWORD *)(v73[0] + 36LL) & 0x40) != 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(v73[0] + 80LL) + 68LL) == 2 )
    {
      if ( (v13 & 2) != 0 )
      {
        v24 = (*(_DWORD *)(*(_QWORD *)&v76[0].ulReserved + 24LL) + 15) >> 4;
        v72.left = a2 + v24;
        v25 = v24 + a4;
        v26 = *(_DWORD *)(*(_QWORD *)&v76[0].ulReserved + 28LL);
        v72.right = v25;
        v27 = (v26 + 15) >> 4;
        v72.top = v27 + a3;
        v28 = v27 + a5;
      }
      else
      {
        v71 = 0;
        bFToL(gpbrNull, &v71, 0LL);
        v72.left = (*(_DWORD *)(v12 + 24) + v71 + 15) >> 4;
        v71 = 0;
        bFToL((unsigned int)v72.left, &v71, v29);
        v72.right = (*(_DWORD *)(v12 + 24) + v71 + 15) >> 4;
        v71 = 0;
        bFToL(v30, &v71, v31);
        v72.top = (*(_DWORD *)(v12 + 28) + v71 + 15) >> 4;
        v71 = 0;
        bFToL((unsigned int)v72.top, &v71, v32);
        v28 = (*(_DWORD *)(v12 + 28) + v71 + 15) >> 4;
      }
      v72.bottom = v28;
      ERECTL::vOrder((ERECTL *)&v72);
    }
    else
    {
      if ( (v13 & 2) != 0 )
      {
        v15 = ((*(int *)(*(_QWORD *)&v76[0].ulReserved + 24LL) >> 3) + 1) >> 1;
        v72.left = a2 + v15;
        v16 = v15 + a4;
        v17 = *(int *)(*(_QWORD *)&v76[0].ulReserved + 28LL) >> 3;
        v72.right = v16;
        v18 = (v17 + 1) >> 1;
        v72.top = v18 + a3;
        v19 = v18 + a5;
      }
      else
      {
        v71 = 0;
        bFToL(gpbrNull, &v71, 0LL);
        v72.left = (((*(_DWORD *)(v12 + 24) + v71) >> 3) + 1) >> 1;
        v71 = 0;
        bFToL((unsigned int)v72.left, &v71, v20);
        v72.right = (((*(_DWORD *)(v12 + 24) + v71) >> 3) + 1) >> 1;
        v71 = 0;
        bFToL(v21, &v71, v22);
        v72.top = (((*(_DWORD *)(v12 + 28) + v71) >> 3) + 1) >> 1;
        v71 = 0;
        bFToL((unsigned int)v72.top, &v71, v23);
        v19 = (((*(_DWORD *)(v12 + 28) + v71) >> 3) + 1) >> 1;
      }
      v72.bottom = v19;
      ERECTL::vOrder((ERECTL *)&v72);
      --v72.right;
      --v72.bottom;
    }
    if ( !(unsigned int)IsRectEmptyInl((const struct tagRECT *)&v72) )
    {
      v33 = GreRectBlt((struct DCOBJ *)v73, (struct ERECTL *)&v72);
LABEL_44:
      v10 = v33;
    }
  }
LABEL_62:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v73);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v74);
  return v10;
}
