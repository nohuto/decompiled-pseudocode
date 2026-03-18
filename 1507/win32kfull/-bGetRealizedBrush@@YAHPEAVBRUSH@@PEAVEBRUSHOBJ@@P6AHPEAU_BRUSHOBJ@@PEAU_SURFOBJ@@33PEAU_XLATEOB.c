/*
 * XREFs of ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00CF43C
 * Callers:
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C00CF3D8 (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     ?BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C025ACE8 (-BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     BRUSHOBJ_pvGetRbrush @ 0x1C025AEB0 (BRUSHOBJ_pvGetRbrush.c)
 * Callees:
 *     ?pCreateXlate@@YAPEAVXLATE@@K@Z @ 0x1C000567C (-pCreateXlate@@YAPEAVXLATE@@K@Z.c)
 *     ?vCheckForTrivial@XLATE@@QEAAXXZ @ 0x1C0005914 (-vCheckForTrivial@XLATE@@QEAAXXZ.c)
 *     ?vCheckForICM@XLATE@@QEAAXPEAXK@Z @ 0x1C0005974 (-vCheckForICM@XLATE@@QEAAXPEAXK@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z @ 0x1C0016744 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0016784 (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0026660 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C0030758 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C00307F0 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     ?vAcquire@HTSEMOBJ@@QEAAXXZ @ 0x1C00A1D44 (-vAcquire@HTSEMOBJ@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00EB1E4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ??1EXLATEOBJ@@QEAA@XZ @ 0x1C01C1354 (--1EXLATEOBJ@@QEAA@XZ.c)
 *     ?vAltLock@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C01C135C (-vAltLock@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 *     ??1NEEDGRELOCK@@QEAA@XZ @ 0x1C01C138C (--1NEEDGRELOCK@@QEAA@XZ.c)
 *     ??1HTSEMOBJ@@QEAA@XZ @ 0x1C01C1394 (--1HTSEMOBJ@@QEAA@XZ.c)
 *     HT_CreateHalftoneBrush @ 0x1C024D928 (HT_CreateHalftoneBrush.c)
 *     ?vAltCheckLock@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C025AE00 (-vAltCheckLock@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 *     EngDitherColor @ 0x1C027DBD0 (EngDitherColor.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C02B0114 (--0SURFREF@@QEAA@XZ.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02B7A38 (-bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 */

