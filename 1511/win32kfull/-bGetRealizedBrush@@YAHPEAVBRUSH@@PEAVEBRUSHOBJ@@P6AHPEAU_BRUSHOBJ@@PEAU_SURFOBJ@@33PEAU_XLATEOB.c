/*
 * XREFs of ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00E7048
 * Callers:
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C00E6FE0 (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     ?BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C025AC44 (-BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     BRUSHOBJ_pvGetRbrush @ 0x1C025ADE0 (BRUSHOBJ_pvGetRbrush.c)
 * Callees:
 *     ?pCreateXlate@@YAPEAVXLATE@@K@Z @ 0x1C00093A4 (-pCreateXlate@@YAPEAVXLATE@@K@Z.c)
 *     ?vCheckForTrivial@XLATE@@QEAAXXZ @ 0x1C000955C (-vCheckForTrivial@XLATE@@QEAAXXZ.c)
 *     ?vCheckForICM@XLATE@@QEAAXPEAXK@Z @ 0x1C00095BC (-vCheckForICM@XLATE@@QEAAXPEAXK@Z.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C001BFE0 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C001C078 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0043CE0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0043D20 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C007F5A0 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x1C00BCB9C (-vRelease@HTSEMOBJ@@QEAAXXZ.c)
 *     ?vAcquire@HTSEMOBJ@@QEAAXXZ @ 0x1C00BCBD4 (-vAcquire@HTSEMOBJ@@QEAAXXZ.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z @ 0x1C00E7368 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00E73A8 (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     HT_CreateHalftoneBrush @ 0x1C024D8B8 (HT_CreateHalftoneBrush.c)
 *     EngDitherColor @ 0x1C027D170 (EngDitherColor.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02B6E48 (-bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 */

