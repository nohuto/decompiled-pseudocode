/*
 * XREFs of ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C026E880
 * Callers:
 *     <none>
 * Callees:
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002DA14 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C003BB68 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0041C98 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ??YERECTL@@QEAAXAEAU_RECTL@@@Z @ 0x1C0041CE8 (--YERECTL@@QEAAXAEAU_RECTL@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0053D80 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0053DB0 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C0068580 (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0068678 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00686A0 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     OffBitBlt @ 0x1C00E9B20 (OffBitBlt.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00EA460 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00EAAE8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffCopyBits @ 0x1C00EAB10 (OffCopyBits.c)
 *     ?vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ @ 0x1C00EACBC (-vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ.c)
 *     ?bRedo@UNDOW32THREADPIDLOCKS@@QEAAHXZ @ 0x1C00EAD40 (-bRedo@UNDOW32THREADPIDLOCKS@@QEAAHXZ.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C00EAD88 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C00EADFC (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C00EAF4C (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C026E384 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C02729FC (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C02763E4 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C02787F0 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C027A120 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 */

__int64 __fastcall bSpBltScreenToScreen(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  unsigned int v11; // edi
  struct _RECTL *v12; // r15
  struct _SURFOBJ *v13; // r8
  RECTL rclBounds; // xmm6
  int v15; // eax
  struct _SPRITESTATE *v16; // rsi
  int v17; // r13d
  int v18; // r14d
  int v19; // ebx
  int v20; // eax
  struct _POINTL *v22; // rdx
  struct _CLIPOBJ *v23; // r9
  struct _RECTL *v24; // r8
  POINTL *v25; // r11
  struct _SURFOBJ *v26; // r13
  struct SPRITE *v27; // rbx
  struct _SURFOBJ *v28; // rsi
  POINTL *v29; // rax
  __int64 v30; // rbx
  LONG v31; // ecx
  __int64 ThreadWin32Thread; // rax
  XDCOBJ *v33; // rsi
  XCLIPOBJ *v34; // r14
  __int64 v35; // rdx
  struct REGION *v36; // rax
  HDEV v37; // rax
  BOOL (__stdcall *v38)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  BOOL (__stdcall *v39)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  int v40; // eax
  struct _POINTL *v41; // rdx
  struct _CLIPOBJ *v42; // [rsp+78h] [rbp-90h] BYREF
  int v43; // [rsp+80h] [rbp-88h]
  LONG v44; // [rsp+84h] [rbp-84h]
  int v45; // [rsp+88h] [rbp-80h]
  struct _POINTL v46; // [rsp+90h] [rbp-78h] BYREF
  LONG v47; // [rsp+98h] [rbp-70h]
  int v48; // [rsp+9Ch] [rbp-6Ch]
  int v49; // [rsp+A0h] [rbp-68h]
  struct _RECTL v50; // [rsp+A8h] [rbp-60h] BYREF
  HDEV hdev; // [rsp+B8h] [rbp-50h] BYREF
  int v52; // [rsp+C0h] [rbp-48h]
  __int64 v53; // [rsp+C8h] [rbp-40h] BYREF
  int v54; // [rsp+D0h] [rbp-38h]
  struct SPRITE *v55; // [rsp+D8h] [rbp-30h] BYREF
  int v56[2]; // [rsp+E0h] [rbp-28h]
  struct _SPRITESTATE *v57; // [rsp+E8h] [rbp-20h]
  int v58[2]; // [rsp+F0h] [rbp-18h]
  int v59; // [rsp+F8h] [rbp-10h]
  struct _SURFOBJ *v60; // [rsp+100h] [rbp-8h]
  __int64 v61; // [rsp+108h] [rbp+0h] BYREF
  __int64 v62; // [rsp+110h] [rbp+8h]
  struct SPRITE *v63; // [rsp+118h] [rbp+10h] BYREF
  struct REGION *v64; // [rsp+120h] [rbp+18h] BYREF
  struct SPRITE *v65; // [rsp+128h] [rbp+20h] BYREF
  struct _SURFOBJ *v66; // [rsp+130h] [rbp+28h]
  __int64 v67; // [rsp+138h] [rbp+30h]
  struct _POINTL *v68; // [rsp+140h] [rbp+38h]
  __int64 v69; // [rsp+148h] [rbp+40h]
  _BYTE v70[8]; // [rsp+150h] [rbp+48h] BYREF
  struct _RECTL v71; // [rsp+158h] [rbp+50h] BYREF
  __int64 v72; // [rsp+168h] [rbp+60h]
  __int64 *v73[3]; // [rsp+170h] [rbp+68h] BYREF
  _BYTE v74[80]; // [rsp+188h] [rbp+80h] BYREF
  int v75; // [rsp+1D8h] [rbp+D0h]
  _BYTE v76[96]; // [rsp+1E8h] [rbp+E0h] BYREF
  struct _SPRITESTATE *v77[24]; // [rsp+248h] [rbp+140h] BYREF
  struct _RECTL v78; // [rsp+308h] [rbp+200h] BYREF
  struct _RECTL v79; // [rsp+318h] [rbp+210h] BYREF
  struct _RECTL v80; // [rsp+328h] [rbp+220h] BYREF
  RECTL v81; // [rsp+338h] [rbp+230h] BYREF
  RECTL v82; // [rsp+348h] [rbp+240h] BYREF
  _QWORD v83[3]; // [rsp+358h] [rbp+250h] BYREF
  struct _RECTL v84; // [rsp+370h] [rbp+268h] BYREF

  v11 = 0;
  v12 = a6;
  v62 = (__int64)a5;
  v68 = a8;
  v72 = (__int64)a9;
  v67 = (__int64)a3;
  v13 = a1;
  v69 = (__int64)a10;
  v66 = a1;
  v42 = a4;
  v81 = 0LL;
  if ( a4 && a4->iDComplexity )
  {
    rclBounds = a4->rclBounds;
    v81 = rclBounds;
    if ( ERECTL::bEmpty((ERECTL *)&v81) )
      return 1LL;
    v82 = rclBounds;
    ERECTL::operator*=(&v82, a6);
    v12 = &v82;
  }
  hdev = v13->hdev;
  memset(v73, 0, sizeof(v73));
  UNDOW32THREADPIDLOCKS::vUndo((UNDOW32THREADPIDLOCKS *)v73);
  v15 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&hdev);
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)v70, ghsemSprite, v15);
  if ( !(unsigned int)UNDOW32THREADPIDLOCKS::bRedo(v73) )
    goto LABEL_131;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v77, (struct PDEVOBJ *)&hdev);
  v16 = (struct _SPRITESTATE *)(hdev + 24);
  v17 = v12->left - a7->x;
  v18 = v12->top - a7->y;
  v57 = (struct _SPRITESTATE *)(hdev + 24);
  v45 = v17;
  v59 = v18;
  if ( v17 <= 0 )
  {
    v19 = 0;
    v20 = 2;
  }
  else
  {
    v19 = 1;
    v20 = 3;
  }
  if ( v18 > 0 )
    v19 = v20;
  v43 = v19;
  if ( v42 )
  {
    if ( v42->iDComplexity )
      v81 = v42->rclBounds;
    else
      v42 = 0LL;
  }
  SPRITERANGELOCK::vLockShared((SPRITERANGELOCK *)(hdev + 56));
  if ( !*((_QWORD *)v16 + 130) )
    goto LABEL_22;
  v78.left = v12->left - v17;
  v78.right = v12->right - v17;
  v78.top = v12->top - v18;
  v78.bottom = v12->bottom - v18;
  if ( *((_QWORD *)v16 + 131) )
  {
    v23 = 0LL;
    v24 = &v78;
    goto LABEL_21;
  }
  if ( bIntersect(v12, &v78, &v84) )
  {
    v23 = v42;
    v24 = &v84;
LABEL_21:
    vSpUpdateLockedScreenAreas(v16, v22, v24, v23, 1);
  }
