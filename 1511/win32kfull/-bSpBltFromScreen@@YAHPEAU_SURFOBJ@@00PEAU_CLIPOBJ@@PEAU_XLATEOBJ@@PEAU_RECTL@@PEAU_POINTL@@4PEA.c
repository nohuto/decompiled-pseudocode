/*
 * XREFs of ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00EA480
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C003BB68 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0041C98 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0053D80 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0053DB0 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C0068580 (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0068678 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     OffBitBlt @ 0x1C00E9B20 (OffBitBlt.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00EAAE8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffCopyBits @ 0x1C00EAB10 (OffCopyBits.c)
 *     ?bInsideDriverCall@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C00EAC1C (-bInsideDriverCall@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ @ 0x1C00EACBC (-vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ.c)
 *     ?bRedo@UNDOW32THREADPIDLOCKS@@QEAAHXZ @ 0x1C00EAD40 (-bRedo@UNDOW32THREADPIDLOCKS@@QEAAHXZ.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C00EAD88 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C00EADFC (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C00EAF4C (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C02729FC (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C02768F4 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C02787F0 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C027A120 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 */

__int64 __fastcall bSpBltFromScreen(
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
  unsigned int v11; // esi
  struct _RECTL *v12; // r12
  HDEV v16; // rdi
  int v17; // eax
  SURFACE *v18; // rax
  LONG x; // ecx
  LONG left; // edx
  int v21; // r15d
  int v22; // edx
  LONG v23; // eax
  struct _POINTL *v24; // rdx
  unsigned int v25; // r9d
  int v26; // eax
  BYTE iDComplexity; // r15
  int v28; // eax
  struct _SURFOBJ *v29; // r15
  POINTL *v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rbx
  HDEV v33; // rax
  BOOL (__stdcall *v34)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  struct _CLIPOBJ *v35; // rbx
  __int64 v37; // rdi
  __int64 v38; // rbx
  HDEV v39; // rax
  BOOL (__stdcall *v40)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r13
  unsigned int v41; // eax
  unsigned int v42; // r14d
  RECTL rclBounds; // xmm6
  BOOL (__stdcall *v44)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  LONG y; // r8d
  LONG v46; // ecx
  int v47; // ecx
  BOOL (__stdcall *v48)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  BYTE v49; // [rsp+78h] [rbp-90h]
  POINTL *v51; // [rsp+88h] [rbp-80h]
  struct _RECTL *v52; // [rsp+90h] [rbp-78h]
  int v53; // [rsp+98h] [rbp-70h]
  int v54; // [rsp+A8h] [rbp-60h]
  int v55; // [rsp+ACh] [rbp-5Ch]
  HDEV hdev; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v57; // [rsp+B8h] [rbp-50h]
  __int64 v58; // [rsp+C0h] [rbp-48h] BYREF
  HDEV v59; // [rsp+C8h] [rbp-40h]
  __int64 v60; // [rsp+D0h] [rbp-38h]
  __int64 v61; // [rsp+D8h] [rbp-30h]
  __int64 v62; // [rsp+E0h] [rbp-28h]
  struct SPRITE *v63; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v64[3]; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v65[16]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v66[96]; // [rsp+118h] [rbp+10h] BYREF
  struct _SPRITESTATE *v67[24]; // [rsp+178h] [rbp+70h] BYREF
  struct _SPRITESTATE *v68[24]; // [rsp+238h] [rbp+130h] BYREF
  struct _RECTL v69; // [rsp+2F8h] [rbp+1F0h] BYREF
  struct _RECTL v70; // [rsp+308h] [rbp+200h] BYREF
  RECTL v71; // [rsp+318h] [rbp+210h] BYREF
  RECTL v72; // [rsp+328h] [rbp+220h] BYREF
  _QWORD v73[3]; // [rsp+338h] [rbp+230h] BYREF

  v11 = 0;
  v12 = a6;
  v60 = (__int64)a8;
  v57 = (__int64)a9;
  v61 = (__int64)a10;
  v62 = (__int64)a3;
  v52 = a6;
  if ( a4 && a4->iDComplexity )
  {
    rclBounds = a4->rclBounds;
    v71 = rclBounds;
    if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v71) )
      return 1LL;
    v72 = rclBounds;
    ERECTL::operator*=(&v72, a6);
    v12 = &v72;
    v52 = &v72;
  }
  hdev = a2->hdev;
  memset(v64, 0, sizeof(v64));
  v16 = hdev + 24;
  v59 = hdev + 24;
  UNDOW32THREADPIDLOCKS::vUndo((UNDOW32THREADPIDLOCKS *)v64);
  v17 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&hdev);
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)v65, ghsemSprite, v17);
  if ( !(unsigned int)UNDOW32THREADPIDLOCKS::bRedo((UNDOW32THREADPIDLOCKS *)v64) )
    goto LABEL_43;
  if ( !(unsigned int)bInsideDriverCall((struct _SPRITESTATE *)v16) )
  {
    v18 = (SURFACE *)SURFOBJ_TO_SURFACE(a1);
    if ( !SURFACE::bIncludeSprites(v18) )
    {
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v68, (struct PDEVOBJ *)&hdev);
      x = a7->x;
      left = v12->left;
      v21 = v12->top - a7->y;
      v69.top = a7->y;
      v22 = left - x;
      v23 = v12->right - v22;
      v69.left = x;
      v69.right = v23;
      v53 = v22;
      v69.bottom = v12->bottom - v21;
      v55 = v21;
      SPRITERANGELOCK::vLockShared((SPRITERANGELOCK *)(v16 + 32));
      if ( *((_QWORD *)v16 + 130) )
        vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)v16, v24, v52, a4, 1);
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v16 + 32));
      if ( v53 > 0 )
      {
        v25 = 1;
        v26 = 3;
      }
      else
      {
        v25 = 0;
        v26 = 2;
      }
      if ( v21 > 0 )
        v25 = v26;
      if ( a4 )
      {
        iDComplexity = a4->iDComplexity;
        v49 = iDComplexity;
        if ( iDComplexity )
          v71 = a4->rclBounds;
      }
      else
      {
        iDComplexity = 0;
        v49 = 0;
      }
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v66, (struct _SPRITESTATE *)v16, &v69, v25, 0LL);
      while ( 1 )
      {
        v28 = ENUMAREAS::bEnum((ENUMAREAS *)v66, &v63, &v69);
        v70.left = v53 + v69.left;
        v70.right = v53 + v69.right;
        v70.top = v55 + v69.top;
        v54 = v28;
        v70.bottom = v55 + v69.bottom;
        if ( !iDComplexity )
          break;
        v35 = a4;
        if ( bIntersect(&v70, &v71, &a4->rclBounds) )
          break;
LABEL_39:
        if ( !v54 )
        {
          if ( iDComplexity )
            v35->rclBounds = v71;
          v11 = 1;
          ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v66);
          SPRITEDDIACCESS::~SPRITEDDIACCESS(v68);
          goto LABEL_43;
        }
      }
      if ( v63 )
      {
        v29 = (struct _SURFOBJ *)*((_QWORD *)v63 + 20);
        v30 = (POINTL *)((char *)v63 + 168);
      }
      else
      {
        v29 = (struct _SURFOBJ *)*((_QWORD *)v16 + 5);
        v30 = &gptlZero;
      }
      v51 = v30;
      v31 = 0LL;
      if ( a1
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x200) == 0 )
      {
        v31 = SURFOBJ_TO_SURFACE_NOT_NULL(a1);
        GreLockDisplayDevice(*(_QWORD *)(v31 + 48));
      }
      v32 = 0LL;
      if ( v29
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v29) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v29) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v29) + 112) & 0x200) == 0 )
      {
        v32 = SURFOBJ_TO_SURFACE_NOT_NULL(v29);
        GreLockDisplayDevice(*(_QWORD *)(v32 + 48));
      }
      if ( a11 == 52428 )
      {
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x400) == 0 && v29->hdev )
        {
          if ( v29->iType != 1 )
            goto LABEL_30;
          if ( !(unsigned int)bAllowShareAccess(v29)
            || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
            && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
            || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) == 0 )
          {
            if ( v29->iType == 1
              && (unsigned int)bAllowShareAccess(v29)
              && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
              && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
            {
              goto LABEL_95;
            }
LABEL_30:
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v29) + 112) & 0x400) != 0 )
            {
              v33 = v29->hdev;
LABEL_32:
              v34 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v33 + 169);
