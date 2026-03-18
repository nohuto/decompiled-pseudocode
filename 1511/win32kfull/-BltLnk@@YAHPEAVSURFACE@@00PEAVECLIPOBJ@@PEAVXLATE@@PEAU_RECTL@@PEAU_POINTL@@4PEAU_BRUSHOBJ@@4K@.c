/*
 * XREFs of ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C003A730
 * Callers:
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1C00387E0 (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 *     EngBitBlt @ 0x1C0038EE0 (EngBitBlt.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C002DDC0 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002DFB8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1C003AE10 (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 *     EngCopyBits @ 0x1C00BC250 (EngCopyBits.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00DFB54 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C00E6FE0 (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall BltLnk(
        struct SURFACE *a1,
        struct SURFACE *a2,
        struct SURFACE *a3,
        struct ECLIPOBJ *a4,
        XLATEOBJ *a5,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  struct _RECTL *v11; // rsi
  struct _POINTL *v13; // r11
  struct SURFACE *v14; // r10
  XLATEOBJ *v15; // rdi
  struct _BRUSHOBJ *v17; // rbx
  struct SURFACE *v18; // r9
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  struct _RECTL v25; // xmm0
  unsigned __int8 v26; // r15
  unsigned int v27; // edi
  BOOL v28; // r8d
  int v29; // ecx
  int v30; // r14d
  int v31; // edx
  LONG x; // r11d
  LONG y; // r8d
  int v34; // eax
  BOOL v35; // r8d
  void *v36; // r11
  struct _POINTL *v37; // rdx
  XCLIPOBJ *v38; // r10
  struct _RECTL v39; // xmm0
  LONG v40; // r14d
  unsigned int v41; // r13d
  BOOL v42; // r14d
  struct _RECTL *v43; // rbx
  LONG right; // eax
  LONG v45; // eax
  LONG bottom; // eax
  BOOL v47; // esi
  BOOL v48; // r13d
  LONG v49; // r15d
  LONG v50; // r12d
  LONG left; // ecx
  struct _BRUSHOBJ *EngRbrush; // rax
  unsigned int v54; // ecx
  int v55; // r9d
  int v56; // r8d
  int v57; // r10d
  int v58; // eax
  int iSolidColor; // ecx
  LONG top; // r10d
  int v61; // ecx
  PVOID pvRbrush; // rax
  int v63; // ecx
  unsigned int v64; // r9d
  int v65; // r10d
  signed int v66; // r8d
  int flColorType; // r11d
  int v68; // eax
  unsigned __int8 v69; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v70; // [rsp+61h] [rbp-9Fh]
  unsigned __int8 v71; // [rsp+62h] [rbp-9Eh]
  int v72; // [rsp+64h] [rbp-9Ch]
  POINTL pptlSrc; // [rsp+70h] [rbp-90h] BYREF
  BOOL v74; // [rsp+78h] [rbp-88h]
  unsigned int v75; // [rsp+7Ch] [rbp-84h]
  BOOL v76; // [rsp+80h] [rbp-80h]
  BOOL v77; // [rsp+84h] [rbp-7Ch]
  BOOL v78; // [rsp+88h] [rbp-78h]
  struct _POINTL *v79; // [rsp+90h] [rbp-70h]
  struct SURFACE *v80; // [rsp+98h] [rbp-68h]
  BOOL v81; // [rsp+A0h] [rbp-60h]
  struct _POINTL *v82; // [rsp+A8h] [rbp-58h]
  unsigned int v83; // [rsp+B0h] [rbp-50h]
  BOOL v84; // [rsp+B4h] [rbp-4Ch]
  struct SURFACE *v85; // [rsp+B8h] [rbp-48h]
  BOOL v86; // [rsp+C0h] [rbp-40h]
  XCLIPOBJ *v87; // [rsp+C8h] [rbp-38h]
  __int64 v88; // [rsp+D0h] [rbp-30h] BYREF
  char v89; // [rsp+D8h] [rbp-28h]
  int v90; // [rsp+DCh] [rbp-24h]
  struct _POINTL *v91; // [rsp+E0h] [rbp-20h]
  int v92; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v93; // [rsp+ECh] [rbp-14h]
  int v94; // [rsp+F4h] [rbp-Ch]
  __int64 v95; // [rsp+F8h] [rbp-8h]
  __int64 v96; // [rsp+100h] [rbp+0h]
  struct _RECTL v97; // [rsp+110h] [rbp+10h] BYREF
  struct SURFACE *v98; // [rsp+120h] [rbp+20h]
  struct SURFACE *v99; // [rsp+128h] [rbp+28h]
  struct SURFACE *v100; // [rsp+130h] [rbp+30h]
  struct ECLIPOBJ *v101; // [rsp+138h] [rbp+38h]
  XLATEOBJ *v102; // [rsp+140h] [rbp+40h]
  struct _BRUSHOBJ *v103; // [rsp+148h] [rbp+48h]
  char v104; // [rsp+150h] [rbp+50h]
  unsigned int v105; // [rsp+154h] [rbp+54h]
  int v106; // [rsp+158h] [rbp+58h]
  int v107; // [rsp+15Ch] [rbp+5Ch]
  __int64 v108; // [rsp+160h] [rbp+60h]
  __int64 v109; // [rsp+168h] [rbp+68h]
  PVOID v110; // [rsp+170h] [rbp+70h]
  PVOID v111; // [rsp+178h] [rbp+78h]
  int v112; // [rsp+180h] [rbp+80h]
  int v113; // [rsp+184h] [rbp+84h]
  int v114; // [rsp+188h] [rbp+88h]
  int v115; // [rsp+18Ch] [rbp+8Ch]
  int v116; // [rsp+190h] [rbp+90h]
  int v117; // [rsp+194h] [rbp+94h]
  int v118; // [rsp+198h] [rbp+98h]
  int v119; // [rsp+19Ch] [rbp+9Ch]
  LONG v120; // [rsp+1A0h] [rbp+A0h]
  LONG v121; // [rsp+1A4h] [rbp+A4h]
  int v122; // [rsp+1A8h] [rbp+A8h]
  int v123; // [rsp+1ACh] [rbp+ACh]
  ULONG v124; // [rsp+1B0h] [rbp+B0h]
  LONG v125; // [rsp+1B4h] [rbp+B4h]
  LONG v126; // [rsp+1B8h] [rbp+B8h]
  unsigned int v127; // [rsp+1BCh] [rbp+BCh]
  int v128; // [rsp+1C0h] [rbp+C0h]
  int v129; // [rsp+1C4h] [rbp+C4h]
  int v130; // [rsp+1C8h] [rbp+C8h]
  char v131; // [rsp+1CCh] [rbp+CCh]
  unsigned int v132; // [rsp+1E4h] [rbp+E4h]
  int v133; // [rsp+1E8h] [rbp+E8h]
  BOOL v134; // [rsp+1ECh] [rbp+ECh]
  BOOL v135; // [rsp+1F0h] [rbp+F0h]
  BOOL v136; // [rsp+1F4h] [rbp+F4h]
  BOOL v137; // [rsp+1F8h] [rbp+F8h]
  struct _BRUSHOBJ *v138; // [rsp+200h] [rbp+100h]
  struct _RECTL *v139; // [rsp+208h] [rbp+108h]
  RECTL prclDest; // [rsp+210h] [rbp+110h] BYREF
  unsigned int v141; // [rsp+220h] [rbp+120h] BYREF
  _OWORD v142[20]; // [rsp+224h] [rbp+124h] BYREF

  v11 = a6;
  v13 = a7;
  v14 = a2;
  v15 = a5;
  v80 = a1;
  v17 = 0LL;
  v87 = a4;
  v18 = a1;
  v19 = *((_DWORD *)a1 + 24);
  v91 = a8;
  v85 = a2;
  v79 = a10;
  v139 = a6;
  v82 = a7;
  v138 = a9;
  v88 = 0LL;
  v89 = 0;
  v90 = 0;
  v20 = v19 - 1;
  if ( v20 )
  {
    v21 = v20 - 1;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( v22 )
      {
        v23 = v22 - 1;
        if ( v23 )
        {
          v24 = v23 - 1;
          if ( v24 )
          {
            if ( v24 == 1 )
              v72 = 64;
            else
              v72 = v78;
          }
          else
          {
            v72 = 83;
          }
        }
        else
        {
          v72 = 126;
        }
      }
      else
      {
        v72 = 250;
      }
    }
    else
    {
      v72 = 498;
    }
  }
  else
  {
    v72 = 1986;
  }
  v25 = *a6;
  if ( !a5 )
    v15 = xloIdent;
  v101 = a4;
  v102 = v15;
  v98 = v18;
  v99 = a2;
  v103 = a9;
  v83 = a11 >> 8;
  v70 = a11 & 0xA5 | (8 * (a11 & 0xA)) | ((unsigned __int8)a11 >> 3) & 0xA;
  v71 = BYTE1(a11) & 0xC3 | (4 * (BYTE1(a11) & 0xC)) | (BYTE1(a11) >> 2) & 0xC;
  v27 = 1;
  v69 = BYTE1(a11) & 0xA5 | (8 * (BYTE1(a11) & 0xA)) | (BYTE1(a11) >> 3) & 0xA;
  v74 = (unsigned __int8)a11 != a11 >> 8;
  v84 = (a11 & 0xF) != (unsigned __int8)a11 >> 4;
  v97 = v25;
  v28 = (BYTE1(a11) & 0xF) != BYTE1(a11) >> 4;
  v78 = v28;
  if ( (a11 & 0xF) != (unsigned __int8)a11 >> 4 || (BYTE1(a11) & 0xF) != BYTE1(a11) >> 4 )
    v28 = 1;
  v75 = v28;
  v26 = a11 & 0xC3 | (4 * (a11 & 0xC)) | ((unsigned __int8)a11 >> 2) & 0xC;
  v76 = (v26 & 0xF) != v26 >> 4;
  v77 = (v71 & 0xF) != v71 >> 4;
  pptlSrc.x = (v26 & 0xF) != v26 >> 4 || (v71 & 0xF) != v71 >> 4;
  v86 = (v70 & 0xF) != v70 >> 4;
  v81 = (v69 & 0xF) != v69 >> 4;
  if ( v28 || (unsigned __int8)a11 != a11 >> 8 && !a3 )
  {
    if ( a9 && a9->iSolidColor == -1 )
    {
      EngRbrush = (struct _BRUSHOBJ *)pvGetEngRbrush(a9);
      v18 = v80;
      v17 = EngRbrush;
      v14 = v85;
      v13 = v82;
    }
    else
    {
      v17 = a9;
    }
  }
  v107 = 1;
  v29 = 1;
  v30 = 1;
  v106 = 1;
  v105 = 4;
  if ( pptlSrc.x )
  {
    v31 = *((_DWORD *)v14 + 22);
    x = v13->x;
    v108 = *((_QWORD *)v14 + 10);
    y = v82->y;
    v121 = y;
    v112 = v31;
    v120 = x;
    if ( v108 == *((_QWORD *)v18 + 10) )
    {
      top = a6->top;
      if ( y < top )
      {
        v30 = -1;
        v107 = -1;
        v105 = 2;
      }
      if ( y == top )
      {
        if ( x < a6->left )
          v29 = -1;
        v106 = v29;
      }
      if ( v74 && v76 && v77 || (v29 == -1 || v30 == -1) && a6->right - a6->left > v72 )
      {
        v61 = a6->right - a6->left;
        v93 = 0LL;
        LODWORD(v96) = 0;
        v94 = 0;
        v95 = 0LL;
        v92 = *((_DWORD *)v85 + 24);
        v93 = __PAIR64__(a6->bottom - top, v61);
        v96 = 1LL;
        SURFMEM::bCreateDIB((SURFMEM *)&v88, (struct _DEVBITMAPINFO *)&v92, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
        if ( !v88 )
          goto LABEL_82;
        prclDest.left = 0;
        prclDest.top = 0;
        pptlSrc = *v82;
        *(_QWORD *)&prclDest.right = v93;
        if ( !EngCopyBits((SURFOBJ *)(v88 + 24), (SURFOBJ *)((char *)v85 + 24), 0LL, xloIdent, &prclDest, &pptlSrc) )
          goto LABEL_82;
        v120 = 0;
        v121 = 0;
        v18 = v80;
        v31 = *(_DWORD *)(v88 + 88);
        v108 = *(_QWORD *)(v88 + 80);
        v112 = v31;
      }
      if ( v30 != 1 )
        v31 = -v31;
    }
    v116 = v31;
  }
  else
  {
    v108 = 0LL;
  }
  v109 = *((_QWORD *)v18 + 10);
  v34 = *((_DWORD *)v18 + 22);
  v113 = v34;
  if ( v30 != 1 )
    v34 = -v34;
  v35 = v74;
  v117 = v34;
  if ( v74 && a3 )
  {
    if ( (unsigned int)bUMPDSecurityGateEx() && !v91 )
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\bltlnk.cxx:%d:BltLnk:pptlMask == NULL\n", 619);
      goto LABEL_82;
    }
    v54 = *((_DWORD *)a3 + 14);
    v55 = v91->x;
    v36 = (void *)*((_QWORD *)a3 + 10);
    v56 = *((_DWORD *)a3 + 15);
    v57 = v91->y;
    v110 = v36;
    v100 = a3;
    v127 = v54;
    v128 = v56;
    v129 = v55;
    v130 = v57;
    if ( v55 >= (int)v54 )
    {
      v129 = v55 % v54;
    }
    else if ( v55 < 0 )
    {
      v129 = v54 - (-1 - v55) % v54 - 1;
    }
    if ( v57 >= v56 )
    {
      v130 = v57 % v56;
    }
    else if ( v57 < 0 )
    {
      v130 = v56 - (-1 - v57) % v56 - 1;
    }
    v58 = *((_DWORD *)a3 + 22);
    v18 = v80;
    v35 = v74;
    v115 = v58;
    if ( v30 != 1 )
      v58 = -v58;
    v119 = v58;
  }
  else
  {
    v100 = 0LL;
    v36 = 0LL;
    v110 = 0LL;
  }
  if ( !v75 )
  {
    v111 = 0LL;
LABEL_25:
    v37 = v79;
    goto LABEL_26;
  }
  if ( !v138 )
    goto LABEL_82;
  iSolidColor = v138->iSolidColor;
  if ( v138->iSolidColor != -1 )
  {
    v111 = 0LL;
    switch ( *((_DWORD *)v18 + 24) )
    {
      case 1:
        if ( iSolidColor )
          iSolidColor = -1;
        goto LABEL_89;
      case 2:
        iSolidColor |= 16 * iSolidColor;
        break;
      case 3:
        break;
      case 4:
LABEL_93:
        iSolidColor |= iSolidColor << 16;
        goto LABEL_89;
      default:
LABEL_89:
        v122 = iSolidColor;
        goto LABEL_25;
    }
    iSolidColor |= iSolidColor << 8;
    goto LABEL_93;
  }
  if ( !v17 )
    goto LABEL_82;
  pvRbrush = v17[1].pvRbrush;
  v122 = -1;
  if ( !pvRbrush )
    goto LABEL_25;
  v37 = v79;
  v63 = *(&v17[1].iSolidColor + 1);
  v111 = pvRbrush;
  v123 = *(&v17->flColorType + 1);
  v124 = v17[1].iSolidColor;
  v125 = v79->x;
  v126 = v79->y;
  v114 = v63;
  if ( v30 != 1 )
    v63 = -v63;
  v118 = v63;
LABEL_26:
  if ( v35 && !v36 )
  {
    if ( !v17 || !v17[2].pvRbrush )
      goto LABEL_82;
    v64 = *(&v17[1].flColorType + 1);
    v65 = a6->top - v37->y;
    v66 = v17[2].iSolidColor;
    flColorType = v17[2].flColorType;
    v110 = v17[2].pvRbrush;
    v68 = a6->left - v37->x;
    v127 = v64;
    v128 = v66;
    v115 = flColorType;
    v129 = v68;
    v130 = v65;
    if ( v68 < (int)v64 )
    {
      if ( v68 < 0 )
        v129 = v64 - (-1 - v68) % v64 - 1;
    }
    else
    {
      v129 = v68 % v64;
    }
    if ( v65 < v66 )
    {
      if ( v65 < 0 )
        v130 = v66 - (-1 - v65) % v66 - 1;
    }
    else
    {
      v130 = v65 % v66;
    }
    if ( v30 != 1 )
      flColorType = -flColorType;
    v119 = flColorType;
  }
  v38 = v87;
  if ( v87 && *((_BYTE *)v87 + 20) )
  {
    if ( *((_BYTE *)v87 + 20) == 1 )
    {
      v39 = *(struct _RECTL *)((char *)v87 + 4);
      goto LABEL_30;
    }
    if ( *((_BYTE *)v87 + 20) == 3 )
    {
      pptlSrc.x = 1;
      v40 = 1;
      XCLIPOBJ::cEnumStart(v87, 0, 0, v105, 0x14u);
      v38 = v87;
      goto LABEL_31;
    }
LABEL_82:
    v27 = 0;
    goto LABEL_55;
  }
  v39 = *a6;
LABEL_30:
  v40 = 0;
  v141 = 1;
  pptlSrc.x = 0;
  v142[0] = v39;
LABEL_31:
  if ( v40 )
    goto LABEL_144;
  while ( 1 )
  {
    v41 = 0;
    v75 = 0;
    if ( v141 )
    {
      v42 = v77;
      do
      {
        v43 = (struct _RECTL *)&v142[v41];
        if ( v43->left < v11->left )
          v43->left = v11->left;
        right = v11->right;
        if ( v43->right > right )
          v43->right = right;
        v45 = v11->top;
        if ( v43->top < v45 )
          v43->top = v45;
        bottom = v11->bottom;
        if ( v43->bottom > bottom )
          v43->bottom = bottom;
        if ( v43->top < v43->bottom && v43->right - v43->left > 0 )
        {
          v47 = v74;
          v48 = v76;
          do
          {
            v49 = v43->right;
            v50 = v49;
            left = v43->left;
            if ( v49 - v43->left > v72 )
            {
              v49 = left + v72;
              v43->right = left + v72;
            }
            if ( (_BYTE)a11 != 0xAA )
            {
              v104 = a11;
              v132 = a11 & 0xC3 | (unsigned __int8)((4 * (a11 & 0xC)) | ((unsigned __int8)a11 >> 2) & 0xC);
              v133 = v70;
              v135 = v86;
              v136 = v84;
              v134 = v48;
              v137 = v47;
              v131 = 0;
              BltLnkRect((struct _BLTLNKINFO *)&v97, v43);
            }
            if ( v47 && (_BYTE)v83 != 0xAA )
            {
              v104 = v83;
              v132 = v71;
              v133 = v69;
              v135 = v81;
              v136 = v78;
              v134 = v42;
              v137 = v47;
              v131 = -1;
              BltLnkRect((struct _BLTLNKINFO *)&v97, v43);
            }
            v43->right = v50;
            v43->left = v49;
          }
          while ( v50 - v49 > 0 );
          v11 = v139;
          v27 = 1;
          v41 = v75;
        }
        v75 = ++v41;
      }
      while ( v41 < v141 );
      v40 = pptlSrc.x;
    }
    v38 = v87;
    if ( !v40 )
      break;
LABEL_144:
    v40 = XCLIPOBJ::bEnum(v38, 0x144u, (char *)&v141, 0LL);
    pptlSrc.x = v40;
  }
LABEL_55:
  SURFMEM::~SURFMEM((SURFMEM *)&v88);
  return v27;
}