LABEL_22:
  SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)v16 + 128));
  v50.left = v12->left - v17;
  v50.right = v12->right - v17;
  v50.top = v12->top - v18;
  v50.bottom = v12->bottom - v18;
  v71 = v50;
  ERECTL::operator+=((unsigned int *)&v71, (unsigned int *)v12);
  PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v83, v16, &v71);
  if ( !v83[0] )
    goto LABEL_128;
  ENUMAREAS::ENUMAREAS((ENUMAREAS *)v74, v16, v12, v19, &v71);
  if ( !v75 )
    goto LABEL_127;
  do
  {
    v52 = ENUMAREAS::bEnum((ENUMAREAS *)v74, &v55, &v50);
    v78.left = v50.left - v17;
    v78.right = v50.right - v17;
    v78.top = v50.top - v18;
    v78.bottom = v50.bottom - v18;
    do
    {
      if ( v55 )
      {
        v26 = (struct _SURFOBJ *)*((_QWORD *)v55 + 20);
        *(_QWORD *)v56 = (char *)v55 + 168;
      }
      else
      {
        v26 = v66;
        *(_QWORD *)v56 = v25;
      }
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v76, v16, &v78, v19, 0LL);
      do
      {
        v54 = ENUMAREAS::bEnum((ENUMAREAS *)v76, &v65, &v80);
        if ( (unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v76, &v63) )
        {
          do
          {
            v27 = v63;
            v65 = v63;
          }
          while ( (unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v76, &v63) );
        }
        else
        {
          v27 = v65;
        }
        if ( v27 )
        {
          v28 = (struct _SURFOBJ *)*((_QWORD *)v27 + 20);
          v29 = (POINTL *)((char *)v27 + 168);
        }
        else
        {
          v28 = v66;
          v29 = &gptlZero;
        }
        v79.left = v45 + v80.left;
        v79.right = v45 + v80.right;
        *(_QWORD *)v58 = v29;
        v79.top = v18 + v80.top;
        v60 = v28;
        v79.bottom = v18 + v80.bottom;
        if ( v42 && !bIntersect(&v79, &v81, &v42->rclBounds) )
          goto LABEL_120;
        v53 = 0LL;
        if ( v26
          && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v26) + 112) & 0x4000) != 0
           || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v26) + 112) < 0)
          && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v26) + 112) & 0x200) == 0 )
        {
          v53 = SURFOBJ_TO_SURFACE_NOT_NULL(v26);
          GreLockDisplayDevice(*(_QWORD *)(v53 + 48));
        }
        v30 = 0LL;
        if ( v28
          && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v28) + 112) & 0x4000) != 0
           || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v28) + 112) < 0)
          && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v28) + 112) & 0x200) == 0 )
        {
          v30 = SURFOBJ_TO_SURFACE_NOT_NULL(v28);
          GreLockDisplayDevice(*(_QWORD *)(v30 + 48));
        }
        v48 = 0;
        v49 = 0;
        v31 = *((_DWORD *)hdev + 652);
        v44 = *((_DWORD *)hdev + 653);
        v47 = v31;
        if ( !v42 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          if ( ThreadWin32Thread )
          {
            if ( *(_BYTE *)(ThreadWin32Thread + 328) == 1 )
            {
              v33 = *(XDCOBJ **)(ThreadWin32Thread + 312);
              v34 = (XCLIPOBJ *)(*(_QWORD *)v33 + 2160LL);
              v64 = XDCOBJ::prgnEffRao(v33);
              if ( (*(_DWORD *)(v35 + 56) & 0x20000) != 0 )
              {
                v46.x = -v47;
                v46.y = -v44;
                RGNOBJ::bOffset((RGNOBJ *)&v64, &v46);
                v49 = 1;
              }
              v36 = XDCOBJ::prgnEffRao(v33);
              XCLIPOBJ::vSetup(v34, v36, (struct ERECTL *)&v79, 1);
              v28 = v60;
              v42 = (struct _CLIPOBJ *)v34;
              v18 = v59;
              v48 = 1;
            }
          }
        }
        if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v53, &v42) )
        {
          if ( a11 == 52428 )
          {
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v26) + 112) & 0x400) == 0 && v28->hdev )
            {
              if ( v28->iType != 1 )
                goto LABEL_71;
              if ( !bAllowShareAccess(v28)
                || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
                || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) == 0 )
              {
                if ( v28->iType != 1
                  || !bAllowShareAccess(v28)
                  || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                  || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                  || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                  && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108) )
                {
LABEL_71:
                  if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v28) + 112) & 0x400) != 0 )
                  {
                    v37 = v28->hdev;
                    goto LABEL_89;
                  }
                }
