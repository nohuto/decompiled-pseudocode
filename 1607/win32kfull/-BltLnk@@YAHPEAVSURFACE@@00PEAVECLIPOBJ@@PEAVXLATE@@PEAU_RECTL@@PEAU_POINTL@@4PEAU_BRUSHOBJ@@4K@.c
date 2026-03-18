/*
 * XREFs of ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0066D34
 * Callers:
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1C00337F0 (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 *     EngBitBlt @ 0x1C00477E0 (EngBitBlt.c)
 * Callees:
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1C003C68C (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 *     EngCopyBits @ 0x1C0040D90 (EngCopyBits.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00418B4 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0041AAC (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C006807C (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C00F127C (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
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
  BOOL v47; // r13d
  LONG v48; // r15d
  LONG v49; // r12d
  LONG left; // ecx
  struct _BRUSHOBJ *EngRbrush; // rax
  unsigned int v53; // ecx
  int v54; // r9d
  int v55; // r8d
  int v56; // r10d
  int v57; // eax
  int iSolidColor; // ecx
  LONG top; // r10d
  int v60; // ecx
  PVOID pvRbrush; // rax
  int v62; // ecx
  unsigned int v63; // r9d
  int v64; // r10d
  signed int v65; // r8d
  int flColorType; // r11d
  int v67; // eax
  unsigned __int8 v68; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v69; // [rsp+61h] [rbp-9Fh]
  unsigned __int8 v70; // [rsp+62h] [rbp-9Eh]
  int v71; // [rsp+64h] [rbp-9Ch]
  POINTL pptlSrc; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v73; // [rsp+78h] [rbp-88h]
  BOOL v74; // [rsp+7Ch] [rbp-84h]
  BOOL v75; // [rsp+80h] [rbp-80h]
  BOOL v76; // [rsp+84h] [rbp-7Ch]
  struct SURFACE *v77; // [rsp+88h] [rbp-78h]
  struct _POINTL *v78; // [rsp+90h] [rbp-70h]
  BOOL v79; // [rsp+98h] [rbp-68h]
  BOOL v80; // [rsp+9Ch] [rbp-64h]
  unsigned int v81; // [rsp+A0h] [rbp-60h]
  BOOL v82; // [rsp+A4h] [rbp-5Ch]
  struct _POINTL *v83; // [rsp+A8h] [rbp-58h]
  struct SURFACE *v84; // [rsp+B0h] [rbp-50h]
  XCLIPOBJ *v85; // [rsp+B8h] [rbp-48h]
  __int64 v86; // [rsp+C0h] [rbp-40h] BYREF
  char v87; // [rsp+C8h] [rbp-38h]
  int v88; // [rsp+CCh] [rbp-34h]
  struct _POINTL *v89; // [rsp+D0h] [rbp-30h]
  int v90; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 v91; // [rsp+DCh] [rbp-24h]
  int v92; // [rsp+E4h] [rbp-1Ch]
  __int64 v93; // [rsp+E8h] [rbp-18h]
  __int64 v94; // [rsp+F0h] [rbp-10h]
  struct _RECTL v95; // [rsp+100h] [rbp+0h] BYREF
  struct SURFACE *v96; // [rsp+110h] [rbp+10h]
  struct SURFACE *v97; // [rsp+118h] [rbp+18h]
  struct SURFACE *v98; // [rsp+120h] [rbp+20h]
  struct ECLIPOBJ *v99; // [rsp+128h] [rbp+28h]
  XLATEOBJ *v100; // [rsp+130h] [rbp+30h]
  struct _BRUSHOBJ *v101; // [rsp+138h] [rbp+38h]
  char v102; // [rsp+140h] [rbp+40h]
  unsigned int v103; // [rsp+144h] [rbp+44h]
  int v104; // [rsp+148h] [rbp+48h]
  int v105; // [rsp+14Ch] [rbp+4Ch]
  __int64 v106; // [rsp+150h] [rbp+50h]
  __int64 v107; // [rsp+158h] [rbp+58h]
  PVOID v108; // [rsp+160h] [rbp+60h]
  PVOID v109; // [rsp+168h] [rbp+68h]
  int v110; // [rsp+170h] [rbp+70h]
  int v111; // [rsp+174h] [rbp+74h]
  int v112; // [rsp+178h] [rbp+78h]
  int v113; // [rsp+17Ch] [rbp+7Ch]
  int v114; // [rsp+180h] [rbp+80h]
  int v115; // [rsp+184h] [rbp+84h]
  int v116; // [rsp+188h] [rbp+88h]
  int v117; // [rsp+18Ch] [rbp+8Ch]
  LONG v118; // [rsp+190h] [rbp+90h]
  LONG v119; // [rsp+194h] [rbp+94h]
  int v120; // [rsp+198h] [rbp+98h]
  int v121; // [rsp+19Ch] [rbp+9Ch]
  ULONG v122; // [rsp+1A0h] [rbp+A0h]
  LONG v123; // [rsp+1A4h] [rbp+A4h]
  LONG v124; // [rsp+1A8h] [rbp+A8h]
  unsigned int v125; // [rsp+1ACh] [rbp+ACh]
  int v126; // [rsp+1B0h] [rbp+B0h]
  int v127; // [rsp+1B4h] [rbp+B4h]
  int v128; // [rsp+1B8h] [rbp+B8h]
  char v129; // [rsp+1BCh] [rbp+BCh]
  unsigned int v130; // [rsp+1D4h] [rbp+D4h]
  int v131; // [rsp+1D8h] [rbp+D8h]
  BOOL v132; // [rsp+1DCh] [rbp+DCh]
  BOOL v133; // [rsp+1E0h] [rbp+E0h]
  BOOL v134; // [rsp+1E4h] [rbp+E4h]
  BOOL v135; // [rsp+1E8h] [rbp+E8h]
  struct _BRUSHOBJ *v136; // [rsp+1F0h] [rbp+F0h]
  struct _RECTL *v137; // [rsp+1F8h] [rbp+F8h]
  RECTL prclDest; // [rsp+200h] [rbp+100h] BYREF
  unsigned int v139; // [rsp+210h] [rbp+110h] BYREF
  _OWORD v140[20]; // [rsp+214h] [rbp+114h] BYREF

  v11 = a6;
  v13 = a7;
  v14 = a2;
  v15 = a5;
  v77 = a1;
  v17 = 0LL;
  v85 = a4;
  v18 = a1;
  v19 = *((_DWORD *)a1 + 24);
  v89 = a8;
  v84 = a2;
  v78 = a10;
  v137 = a6;
  v83 = a7;
  v136 = a9;
  v86 = 0LL;
  v87 = 0;
  v88 = 0;
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
              v71 = 64;
            else
              v71 = v76;
          }
          else
          {
            v71 = 83;
          }
        }
        else
        {
          v71 = 126;
        }
      }
      else
      {
        v71 = 250;
      }
    }
    else
    {
      v71 = 498;
    }
  }
  else
  {
    v71 = 1986;
  }
  v25 = *a6;
  if ( !a5 )
    v15 = xloIdent;
  v99 = a4;
  v100 = v15;
  v96 = v18;
  v97 = a2;
  v101 = a9;
  v81 = a11 >> 8;
  v68 = a11 & 0xA5 | (8 * (a11 & 0xA)) | ((unsigned __int8)a11 >> 3) & 0xA;
  v69 = BYTE1(a11) & 0xC3 | (4 * (BYTE1(a11) & 0xC)) | (BYTE1(a11) >> 2) & 0xC;
  v27 = 1;
  v70 = BYTE1(a11) & 0xA5 | (8 * (BYTE1(a11) & 0xA)) | (BYTE1(a11) >> 3) & 0xA;
  v80 = (a11 & 0xF) != (unsigned __int8)a11 >> 4;
  v95 = v25;
  v28 = (BYTE1(a11) & 0xF) != BYTE1(a11) >> 4;
  v76 = v28;
  if ( (a11 & 0xF) != (unsigned __int8)a11 >> 4 || (BYTE1(a11) & 0xF) != BYTE1(a11) >> 4 )
    v28 = 1;
  v73 = v28;
  v26 = a11 & 0xC3 | (4 * (a11 & 0xC)) | ((unsigned __int8)a11 >> 2) & 0xC;
  v75 = (v26 & 0xF) != v26 >> 4;
  v74 = (v69 & 0xF) != v69 >> 4;
  pptlSrc.x = (v26 & 0xF) != v26 >> 4 || (v69 & 0xF) != v69 >> 4;
  v79 = (v68 & 0xF) != v68 >> 4;
  v82 = (v70 & 0xF) != v70 >> 4;
  if ( v28 || (unsigned __int8)a11 != a11 >> 8 && !a3 )
  {
    if ( a9 && a9->iSolidColor == -1 )
    {
      EngRbrush = (struct _BRUSHOBJ *)pvGetEngRbrush(a9);
      v18 = v77;
      v17 = EngRbrush;
      v14 = v84;
      v13 = v83;
    }
    else
    {
      v17 = a9;
    }
  }
  v105 = 1;
  v29 = 1;
  v30 = 1;
  v104 = 1;
  v103 = 4;
  if ( pptlSrc.x )
  {
    v31 = *((_DWORD *)v14 + 22);
    x = v13->x;
    v106 = *((_QWORD *)v14 + 10);
    y = v83->y;
    v119 = y;
    v110 = v31;
    v118 = x;
    if ( v106 == *((_QWORD *)v18 + 10) )
    {
      top = a6->top;
      if ( y < top )
      {
        v30 = -1;
        v105 = -1;
        v103 = 2;
      }
      if ( y == top )
      {
        if ( x < a6->left )
          v29 = -1;
        v104 = v29;
      }
      if ( (unsigned __int8)a11 != a11 >> 8 && v75 && v74 || (v29 == -1 || v30 == -1) && a6->right - a6->left > v71 )
      {
        v60 = a6->right - a6->left;
        v91 = 0LL;
        LODWORD(v94) = 0;
        v92 = 0;
        v93 = 0LL;
        v90 = *((_DWORD *)v84 + 24);
        v91 = __PAIR64__(a6->bottom - top, v60);
        v94 = 1LL;
        SURFMEM::bCreateDIB((SURFMEM *)&v86, (struct _DEVBITMAPINFO *)&v90, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
        if ( !v86 )
          goto LABEL_82;
        prclDest.left = 0;
        prclDest.top = 0;
        pptlSrc = *v83;
        *(_QWORD *)&prclDest.right = v91;
        if ( !EngCopyBits((SURFOBJ *)(v86 + 24), (SURFOBJ *)((char *)v84 + 24), 0LL, xloIdent, &prclDest, &pptlSrc) )
          goto LABEL_82;
        v118 = 0;
        v119 = 0;
        v18 = v77;
        v31 = *(_DWORD *)(v86 + 88);
        v106 = *(_QWORD *)(v86 + 80);
        v110 = v31;
      }
      if ( v30 != 1 )
        v31 = -v31;
    }
    v114 = v31;
  }
  else
  {
    v106 = 0LL;
  }
  v107 = *((_QWORD *)v18 + 10);
  v34 = *((_DWORD *)v18 + 22);
  v111 = v34;
  if ( v30 != 1 )
    v34 = -v34;
  v35 = (unsigned __int8)a11 != a11 >> 8;
  v115 = v34;
  if ( (unsigned __int8)a11 == a11 >> 8 || !a3 )
  {
    v98 = 0LL;
    v36 = 0LL;
    v108 = 0LL;
  }
  else
  {
    if ( (unsigned int)bUMPDSecurityGateEx() && !v89 )
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\bltlnk.cxx:%d:BltLnk:pptlMask == NULL\n", 619);
      goto LABEL_82;
    }
    v53 = *((_DWORD *)a3 + 14);
    v54 = v89->x;
    v36 = (void *)*((_QWORD *)a3 + 10);
    v55 = *((_DWORD *)a3 + 15);
    v56 = v89->y;
    v108 = v36;
    v98 = a3;
    v125 = v53;
    v126 = v55;
    v127 = v54;
    v128 = v56;
    if ( v54 >= (int)v53 )
    {
      v127 = v54 % v53;
    }
    else if ( v54 < 0 )
    {
      v127 = v53 - (-1 - v54) % v53 - 1;
    }
    if ( v56 >= v55 )
    {
      v128 = v56 % v55;
    }
    else if ( v56 < 0 )
    {
      v128 = v55 - (-1 - v56) % v55 - 1;
    }
    v57 = *((_DWORD *)a3 + 22);
    v18 = v77;
    v35 = (unsigned __int8)a11 != a11 >> 8;
    v113 = v57;
    if ( v30 != 1 )
      v57 = -v57;
    v117 = v57;
  }
  if ( !v73 )
  {
    v109 = 0LL;
LABEL_25:
    v37 = v78;
    goto LABEL_26;
  }
  if ( !v136 )
    goto LABEL_82;
  iSolidColor = v136->iSolidColor;
  if ( v136->iSolidColor != -1 )
  {
    v109 = 0LL;
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
LABEL_92:
        iSolidColor |= iSolidColor << 16;
        goto LABEL_89;
      default:
LABEL_89:
        v120 = iSolidColor;
        goto LABEL_25;
    }
    iSolidColor |= iSolidColor << 8;
    goto LABEL_92;
  }
  if ( !v17 )
    goto LABEL_82;
  pvRbrush = v17[1].pvRbrush;
  v120 = -1;
  if ( !pvRbrush )
    goto LABEL_25;
  v37 = v78;
  v62 = *(&v17[1].iSolidColor + 1);
  v109 = pvRbrush;
  v121 = *(&v17->flColorType + 1);
  v122 = v17[1].iSolidColor;
  v123 = v78->x;
  v124 = v78->y;
  v112 = v62;
  if ( v30 != 1 )
    v62 = -v62;
  v116 = v62;
LABEL_26:
  if ( v35 && !v36 )
  {
    if ( !v17 || !v17[2].pvRbrush )
      goto LABEL_82;
    v63 = *(&v17[1].flColorType + 1);
    v64 = a6->top - v37->y;
    v65 = v17[2].iSolidColor;
    flColorType = v17[2].flColorType;
    v108 = v17[2].pvRbrush;
    v67 = a6->left - v37->x;
    v125 = v63;
    v126 = v65;
    v113 = flColorType;
    v127 = v67;
    v128 = v64;
    if ( v67 < (int)v63 )
    {
      if ( v67 < 0 )
        v127 = v63 - (-1 - v67) % v63 - 1;
    }
    else
    {
      v127 = v67 % v63;
    }
    if ( v64 < v65 )
    {
      if ( v64 < 0 )
        v128 = v65 - (-1 - v64) % v65 - 1;
    }
    else
    {
      v128 = v64 % v65;
    }
    if ( v30 != 1 )
      flColorType = -flColorType;
    v117 = flColorType;
  }
  v38 = v85;
  if ( v85 && *((_BYTE *)v85 + 20) )
  {
    if ( *((_BYTE *)v85 + 20) == 1 )
    {
      v39 = *(struct _RECTL *)((char *)v85 + 4);
      goto LABEL_30;
    }
    if ( *((_BYTE *)v85 + 20) == 3 )
    {
      pptlSrc.x = 1;
      v40 = 1;
      XCLIPOBJ::cEnumStart(v85, 0, 0, v103, 0x14u);
      v38 = v85;
      goto LABEL_31;
    }
LABEL_82:
    v27 = 0;
    goto LABEL_55;
  }
  v39 = *a6;
LABEL_30:
  v40 = 0;
  v139 = 1;
  pptlSrc.x = 0;
  v140[0] = v39;
LABEL_31:
  if ( v40 )
    goto LABEL_144;
  while ( 1 )
  {
    v41 = 0;
    v73 = 0;
    if ( v139 )
    {
      v42 = v74;
      do
      {
        v43 = (struct _RECTL *)&v140[v41];
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
          v47 = v75;
          do
          {
            v48 = v43->right;
            v49 = v48;
            left = v43->left;
            if ( v48 - v43->left > v71 )
            {
              v48 = left + v71;
              v43->right = left + v71;
            }
            if ( (_BYTE)a11 != 0xAA )
            {
              v102 = a11;
              v130 = a11 & 0xC3 | (unsigned __int8)((4 * (a11 & 0xC)) | ((unsigned __int8)a11 >> 2) & 0xC);
              v131 = v68;
              v133 = v79;
              v134 = v80;
              v132 = v47;
              v135 = (unsigned __int8)a11 != a11 >> 8;
              v129 = 0;
              BltLnkRect((struct _BLTLNKINFO *)&v95, v43);
            }
            if ( (unsigned __int8)a11 != a11 >> 8 && (_BYTE)v81 != 0xAA )
            {
              v102 = v81;
              v130 = v69;
              v131 = v70;
              v133 = v82;
              v134 = v76;
              v132 = v42;
              v135 = (unsigned __int8)a11 != a11 >> 8;
              v129 = -1;
              BltLnkRect((struct _BLTLNKINFO *)&v95, v43);
            }
            v43->right = v49;
            v43->left = v48;
          }
          while ( v49 - v48 > 0 );
          v11 = v137;
          v27 = 1;
          v41 = v73;
        }
        v73 = ++v41;
      }
      while ( v41 < v139 );
      v40 = pptlSrc.x;
    }
    v38 = v85;
    if ( !v40 )
      break;
LABEL_144:
    v40 = XCLIPOBJ::bEnum(v38, 0x144u, (char *)&v139, 0LL);
    pptlSrc.x = v40;
  }
LABEL_55:
  SURFMEM::~SURFMEM((SURFMEM *)&v86);
  return v27;
}
