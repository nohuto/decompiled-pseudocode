/*
 * XREFs of ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00BB4A0
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C001BFE0 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C001C078 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     EngStretchBlt @ 0x1C003E600 (EngStretchBlt.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0043CE0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0043D20 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     UIntAdd @ 0x1C00A93FC (UIntAdd.c)
 *     EngHTBlt @ 0x1C00BAC98 (EngHTBlt.c)
 *     EngCopyBits @ 0x1C00BC250 (EngCopyBits.c)
 *     ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x1C00BCB9C (-vRelease@HTSEMOBJ@@QEAAXXZ.c)
 *     ?vAcquire@HTSEMOBJ@@QEAAXXZ @ 0x1C00BCBD4 (-vAcquire@HTSEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ??1HTSEMOBJ@@QEAA@XZ @ 0x1C01C2E04 (--1HTSEMOBJ@@QEAA@XZ.c)
 *     UIntMult @ 0x1C01DCF90 (UIntMult.c)
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
  __int64 v31; // rdx
  __int64 v32; // r12
  __int64 v33; // rcx
  int v34; // ecx
  ULONG iSolidColor; // eax
  ULONG v36; // eax
  __int64 v37; // rax
  XLATEOBJ *v38; // r8
  SURFOBJ *v39; // rcx
  XLATEOBJ *pxlo; // r14
  SURFOBJ *v41; // r13
  SURFOBJ *v42; // rcx
  LONG right; // ecx
  LONG v44; // eax
  __int64 v45; // r12
  XLATEOBJ *v46; // r13
  SURFOBJ *v47; // rcx
  LONG v48; // ecx
  LONG v49; // eax
  __int64 v50; // rsi
  LONG v51; // ebx
  __int64 v52; // rcx
  void *v53; // r8
  SURFOBJ *v54; // rcx
  LONG v55; // ecx
  LONG v56; // eax
  int v57; // [rsp+60h] [rbp-A0h] BYREF
  UINT uAddend; // [rsp+64h] [rbp-9Ch] BYREF
  int v59; // [rsp+68h] [rbp-98h]
  UINT uAugend; // [rsp+6Ch] [rbp-94h] BYREF
  int v61; // [rsp+70h] [rbp-90h]
  UINT puResult; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v63; // [rsp+78h] [rbp-88h]
  UINT v64; // [rsp+80h] [rbp-80h] BYREF
  XLATEOBJ *v65; // [rsp+88h] [rbp-78h]
  UINT v66[2]; // [rsp+90h] [rbp-70h] BYREF
  POINTL pptlSrc; // [rsp+98h] [rbp-68h] BYREF
  struct RBRUSH *v68; // [rsp+A0h] [rbp-60h] BYREF
  char v69; // [rsp+A8h] [rbp-58h]
  int v70; // [rsp+ACh] [rbp-54h]
  int v71; // [rsp+B0h] [rbp-50h]
  unsigned int v72[2]; // [rsp+B8h] [rbp-48h] BYREF
  int v73; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v74; // [rsp+C4h] [rbp-3Ch]
  __int128 v75; // [rsp+CCh] [rbp-34h]
  int v76; // [rsp+DCh] [rbp-24h]
  UINT v77[2]; // [rsp+E0h] [rbp-20h]
  XLATEOBJ *v78; // [rsp+E8h] [rbp-18h] BYREF
  POINTL pptlHTOrg; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v80; // [rsp+F8h] [rbp-8h] BYREF
  char v81; // [rsp+100h] [rbp+0h]
  int v82; // [rsp+104h] [rbp+4h]
  __int64 v83; // [rsp+108h] [rbp+8h] BYREF
  UINT uMultiplicand[2]; // [rsp+110h] [rbp+10h]
  __int64 v85; // [rsp+118h] [rbp+18h] BYREF
  int v86; // [rsp+120h] [rbp+20h]
  __int64 v87; // [rsp+128h] [rbp+28h]
  __int64 v88; // [rsp+130h] [rbp+30h]
  RECTL prclDest; // [rsp+140h] [rbp+40h] BYREF
  XLATEOBJ prclSrc[4]; // [rsp+150h] [rbp+50h] BYREF

  v65 = a5;
  v88 = SURFOBJ_TO_SURFACE(a2);
  v63 = SURFOBJ_TO_SURFACE(a3);
  v9 = SURFOBJ_TO_SURFACE(a4);
  v73 = 0;
  v10 = 0LL;
  v11 = v9;
  v87 = v9;
  v59 = 0;
  v74 = 0LL;
  v75 = 0uLL;
  v76 = 0;
  v12 = *(_DWORD *)(v88 + 96);
  v13 = *(_QWORD *)(v63 + 56);
  v83 = *(_QWORD *)(v88 + 48);
  v57 = 1;
  v61 = v12;
  *(_QWORD *)uMultiplicand = v13;
  HTSEMOBJ::vAcquire((HTSEMOBJ *)&v57);
  if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v83) || (unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v83, 0LL) )
    v10 = (unsigned __int16 *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v83);
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
      v59 = 1;
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
    *(_QWORD *)v77 = v19;
    if ( (((_DWORD)v19 - 8) & v18) != 0 || (_DWORD)v19 == 24 )
      v14 = (v19 + 63) & 0xFFFFFFE0;
    if ( v14 < (int)v19 )
      goto LABEL_38;
    v71 = v14 >> 3;
    if ( UIntMult(v77[1], v14 >> 3, v66) < 0 || UIntAdd(uAugend, v66[0], &uAugend) < 0 )
      goto LABEL_38;
  }
  else
  {
    LODWORD(v19) = v77[0];
    v14 = v66[0];
    v71 = v66[0];
  }
  if ( UIntAdd(0x4Cu, uAugend, &v64) < 0 )
    goto LABEL_38;
  if ( gpCachedEngbrush == v21 )
  {
    v23 = v64;
LABEL_47:
    v24 = PALLOCMEM2(v23, 1919051079LL, 1);
    v21 = 0LL;
    *(_QWORD *)v66 = v24;
    v22 = (__int64)v24;
    if ( v24 )
      goto LABEL_48;
LABEL_38:
    HTSEMOBJ::~HTSEMOBJ((HTSEMOBJ *)&v57);
    return 0LL;
  }
  v22 = _InterlockedExchange64((volatile __int64 *)gpCachedEngbrush, (__int64)v21);
  v23 = v64;
  *(_QWORD *)v66 = v22;
  if ( !v22 )
    goto LABEL_47;
  if ( v64 <= uAugend || *(_DWORD *)(v22 + 4) < v64 )
  {
    Win32FreePool(v22);
    goto LABEL_47;
  }
LABEL_48:
  v25 = puResult;
  v26 = v61;
  v27 = v59 == (_DWORD)v21;
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
  v73 = v26;
  v74 = __PAIR64__(v29, v16);
  *(_QWORD *)((char *)&v75 + 4) = v21;
  HIDWORD(v75) = 1;
  v68 = v21;
  v69 = (char)v21;
  v70 = (int)v21;
  SURFMEM::bCreateDIB(
    (SURFMEM *)&v68,
    (struct _DEVBITMAPINFO *)&v73,
    *(void **)(v22 + 32),
    0LL,
    (unsigned int)v21,
    v21,
    (unsigned __int64)v21,
    (_DWORD)v21,
    1,
    (_DWORD)v21,
    (_DWORD)v21);
  if ( !v68 )
    goto LABEL_51;
  prclDest.bottom = v29;
  pptlSrc = 0LL;
  *(_QWORD *)&prclDest.left = 0LL;
  v27 = a1[2].iSolidColor == *(&a1[2].iSolidColor + 1);
  prclDest.right = v13;
  v30 = v27;
  HTSEMOBJ::vRelease((HTSEMOBJ *)&v57);
  v31 = 0x20000LL;
  if ( v61 == 1 )
  {
    if ( a6 < 0xC )
      goto LABEL_88;
    if ( !v30 )
      goto LABEL_59;
  }
  if ( v61 == 2 && (a1[3].iSolidColor & 5) != 0 && (!v30 || ((__int64)a1[5].pvRbrush & 0x20000) == 0) )
  {
LABEL_59:
    v32 = 0LL;
    v86 = 0;
    v85 = 0LL;
    v33 = *(_QWORD *)(v88 + 48);
    pptlHTOrg = 0LL;
    *(RECTL *)&prclSrc[0].iUniq = prclDest;
    *((_QWORD *)v68 + 6) = v33;
    v78 = 0LL;
    if ( a6 >= 6 )
    {
      v34 = 0;
      if ( ((__int64)a1[5].pvRbrush & 0x20000) == 0 )
        goto LABEL_70;
    }
    else
    {
      v34 = 1;
    }
    iSolidColor = a1[3].iSolidColor;
    if ( (iSolidColor & 4) != 0 || (iSolidColor & 1) != 0 )
    {
      if ( v34 )
      {
        v72[0] = *(&a1[2].iSolidColor + 1);
        v36 = a1[1].iSolidColor;
      }
      else
      {
        v72[0] = a1[2].iSolidColor;
        v36 = *(&a1[2].iSolidColor + 1);
      }
      v72[1] = v36;
      if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v85, 1u, 2u, v72, 0, 0, 0, 0x400u) )
      {
        v27 = (unsigned int)EXLATEOBJ::bInitXlateObj(
                              (__int64 *)&v78,
                              *(_QWORD *)&a1[2].flColorType,
                              a1[3].iSolidColor,
                              v85,
                              *((_QWORD *)a1[3].pvRbrush + 15),
                              *(_QWORD *)&a1[4].iSolidColor,
                              *(_QWORD *)&a1[4].iSolidColor,
                              a1[2].iSolidColor,
                              *(&a1[2].iSolidColor + 1),
                              0xFFFFFF,
                              0) == 0;
        v37 = v63;
        if ( !v27 )
        {
          v38 = v78;
          v32 = *(_QWORD *)(v63 + 120);
          v65 = v78;
          *(_QWORD *)(v63 + 120) = 0LL;
          goto LABEL_72;
        }
LABEL_71:
        v38 = v65;
LABEL_72:
        if ( v61 == 1 && v59 )
        {
          prclDest.right = v16;
          v39 = 0LL;
          if ( v68 )
            v39 = (SURFOBJ *)((char *)v68 + 24);
          EngHTBlt(
            v39,
            (SURFOBJ *)(v37 + 24),
            0LL,
            0LL,
            (struct XLATE *)v38,
            0LL,
            (__int64)&pptlHTOrg,
            (XLATEOBJ *)&prclDest,
            prclSrc,
            0LL,
            64,
            0LL);
        }
        else if ( prclDest.left != v16 )
        {
          pxlo = v65;
          v41 = (SURFOBJ *)(v37 + 24);
          do
          {
            v42 = 0LL;
            if ( v68 )
              v42 = (SURFOBJ *)((char *)v68 + 24);
            EngStretchBlt(v42, v41, 0LL, 0LL, pxlo, 0LL, &pptlHTOrg, &prclDest, (RECTL *)prclSrc, 0LL, 4u);
            right = prclDest.right;
            prclDest.left = prclDest.right;
            v44 = v13 + prclDest.right;
            if ( (int)v13 + prclDest.right > v16 )
              v44 = v16;
            prclDest.right = v44;
          }
          while ( right != v16 );
          v22 = *(_QWORD *)v66;
        }
        if ( v32 )
          *(_QWORD *)(v63 + 120) = v32;
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v78, v31);
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v85);
        goto LABEL_96;
      }
    }
LABEL_70:
    v37 = v63;
    goto LABEL_71;
  }
LABEL_88:
  if ( prclDest.left != v16 )
  {
    v45 = v63;
    v46 = v65;
    do
    {
      if ( v68 )
        v47 = (SURFOBJ *)((char *)v68 + 24);
      else
        v47 = 0LL;
      EngCopyBits(v47, (SURFOBJ *)(v45 + 24), 0LL, v46, &prclDest, &pptlSrc);
      v48 = prclDest.right;
      prclDest.left = prclDest.right;
      v49 = v13 + prclDest.right;
      if ( (int)v13 + prclDest.right > v16 )
        v49 = v16;
      prclDest.right = v49;
    }
    while ( v48 != v16 );
  }
LABEL_96:
  HTSEMOBJ::vAcquire((HTSEMOBJ *)&v57);
  v50 = v87;
  if ( v87 )
  {
    v51 = v77[1];
    v52 = uAddend;
    *(_DWORD *)(v22 + 64) = v71;
    *(_DWORD *)(v22 + 40) = v14;
    *(_QWORD *)(v22 + 56) = v22 + v52 + 76;
    *(_DWORD *)(v22 + 44) = v19;
    *(_DWORD *)(v22 + 48) = v51;
    v73 = 1;
    v74 = __PAIR64__(v51, v14);
    *(_QWORD *)((char *)&v75 + 4) = 0LL;
    HIDWORD(v75) = 1;
    v53 = *(void **)(v22 + 56);
    v80 = 0LL;
    v81 = 0;
    v82 = 0;
    SURFMEM::bCreateDIB((SURFMEM *)&v80, (struct _DEVBITMAPINFO *)&v73, v53, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( !v80 )
    {
      SURFMEM::~SURFMEM((SURFMEM *)&v80);
LABEL_51:
      SURFMEM::~SURFMEM((SURFMEM *)&v68);
      goto LABEL_38;
    }
    pptlSrc = 0LL;
    *(_QWORD *)&prclDest.left = 0LL;
    prclDest.right = v19;
    prclDest.bottom = v51;
    HTSEMOBJ::vRelease((HTSEMOBJ *)&v57);
    if ( prclDest.left != v14 )
    {
      do
      {
        v54 = 0LL;
        if ( v80 )
          v54 = (SURFOBJ *)(v80 + 24);
        EngCopyBits(v54, (SURFOBJ *)(v50 + 24), 0LL, 0LL, &prclDest, &pptlSrc);
        v55 = prclDest.right;
        prclDest.left = prclDest.right;
        v56 = v19 + prclDest.right;
        if ( (int)v19 + prclDest.right > v14 )
          v56 = v14;
        prclDest.right = v56;
      }
      while ( v55 != v14 );
    }
    HTSEMOBJ::vAcquire((HTSEMOBJ *)&v57);
    SURFMEM::~SURFMEM((SURFMEM *)&v80);
  }
  else
  {
    *(_QWORD *)(v22 + 56) = 0LL;
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v68);
  HTSEMOBJ::~HTSEMOBJ((HTSEMOBJ *)&v57);
  return 1LL;
}