LABEL_90:
                v38 = EngCopyBits;
LABEL_91:
                OffCopyBits(
                  (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v38,
                  *(LONG **)v56,
                  (__int64)v26,
                  *(int **)v58,
                  (__int64)v28,
                  v42,
                  v62,
                  &v79,
                  &v80);
                goto LABEL_112;
              }
LABEL_80:
              v38 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 80LL);
              goto LABEL_91;
            }
            if ( v26->iType == 1 )
            {
              if ( bAllowShareAccess(v26)
                && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                 || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
                && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) != 0 )
              {
                goto LABEL_80;
              }
              if ( v26->iType == 1
                && bAllowShareAccess(v26)
                && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                 || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
              {
                goto LABEL_90;
              }
            }
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v26) + 112) & 0x400) == 0 )
              goto LABEL_90;
            v37 = v26->hdev;
LABEL_89:
            v38 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v37 + 169);
            goto LABEL_91;
          }
          if ( v68 )
          {
            LODWORD(v61) = v79.left + v68->x - v12->left;
            HIDWORD(v61) = v79.top + v68->y - v12->top;
          }
          if ( v26->iType != 1 )
            goto LABEL_108;
          if ( bAllowShareAccess(v26)
            && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 1) != 0 )
          {
            v39 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 72LL);
