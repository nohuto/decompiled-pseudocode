/*
 * XREFs of ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00F12E4
 * Callers:
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C00F127C (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     ?BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C0257D84 (-BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     BRUSHOBJ_pvGetRbrush @ 0x1C0257FF0 (BRUSHOBJ_pvGetRbrush.c)
 * Callees:
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C0029594 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C002962C (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C003A3A4 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00499C0 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z @ 0x1C0049E60 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0049EA0 (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00F0E34 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C00F0E60 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vAcquire@HTSEMOBJ@@QEAAXXZ @ 0x1C00F32D8 (-vAcquire@HTSEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ?vCheckForICM@XLATE@@QEAAXPEAXK@Z @ 0x1C01BF2F4 (-vCheckForICM@XLATE@@QEAAXPEAXK@Z.c)
 *     ?vCheckForTrivial@XLATE@@QEAAXXZ @ 0x1C01BF378 (-vCheckForTrivial@XLATE@@QEAAXXZ.c)
 *     ??1EXLATEOBJ@@QEAA@XZ @ 0x1C01BF500 (--1EXLATEOBJ@@QEAA@XZ.c)
 *     ?vAltCheckLock@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C01BF52C (-vAltCheckLock@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 *     ?vAltLock@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C01BF550 (-vAltLock@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 *     ??1NEEDGRELOCK@@QEAA@XZ @ 0x1C01BF574 (--1NEEDGRELOCK@@QEAA@XZ.c)
 *     ??1HTSEMOBJ@@QEAA@XZ @ 0x1C01BF57C (--1HTSEMOBJ@@QEAA@XZ.c)
 *     HT_CreateHalftoneBrush @ 0x1C0249F68 (HT_CreateHalftoneBrush.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0257CE4 (--0SURFREF@@QEAA@XZ.c)
 *     ?bIsCMYKColor@EBRUSHOBJ@@QEAAHXZ @ 0x1C0257EFC (-bIsCMYKColor@EBRUSHOBJ@@QEAAHXZ.c)
 *     EngDitherColor @ 0x1C027B360 (EngDitherColor.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02B9FE8 (-bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?pCreateXlate@@YAPEAVXLATE@@K@Z @ 0x1C02BA2E4 (-pCreateXlate@@YAPEAVXLATE@@K@Z.c)
 */

