/*
 * XREFs of ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00A1510
 * Callers:
 *     <none>
 * Callees:
 *     EngCopyBits @ 0x1C00131B0 (EngCopyBits.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0026620 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0026660 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C0030758 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C00307F0 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     EngStretchBlt @ 0x1C0035220 (EngStretchBlt.c)
 *     UIntAdd @ 0x1C005D488 (UIntAdd.c)
 *     ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x1C00A1D0C (-vRelease@HTSEMOBJ@@QEAAXXZ.c)
 *     ?vAcquire@HTSEMOBJ@@QEAAXXZ @ 0x1C00A1D44 (-vAcquire@HTSEMOBJ@@QEAAXXZ.c)
 *     EngHTBlt @ 0x1C00A30B4 (EngHTBlt.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??1HTSEMOBJ@@QEAA@XZ @ 0x1C01C1394 (--1HTSEMOBJ@@QEAA@XZ.c)
 *     UIntMult @ 0x1C01DC8F0 (UIntMult.c)
 */

__int64 __fastcall EngRealizeBrush(
        struct _BRUSHOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _SURFOBJ *a4,
        struct _XLATEOBJ *a5,
        unsigned int a6)
{
  __int64 v9; // rax
  unsigned __int16 *v10; // rdi
  __int64 v11; // r14
  int v12; // esi
  __int64 v13; // rbx
  int v14; // r15d
  UINT v15; // ecx
  int v16; // esi
  int v17; // eax
  int v18; // r10d
  __int64 v19; // rdi
  struct RBRUSH *v21; // r11
  __int64 v22; // r14
  UINT v23; // r12d
  void *v24; // rax
  UINT v25; // eax
  int v26; // ecx
  bool v27; // zf
  int v28; // eax
  LONG v29; // r12d
  BOOL v30; // r12d
  __int64 v31; // r12
  __int64 v32; // rcx
  int v33; // ecx
  ULONG iSolidColor; // eax
  ULONG v35; // eax
  __int64 v36; // rax
  XLATEOBJ *v37; // r8
  char *v38; // rcx
  XLATEOBJ *pxlo; // r14
  SURFOBJ *v40; // r13
  SURFOBJ *v41; // rcx
  LONG right; // ecx
  LONG v43; // eax
  __int64 v44; // r12
  XLATEOBJ *v45; // r13
  SURFOBJ *v46; // rcx
  LONG v47; // ecx
  LONG v48; // eax
  __int64 v49; // rsi
  LONG v50; // ebx
  __int64 v51; // rcx
  void *v52; // r8
  SURFOBJ *v53; // rcx
  LONG v54; // ecx
  LONG v55; // eax
  int v56; // [rsp+60h] [rbp-A0h] BYREF
  UINT uAddend; // [rsp+64h] [rbp-9Ch] BYREF
  int v58; // [rsp+68h] [rbp-98h]
  UINT uAugend; // [rsp+6Ch] [rbp-94h] BYREF
  int v60; // [rsp+70h] [rbp-90h]
  UINT puResult; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v62; // [rsp+78h] [rbp-88h]
  UINT v63; // [rsp+80h] [rbp-80h] BYREF
  XLATEOBJ *v64; // [rsp+88h] [rbp-78h]
  UINT v65[2]; // [rsp+90h] [rbp-70h] BYREF
  POINTL pptlSrc; // [rsp+98h] [rbp-68h] BYREF
  struct RBRUSH *v67; // [rsp+A0h] [rbp-60h] BYREF
  char v68; // [rsp+A8h] [rbp-58h]
  int v69; // [rsp+ACh] [rbp-54h]
  int v70; // [rsp+B0h] [rbp-50h]
  unsigned int v71[2]; // [rsp+B8h] [rbp-48h] BYREF
  int v72; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v73; // [rsp+C4h] [rbp-3Ch]
  __int128 v74; // [rsp+CCh] [rbp-34h]
  int v75; // [rsp+DCh] [rbp-24h]
  UINT v76[2]; // [rsp+E0h] [rbp-20h]
  XLATEOBJ *v77; // [rsp+E8h] [rbp-18h] BYREF
  POINTL pptlHTOrg; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v79; // [rsp+F8h] [rbp-8h] BYREF
  char v80; // [rsp+100h] [rbp+0h]
  int v81; // [rsp+104h] [rbp+4h]
  __int64 v82; // [rsp+108h] [rbp+8h] BYREF
  UINT uMultiplicand[2]; // [rsp+110h] [rbp+10h]
  __int64 v84; // [rsp+118h] [rbp+18h] BYREF
  int v85; // [rsp+120h] [rbp+20h]
  __int64 v86; // [rsp+128h] [rbp+28h]
  __int64 v87; // [rsp+130h] [rbp+30h]
  RECTL prclDest; // [rsp+140h] [rbp+40h] BYREF
  RECTL prclSrc; // [rsp+150h] [rbp+50h] BYREF

  v64 = a5;
  v87 = SURFOBJ_TO_SURFACE(a2);
  v62 = SURFOBJ_TO_SURFACE(a3);
  v9 = SURFOBJ_TO_SURFACE(a4);
  v72 = 0;
  v10 = 0LL;
  v11 = v9;
  v86 = v9;
  v58 = 0;
  v73 = 0LL;
  v74 = 0uLL;
  v75 = 0;
  v12 = *(_DWORD *)(v87 + 96);
  v13 = *(_QWORD *)(v62 + 56);
  v82 = *(_QWORD *)(v87 + 48);
  v56 = 1;
  v60 = v12;
  *(_QWORD *)uMultiplicand = v13;
  HTSEMOBJ::vAcquire((HTSEMOBJ *)&v56);
  if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v82) || (unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v82, 0LL) )
    v10 = (unsigned __int16 *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v82);
  v14 = 32;
  if ( v12 == 1 )
  {
    v15 = 1;
    uAddend = 1;
    if ( (((_DWORD)v13 - 8) & 0xFFFFFFE7) != 0 || (_DWORD)v13 == 24 )
    {
      v16 = (v13 + 63) & 0xFFFFFFE0;
    }
    else
    {
      v16 = 32;
      if ( !v10 )
        goto LABEL_27;
      v17 = v10[4];
      switch ( v17 )
      {
        case 10:
          v16 = 160;
          break;
        case 12:
          v16 = 96;
          break;
        case 14:
          v16 = 224;
          break;
        default:
          goto LABEL_27;
      }
      v58 = 1;
    }
  }
  else if ( v12 == 2 )
  {
    v15 = 4;
    uAddend = 4;
    v16 = 8;
    if ( (_DWORD)v13 == 8 )
      goto LABEL_28;
    v16 = (v13 + 15) & 0xFFFFFFF8;
  }
  else
  {
    switch ( v12 )
    {
      case 3:
        v15 = 8;
        break;
      case 4:
        v15 = 16;
        break;
      case 5:
        v15 = 24;
        break;
      default:
        v15 = 32;
        v16 = v13;
        uAddend = 32;
        goto LABEL_28;
    }
    uAddend = v15;
    v16 = (v13 + 7) & 0xFFFFFFFC;
  }
