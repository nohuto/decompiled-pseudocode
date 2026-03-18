/*
 * XREFs of ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0102D80
 * Callers:
 *     <none>
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00354E4 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C0055BC0 (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0055BFC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0055CE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0055D10 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00566C0 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     OffBitBlt @ 0x1C0102BB8 (OffBitBlt.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C01033E8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffCopyBits @ 0x1C0103410 (OffCopyBits.c)
 *     ?bInsideDriverCall@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C010351C (-bInsideDriverCall@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ @ 0x1C01035BC (-vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ.c)
 *     ?bRedo@UNDOW32THREADPIDLOCKS@@QEAAHXZ @ 0x1C0103640 (-bRedo@UNDOW32THREADPIDLOCKS@@QEAAHXZ.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C0103C74 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0103CE8 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C0103E38 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0270F54 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0274E3C (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0276D38 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C0278670 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
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
  __int64 v18; // r8
  __int64 v19; // r9
  SURFACE *v20; // rax
  LONG x; // ecx
  LONG left; // edx
  int v23; // r15d
  int v24; // edx
  LONG v25; // eax
  struct _POINTL *v26; // rdx
  unsigned int v27; // r9d
  int v28; // eax
  BYTE iDComplexity; // r15
  int v30; // eax
  struct _SURFOBJ *v31; // r15
  POINTL *v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  HDEV v41; // rax
  BOOL (__stdcall *v42)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  struct _CLIPOBJ *v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v48; // rdi
  __int64 v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  HDEV v56; // rax
  BOOL (__stdcall *v57)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r13
  unsigned int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  unsigned int v62; // r14d
  RECTL rclBounds; // xmm6
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rdx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rdx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rdx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rdx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rdx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rdx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // rdx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rdx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rdx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // rdx
  __int64 v113; // r8
  __int64 v114; // r9
  __int64 v115; // rdx
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 v118; // rdx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // rdx
  __int64 v122; // r8
  __int64 v123; // r9
  BOOL (__stdcall *v124)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 v125; // rdx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 v128; // rdx
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 v131; // rdx
  __int64 v132; // r8
  __int64 v133; // r9
  __int64 v134; // rdx
  __int64 v135; // r8
  __int64 v136; // r9
  LONG y; // r8d
  LONG v138; // ecx
  int v139; // ecx
  __int64 v140; // rdx
  __int64 v141; // r8
  __int64 v142; // r9
  __int64 v143; // rdx
  __int64 v144; // r8
  __int64 v145; // r9
  __int64 v146; // rdx
  __int64 v147; // r8
  __int64 v148; // r9
  __int64 v149; // rdx
  __int64 v150; // r8
  __int64 v151; // r9
  __int64 v152; // rdx
  __int64 v153; // r8
  __int64 v154; // r9
  __int64 v155; // rdx
  __int64 v156; // r8
  __int64 v157; // r9
  __int64 v158; // rdx
  __int64 v159; // r8
  __int64 v160; // r9
  __int64 v161; // rdx
  __int64 v162; // r8
  __int64 v163; // r9
  __int64 v164; // rdx
  __int64 v165; // r8
  __int64 v166; // r9
  __int64 v167; // rdx
  __int64 v168; // r8
  __int64 v169; // r9
  __int64 v170; // rdx
  __int64 v171; // r8
  __int64 v172; // r9
  __int64 v173; // rdx
  __int64 v174; // r8
  __int64 v175; // r9
  __int64 v176; // rdx
  __int64 v177; // r8
  __int64 v178; // r9
  __int64 v179; // rdx
  __int64 v180; // r8
  __int64 v181; // r9
  __int64 v182; // rdx
  __int64 v183; // r8
  __int64 v184; // r9
  __int64 v185; // rdx
  __int64 v186; // r8
  __int64 v187; // r9
  __int64 v188; // rdx
  __int64 v189; // r8
  __int64 v190; // r9
  __int64 v191; // rdx
  __int64 v192; // r8
  __int64 v193; // r9
  __int64 v194; // rdx
  __int64 v195; // r8
  __int64 v196; // r9
  __int64 v197; // rdx
  __int64 v198; // r8
  __int64 v199; // r9
  BOOL (__stdcall *v200)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 v201; // rdx
  __int64 v202; // r8
  __int64 v203; // r9
  __int64 v204; // rdx
  __int64 v205; // r8
  __int64 v206; // r9
  __int64 v207; // rdx
  __int64 v208; // r8
  __int64 v209; // r9
  __int64 v210; // rdx
  __int64 v211; // r8
  __int64 v212; // r9
  BYTE v213; // [rsp+78h] [rbp-90h]
  POINTL *v215; // [rsp+88h] [rbp-80h]
  int v216; // [rsp+90h] [rbp-78h]
  struct _RECTL *v217; // [rsp+98h] [rbp-70h]
  int v218; // [rsp+A8h] [rbp-60h]
  int v219; // [rsp+ACh] [rbp-5Ch]
  HDEV hdev; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v221; // [rsp+B8h] [rbp-50h] BYREF
  HDEV v222; // [rsp+C0h] [rbp-48h]
  __int64 v223; // [rsp+C8h] [rbp-40h]
  __int64 v224; // [rsp+D0h] [rbp-38h]
  __int64 v225; // [rsp+D8h] [rbp-30h]
  __int64 v226; // [rsp+E0h] [rbp-28h]
  struct SPRITE *v227; // [rsp+E8h] [rbp-20h] BYREF
  char v228[8]; // [rsp+F0h] [rbp-18h] BYREF
  _QWORD v229[4]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v230[96]; // [rsp+118h] [rbp+10h] BYREF
  struct _SPRITESTATE *v231[24]; // [rsp+178h] [rbp+70h] BYREF
  struct _SPRITESTATE *v232[24]; // [rsp+238h] [rbp+130h] BYREF
  struct _RECTL v233; // [rsp+2F8h] [rbp+1F0h] BYREF
  struct _RECTL v234; // [rsp+308h] [rbp+200h] BYREF
  RECTL v235; // [rsp+318h] [rbp+210h] BYREF
  RECTL v236; // [rsp+328h] [rbp+220h] BYREF
  _QWORD v237[3]; // [rsp+338h] [rbp+230h] BYREF

  v11 = 0;
  v12 = a6;
  v225 = (__int64)a8;
  v224 = (__int64)a9;
  v223 = (__int64)a10;
  v226 = (__int64)a3;
  v217 = a6;
  if ( a4 && a4->iDComplexity )
  {
    rclBounds = a4->rclBounds;
    v235 = rclBounds;
    if ( ERECTL::bEmpty((ERECTL *)&v235) )
      return 1LL;
    v236 = rclBounds;
    ERECTL::operator*=(&v236, a6);
    v12 = &v236;
    v217 = &v236;
  }
  hdev = a2->hdev;
  memset(v229, 0, 24);
  v16 = hdev + 24;
  v222 = hdev + 24;
  UNDOW32THREADPIDLOCKS::vUndo((UNDOW32THREADPIDLOCKS *)v229);
  v17 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&hdev);
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)v228, ghsemSprite, v17);
  if ( !(unsigned int)UNDOW32THREADPIDLOCKS::bRedo((UNDOW32THREADPIDLOCKS *)v229) )
    goto LABEL_43;
  if ( !(unsigned int)bInsideDriverCall((struct _SPRITESTATE *)v16) )
  {
    v20 = (SURFACE *)SURFOBJ_TO_SURFACE(a1);
    if ( !SURFACE::bIncludeSprites(v20) )
    {
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v231, (struct PDEVOBJ *)&hdev, v18, v19);
      x = a7->x;
      left = v12->left;
      v23 = v12->top - a7->y;
      v233.top = a7->y;
      v24 = left - x;
      v25 = v12->right - v24;
      v233.left = x;
      v233.right = v25;
      v216 = v24;
      v233.bottom = v12->bottom - v23;
      v218 = v23;
      SPRITERANGELOCK::vLockShared((SPRITERANGELOCK *)(v16 + 32));
      if ( *((_QWORD *)v16 + 130) )
        vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)v16, v26, v217, a4, 1);
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v16 + 32));
      if ( v216 > 0 )
      {
        v27 = 1;
        v28 = 3;
      }
      else
      {
        v27 = 0;
        v28 = 2;
      }
      if ( v23 > 0 )
        v27 = v28;
      if ( a4 )
      {
        iDComplexity = a4->iDComplexity;
        v213 = iDComplexity;
        if ( iDComplexity )
          v235 = a4->rclBounds;
      }
      else
      {
        iDComplexity = 0;
        v213 = 0;
      }
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v230, (struct _SPRITESTATE *)v16, &v233, v27, 0LL);
      while ( 1 )
      {
        v30 = ENUMAREAS::bEnum((ENUMAREAS *)v230, &v227, &v233);
        v234.left = v216 + v233.left;
        v234.right = v216 + v233.right;
        v234.top = v218 + v233.top;
        v219 = v30;
        v234.bottom = v218 + v233.bottom;
        if ( !iDComplexity )
          break;
        v43 = a4;
        if ( bIntersect(&v234, &v235, &a4->rclBounds) )
          break;
LABEL_39:
        if ( !v219 )
        {
          if ( iDComplexity )
            v43->rclBounds = v235;
          v11 = 1;
          ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v230);
          SPRITEDDIACCESS::~SPRITEDDIACCESS(v231, v44, v45, v46);
          goto LABEL_43;
        }
      }
      if ( v227 )
      {
        v31 = (struct _SURFOBJ *)*((_QWORD *)v227 + 20);
        v32 = (POINTL *)((char *)v227 + 168);
      }
      else
      {
        v31 = (struct _SURFOBJ *)*((_QWORD *)v16 + 5);
        v32 = &gptlZero;
      }
      v215 = v32;
      v33 = 0LL;
      if ( a1
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x200) == 0 )
      {
        v33 = SURFOBJ_TO_SURFACE_NOT_NULL(a1);
        GreLockDisplayDevice(*(_QWORD *)(v33 + 48));
      }
      v34 = 0LL;
      if ( v31
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v31) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v31) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v31) + 112) & 0x200) == 0 )
      {
        v34 = SURFOBJ_TO_SURFACE_NOT_NULL(v31);
        GreLockDisplayDevice(*(_QWORD *)(v34 + 48));
      }
      if ( a11 == 52428 )
      {
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x400) == 0 && v31->hdev )
        {
          if ( v31->iType != 1 )
            goto LABEL_30;
          if ( !(unsigned int)bAllowShareAccess(v31)
            || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35, v36, v37)
            || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v64, v65, v66) + 280)
            || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v67, v68, v69) + 104)
            && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v70, v71, v72) + 108)
            || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v70, v71, v72) + 280)
                          + 20LL) & 0x400) == 0 )
          {
            if ( v31->iType == 1
              && (unsigned int)bAllowShareAccess(v31)
              && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v38, v39, v40)
              && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v76, v77, v78) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v79, v80, v81) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v82, v83, v84) + 108)) )
            {
              goto LABEL_95;
            }
LABEL_30:
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v31) + 112) & 0x400) != 0 )
            {
              v41 = v31->hdev;
LABEL_32:
              v42 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v41 + 169);
LABEL_33:
              OffCopyBits(
                (int)v42,
                (int)&gptlZero,
                (int)a1,
                (int)v215,
                (__int64)v31,
                a4,
                (__int64)a5,
                (__int64)&v234,
                (__int64)&v233);
LABEL_34:
              if ( v34 )
                GreUnlockDisplayDevice(*(_QWORD *)(v34 + 48));
              if ( v33 )
                GreUnlockDisplayDevice(*(_QWORD *)(v33 + 48));
              iDComplexity = v213;
              v43 = a4;
              v16 = v222;
              goto LABEL_39;
            }
            goto LABEL_95;
          }
LABEL_103:
          v42 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v73, v74, v75) + 280) + 80LL);
          goto LABEL_33;
        }
        if ( a1->iType == 1 )
        {
          if ( (unsigned int)bAllowShareAccess(a1)
            && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v85, v86, v87)
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v88, v89, v90) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v91, v92, v93) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v94, v95, v96) + 108))
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v94, v95, v96) + 280)
                          + 20LL) & 0x400) != 0 )
          {
            goto LABEL_103;
          }
          if ( a1->iType == 1
            && (unsigned int)bAllowShareAccess(a1)
            && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v97, v98, v99)
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v100, v101, v102) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v103, v104, v105) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v106, v107, v108) + 108)) )
          {
            goto LABEL_95;
          }
        }
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x400) != 0 )
        {
          v41 = a1->hdev;
          goto LABEL_32;
        }
LABEL_95:
        v42 = EngCopyBits;
        goto LABEL_33;
      }
      if ( v225 )
      {
        LODWORD(v221) = v234.left + *(_DWORD *)v225 - v217->left;
        HIDWORD(v221) = v234.top + *(_DWORD *)(v225 + 4) - v217->top;
      }
      if ( a1->iType != 1 )
        goto LABEL_128;
      if ( (unsigned int)bAllowShareAccess(a1)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v109, v110, v111)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v112, v113, v114) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v115, v116, v117) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v118, v119, v120) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v118, v119, v120) + 280)
                      + 20LL) & 1) != 0 )
      {
        v124 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v121, v122, v123) + 280) + 72LL);
LABEL_131:
        OffBitBlt(
          (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64, __int64, _DWORD *, int))v124,
          (int *)&gptlZero,
          (__int64)a1,
          v215,
          (__int64)v31,
          v226,
          a4,
          (__int64)a5,
          &v234,
          &v233,
          (__int64)&v221,
          v224,
          (_DWORD *)v223,
          a11);
        goto LABEL_34;
      }
      if ( a1->iType != 1
        || !(unsigned int)bAllowShareAccess(a1)
        || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v125, v126, v127)
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v128, v129, v130) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v131, v132, v133) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v134, v135, v136) + 108) )
      {
LABEL_128:
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 1) != 0 )
        {
          v124 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a1->hdev + 168);
          goto LABEL_131;
        }
      }
      v124 = EngBitBlt;
      goto LABEL_131;
    }
  }
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v232, (struct PDEVOBJ *)&hdev, v18, v19);
  if ( *((_QWORD *)v16 + 169) )
  {
    y = a7->y;
    v138 = a7->x + v12->right - v12->left;
    v233.left = a7->x;
    v233.right = v138;
    v139 = v12->bottom - v12->top;
    v233.top = y;
    v233.bottom = y + v139;
    PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v237, (struct _SPRITESTATE *)v16, &v233);
    if ( v237[0] )
      vSpRedrawAreaExMirror((struct _SPRITESTATE *)v16, &v233);
    a2 = (struct _SURFOBJ *)*((_QWORD *)v16 + 169);
    PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v237);
  }
  v48 = 0LL;
  if ( a1
    && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x4000) != 0
     || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x80000000) != 0)
    && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x200) == 0 )
  {
    v48 = SURFOBJ_TO_SURFACE_NOT_NULL(a1);
    GreLockDisplayDevice(*(_QWORD *)(v48 + 48));
  }
  v49 = 0LL;
  if ( a2
    && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x4000) != 0
     || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x80000000) != 0)
    && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x200) == 0 )
  {
    v49 = SURFOBJ_TO_SURFACE_NOT_NULL(a2);
    GreLockDisplayDevice(*(_QWORD *)(v49 + 48));
  }
  if ( a11 == 52428 )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x400) == 0 && a2->hdev )
    {
      if ( a2->iType != 1 )
        goto LABEL_58;
      if ( !(unsigned int)bAllowShareAccess(a2)
        || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v50, v51, v52)
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v140, v141, v142) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v143, v144, v145) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v146, v147, v148) + 108)
        || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v146, v147, v148) + 280)
                      + 20LL) & 0x400) == 0 )
      {
        if ( a2->iType == 1
          && (unsigned int)bAllowShareAccess(a2)
          && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v53, v54, v55)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v152, v153, v154) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v155, v156, v157) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v158, v159, v160) + 108)) )
        {
          goto LABEL_145;
        }
LABEL_58:
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x400) != 0 )
        {
          v56 = a2->hdev;
LABEL_60:
          v57 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v56 + 169);
LABEL_61:
          v58 = OffCopyBits(
                  (int)v57,
                  (int)&gptlZero,
                  (int)a1,
                  (int)&gptlZero,
                  (__int64)a2,
                  a4,
                  (__int64)a5,
                  (__int64)v217,
                  (__int64)a7);
          goto LABEL_62;
        }
        goto LABEL_145;
      }
LABEL_153:
      v57 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v149, v150, v151) + 280)
                                                                                                 + 80LL);
      goto LABEL_61;
    }
    if ( a1->iType == 1 )
    {
      if ( (unsigned int)bAllowShareAccess(a1)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v161, v162, v163)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v164, v165, v166) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v167, v168, v169) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v170, v171, v172) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v170, v171, v172) + 280)
                      + 20LL) & 0x400) != 0 )
      {
        goto LABEL_153;
      }
      if ( a1->iType == 1
        && (unsigned int)bAllowShareAccess(a1)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v173, v174, v175)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v176, v177, v178) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v179, v180, v181) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v182, v183, v184) + 108)) )
      {
        goto LABEL_145;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x400) != 0 )
    {
      v56 = a1->hdev;
      goto LABEL_60;
    }
LABEL_145:
    v57 = EngCopyBits;
    goto LABEL_61;
  }
  if ( a1->iType != 1 )
  {
LABEL_176:
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 1) != 0 )
    {
      v200 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a1->hdev + 168);
      goto LABEL_179;
    }
LABEL_178:
    v200 = EngBitBlt;
    goto LABEL_179;
  }
  if ( !(unsigned int)bAllowShareAccess(a1)
    || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v185, v186, v187)
    || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v188, v189, v190) + 280)
    || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v191, v192, v193) + 104)
    && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v194, v195, v196) + 108)
    || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v194, v195, v196) + 280) + 20LL) & 1) == 0 )
  {
    if ( a1->iType == 1
      && (unsigned int)bAllowShareAccess(a1)
      && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v201, v202, v203)
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v204, v205, v206) + 280)
      && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v207, v208, v209) + 104)
       || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v210, v211, v212) + 108)) )
    {
      goto LABEL_178;
    }
    goto LABEL_176;
  }
  v200 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v197, v198, v199) + 280) + 72LL);
LABEL_179:
  v58 = OffBitBlt(
          (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64, __int64, _DWORD *, int))v200,
          (int *)&gptlZero,
          (__int64)a1,
          &gptlZero,
          (__int64)a2,
          v226,
          a4,
          (__int64)a5,
          v217,
          a7,
          v225,
          v224,
          (_DWORD *)v223,
          a11);
LABEL_62:
  v62 = v58;
  if ( v49 )
    GreUnlockDisplayDevice(*(_QWORD *)(v49 + 48));
  if ( v48 )
    GreUnlockDisplayDevice(*(_QWORD *)(v48 + 48));
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v232, v59, v60, v61);
  v11 = v62;
LABEL_43:
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v228);
  return v11;
}