LABEL_33:
              OffCopyBits(
                (int)v34,
                (int)&gptlZero,
                (int)a1,
                (int)v51,
                (__int64)v29,
                a4,
                (__int64)a5,
                (__int64)&v70,
                (__int64)&v69);
LABEL_34:
              if ( v32 )
                GreUnlockDisplayDevice(*(_QWORD *)(v32 + 48));
              if ( v31 )
                GreUnlockDisplayDevice(*(_QWORD *)(v31 + 48));
              iDComplexity = v49;
              v35 = a4;
              v16 = v59;
              goto LABEL_39;
            }
            goto LABEL_95;
          }
LABEL_103:
          v34 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 80LL);
          goto LABEL_33;
        }
        if ( a1->iType == 1 )
        {
          if ( (unsigned int)bAllowShareAccess(a1)
            && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) != 0 )
          {
            goto LABEL_103;
          }
          if ( a1->iType == 1
            && (unsigned int)bAllowShareAccess(a1)
            && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
          {
            goto LABEL_95;
          }
        }
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x400) != 0 )
        {
          v33 = a1->hdev;
          goto LABEL_32;
        }
LABEL_95:
        v34 = EngCopyBits;
        goto LABEL_33;
      }
      if ( v60 )
      {
        LODWORD(v58) = v70.left + *(_DWORD *)v60 - v52->left;
        HIDWORD(v58) = v70.top + *(_DWORD *)(v60 + 4) - v52->top;
      }
      if ( a1->iType != 1 )
        goto LABEL_128;
      if ( (unsigned int)bAllowShareAccess(a1)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 1) != 0 )
      {
        v44 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 72LL);