LABEL_27:
  if ( v16 < (int)v13 )
    goto LABEL_38;
LABEL_28:
  if ( UIntMult(v15, v16, &puResult) < 0 )
    goto LABEL_38;
  puResult >>= 3;
  if ( UIntMult(uMultiplicand[1], puResult, &uAddend) < 0 || UIntAdd(0x50u, uAddend, &uAugend) < 0 )
    goto LABEL_38;
  if ( v11 )
  {
    v19 = *(_QWORD *)(v11 + 56);
    *(_QWORD *)v76 = v19;
    if ( (((_DWORD)v19 - 8) & v18) != 0 || (_DWORD)v19 == 24 )
      v14 = (v19 + 63) & 0xFFFFFFE0;
    if ( v14 < (int)v19 )
      goto LABEL_38;
    v70 = v14 >> 3;
    if ( UIntMult(v76[1], v14 >> 3, v65) < 0 || UIntAdd(uAugend, v65[0], &uAugend) < 0 )
      goto LABEL_38;
  }
  else
  {
    LODWORD(v19) = v76[0];
    v14 = v65[0];
    v70 = v65[0];
  }
  if ( UIntAdd(0x4Cu, uAugend, &v63) < 0 )
    goto LABEL_38;
  if ( gpCachedEngbrush == v21 )
  {
    v23 = v63;
LABEL_47:
    v24 = PALLOCMEM2(v23, 1919051079LL, 1);
    v21 = 0LL;
    *(_QWORD *)v65 = v24;
    v22 = (__int64)v24;
    if ( v24 )
      goto LABEL_48;
LABEL_38:
    HTSEMOBJ::~HTSEMOBJ((HTSEMOBJ *)&v56);
    return 0LL;
  }
  v22 = _InterlockedExchange64((volatile __int64 *)gpCachedEngbrush, (__int64)v21);
  v23 = v63;
  *(_QWORD *)v65 = v22;
  if ( !v22 )
    goto LABEL_47;
  if ( v63 <= uAugend || *(_DWORD *)(v22 + 4) < v63 )
  {
    Win32FreePool(v22);
    goto LABEL_47;
  }