__int64 __fastcall bGetRealizedBrush(
        struct BRUSH *a1,
        struct EBRUSHOBJ *a2,
        __int64 (__fastcall *a3)(struct _BRUSHOBJ *a1, struct _SURFOBJ *a2, struct _SURFOBJ *a3, struct _SURFOBJ *a4, struct _XLATEOBJ *a5, unsigned int a6))
{
  unsigned int v3; // r13d
  __int64 (__fastcall *v4)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int); // rdi
  __int64 v8; // rax
  struct _SURFOBJ *v9; // rsi
  struct _SURFOBJ *v10; // r12
  int v11; // edx
  void *v12; // rdx
  unsigned int v13; // eax
  bool v14; // cf
  int v15; // eax
  HBITMAP v16; // rdi
  int v17; // r15d
  bool v18; // zf
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // r10
  struct PALETTE *v22; // r9
  int v23; // eax
  unsigned int v24; // r8d
  __int64 v25; // rdx
  int inited; // eax
  XLATEOBJ *v27; // r15
  struct _SURFOBJ *v28; // r8
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rbx
  int v33; // eax
  int NearestIndexFromColorref; // r13d
  int v35; // eax
  int v36; // r12d
  __int64 v37; // r8
  HDEV v38; // rax
  __int64 v39; // rax
  struct _SURFOBJ *v40; // rdx
  unsigned __int16 v41; // cx
  HDEV v42; // rcx
  __int64 v43; // rdx
  ULONG v44; // eax
  ULONG v45; // eax
  HPALETTE *v46; // rbx
  HDEV v47; // rcx
  int v48; // eax
  int v49; // edx
  char v50; // dl
  int v51; // edx
  int v52; // edx
  int v53; // edx
  int v54; // edx
  int v55; // edx
  __int128 *v56; // rax
  __int64 v57; // xmm1_8
  int v58; // eax
  HBITMAP IcmDIB; // rax
  int v60; // edx
  int (*v61)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int); // [rsp+60h] [rbp-A0h] BYREF
  BOOL v62; // [rsp+68h] [rbp-98h] BYREF
  HDEV hdev; // [rsp+70h] [rbp-90h] BYREF
  struct XLATE *Xlate; // [rsp+78h] [rbp-88h] BYREF
  __int64 v65; // [rsp+80h] [rbp-80h] BYREF
  char v66; // [rsp+88h] [rbp-78h]
  int v67; // [rsp+8Ch] [rbp-74h]
  int v68; // [rsp+90h] [rbp-70h] BYREF
  __int64 v69; // [rsp+94h] [rbp-6Ch]
  __int128 v70; // [rsp+9Ch] [rbp-64h]
  int v71; // [rsp+ACh] [rbp-54h]
  __int64 v72; // [rsp+B0h] [rbp-50h] BYREF
  char v73[8]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v74; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v75[4]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 *v76; // [rsp+D8h] [rbp-28h]
  char v77[8]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v78; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v79; // [rsp+F8h] [rbp-8h]

  v3 = *((_DWORD *)a1 + 6);
  v4 = a3;
  v61 = (int (*)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int))a3;
  v62 = v3;
  if ( v3 == 12 )
    return 0LL;
  v8 = *((_QWORD *)a2 + 10);
  v9 = 0LL;
  v65 = 0LL;
  v10 = 0LL;
  v66 = 0;
  v67 = 0;
  hdev = *(HDEV *)(v8 + 48);
  v72 = 0LL;
  Xlate = 0LL;
  if ( ((_DWORD)hdev[14] & 1) == 0 || (v11 = 1, a3 != EngRealizeBrush) )
    v11 = 0;
  NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v73, v11);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v77, (struct PDEVOBJ *)&hdev);
  v13 = *((_DWORD *)a1 + 6);
  if ( v13 < 6 )
  {
    LOBYTE(v12) = 5;
    v31 = HmgShareLock(*((_QWORD *)hdev + *((unsigned int *)a1 + 6) + 186), v12);
    v72 = v31;
    v20 = v31;
    if ( v31 )
    {
      v74 = v31 + 24;
      Xlate = pCreateXlate(2u);
      v32 = (__int64)Xlate;
      if ( Xlate )
      {
        v33 = *((_DWORD *)a2 + 18);
        if ( (v33 & 1) != 0 && *((_QWORD *)a2 + 8) && (v33 & 0x10000000) != 0 )
        {
          NearestIndexFromColorref = *((_DWORD *)a2 + 13);
          v36 = *((_DWORD *)a2 + 6);
          v27 = (XLATEOBJ *)Xlate;
          *((_DWORD *)Xlate + 20) = NearestIndexFromColorref;
          *(_DWORD *)(v32 + 84) = v36;
          XLATE::vCheckForICM((XLATE *)v32, *((void **)a2 + 8), *((_DWORD *)a2 + 18));
        }
        else
        {
          NearestIndexFromColorref = ulGetNearestIndexFromColorref(
                                       *((_QWORD *)a2 + 11),
                                       *((_QWORD *)a2 + 12),
                                       *((unsigned int *)a2 + 13),
                                       1LL);
          v35 = ulGetNearestIndexFromColorref(
                  *((_QWORD *)a2 + 11),
                  *((_QWORD *)a2 + 12),
                  *((unsigned int *)a2 + 6),
                  1LL);
          v36 = v35;
          if ( *(_DWORD *)(*((_QWORD *)a2 + 10) + 96LL) == 1
            && *(_DWORD *)(*((_QWORD *)a2 + 11) + 28LL)
            && *((_DWORD *)a2 + 13) != *((_DWORD *)a2 + 6)
            && NearestIndexFromColorref == v35 )
          {
            v36 = 1 - NearestIndexFromColorref;
          }
          *(_DWORD *)(v32 + 80) = NearestIndexFromColorref;
          *(_DWORD *)(v32 + 84) = v36;
          v27 = (XLATEOBJ *)v32;
          XLATE::vCheckForICM((XLATE *)v32, *((void **)a2 + 8), *((_DWORD *)a2 + 18));
          XLATE::vCheckForTrivial((XLATE *)v32);
        }
        *(_QWORD *)(v32 + 40) = ppalMono;
        *(_QWORD *)(v32 + 48) = *((_QWORD *)a2 + 11);
        *(_QWORD *)(v32 + 56) = *((_QWORD *)a2 + 12);
        *(_DWORD *)(v32 + 76) |= 0x100u;
        *(_DWORD *)(v32 + 28) = NearestIndexFromColorref;
        v3 = v62;
        *(_DWORD *)(v32 + 32) = v36;
        v10 = (struct _SURFOBJ *)v74;
        goto LABEL_24;
      }
    }
    goto LABEL_28;
  }
  v14 = v13 < 0xC;
  v15 = *((_DWORD *)a2 + 18);
  if ( v14 )
  {
    if ( (v15 & 1) != 0 && *((_QWORD *)a2 + 8) && (v15 & 0x10000000) != 0 )
      goto LABEL_28;
    v37 = *((unsigned int *)a2 + 6);
    if ( (v37 & 0x1000000) != 0 )
      *((_DWORD *)a2 + 6) = rgbFromColorref(*((_QWORD *)a2 + 11), *((_QWORD *)a2 + 12), v37);
    v38 = hdev;
    if ( ((_DWORD)hdev[462] & 0x200000) != 0 && v4 != EngRealizeBrush )
    {
      v39 = *((_QWORD *)a2 + 10);
      v40 = 0LL;
      if ( v39 )
        v40 = (struct _SURFOBJ *)(v39 + 24);
      if ( (unsigned int)v4((struct _BRUSHOBJ *)a2, v40, 0LL, 0LL, 0LL, *((_DWORD *)a2 + 6) | 0x80000000) )
      {
        LODWORD(v9) = 1;
        goto LABEL_28;
      }
      v38 = hdev;
    }
    v68 = 0;
    v69 = 0LL;
    v70 = 0uLL;
    v71 = 0;
    if ( *(_DWORD *)(*((_QWORD *)a2 + 10) + 96LL) == 1 )
      v68 = 1;
    else
      v68 = *((_DWORD *)v38 + 533);
    v41 = *((_WORD *)v38 + 1068);
    if ( !v41 )
      goto LABEL_28;
    if ( !*((_WORD *)v38 + 1069) )
      goto LABEL_28;
    LODWORD(v69) = v41;
    HIDWORD(v69) = *((unsigned __int16 *)v38 + 1069);
    *(_QWORD *)((char *)&v70 + 4) = 0LL;
    HIDWORD(v70) = 1;
    if ( !SURFMEM::bCreateDIB((SURFMEM *)&v65, (struct _DEVBITMAPINFO *)&v68, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      goto LABEL_28;
    v42 = hdev;
    v43 = (unsigned int)(*(_DWORD *)(*((_QWORD *)a2 + 10) + 96LL) == 1) + 1;
    if ( *((_QWORD *)hdev + 353) )
    {
      if ( ((_DWORD)hdev[14] & 0x8000) == 0 )
        v42 = (HDEV)*((_QWORD *)hdev + 228);
      v44 = (*((__int64 (__fastcall **)(HDEV, __int64, _QWORD, _QWORD))hdev + 353))(
              v42,
              v43,
              *((unsigned int *)a2 + 6),
              *(_QWORD *)(v65 + 72));
    }
    else
    {
      v44 = EngDitherColor(hdev, v43, *((_DWORD *)a2 + 6), *(ULONG **)(v65 + 72));
    }
    v45 = v44 - 1;
    if ( !v45 )
    {
      v27 = xloIdent;
      goto LABEL_98;
    }
    if ( v45 != 1 )
      goto LABEL_28;
    v62 = v4 == EngRealizeBrush;
    HTSEMOBJ::vAcquire((HTSEMOBJ *)&v62);
    if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&hdev) || (unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&hdev, 0LL) )
    {
      v46 = (HPALETTE *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&hdev);
      LODWORD(v74) = *((_DWORD *)a2 + 6);
      v47 = hdev;
      v76 = &v74;
      v48 = *((_DWORD *)a2 + 18);
      v75[0] = 262400;
      v49 = *((_DWORD *)hdev + 601) >> 7;
      v75[1] = 255;
      v50 = ~(_BYTE)v49 & 2;
      v75[2] = 1;
      LOBYTE(v61) = v50;
      if ( (v48 & 4) != 0 || (v48 & 0x20) == 0 && (v48 & 3) != 0 )
        LOBYTE(v61) = v50 | 0x10;
      if ( __PAIR64__(*((unsigned __int16 *)v46 + 5), *((unsigned __int16 *)v46 + 4)) != v69 )
      {
        SURFACE::bDeleteSurface(v65, 0LL, 0LL);
        LODWORD(v69) = *((unsigned __int16 *)v46 + 4);
        HIDWORD(v69) = *((unsigned __int16 *)v46 + 5);
        if ( !SURFMEM::bCreateDIB((SURFMEM *)&v65, (struct _DEVBITMAPINFO *)&v68, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
          goto LABEL_94;
        v47 = hdev;
      }
      v51 = *((_DWORD *)v47 + 600);
      if ( v51 )
      {
        v52 = v51 - 2;
        if ( v52 )
        {
          v53 = v52 - 1;
          if ( v53 )
          {
            v54 = v53 - 1;
            if ( v54 )
            {
              v55 = v54 - 1;
              if ( v55 )
              {
                if ( v55 != 2 )
                  goto LABEL_94;
                BYTE1(v61) = 6;
              }
              else
              {
                BYTE1(v61) = -3;
              }
            }
            else
            {
              BYTE1(v61) = -2;
            }
          }
          else
          {
            BYTE1(v61) = -1;
          }
        }
        else
        {
          BYTE1(v61) = 2;
        }
      }
      else
      {
        BYTE1(v61) = 1;
      }
      BYTE3(v61) = *((_BYTE *)v47 + 2392);
      v56 = (__int128 *)*((_QWORD *)a2 + 7);
      BYTE2(v61) = 4;
      v57 = *((_QWORD *)v56 + 2);
      v78 = *v56;
      WORD5(v78) = 10000;
      v79 = v57;
      *(_DWORD *)((char *)&v78 + 6) = 655370000;
      if ( (int)HT_CreateHalftoneBrush(
                  (_DWORD)v46,
                  (unsigned int)&v78,
                  (unsigned int)v75,
                  (_DWORD)v61,
                  *(_QWORD *)(v65 + 72)) > 0 )
      {
        if ( ((_DWORD)hdev[14] & 0x200) != 0 )
        {
          v27 = xloIdent;
LABEL_96:
          HTSEMOBJ::vRelease((HTSEMOBJ *)&v62);
LABEL_98:
          if ( v65 )
          {
            v28 = (struct _SURFOBJ *)(v65 + 24);
            goto LABEL_25;
          }
          if ( v4 != EngRealizeBrush )
          {
            v28 = 0LL;
            goto LABEL_25;
          }
          goto LABEL_28;
        }
        EPALOBJ::EPALOBJ((EPALOBJ *)&v61, *v46);
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             (__int64 *)&Xlate,
                             *((_QWORD *)a2 + 8),
                             *((_DWORD *)a2 + 18),
                             (__int64)v61,
                             *(_QWORD *)(*((_QWORD *)a2 + 10) + 120LL),
                             *((_QWORD *)a2 + 12),
                             *((_QWORD *)a2 + 12),
                             *((_DWORD *)a2 + 12),
                             *((_DWORD *)a2 + 13),
                             0xFFFFFF,
                             0) )
        {
          v27 = (XLATEOBJ *)Xlate;
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v61);
          goto LABEL_96;
        }
        EPALOBJ::~EPALOBJ((EPALOBJ *)&v61);
      }
    }