LABEL_131:
        OffBitBlt(
          (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64, __int64, _DWORD *, int))v44,
          (int *)&gptlZero,
          (__int64)a1,
          v51,
          (__int64)v29,
          v62,
          a4,
          (__int64)a5,
          &v70,
          &v69,
          (__int64)&v58,
          v57,
          (_DWORD *)v61,
          a11);
        goto LABEL_34;
      }
      if ( a1->iType != 1
        || !(unsigned int)bAllowShareAccess(a1)
        || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108) )
      {
LABEL_128:
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 1) != 0 )
        {
          v44 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a1->hdev + 168);
          goto LABEL_131;
        }
      }
      v44 = EngBitBlt;
      goto LABEL_131;
    }
  }
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v67, (struct PDEVOBJ *)&hdev);
  if ( *((_QWORD *)v16 + 169) )
  {
    y = a7->y;
    v46 = a7->x + v12->right - v12->left;
    v69.left = a7->x;
    v69.right = v46;
    v47 = v12->bottom - v12->top;
    v69.top = y;
    v69.bottom = y + v47;
    PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v73, (struct _SPRITESTATE *)v16, &v69);
    if ( v73[0] )
      vSpRedrawAreaExMirror((struct _SPRITESTATE *)v16, &v69);
    a2 = (struct _SURFOBJ *)*((_QWORD *)v16 + 169);
    PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v73);
  }
  v37 = 0LL;
  if ( a1
    && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x4000) != 0
     || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x80000000) != 0)
    && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x200) == 0 )
  {
    v37 = SURFOBJ_TO_SURFACE_NOT_NULL(a1);
    GreLockDisplayDevice(*(_QWORD *)(v37 + 48));
  }
  v38 = 0LL;
  if ( a2
    && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x4000) != 0
     || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x80000000) != 0)
    && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x200) == 0 )
  {
    v38 = SURFOBJ_TO_SURFACE_NOT_NULL(a2);
    GreLockDisplayDevice(*(_QWORD *)(v38 + 48));
  }
  if ( a11 == 52428 )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x400) == 0 && a2->hdev )
    {
      if ( a2->iType != 1 )
        goto LABEL_58;
      if ( !(unsigned int)bAllowShareAccess(a2)
        || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
        || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) == 0 )
      {
        if ( a2->iType == 1
          && (unsigned int)bAllowShareAccess(a2)
          && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
        {
          goto LABEL_145;
        }
LABEL_58:
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x400) != 0 )
        {
          v39 = a2->hdev;
LABEL_60:
          v40 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v39 + 169);
LABEL_61:
          v41 = OffCopyBits(
                  (int)v40,
                  (int)&gptlZero,
                  (int)a1,
                  (int)&gptlZero,
                  (__int64)a2,
                  a4,
                  (__int64)a5,
                  (__int64)v52,
                  (__int64)a7);
          goto LABEL_62;
        }
        goto LABEL_145;
      }
LABEL_153:
      v40 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                                                                                                 + 80LL);
      goto LABEL_61;
    }
    if ( a1->iType == 1 )
    {
      if ( (unsigned int)bAllowShareAccess(a1)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) != 0 )
      {
        goto LABEL_153;
      }
      if ( a1->iType == 1
        && (unsigned int)bAllowShareAccess(a1)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
      {
        goto LABEL_145;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x400) != 0 )
    {
      v39 = a1->hdev;
      goto LABEL_60;
    }
LABEL_145:
    v40 = EngCopyBits;
    goto LABEL_61;
  }
  if ( a1->iType != 1 )
  {
LABEL_176:
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 1) != 0 )
    {
      v48 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a1->hdev + 168);
      goto LABEL_179;
    }
LABEL_178:
    v48 = EngBitBlt;
    goto LABEL_179;
  }
  if ( !(unsigned int)bAllowShareAccess(a1)
    || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
    || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
    || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
    && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
    || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 1) == 0 )
  {
    if ( a1->iType == 1
      && (unsigned int)bAllowShareAccess(a1)
      && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
      && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
       || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
    {
      goto LABEL_178;
    }
    goto LABEL_176;
  }
  v48 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 72LL);
LABEL_179:
  v41 = OffBitBlt(
          (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64, __int64, _DWORD *, int))v48,
          (int *)&gptlZero,
          (__int64)a1,
          &gptlZero,
          (__int64)a2,
          v62,
          a4,
          (__int64)a5,
          v52,
          a7,
          v60,
          v57,
          (_DWORD *)v61,
          a11);
LABEL_62:
  v42 = v41;
  if ( v38 )
    GreUnlockDisplayDevice(*(_QWORD *)(v38 + 48));
  if ( v37 )
    GreUnlockDisplayDevice(*(_QWORD *)(v37 + 48));
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v67);
  v11 = v42;
LABEL_43:
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v65);
  return v11;
}