LABEL_48:
  v25 = puResult;
  v26 = v60;
  v27 = v58 == (_DWORD)v21;
  a1[1].pvRbrush = (PVOID)v22;
  *(_DWORD *)(v22 + 28) = v25;
  v28 = v13;
  *(_DWORD *)(v22 + 4) = v23;
  if ( !v27 )
    v28 = v16;
  v29 = uMultiplicand[1];
  *(_DWORD *)(v22 + 20) = v28;
  *(_QWORD *)(v22 + 32) = v22 + 76;
  *(_DWORD *)(v22 + 72) = v26;
  *(_DWORD *)(v22 + 16) = v16;
  *(_DWORD *)(v22 + 24) = v29;
  v72 = v26;
  v73 = __PAIR64__(v29, v16);
  *(_QWORD *)((char *)&v74 + 4) = v21;
  HIDWORD(v74) = 1;
  v67 = v21;
  v68 = (char)v21;
  v69 = (int)v21;
  SURFMEM::bCreateDIB(
    (SURFMEM *)&v67,
    (struct _DEVBITMAPINFO *)&v72,
    *(void **)(v22 + 32),
    0LL,
    (unsigned int)v21,
    v21,
    (unsigned __int64)v21,
    (_DWORD)v21,
    1,
    (_DWORD)v21,
    (_DWORD)v21);
  if ( !v67 )
    goto LABEL_51;
  prclDest.bottom = v29;
  pptlSrc = 0LL;
  *(_QWORD *)&prclDest.left = 0LL;
  v27 = a1[2].iSolidColor == *(&a1[2].iSolidColor + 1);
  prclDest.right = v13;
  v30 = v27;
  HTSEMOBJ::vRelease((HTSEMOBJ *)&v56);
  if ( v60 == 1 )
  {
    if ( a6 < 0xC )
      goto LABEL_88;
    if ( !v30 )
      goto LABEL_59;
  }
  if ( v60 == 2 && (a1[3].iSolidColor & 5) != 0 && (!v30 || ((__int64)a1[5].pvRbrush & 0x20000) == 0) )
  {
LABEL_59:
    v31 = 0LL;
    v85 = 0;
    v84 = 0LL;
    v32 = *(_QWORD *)(v87 + 48);
    pptlHTOrg = 0LL;
    prclSrc = prclDest;
    *((_QWORD *)v67 + 6) = v32;
    v77 = 0LL;
    if ( a6 >= 6 )
    {
      v33 = 0;
      if ( ((__int64)a1[5].pvRbrush & 0x20000) == 0 )
        goto LABEL_70;
    }
    else
    {
      v33 = 1;
    }
    iSolidColor = a1[3].iSolidColor;
    if ( (iSolidColor & 4) != 0 || (iSolidColor & 1) != 0 )
    {
      if ( v33 )
      {
        v71[0] = *(&a1[2].iSolidColor + 1);
        v35 = a1[1].iSolidColor;
      }
      else
      {
        v71[0] = a1[2].iSolidColor;
        v35 = *(&a1[2].iSolidColor + 1);
      }
      v71[1] = v35;
      if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v84, 1u, 2u, v71, 0, 0, 0, 0x400u, 1) )
      {
        v27 = (unsigned int)EXLATEOBJ::bInitXlateObj(
                              (__int64 *)&v77,
                              *(void **)&a1[2].flColorType,
                              a1[3].iSolidColor,
                              v84,
                              *((_QWORD *)a1[3].pvRbrush + 15),
                              *(_QWORD *)&a1[4].iSolidColor,
                              *(_QWORD *)&a1[4].iSolidColor,
                              a1[2].iSolidColor,
                              *(&a1[2].iSolidColor + 1),
                              0xFFFFFF,
                              0) == 0;
        v36 = v62;
        if ( !v27 )
        {
          v37 = v77;
          v31 = *(_QWORD *)(v62 + 120);
          v64 = v77;
          *(_QWORD *)(v62 + 120) = 0LL;
          goto LABEL_72;
        }
LABEL_71:
        v37 = v64;
LABEL_72:
        if ( v60 == 1 && v58 )
        {
          prclDest.right = v16;
          v38 = 0LL;
          if ( v67 )
            v38 = (char *)v67 + 24;
          EngHTBlt(v38, v36 + 24, 0LL, 0LL, v37, 0LL, &pptlHTOrg, &prclDest, &prclSrc, 0LL, 64, 0LL);
        }
        else if ( prclDest.left != v16 )
        {
          pxlo = v64;
          v40 = (SURFOBJ *)(v36 + 24);
          do
          {
            v41 = 0LL;
            if ( v67 )
              v41 = (SURFOBJ *)((char *)v67 + 24);
            EngStretchBlt(v41, v40, 0LL, 0LL, pxlo, 0LL, &pptlHTOrg, &prclDest, &prclSrc, 0LL, 4u);
            right = prclDest.right;
            prclDest.left = prclDest.right;
            v43 = v13 + prclDest.right;
            if ( (int)v13 + prclDest.right > v16 )
              v43 = v16;
            prclDest.right = v43;
          }
          while ( right != v16 );
          v22 = *(_QWORD *)v65;
        }
        if ( v31 )
          *(_QWORD *)(v62 + 120) = v31;
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v77);
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v84);
        goto LABEL_96;
      }
    }