LABEL_94:
    HTSEMOBJ::vRelease((HTSEMOBJ *)&v62);
    goto LABEL_28;
  }
  v16 = (HBITMAP)*((_QWORD *)a1 + 4);
  v17 = 0;
  if ( (v15 & 1) == 0 )
  {
    if ( (v15 & 4) == 0 )
    {
      v18 = (v15 & 2) == 0;
      goto LABEL_10;
    }
LABEL_108:
    v17 = 1;
    goto LABEL_11;
  }
  v12 = (void *)*((_QWORD *)a2 + 8);
  if ( !v12 )
    goto LABEL_108;
  v58 = *((_DWORD *)a1 + 12);
  if ( (v58 & 0x80u) == 0 )
  {
    v18 = (v58 & 0x20000) == 0;
LABEL_10:
    if ( v18 )
      goto LABEL_11;
    goto LABEL_108;
  }
  if ( !*((_DWORD *)a1 + 22) )
  {
    IcmDIB = BRUSH::hFindIcmDIB(a1, v12);
    if ( IcmDIB )
    {
      v16 = IcmDIB;
      v17 = 1;
    }
  }
LABEL_11:
  LOBYTE(v12) = 5;
  v19 = HmgShareLock(v16, v12);
  v72 = v19;
  v20 = v19;
  if ( !v19 )
    goto LABEL_28;
  v21 = *((_QWORD *)a2 + 10);
  v22 = *(struct PALETTE **)(v19 + 120);
  v23 = *((_DWORD *)a1 + 12);
  if ( (v23 & 0x1000) != 0 )
  {
    inited = EXLATEOBJ::bMakeXlate(
               &Xlate,
               *((_QWORD *)v22 + 16),
               *((_QWORD *)a2 + 12),
               *((_QWORD *)a2 + 10),
               *((_DWORD *)v22 + 15),
               *((_DWORD *)v22 + 7));
    goto LABEL_22;
  }
  if ( (v23 & 0x2000) == 0 )
  {
    if ( (*(_WORD *)(v20 + 100) || *(_QWORD *)(v20 + 24)) && *(HDEV *)(v20 + 48) != hdev )
      goto LABEL_28;
    if ( v22 )
      goto LABEL_17;
    v60 = *(_DWORD *)(v20 + 96);
    if ( v60 == *((_DWORD *)hdev + 533) )
    {
      if ( ((_DWORD)hdev[549] & 0x100) == 0 )
      {
        v22 = (struct PALETTE *)*((_QWORD *)hdev + 229);
LABEL_17:
        if ( v17 )
          v24 = *((_DWORD *)a2 + 18);
        else
          v24 = 0;
        if ( v17 )
          v25 = *((_QWORD *)a2 + 8);
        else
          v25 = 0LL;
        inited = EXLATEOBJ::bInitXlateObj(
                   (__int64 *)&Xlate,
                   v25,
                   v24,
                   (__int64)v22,
                   *(_QWORD *)(v21 + 120),
                   *((_QWORD *)a2 + 12),
                   *((_QWORD *)a2 + 12),
                   *((_DWORD *)a2 + 12),
                   *((_DWORD *)a2 + 13),
                   0xFFFFFF,
                   0);
LABEL_22:
        if ( inited )
        {
          v27 = (XLATEOBJ *)Xlate;
LABEL_24:
          v28 = (struct _SURFOBJ *)(v20 + 24);
          v4 = (__int64 (__fastcall *)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int))v61;
LABEL_25:
          v29 = *((_QWORD *)a2 + 10);
          if ( v29 )
            v9 = (struct _SURFOBJ *)(v29 + 24);
          LODWORD(v9) = v4((struct _BRUSHOBJ *)a2, v9, v28, v10, v27, v3);
          goto LABEL_28;
        }
        goto LABEL_28;
      }
    }
    else
    {
      if ( v60 == *((_DWORD *)a2 + 28) )
      {
        v22 = (struct PALETTE *)*((_QWORD *)a2 + 13);
        goto LABEL_17;
      }
      if ( v60 == 3 )
      {
        if ( ((_DWORD)hdev[549] & 0x100) == 0 )
        {
          v22 = ppalDefaultSurface8bpp;
          goto LABEL_17;
        }
      }
      else if ( ((_DWORD)hdev[14] & 0x20000) == 0 )
      {
        goto LABEL_28;
      }
    }
    v22 = 0LL;
    goto LABEL_17;
  }
  if ( *(_DWORD *)(v20 + 96) == *(_DWORD *)(v21 + 96) )
  {
    v27 = xloIdent;
    goto LABEL_24;
  }
LABEL_28:
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v77);
  NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v73);
  SURFMEM::~SURFMEM((SURFMEM *)&v65);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&Xlate, v30);
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v72);
  return (unsigned int)v9;
}