__int64 __fastcall bGetRealizedBrush(
        struct BRUSH *a1,
        struct EBRUSHOBJ *a2,
        __int64 (__fastcall *a3)(struct _BRUSHOBJ *a1, struct _SURFOBJ *a2, struct _SURFOBJ *a3, struct _SURFOBJ *a4, struct _XLATEOBJ *a5, unsigned int a6))
{
  unsigned int v3; // r15d
  struct _SURFOBJ *v8; // rdi
  struct _SURFOBJ *v9; // r12
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rbx
  int v14; // eax
  int NearestIndexFromColorref; // r12d
  int v16; // r15d
  XLATEOBJ *v17; // r14
  int v18; // eax
  bool v19; // cf
  int v20; // eax
  __int64 v21; // r8
  HDEV v22; // rax
  __int64 v23; // rax
  struct _SURFOBJ *v24; // rdx
  unsigned __int16 v25; // cx
  HDEV v26; // rcx
  __int64 v27; // rdx
  ULONG v28; // eax
  ULONG v29; // eax
  unsigned __int8 v30; // al
  HPALETTE *v31; // r14
  HDEV v32; // rcx
  int v33; // eax
  int v34; // edx
  char v35; // dl
  int v36; // edx
  int v37; // edx
  int v38; // edx
  int v39; // edx
  int v40; // edx
  __int128 *v41; // rax
  __int64 v42; // xmm1_8
  size_t HalftoneBrush; // rcx
  __int64 v44; // rax
  void *v45; // rbx
  __int64 v46; // rbx
  HSURF v47; // r15
  int v48; // r14d
  void *v49; // rdx
  int v50; // eax
  HBITMAP IcmDIB; // rax
  bool v52; // zf
  __int64 v53; // rdx
  __int64 v54; // r10
  int v55; // eax
  struct PALETTE *v56; // r9
  int inited; // eax
  int v58; // r8d
  int v59; // r8d
  void *v60; // rdx
  struct _SURFOBJ *v61; // r8
  __int64 v62; // rax
  BOOL v63; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v64; // [rsp+68h] [rbp-98h] BYREF
  HDEV hdev; // [rsp+70h] [rbp-90h] BYREF
  struct XLATE *Xlate; // [rsp+78h] [rbp-88h] BYREF
  char v67[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v68; // [rsp+88h] [rbp-78h] BYREF
  char v69; // [rsp+90h] [rbp-70h]
  int v70; // [rsp+94h] [rbp-6Ch]
  int v71; // [rsp+98h] [rbp-68h] BYREF
  __int64 v72; // [rsp+9Ch] [rbp-64h]
  __int128 v73; // [rsp+A4h] [rbp-5Ch]
  int v74; // [rsp+B4h] [rbp-4Ch]
  char v75[8]; // [rsp+B8h] [rbp-48h] BYREF
  struct _SURFOBJ *v76; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v77[4]; // [rsp+C8h] [rbp-38h] BYREF
  struct _SURFOBJ **v78; // [rsp+D8h] [rbp-28h]
  _BYTE v79[32]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v80; // [rsp+100h] [rbp+0h]
  char v81[8]; // [rsp+108h] [rbp+8h] BYREF
  __int128 v82; // [rsp+110h] [rbp+10h] BYREF
  __int64 v83; // [rsp+120h] [rbp+20h]

  v3 = *((_DWORD *)a1 + 6);
  v63 = v3;
  if ( v3 == 12 )
    return 0LL;
  v8 = 0LL;
  v9 = 0LL;
  SURFREF::SURFREF((SURFREF *)v79);
  v10 = *((_QWORD *)a2 + 10);
  v68 = 0LL;
  v69 = 0;
  v70 = 0;
  hdev = *(HDEV *)(v10 + 48);
  Xlate = 0LL;
  if ( ((_DWORD)hdev[14] & 1) == 0 || (v11 = 1, a3 != EngRealizeBrush) )
    v11 = 0;
  NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v75, v11);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v81, (struct PDEVOBJ *)&hdev);
  v12 = *((unsigned int *)a1 + 6);
  if ( (unsigned int)v12 < 6 )
  {
    SURFREF::vAltCheckLock((SURFREF *)v79, *((HSURF *)hdev + v12 + 186));
    if ( !v80 )
      goto LABEL_137;
    v76 = (struct _SURFOBJ *)(v80 + 24);
    Xlate = pCreateXlate(2u);
    v13 = (__int64)Xlate;
    if ( !Xlate )
      goto LABEL_137;
    v14 = *((_DWORD *)a2 + 18);
    if ( (v14 & 1) != 0 && *((_QWORD *)a2 + 8) && (v14 & 0x10000000) != 0 )
    {
      NearestIndexFromColorref = *((_DWORD *)a2 + 13);
      v16 = *((_DWORD *)a2 + 6);
      v17 = (XLATEOBJ *)Xlate;
      *((_DWORD *)Xlate + 20) = NearestIndexFromColorref;
      *(_DWORD *)(v13 + 84) = v16;
      XLATE::vCheckForICM((XLATE *)v13, *((void **)a2 + 8), *((_DWORD *)a2 + 18));
    }
    else
    {
      NearestIndexFromColorref = ulGetNearestIndexFromColorref(
                                   *((_QWORD *)a2 + 11),
                                   *((_QWORD *)a2 + 12),
                                   *((unsigned int *)a2 + 13),
                                   1LL);
      v18 = ulGetNearestIndexFromColorref(*((_QWORD *)a2 + 11), *((_QWORD *)a2 + 12), *((unsigned int *)a2 + 6), 1LL);
      v16 = v18;
      if ( *(_DWORD *)(*((_QWORD *)a2 + 10) + 96LL) == 1
        && *(_DWORD *)(*((_QWORD *)a2 + 11) + 28LL)
        && *((_DWORD *)a2 + 13) != *((_DWORD *)a2 + 6)
        && NearestIndexFromColorref == v18 )
      {
        v16 = 1 - NearestIndexFromColorref;
      }
      *(_DWORD *)(v13 + 80) = NearestIndexFromColorref;
      *(_DWORD *)(v13 + 84) = v16;
      v17 = (XLATEOBJ *)v13;
      XLATE::vCheckForICM((XLATE *)v13, *((void **)a2 + 8), *((_DWORD *)a2 + 18));
      XLATE::vCheckForTrivial((XLATE *)v13);
    }
    *(_QWORD *)(v13 + 40) = ppalMono;
    *(_QWORD *)(v13 + 48) = *((_QWORD *)a2 + 11);
    *(_QWORD *)(v13 + 56) = *((_QWORD *)a2 + 12);
    *(_DWORD *)(v13 + 76) |= 0x100u;
    *(_DWORD *)(v13 + 28) = NearestIndexFromColorref;
    v9 = v76;
    *(_DWORD *)(v13 + 32) = v16;
LABEL_126:
    v3 = v63;
    goto LABEL_127;
  }
  v19 = (unsigned int)v12 < 0xC;
  v20 = *((_DWORD *)a2 + 18);
  if ( !v19 )
  {
    v47 = (HSURF)*((_QWORD *)a1 + 4);
    v48 = 0;
    if ( (v20 & 1) != 0 )
    {
      v49 = (void *)*((_QWORD *)a2 + 8);
      if ( v49 )
      {
        v50 = *((_DWORD *)a1 + 12);
        if ( (v50 & 0x80u) != 0 )
        {
          if ( !*((_DWORD *)a1 + 22) )
          {
            IcmDIB = BRUSH::hFindIcmDIB(a1, v49);
            if ( IcmDIB )
            {
              v47 = (HSURF)IcmDIB;
              v48 = 1;
            }
          }
LABEL_97:
          SURFREF::vAltLock((SURFREF *)v79, v47);
          v53 = v80;
          if ( !v80 )
            goto LABEL_137;
          v54 = *((_QWORD *)a2 + 10);
          v55 = *((_DWORD *)a1 + 12);
          v56 = *(struct PALETTE **)(v80 + 120);
          if ( (v55 & 0x1000) != 0 )
          {
            inited = EXLATEOBJ::bMakeXlate(
                       &Xlate,
                       *((_QWORD *)v56 + 16),
                       *((_QWORD *)a2 + 12),
                       *((_QWORD *)a2 + 10),
                       *((_DWORD *)v56 + 15),
                       *((_DWORD *)v56 + 7));
LABEL_124:
            if ( !inited )
              goto LABEL_137;
            v17 = (XLATEOBJ *)Xlate;
            goto LABEL_126;
          }
          if ( (v55 & 0x2000) != 0 )
          {
            if ( *(_DWORD *)(v80 + 96) != *(_DWORD *)(v54 + 96) )
              goto LABEL_137;
            v17 = xloIdent;
            v3 = v63;
            goto LABEL_128;
          }
          if ( (*(_WORD *)(v80 + 100) || *(_QWORD *)(v80 + 24)) && *(HDEV *)(v80 + 48) != hdev )
            goto LABEL_137;
          if ( !v56 )
          {
            v58 = *(_DWORD *)(v80 + 96);
            if ( v58 == *((_DWORD *)hdev + 533) )
            {
              if ( ((_DWORD)hdev[549] & 0x100) == 0 )
              {
                v56 = (struct PALETTE *)*((_QWORD *)hdev + 229);
                goto LABEL_117;
              }
            }
            else
            {
              if ( v58 == *((_DWORD *)a2 + 28) )
              {
                v56 = (struct PALETTE *)*((_QWORD *)a2 + 13);
                goto LABEL_117;
              }
              if ( v58 == 3 )
              {
                if ( ((_DWORD)hdev[549] & 0x100) == 0 )
                {
                  v56 = ppalDefaultSurface8bpp;
                  goto LABEL_117;
                }
              }
              else if ( ((_DWORD)hdev[14] & 0x20000) == 0 )
              {
                goto LABEL_137;
              }
            }
            v56 = 0LL;
          }
LABEL_117:
          if ( v48 )
            v59 = *((_DWORD *)a2 + 18);
          else
            v59 = 0;
          if ( v48 )
            v60 = (void *)*((_QWORD *)a2 + 8);
          else
            v60 = 0LL;
          inited = EXLATEOBJ::bInitXlateObj(
                     (__int64 *)&Xlate,
                     v60,
                     v59,
                     (__int64)v56,
                     *(_QWORD *)(v54 + 120),
                     *((_QWORD *)a2 + 12),
                     *((_QWORD *)a2 + 12),
                     *((_DWORD *)a2 + 12),
                     *((_DWORD *)a2 + 13),
                     0xFFFFFF,
                     0);
          goto LABEL_124;
        }
        v52 = (v50 & 0x20000) == 0;
        goto LABEL_95;
      }
    }
    else if ( (v20 & 4) == 0 )
    {
      v52 = (v20 & 2) == 0;
LABEL_95:
      if ( v52 )
        goto LABEL_97;
    }
    v48 = 1;
    goto LABEL_97;
  }
  if ( (v20 & 1) != 0 && *((_QWORD *)a2 + 8) && (v20 & 0x10000000) != 0 )
    goto LABEL_137;
  v21 = *((unsigned int *)a2 + 6);
  if ( (v21 & 0x1000000) != 0 )
    *((_DWORD *)a2 + 6) = rgbFromColorref(*((_QWORD *)a2 + 11), *((_QWORD *)a2 + 12), v21);
  v22 = hdev;
  if ( ((_DWORD)hdev[462] & 0x200000) != 0 && a3 != EngRealizeBrush )
  {
    v23 = *((_QWORD *)a2 + 10);
    v24 = 0LL;
    if ( v23 )
      v24 = (struct _SURFOBJ *)(v23 + 24);
    if ( (unsigned int)a3((struct _BRUSHOBJ *)a2, v24, 0LL, 0LL, 0LL, *((_DWORD *)a2 + 6) | 0x80000000) )
    {
      LODWORD(v8) = 1;
      goto LABEL_137;
    }
    v22 = hdev;
  }
  v71 = 0;
  v72 = 0LL;
  v73 = 0uLL;
  v74 = 0;
  if ( *(_DWORD *)(*((_QWORD *)a2 + 10) + 96LL) == 1 )
    v71 = 1;
  else
    v71 = *((_DWORD *)v22 + 533);
  v25 = *((_WORD *)v22 + 1068);
  if ( !v25 )
    goto LABEL_137;
  if ( !*((_WORD *)v22 + 1069) )
    goto LABEL_137;
  LODWORD(v72) = v25;
  HIDWORD(v72) = *((unsigned __int16 *)v22 + 1069);
  *(_QWORD *)((char *)&v73 + 4) = 0LL;
  HIDWORD(v73) = 1;
  if ( !SURFMEM::bCreateDIB((SURFMEM *)&v68, (struct _DEVBITMAPINFO *)&v71, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
    goto LABEL_137;
  v26 = hdev;
  v27 = (unsigned int)(*(_DWORD *)(*((_QWORD *)a2 + 10) + 96LL) == 1) + 1;
  if ( *((_QWORD *)hdev + 353) )
  {
    if ( ((_DWORD)hdev[14] & 0x8000) == 0 )
      v26 = (HDEV)*((_QWORD *)hdev + 228);
    v28 = (*((__int64 (__fastcall **)(HDEV, __int64, _QWORD, _QWORD))hdev + 353))(
            v26,
            v27,
            *((unsigned int *)a2 + 6),
            *(_QWORD *)(v68 + 72));
  }
  else
  {
    v28 = EngDitherColor(hdev, v27, *((_DWORD *)a2 + 6), *(ULONG **)(v68 + 72));
  }
  v29 = v28 - 1;
  if ( !v29 )
  {
    v17 = xloIdent;
    goto LABEL_127;
  }
  if ( v29 != 1 )
    goto LABEL_137;
  if ( a3 != EngRealizeBrush
    || (v52 = (unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemDynamicModeChange) == 0, v30 = 1, !v52) )
  {
    v30 = 0;
  }
  NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v67, v30);
  v63 = a3 == EngRealizeBrush;
  HTSEMOBJ::vAcquire((HTSEMOBJ *)&v63);
  if ( !PDEVOBJ::pDevHTInfo((PDEVOBJ *)&hdev) && !(unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&hdev, 0LL) )
    goto LABEL_74;
  v31 = (HPALETTE *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&hdev);
  LODWORD(v76) = *((_DWORD *)a2 + 6);
  v32 = hdev;
  v78 = &v76;
  v33 = *((_DWORD *)a2 + 18);
  v77[0] = 262400;
  v34 = *((_DWORD *)hdev + 601) >> 7;
  v77[1] = 255;
  v35 = ~(_BYTE)v34 & 2;
  v77[2] = 1;
  LOBYTE(v64) = v35;
  if ( (v33 & 4) != 0 || (v33 & 0x20) == 0 && (v33 & 3) != 0 )
    LOBYTE(v64) = v35 | 0x10;
  if ( __PAIR64__(*((unsigned __int16 *)v31 + 5), *((unsigned __int16 *)v31 + 4)) != v72 )
  {
    SURFACE::bDeleteSurface(v68, 0LL, 0LL);
    LODWORD(v72) = *((unsigned __int16 *)v31 + 4);
    HIDWORD(v72) = *((unsigned __int16 *)v31 + 5);
    if ( !SURFMEM::bCreateDIB((SURFMEM *)&v68, (struct _DEVBITMAPINFO *)&v71, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      goto LABEL_74;
    v32 = hdev;
  }
  v36 = *((_DWORD *)v32 + 600);
  if ( v36 )
  {
    v37 = v36 - 2;
    if ( v37 )
    {
      v38 = v37 - 1;
      if ( v38 )
      {
        v39 = v38 - 1;
        if ( v39 )
        {
          v40 = v39 - 1;
          if ( v40 )
          {
            if ( v40 != 2 )
              goto LABEL_74;
            BYTE1(v64) = 6;
          }
          else
          {
            BYTE1(v64) = -3;
          }
        }
        else
        {
          BYTE1(v64) = -2;
        }
      }
      else
      {
        BYTE1(v64) = -1;
      }
    }
    else
    {
      BYTE1(v64) = 2;
    }
  }
  else
  {
    BYTE1(v64) = 1;
  }
  BYTE3(v64) = *((_BYTE *)v32 + 2392);
  v41 = (__int128 *)*((_QWORD *)a2 + 7);
  BYTE2(v64) = 4;
  v42 = *((_QWORD *)v41 + 2);
  v82 = *v41;
  *(_DWORD *)((char *)&v82 + 6) = 655370000;
  WORD5(v82) = 10000;
  v83 = v42;
  HalftoneBrush = (unsigned int)HT_CreateHalftoneBrush((_DWORD)v31, (unsigned int)&v82, (unsigned int)v77, v64, 0LL);
  v44 = v68;
  if ( (int)HalftoneBrush > *(_DWORD *)(v68 + 64) )
  {
    v45 = PALLOCMEM2(HalftoneBrush, 1835167815LL, 1);
    if ( v45 )
    {
      SURFACE::bDeleteSurface(v68, 0LL, 0LL);
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v68, (struct _DEVBITMAPINFO *)&v71, v45, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
        Win32FreePool(v45);
        goto LABEL_74;
      }
      *(_BYTE *)(v68 + 584) = 1;
      v44 = v68;
      goto LABEL_76;
    }
LABEL_74:
    HTSEMOBJ::~HTSEMOBJ((HTSEMOBJ *)&v63);
    NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v67);
    goto LABEL_137;
  }
LABEL_76:
  if ( (int)HT_CreateHalftoneBrush((_DWORD)v31, (unsigned int)&v82, (unsigned int)v77, v64, *(_QWORD *)(v44 + 72)) <= 0 )
    goto LABEL_74;
  if ( ((_DWORD)hdev[14] & 0x200) != 0 )
  {
    v17 = xloIdent;
  }
  else
  {
    EPALOBJ::EPALOBJ((EPALOBJ *)&v64, *v31);
    v46 = v64;
    if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                          (__int64 *)&Xlate,
                          *((void **)a2 + 8),
                          *((_DWORD *)a2 + 18),
                          v64,
                          *(_QWORD *)(*((_QWORD *)a2 + 10) + 120LL),
                          *((_QWORD *)a2 + 12),
                          *((_QWORD *)a2 + 12),
                          *((_DWORD *)a2 + 12),
                          *((_DWORD *)a2 + 13),
                          0xFFFFFF,
                          0) )
    {
      if ( v46 )
        DEC_SHARE_REF_CNT(v46);
      goto LABEL_74;
    }
    v17 = (XLATEOBJ *)Xlate;
    if ( v46 )
      DEC_SHARE_REF_CNT(v46);
  }
  HTSEMOBJ::~HTSEMOBJ((HTSEMOBJ *)&v63);
  NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v67);
LABEL_127:
  v53 = v80;
LABEL_128:
  if ( v53 )
  {
    v61 = (struct _SURFOBJ *)(v53 + 24);
LABEL_134:
    v62 = *((_QWORD *)a2 + 10);
    if ( v62 )
      v8 = (struct _SURFOBJ *)(v62 + 24);
    LODWORD(v8) = a3((struct _BRUSHOBJ *)a2, v8, v61, v9, v17, v3);
    goto LABEL_137;
  }
  if ( v68 )
  {
    v61 = (struct _SURFOBJ *)(v68 + 24);
    goto LABEL_134;
  }
  if ( a3 != EngRealizeBrush )
  {
    v61 = 0LL;
    goto LABEL_134;
  }
LABEL_137:
  NEEDGRELOCK::~NEEDGRELOCK((NEEDGRELOCK *)v81);
  NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v75);
  SURFMEM::~SURFMEM((SURFMEM *)&v68);
  EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&Xlate);
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v79);
  return (unsigned int)v8;
}