__int64 __fastcall bGetRealizedBrush(
        struct BRUSH *a1,
        struct EBRUSHOBJ *a2,
        __int64 (__fastcall *a3)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int))
{
  unsigned int v3; // r15d
  struct _SURFOBJ *v8; // rdi
  struct _SURFOBJ *v9; // r12
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rbx
  int NearestIndexFromColorref; // r12d
  int v15; // r15d
  XLATEOBJ *v16; // r14
  int v17; // eax
  __int64 v18; // r8
  HDEV v19; // rax
  __int64 v20; // rax
  struct _SURFOBJ *v21; // rdx
  unsigned __int16 v22; // cx
  HDEV v23; // rcx
  __int64 v24; // rdx
  ULONG v25; // eax
  ULONG v26; // eax
  unsigned __int8 v27; // al
  HPALETTE *v28; // r14
  HDEV v29; // rcx
  int v30; // eax
  int v31; // edx
  char v32; // dl
  int v33; // edx
  int v34; // edx
  int v35; // edx
  int v36; // edx
  int v37; // edx
  __int128 *v38; // rax
  __int64 v39; // xmm1_8
  size_t HalftoneBrush; // rcx
  __int64 v41; // rax
  void *v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // r8
  int v45; // eax
  int v46; // r8d
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
  unsigned int v59; // r8d
  __int64 v60; // rdx
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
  struct _SURFOBJ *v75; // [rsp+B8h] [rbp-48h] BYREF
  char v76[8]; // [rsp+C0h] [rbp-40h] BYREF
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
  NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v76, v11);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v81, (struct PDEVOBJ *)&hdev);
  v12 = *((unsigned int *)a1 + 6);
  if ( (unsigned int)v12 < 6 )
  {
    SURFREF::vAltCheckLock((SURFREF *)v79, *((HSURF *)hdev + v12 + 186));
    if ( !v80 )
      goto LABEL_133;
    v75 = (struct _SURFOBJ *)(v80 + 24);
    Xlate = pCreateXlate(2u);
    v13 = (__int64)Xlate;
    if ( !Xlate )
      goto LABEL_133;
    if ( (unsigned int)EBRUSHOBJ::bIsCMYKColor(a2) )
    {
      NearestIndexFromColorref = *((_DWORD *)a2 + 13);
      v15 = *((_DWORD *)a2 + 6);
      v16 = (XLATEOBJ *)v13;
      *(_DWORD *)(v13 + 80) = NearestIndexFromColorref;
      *(_DWORD *)(v13 + 84) = v15;
      XLATE::vCheckForICM((XLATE *)v13, *((void **)a2 + 8), *((_DWORD *)a2 + 18));
    }
    else
    {
      NearestIndexFromColorref = ulGetNearestIndexFromColorref(
                                   *((_QWORD *)a2 + 11),
                                   *((_QWORD *)a2 + 12),
                                   *((unsigned int *)a2 + 13),
                                   1LL);
      v17 = ulGetNearestIndexFromColorref(*((_QWORD *)a2 + 11), *((_QWORD *)a2 + 12), *((unsigned int *)a2 + 6), 1LL);
      v15 = v17;
      if ( *(_DWORD *)(*((_QWORD *)a2 + 10) + 96LL) == 1
        && *(_DWORD *)(*((_QWORD *)a2 + 11) + 28LL)
        && *((_DWORD *)a2 + 13) != *((_DWORD *)a2 + 6)
        && NearestIndexFromColorref == v17 )
      {
        v15 = 1 - NearestIndexFromColorref;
      }
      *(_DWORD *)(v13 + 80) = NearestIndexFromColorref;
      *(_DWORD *)(v13 + 84) = v15;
      v16 = (XLATEOBJ *)v13;
      XLATE::vCheckForICM((XLATE *)v13, *((void **)a2 + 8), *((_DWORD *)a2 + 18));
      XLATE::vCheckForTrivial((XLATE *)v13);
    }
    *(_QWORD *)(v13 + 40) = ppalMono;
    *(_QWORD *)(v13 + 48) = *((_QWORD *)a2 + 11);
    *(_QWORD *)(v13 + 56) = *((_QWORD *)a2 + 12);
    *(_DWORD *)(v13 + 76) |= 0x100u;
    *(_DWORD *)(v13 + 28) = NearestIndexFromColorref;
    v9 = v75;
    *(_DWORD *)(v13 + 32) = v15;
LABEL_122:
    v3 = v63;
    goto LABEL_123;
  }
  if ( (unsigned int)v12 >= 0xC )
  {
    v45 = *((_DWORD *)a2 + 18);
    v46 = 1;
    v47 = (HSURF)*((_QWORD *)a1 + 4);
    v48 = 0;
    if ( (v45 & 1) != 0 )
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
LABEL_93:
          SURFREF::vAltLock((SURFREF *)v79, v47);
          v53 = v80;
          if ( !v80 )
            goto LABEL_133;
          v54 = *((_QWORD *)a2 + 10);
          v55 = *((_DWORD *)a1 + 12);
          v56 = *(struct PALETTE **)(v80 + 120);
          if ( (v55 & 0x1000) != 0 )
          {
            inited = EXLATEOBJ::bMakeXlate(
                       &Xlate,
                       *((_QWORD *)v56 + 15),
                       *((_QWORD *)a2 + 12),
                       *((_QWORD *)a2 + 10),
                       *((_DWORD *)v56 + 15),
                       *((_DWORD *)v56 + 7));
LABEL_120:
            if ( !inited )
              goto LABEL_133;
            v16 = (XLATEOBJ *)Xlate;
            goto LABEL_122;
          }
          if ( (v55 & 0x2000) != 0 )
          {
            if ( *(_DWORD *)(v80 + 96) != *(_DWORD *)(v54 + 96) )
              goto LABEL_133;
            v16 = xloIdent;
            v3 = v63;
            goto LABEL_124;
          }
          if ( (*(_WORD *)(v80 + 100) || *(_QWORD *)(v80 + 24)) && *(HDEV *)(v80 + 48) != hdev )
            goto LABEL_133;
          if ( !v56 )
          {
            v58 = *(_DWORD *)(v80 + 96);
            if ( v58 == *((_DWORD *)hdev + 533) )
            {
              if ( ((_DWORD)hdev[549] & 0x100) == 0 )
              {
                v56 = (struct PALETTE *)*((_QWORD *)hdev + 229);
                goto LABEL_113;
              }
            }
            else
            {
              if ( v58 == *((_DWORD *)a2 + 28) )
              {
                v56 = (struct PALETTE *)*((_QWORD *)a2 + 13);
                goto LABEL_113;
              }
              if ( v58 == 3 )
              {
                if ( ((_DWORD)hdev[549] & 0x100) == 0 )
                {
                  v56 = ppalDefaultSurface8bpp;
                  goto LABEL_113;
                }
              }
              else if ( ((_DWORD)hdev[14] & 0x20000) == 0 )
              {
                goto LABEL_133;
              }
            }
            v56 = 0LL;
          }
LABEL_113:
          if ( v48 )
            v59 = *((_DWORD *)a2 + 18);
          else
            v59 = 0;
          if ( v48 )
            v60 = *((_QWORD *)a2 + 8);
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
          goto LABEL_120;
        }
        v52 = (v50 & 0x20000) == 0;
        goto LABEL_91;
      }
      if ( (unsigned int)EBRUSHOBJ::bIsCMYKColor(a2) )
        goto LABEL_93;
    }
    else if ( (v45 & 4) == 0 )
    {
      v52 = (v45 & 2) == 0;
LABEL_91:
      if ( v52 )
        goto LABEL_93;
    }
    v48 = v46;
    goto LABEL_93;
  }
  if ( (unsigned int)EBRUSHOBJ::bIsCMYKColor(a2) )
    goto LABEL_133;
  v18 = *((unsigned int *)a2 + 6);
  if ( (v18 & 0x1000000) != 0 )
    *((_DWORD *)a2 + 6) = rgbFromColorref(*((_QWORD *)a2 + 11), *((_QWORD *)a2 + 12), v18);
  v19 = hdev;
  if ( ((_DWORD)hdev[462] & 0x200000) != 0 && a3 != EngRealizeBrush )
  {
    v20 = *((_QWORD *)a2 + 10);
    v21 = 0LL;
    if ( v20 )
      v21 = (struct _SURFOBJ *)(v20 + 24);
    if ( (unsigned int)a3((struct _BRUSHOBJ *)a2, v21, 0LL, 0LL, 0LL, *((_DWORD *)a2 + 6) | 0x80000000) )
    {
      LODWORD(v8) = 1;
      goto LABEL_133;
    }
    v19 = hdev;
  }
  v71 = 0;
  v72 = 0LL;
  v73 = 0uLL;
  v74 = 0;
  if ( *(_DWORD *)(*((_QWORD *)a2 + 10) + 96LL) == 1 )
    v71 = 1;
  else
    v71 = *((_DWORD *)v19 + 533);
  v22 = *((_WORD *)v19 + 1068);
  if ( !v22 )
    goto LABEL_133;
  if ( !*((_WORD *)v19 + 1069) )
    goto LABEL_133;
  LODWORD(v72) = v22;
  HIDWORD(v72) = *((unsigned __int16 *)v19 + 1069);
  *(_QWORD *)((char *)&v73 + 4) = 0LL;
  HIDWORD(v73) = 1;
  if ( !SURFMEM::bCreateDIB((SURFMEM *)&v68, (struct _DEVBITMAPINFO *)&v71, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
    goto LABEL_133;
  v23 = hdev;
  v24 = (unsigned int)(*(_DWORD *)(*((_QWORD *)a2 + 10) + 96LL) == 1) + 1;
  if ( *((_QWORD *)hdev + 352) )
  {
    if ( ((_DWORD)hdev[14] & 0x8000) == 0 )
      v23 = (HDEV)*((_QWORD *)hdev + 228);
    v25 = (*((__int64 (__fastcall **)(HDEV, __int64, _QWORD, _QWORD))hdev + 352))(
            v23,
            v24,
            *((unsigned int *)a2 + 6),
            *(_QWORD *)(v68 + 72));
  }
  else
  {
    v25 = EngDitherColor(hdev, v24, *((_DWORD *)a2 + 6), *(ULONG **)(v68 + 72));
  }
  v26 = v25 - 1;
  if ( !v26 )
  {
    v16 = xloIdent;
    goto LABEL_123;
  }
  if ( v26 != 1 )
    goto LABEL_133;
  if ( a3 != EngRealizeBrush
    || (v52 = (unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemDynamicModeChange) == 0, v27 = 1, !v52) )
  {
    v27 = 0;
  }
  NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v67, v27);
  v63 = a3 == EngRealizeBrush;
  HTSEMOBJ::vAcquire((HTSEMOBJ *)&v63);
  if ( !PDEVOBJ::pDevHTInfo((PDEVOBJ *)&hdev) && !(unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&hdev, 0LL) )
    goto LABEL_70;
  v28 = (HPALETTE *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&hdev);
  LODWORD(v75) = *((_DWORD *)a2 + 6);
  v29 = hdev;
  v78 = &v75;
  v30 = *((_DWORD *)a2 + 18);
  v77[0] = 262400;
  v31 = *((_DWORD *)hdev + 601) >> 7;
  v77[1] = 255;
  v32 = ~(_BYTE)v31 & 2;
  v77[2] = 1;
  LOBYTE(v64) = v32;
  if ( (v30 & 4) != 0 || (v30 & 0x20) == 0 && (v30 & 3) != 0 )
    LOBYTE(v64) = v32 | 0x10;
  if ( __PAIR64__(*((unsigned __int16 *)v28 + 5), *((unsigned __int16 *)v28 + 4)) != v72 )
  {
    SURFACE::bDeleteSurface(v68, 0LL, 0LL);
    LODWORD(v72) = *((unsigned __int16 *)v28 + 4);
    HIDWORD(v72) = *((unsigned __int16 *)v28 + 5);
    if ( !SURFMEM::bCreateDIB((SURFMEM *)&v68, (struct _DEVBITMAPINFO *)&v71, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      goto LABEL_70;
    v29 = hdev;
  }
  v33 = *((_DWORD *)v29 + 600);
  if ( v33 )
  {
    v34 = v33 - 2;
    if ( v34 )
    {
      v35 = v34 - 1;
      if ( v35 )
      {
        v36 = v35 - 1;
        if ( v36 )
        {
          v37 = v36 - 1;
          if ( v37 )
          {
            if ( v37 != 2 )
              goto LABEL_70;
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
  BYTE3(v64) = *((_BYTE *)v29 + 2392);
  v38 = (__int128 *)*((_QWORD *)a2 + 7);
  BYTE2(v64) = 4;
  v39 = *((_QWORD *)v38 + 2);
  v82 = *v38;
  *(_DWORD *)((char *)&v82 + 6) = 655370000;
  WORD5(v82) = 10000;
  v83 = v39;
  HalftoneBrush = (unsigned int)HT_CreateHalftoneBrush((_DWORD)v28, (unsigned int)&v82, (unsigned int)v77, v64, 0LL);
  v41 = v68;
  if ( (int)HalftoneBrush > *(_DWORD *)(v68 + 64) )
  {
    v42 = PALLOCMEM2(HalftoneBrush, 1835167815LL, 1);
    if ( v42 )
    {
      SURFACE::bDeleteSurface(v68, 0LL, 0LL);
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v68, (struct _DEVBITMAPINFO *)&v71, v42, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
        Win32FreePool(v42, v43, v44);
        goto LABEL_70;
      }
      *(_BYTE *)(v68 + 592) = 1;
      v41 = v68;
      goto LABEL_72;
    }
LABEL_70:
    HTSEMOBJ::~HTSEMOBJ((HTSEMOBJ *)&v63);
    NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v67);
    goto LABEL_133;
  }
LABEL_72:
  if ( (int)HT_CreateHalftoneBrush((_DWORD)v28, (unsigned int)&v82, (unsigned int)v77, v64, *(_QWORD *)(v41 + 72)) <= 0 )
    goto LABEL_70;
  if ( ((_DWORD)hdev[14] & 0x200) != 0 )
  {
    v16 = xloIdent;
  }
  else
  {
    EPALOBJ::EPALOBJ((EPALOBJ *)&v64, *v28);
    if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                          (__int64 *)&Xlate,
                          *((_QWORD *)a2 + 8),
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
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v64);
      goto LABEL_70;
    }
    v16 = (XLATEOBJ *)Xlate;
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v64);
  }
  HTSEMOBJ::~HTSEMOBJ((HTSEMOBJ *)&v63);
  NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v67);
LABEL_123:
  v53 = v80;
LABEL_124:
  if ( v53 )
  {
    v61 = (struct _SURFOBJ *)(v53 + 24);
LABEL_130:
    v62 = *((_QWORD *)a2 + 10);
    if ( v62 )
      v8 = (struct _SURFOBJ *)(v62 + 24);
    LODWORD(v8) = a3((struct _BRUSHOBJ *)a2, v8, v61, v9, v16, v3);
    goto LABEL_133;
  }
  if ( v68 )
  {
    v61 = (struct _SURFOBJ *)(v68 + 24);
    goto LABEL_130;
  }
  if ( a3 != EngRealizeBrush )
  {
    v61 = 0LL;
    goto LABEL_130;
  }
LABEL_133:
  NEEDGRELOCK::~NEEDGRELOCK((NEEDGRELOCK *)v81);
  NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v76);
  SURFMEM::~SURFMEM((SURFMEM *)&v68);
  EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&Xlate);
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v79);
  return (unsigned int)v8;
}