LABEL_111:
            OffBitBlt(
              (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64, __int64, _DWORD *, int))v39,
              *(int **)v56,
              (__int64)v26,
              *(_DWORD **)v58,
              (__int64)v28,
              v67,
              v42,
              v62,
              &v79,
              &v80,
              (__int64)&v61,
              v72,
              (_DWORD *)v69,
              a11);
            goto LABEL_112;
          }
          if ( v26->iType != 1
            || !bAllowShareAccess(v26)
            || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
            && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108) )
          {
LABEL_108:
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v26) + 112) & 1) != 0 )
            {
              v39 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)v26->hdev + 168);
              goto LABEL_111;
            }
          }
          v39 = EngBitBlt;
          goto LABEL_111;
        }
LABEL_112:
        if ( v48 == 1 )
        {
          if ( v49 == 1 )
          {
            v46.x = v47;
            v46.y = v44;
            RGNOBJ::bOffset((RGNOBJ *)&v64, &v46);
          }
          v42 = 0LL;
        }
        if ( v30 )
          GreUnlockDisplayDevice(*(_QWORD *)(v30 + 48));
        if ( v53 )
          GreUnlockDisplayDevice(*(_QWORD *)(v53 + 48));
LABEL_120:
        if ( v42 )
          v42->rclBounds = v81;
      }
      while ( v54 );
      ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v76);
      v40 = ENUMAREAS::bEnumLayers((ENUMAREAS *)v74, &v55);
      v16 = v57;
      v25 = &gptlZero;
      v19 = v43;
    }
    while ( v40 );
    if ( v55 )
      vSpRedrawArea(v57, &v50, 0);
    v17 = v45;
  }
  while ( v52 );
LABEL_127:
  ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v74);
LABEL_128:
  PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v83);
  SPRITERANGELOCK::vLockExclusive((struct _SPRITESTATE *)((char *)v16 + 128));
  if ( *((_QWORD *)v16 + 130) )
    vSpUpdateLockedScreenAreas(v16, v41, v12, v42, 0);
  SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)v16 + 128));
  v11 = 1;
  PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v83);
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v77);
LABEL_131:
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v70);
  return v11;
}
