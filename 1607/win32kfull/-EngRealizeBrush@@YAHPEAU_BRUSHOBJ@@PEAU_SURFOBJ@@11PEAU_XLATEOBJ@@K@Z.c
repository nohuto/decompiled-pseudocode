/*
 * XREFs of ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00F1C10
 * Callers:
 *     <none>
 * Callees:
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C0029594 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C002962C (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     EngStretchBlt @ 0x1C0038960 (EngStretchBlt.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C003A36C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C003A3A4 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     EngCopyBits @ 0x1C0040D90 (EngCopyBits.c)
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     UIntAdd @ 0x1C0070A70 (UIntAdd.c)
 *     EngHTBlt @ 0x1C00F2408 (EngHTBlt.c)
 *     ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x1C00F32A0 (-vRelease@HTSEMOBJ@@QEAAXXZ.c)
 *     ?vAcquire@HTSEMOBJ@@QEAAXXZ @ 0x1C00F32D8 (-vAcquire@HTSEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??1HTSEMOBJ@@QEAA@XZ @ 0x1C01BF57C (--1HTSEMOBJ@@QEAA@XZ.c)
 *     UIntMult @ 0x1C01CE8C4 (UIntMult.c)
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
  __int64 v21; // rdx
  __int64 v22; // r8
  struct RBRUSH *v23; // r11
  __int64 v24; // r14
  UINT v25; // r12d
  void *v26; // rax
  UINT v27; // eax
  int v28; // ecx
  bool v29; // zf
  int v30; // eax
  LONG v31; // r12d
  BOOL v32; // r12d
  __int64 v33; // r12
  __int64 v34; // rcx
  int v35; // ecx
  ULONG iSolidColor; // eax
  ULONG v37; // eax
  __int64 v38; // rax
  XLATEOBJ *v39; // r8
  char *v40; // rcx
  XLATEOBJ *pxlo; // r14
  SURFOBJ *v42; // r13
  SURFOBJ *v43; // rcx
  LONG right; // ecx
  LONG v45; // eax
  __int64 v46; // r12
  XLATEOBJ *v47; // r13
  SURFOBJ *v48; // rcx
  LONG v49; // ecx
  LONG v50; // eax
  __int64 v51; // rsi
  LONG v52; // ebx
  __int64 v53; // rcx
  void *v54; // r8
  SURFOBJ *v55; // rcx
  LONG v56; // ecx
  LONG v57; // eax
  int v58; // [rsp+60h] [rbp-A0h] BYREF
  UINT uAddend; // [rsp+64h] [rbp-9Ch] BYREF
  int v60; // [rsp+68h] [rbp-98h]
  UINT uAugend; // [rsp+6Ch] [rbp-94h] BYREF
  UINT v62; // [rsp+70h] [rbp-90h] BYREF
  UINT puResult; // [rsp+74h] [rbp-8Ch] BYREF
  int v64; // [rsp+78h] [rbp-88h]
  __int64 v65; // [rsp+80h] [rbp-80h]
  XLATEOBJ *v66; // [rsp+88h] [rbp-78h]
  UINT v67[2]; // [rsp+90h] [rbp-70h] BYREF
  int v68; // [rsp+98h] [rbp-68h]
  POINTL pptlSrc; // [rsp+A0h] [rbp-60h] BYREF
  struct RBRUSH *v70; // [rsp+A8h] [rbp-58h] BYREF
  char v71; // [rsp+B0h] [rbp-50h]
  int v72; // [rsp+B4h] [rbp-4Ch]
  unsigned int v73[2]; // [rsp+B8h] [rbp-48h] BYREF
  int v74; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v75; // [rsp+C4h] [rbp-3Ch]
  __int128 v76; // [rsp+CCh] [rbp-34h]
  int v77; // [rsp+DCh] [rbp-24h]
  __int64 v78; // [rsp+E0h] [rbp-20h] BYREF
  POINTL pptlHTOrg; // [rsp+E8h] [rbp-18h] BYREF
  XLATEOBJ *v80; // [rsp+F0h] [rbp-10h] BYREF
  UINT v81[2]; // [rsp+F8h] [rbp-8h]
  __int64 v82; // [rsp+100h] [rbp+0h] BYREF
  char v83; // [rsp+108h] [rbp+8h]
  int v84; // [rsp+10Ch] [rbp+Ch]
  UINT uMultiplicand[2]; // [rsp+110h] [rbp+10h]
  __int64 v86; // [rsp+118h] [rbp+18h] BYREF
  int v87; // [rsp+120h] [rbp+20h]
  __int64 v88; // [rsp+128h] [rbp+28h]
  __int64 v89; // [rsp+130h] [rbp+30h]
  RECTL prclDest; // [rsp+140h] [rbp+40h] BYREF
  RECTL prclSrc; // [rsp+150h] [rbp+50h] BYREF

  v66 = a5;
  v88 = SURFOBJ_TO_SURFACE(a2);
  v65 = SURFOBJ_TO_SURFACE(a3);
  v9 = SURFOBJ_TO_SURFACE(a4);
  v74 = 0;
  v10 = 0LL;
  v11 = v9;
  v89 = v9;
  v60 = 0;
  v75 = 0LL;
  v76 = 0uLL;
  v77 = 0;
  v12 = *(_DWORD *)(v88 + 96);
  v13 = *(_QWORD *)(v65 + 56);
  v78 = *(_QWORD *)(v88 + 48);
  v58 = 1;
  v64 = v12;
  *(_QWORD *)uMultiplicand = v13;
  HTSEMOBJ::vAcquire((HTSEMOBJ *)&v58);
  if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v78) || (unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v78, 0LL) )
    v10 = (unsigned __int16 *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v78);
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
      v60 = 1;
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
    *(_QWORD *)v81 = v19;
    if ( (((_DWORD)v19 - 8) & v18) != 0 || (_DWORD)v19 == 24 )
      v14 = (v19 + 63) & 0xFFFFFFE0;
    if ( v14 < (int)v19 )
      goto LABEL_38;
    v68 = v14 >> 3;
    if ( UIntMult(v81[1], v14 >> 3, v67) < 0 || UIntAdd(uAugend, v67[0], &uAugend) < 0 )
      goto LABEL_38;
  }
  else
  {
    LODWORD(v19) = v81[0];
    v14 = v67[0];
    v68 = v67[0];
  }
  if ( UIntAdd(0x4Cu, uAugend, &v62) < 0 )
    goto LABEL_38;
  if ( gpCachedEngbrush == v23 )
  {
    v25 = v62;
LABEL_47:
    v26 = PALLOCMEM2(v25, 1919051079LL, 1);
    v23 = 0LL;
    *(_QWORD *)v67 = v26;
    v24 = (__int64)v26;
    if ( v26 )
      goto LABEL_48;
LABEL_38:
    HTSEMOBJ::~HTSEMOBJ((HTSEMOBJ *)&v58);
    return 0LL;
  }
  v24 = _InterlockedExchange64((volatile __int64 *)gpCachedEngbrush, (__int64)v23);
  v25 = v62;
  *(_QWORD *)v67 = v24;
  if ( !v24 )
    goto LABEL_47;
  if ( v62 <= uAugend || *(_DWORD *)(v24 + 4) < v62 )
  {
    Win32FreePool(v24, v21, v22);
    goto LABEL_47;
  }
LABEL_48:
  v27 = puResult;
  v28 = v64;
  v29 = v60 == (_DWORD)v23;
  a1[1].pvRbrush = (PVOID)v24;
  *(_DWORD *)(v24 + 28) = v27;
  v30 = v13;
  *(_DWORD *)(v24 + 4) = v25;
  if ( !v29 )
    v30 = v16;
  v31 = uMultiplicand[1];
  *(_DWORD *)(v24 + 20) = v30;
  *(_QWORD *)(v24 + 32) = v24 + 76;
  *(_DWORD *)(v24 + 72) = v28;
  *(_DWORD *)(v24 + 16) = v16;
  *(_DWORD *)(v24 + 24) = v31;
  v74 = v28;
  v75 = __PAIR64__(v31, v16);
  *(_QWORD *)((char *)&v76 + 4) = v23;
  HIDWORD(v76) = 1;
  v70 = v23;
  v71 = (char)v23;
  v72 = (int)v23;
  SURFMEM::bCreateDIB(
    (SURFMEM *)&v70,
    (struct _DEVBITMAPINFO *)&v74,
    *(void **)(v24 + 32),
    0LL,
    (unsigned int)v23,
    v23,
    (unsigned __int64)v23,
    (_DWORD)v23,
    1,
    (_DWORD)v23,
    (_DWORD)v23);
  if ( !v70 )
    goto LABEL_51;
  prclDest.bottom = v31;
  pptlSrc = 0LL;
  *(_QWORD *)&prclDest.left = 0LL;
  v29 = a1[2].iSolidColor == *(&a1[2].iSolidColor + 1);
  prclDest.right = v13;
  v32 = v29;
  HTSEMOBJ::vRelease((HTSEMOBJ *)&v58);
  if ( v64 == 1 )
  {
    if ( a6 < 0xC )
      goto LABEL_88;
    if ( !v32 )
      goto LABEL_59;
  }
  if ( v64 == 2 && (a1[3].iSolidColor & 5) != 0 && (!v32 || ((__int64)a1[5].pvRbrush & 0x20000) == 0) )
  {
LABEL_59:
    pptlHTOrg = 0LL;
    v33 = 0LL;
    v87 = 0;
    v86 = 0LL;
    v34 = *(_QWORD *)(v88 + 48);
    prclSrc = prclDest;
    *((_QWORD *)v70 + 6) = v34;
    v80 = 0LL;
    if ( a6 >= 6 )
    {
      v35 = 0;
      if ( ((__int64)a1[5].pvRbrush & 0x20000) == 0 )
        goto LABEL_70;
    }
    else
    {
      v35 = 1;
    }
    iSolidColor = a1[3].iSolidColor;
    if ( (iSolidColor & 4) != 0 || (iSolidColor & 1) != 0 )
    {
      if ( v35 )
      {
        v73[0] = *(&a1[2].iSolidColor + 1);
        v37 = a1[1].iSolidColor;
      }
      else
      {
        v73[0] = a1[2].iSolidColor;
        v37 = *(&a1[2].iSolidColor + 1);
      }
      v73[1] = v37;
      if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v86, 1u, 2u, v73, 0, 0, 0, 0x400u, 1) )
      {
        v29 = (unsigned int)EXLATEOBJ::bInitXlateObj(
                              (__int64 *)&v80,
                              *(_QWORD *)&a1[2].flColorType,
                              a1[3].iSolidColor,
                              v86,
                              *((_QWORD *)a1[3].pvRbrush + 15),
                              *(_QWORD *)&a1[4].iSolidColor,
                              *(_QWORD *)&a1[4].iSolidColor,
                              a1[2].iSolidColor,
                              *(&a1[2].iSolidColor + 1),
                              0xFFFFFF,
                              0) == 0;
        v38 = v65;
        if ( !v29 )
        {
          v39 = v80;
          v33 = *(_QWORD *)(v65 + 120);
          v66 = v80;
          *(_QWORD *)(v65 + 120) = 0LL;
          goto LABEL_72;
        }
LABEL_71:
        v39 = v66;
LABEL_72:
        if ( v64 == 1 && v60 )
        {
          prclDest.right = v16;
          v40 = 0LL;
          if ( v70 )
            v40 = (char *)v70 + 24;
          EngHTBlt(v40, v38 + 24, 0LL, 0LL, v39, 0LL, &pptlHTOrg, &prclDest, &prclSrc, 0LL, 64, 0LL);
        }
        else if ( prclDest.left != v16 )
        {
          pxlo = v66;
          v42 = (SURFOBJ *)(v38 + 24);
          do
          {
            v43 = 0LL;
            if ( v70 )
              v43 = (SURFOBJ *)((char *)v70 + 24);
            EngStretchBlt(v43, v42, 0LL, 0LL, pxlo, 0LL, &pptlHTOrg, &prclDest, &prclSrc, 0LL, 4u);
            right = prclDest.right;
            prclDest.left = prclDest.right;
            v45 = v13 + prclDest.right;
            if ( (int)v13 + prclDest.right > v16 )
              v45 = v16;
            prclDest.right = v45;
          }
          while ( right != v16 );
          v24 = *(_QWORD *)v67;
        }
        if ( v33 )
          *(_QWORD *)(v65 + 120) = v33;
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v80);
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v86);
        goto LABEL_96;
      }
    }
LABEL_70:
    v38 = v65;
    goto LABEL_71;
  }
LABEL_88:
  if ( prclDest.left != v16 )
  {
    v46 = v65;
    v47 = v66;
    do
    {
      if ( v70 )
        v48 = (SURFOBJ *)((char *)v70 + 24);
      else
        v48 = 0LL;
      EngCopyBits(v48, (SURFOBJ *)(v46 + 24), 0LL, v47, &prclDest, &pptlSrc);
      v49 = prclDest.right;
      prclDest.left = prclDest.right;
      v50 = v13 + prclDest.right;
      if ( (int)v13 + prclDest.right > v16 )
        v50 = v16;
      prclDest.right = v50;
    }
    while ( v49 != v16 );
  }
LABEL_96:
  HTSEMOBJ::vAcquire((HTSEMOBJ *)&v58);
  v51 = v89;
  if ( v89 )
  {
    v52 = v81[1];
    v53 = uAddend;
    *(_DWORD *)(v24 + 64) = v68;
    *(_DWORD *)(v24 + 40) = v14;
    *(_QWORD *)(v24 + 56) = v24 + v53 + 76;
    *(_DWORD *)(v24 + 44) = v19;
    *(_DWORD *)(v24 + 48) = v52;
    v74 = 1;
    v75 = __PAIR64__(v52, v14);
    *(_QWORD *)((char *)&v76 + 4) = 0LL;
    HIDWORD(v76) = 1;
    v54 = *(void **)(v24 + 56);
    v82 = 0LL;
    v83 = 0;
    v84 = 0;
    SURFMEM::bCreateDIB((SURFMEM *)&v82, (struct _DEVBITMAPINFO *)&v74, v54, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( !v82 )
    {
      SURFMEM::~SURFMEM((SURFMEM *)&v82);
LABEL_51:
      SURFMEM::~SURFMEM((SURFMEM *)&v70);
      goto LABEL_38;
    }
    pptlSrc = 0LL;
    *(_QWORD *)&prclDest.left = 0LL;
    prclDest.right = v19;
    prclDest.bottom = v52;
    HTSEMOBJ::vRelease((HTSEMOBJ *)&v58);
    if ( prclDest.left != v14 )
    {
      do
      {
        v55 = 0LL;
        if ( v82 )
          v55 = (SURFOBJ *)(v82 + 24);
        EngCopyBits(v55, (SURFOBJ *)(v51 + 24), 0LL, 0LL, &prclDest, &pptlSrc);
        v56 = prclDest.right;
        prclDest.left = prclDest.right;
        v57 = v19 + prclDest.right;
        if ( (int)v19 + prclDest.right > v14 )
          v57 = v14;
        prclDest.right = v57;
      }
      while ( v56 != v14 );
    }
    HTSEMOBJ::vAcquire((HTSEMOBJ *)&v58);
    SURFMEM::~SURFMEM((SURFMEM *)&v82);
  }
  else
  {
    *(_QWORD *)(v24 + 56) = 0LL;
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v70);
  HTSEMOBJ::~HTSEMOBJ((HTSEMOBJ *)&v58);
  return 1LL;
}