LABEL_70:
    v36 = v62;
    goto LABEL_71;
  }
LABEL_88:
  if ( prclDest.left != v16 )
  {
    v44 = v62;
    v45 = v64;
    do
    {
      if ( v67 )
        v46 = (SURFOBJ *)((char *)v67 + 24);
      else
        v46 = 0LL;
      EngCopyBits(v46, (SURFOBJ *)(v44 + 24), 0LL, v45, &prclDest, &pptlSrc);
      v47 = prclDest.right;
      prclDest.left = prclDest.right;
      v48 = v13 + prclDest.right;
      if ( (int)v13 + prclDest.right > v16 )
        v48 = v16;
      prclDest.right = v48;
    }
    while ( v47 != v16 );
  }
LABEL_96:
  HTSEMOBJ::vAcquire((HTSEMOBJ *)&v56);
  v49 = v86;
  if ( v86 )
  {
    v50 = v76[1];
    v51 = uAddend;
    *(_DWORD *)(v22 + 64) = v70;
    *(_DWORD *)(v22 + 40) = v14;
    *(_QWORD *)(v22 + 56) = v22 + v51 + 76;
    *(_DWORD *)(v22 + 44) = v19;
    *(_DWORD *)(v22 + 48) = v50;
    v72 = 1;
    v73 = __PAIR64__(v50, v14);
    *(_QWORD *)((char *)&v74 + 4) = 0LL;
    HIDWORD(v74) = 1;
    v52 = *(void **)(v22 + 56);
    v79 = 0LL;
    v80 = 0;
    v81 = 0;
    SURFMEM::bCreateDIB((SURFMEM *)&v79, (struct _DEVBITMAPINFO *)&v72, v52, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( !v79 )
    {
      SURFMEM::~SURFMEM((SURFMEM *)&v79);
LABEL_51:
      SURFMEM::~SURFMEM((SURFMEM *)&v67);
      goto LABEL_38;
    }
    pptlSrc = 0LL;
    *(_QWORD *)&prclDest.left = 0LL;
    prclDest.right = v19;
    prclDest.bottom = v50;
    HTSEMOBJ::vRelease((HTSEMOBJ *)&v56);
    if ( prclDest.left != v14 )
    {
      do
      {
        v53 = 0LL;
        if ( v79 )
          v53 = (SURFOBJ *)(v79 + 24);
        EngCopyBits(v53, (SURFOBJ *)(v49 + 24), 0LL, 0LL, &prclDest, &pptlSrc);
        v54 = prclDest.right;
        prclDest.left = prclDest.right;
        v55 = v19 + prclDest.right;
        if ( (int)v19 + prclDest.right > v14 )
          v55 = v14;
        prclDest.right = v55;
      }
      while ( v54 != v14 );
    }
    HTSEMOBJ::vAcquire((HTSEMOBJ *)&v56);
    SURFMEM::~SURFMEM((SURFMEM *)&v79);
  }
  else
  {
    *(_QWORD *)(v22 + 56) = 0LL;
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v67);
  HTSEMOBJ::~HTSEMOBJ((HTSEMOBJ *)&v56);
  return 1LL;
}
