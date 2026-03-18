/*
 * XREFs of ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0276D38
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0075788 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0102D80 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C011C1AC (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C026CD50 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0275D90 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0051794 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00517BC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0055CE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0055D10 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C01033E8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffCopyBits @ 0x1C0103410 (OffCopyBits.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C0103C74 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0103CE8 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C0103E38 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C026C844 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 */

void __fastcall vSpUpdateLockedScreenAreas(
        struct _SPRITESTATE *a1,
        struct _POINTL *a2,
        struct _RECTL *a3,
        struct _CLIPOBJ *a4,
        int a5)
{
  struct _CLIPOBJ *v6; // r13
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct REGION *v13; // r12
  struct _RECTL *v14; // rdi
  int v15; // ebx
  struct RGNOBJ *p_top; // rdx
  __int64 v17; // rbx
  __int64 v18; // rdi
  struct SPRITE *v19; // r14
  __int64 v20; // rdi
  __int64 v21; // rsi
  struct _SURFOBJ *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  struct _SURFOBJ *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  struct _SURFOBJ *v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  BOOL (__stdcall *v65)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  struct _SURFOBJ *v66; // rcx
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
  struct SPRITE *v79; // r14
  __int64 v80; // rdi
  __int64 v81; // rsi
  __int64 v82; // rdi
  struct _SURFOBJ *v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rdx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rdx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rdx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // r9
  struct _SURFOBJ *v99; // rcx
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
  __int64 v112; // rax
  struct _SURFOBJ *v113; // rcx
  __int64 v114; // rdx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // rdx
  __int64 v118; // r8
  __int64 v119; // r9
  __int64 v120; // rdx
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 v123; // rdx
  __int64 v124; // r8
  __int64 v125; // r9
  BOOL (__stdcall *v126)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  struct _SURFOBJ *v127; // rcx
  __int64 v128; // rdx
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 v131; // rdx
  __int64 v132; // r8
  __int64 v133; // r9
  __int64 v134; // rdx
  __int64 v135; // r8
  __int64 v136; // r9
  __int64 v137; // rdx
  __int64 v138; // r8
  __int64 v139; // r9
  struct SPRITE *v140; // [rsp+50h] [rbp-B0h] BYREF
  int v141; // [rsp+58h] [rbp-A8h]
  _QWORD v142[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v143[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v144; // [rsp+80h] [rbp-80h] BYREF
  __int64 v145; // [rsp+88h] [rbp-78h] BYREF
  struct _CLIPOBJ *v146; // [rsp+90h] [rbp-70h]
  _BYTE v147[96]; // [rsp+A0h] [rbp-60h] BYREF
  struct _SPRITESTATE *v148[24]; // [rsp+100h] [rbp+0h] BYREF
  struct _RECTL v149; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _RECTL v150; // [rsp+1D0h] [rbp+D0h] BYREF
  struct _CLIPOBJ v151; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v152; // [rsp+218h] [rbp+118h]
  __int64 v153; // [rsp+230h] [rbp+130h]
  int v154; // [rsp+238h] [rbp+138h]
  int v155; // [rsp+260h] [rbp+160h]
  __int64 v156; // [rsp+270h] [rbp+170h]

  v146 = a4;
  v153 = 0LL;
  v154 = 0;
  v6 = a4;
  v156 = 0LL;
  v152 = 0LL;
  v155 = 1;
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v142);
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v143);
  v144 = *(_QWORD *)a1;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v148, (struct PDEVOBJ *)&v144, v8, v9);
  v13 = 0LL;
  if ( v142[0] )
  {
    if ( v143[0] )
    {
      v14 = (struct _RECTL *)((char *)a1 + 48);
      if ( bIntersect(a3, (const struct _RECTL *)a1 + 3, &v150) )
      {
        ENUMAREAS::ENUMAREAS((ENUMAREAS *)v147, a1, &v150, 0, 0LL);
        do
        {
          v15 = ENUMAREAS::bEnum((ENUMAREAS *)v147, &v140, &v149);
          v141 = v15;
          if ( v140 )
          {
            if ( !v13 )
            {
              p_top = (struct RGNOBJ *)&v6[2].rclBounds.top;
              if ( !v6 || !v6->iDComplexity )
              {
                RGNOBJ::vSet((RGNOBJ *)v143, v14);
                p_top = (struct RGNOBJ *)v143;
              }
              v145 = *((_QWORD *)a1 + 130);
              if ( !RGNOBJ::bMerge((RGNOBJ *)v142, p_top, (struct RGNOBJ *)&v145, BYTE4(gafjRgnOp)) )
                RGNOBJ::vSet((RGNOBJ *)v142);
              v13 = (struct REGION *)v142[0];
            }
            XCLIPOBJ::vSetup((XCLIPOBJ *)&v151, v13, (struct ERECTL *)&v149, 0);
            if ( !ERECTL::bEmpty((ERECTL *)&v151.rclBounds) )
            {
              while ( 1 )
              {
                v17 = 0LL;
                if ( a5 )
                {
                  v18 = *((_QWORD *)a1 + 5);
                  if ( v18
                    && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 112) & 0x4000) != 0
                     || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v18) + 112) < 0)
                    && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v18) + 112) & 0x200) == 0 )
                  {
                    v17 = SURFOBJ_TO_SURFACE_NOT_NULL(v18);
                    GreLockDisplayDevice(*(_QWORD *)(v17 + 48));
                  }
                  v19 = v140;
                  v20 = 0LL;
                  v21 = *((_QWORD *)v140 + 20);
                  if ( v21
                    && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v140 + 20)) + 112) & 0x4000) != 0
                     || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v21) + 112) < 0)
                    && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v21) + 112) & 0x200) == 0 )
                  {
                    v20 = SURFOBJ_TO_SURFACE_NOT_NULL(v21);
                    GreLockDisplayDevice(*(_QWORD *)(v20 + 48));
                  }
                  if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v19 + 20)) + 112) & 0x400) != 0
                    || (v22 = (struct _SURFOBJ *)*((_QWORD *)a1 + 5), !v22->hdev) )
                  {
                    v52 = (struct _SURFOBJ *)*((_QWORD *)v19 + 20);
                    if ( v52->iType != 1
                      || !bAllowShareAccess(v52)
                      || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v53, v54, v55)
                      || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v56, v57, v58) + 280)
                      || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v59, v60, v61) + 104)
                      && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v62, v63, v64) + 108)
                      || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v62, v63, v64)
                                                + 280)
                                    + 20LL) & 0x400) == 0 )
                    {
                      v66 = (struct _SURFOBJ *)*((_QWORD *)v19 + 20);
                      if ( v66->iType == 1
                        && bAllowShareAccess(v66)
                        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v67, v68, v69)
                        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v70, v71, v72) + 280)
                        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v73, v74, v75) + 104)
                         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v76, v77, v78) + 108))
                        || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v19 + 20)) + 112) & 0x400) == 0 )
                      {
                        goto LABEL_59;
                      }
                      v51 = *((_QWORD *)v19 + 20);
LABEL_58:
                      v65 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(v51 + 24) + 1352LL);
LABEL_60:
                      OffCopyBits(
                        (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v65,
                        (LONG *)v140 + 42,
                        *((_QWORD *)v19 + 20),
                        (int *)&gptlZero,
                        *((_QWORD *)a1 + 5),
                        &v151,
                        0LL,
                        &v149,
                        &v149);
                      if ( v20 )
                        GreUnlockDisplayDevice(*(_QWORD *)(v20 + 48));
                      if ( !v17 )
                        goto LABEL_113;
                      goto LABEL_112;
                    }
                  }
                  else if ( v22->iType != 1
                         || !bAllowShareAccess(v22)
                         || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24, v25)
                         || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27, v28) + 280)
                         || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29, v30, v31) + 104)
                         && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32, v33, v34) + 108)
                         || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v32,
                                                       v33,
                                                       v34)
                                                   + 280)
                                       + 20LL) & 0x400) == 0 )
                  {
                    v38 = (struct _SURFOBJ *)*((_QWORD *)a1 + 5);
                    if ( (v38->iType != 1
                       || !bAllowShareAccess(v38)
                       || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39, v40, v41)
                       || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v42, v43, v44) + 280)
                       || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v45, v46, v47) + 104)
                       && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v48, v49, v50) + 108))
                      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 112) & 0x400) != 0 )
                    {
                      v51 = *((_QWORD *)a1 + 5);
                      goto LABEL_58;
                    }
LABEL_59:
                    v65 = EngCopyBits;
                    goto LABEL_60;
                  }
                  v65 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35, v36, v37) + 280) + 80LL);
                  goto LABEL_60;
                }
                v79 = v140;
                v80 = *((_QWORD *)v140 + 20);
                if ( v80
                  && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v140 + 20)) + 112) & 0x4000) != 0
                   || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v80) + 112) < 0)
                  && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v80) + 112) & 0x200) == 0 )
                {
                  v17 = SURFOBJ_TO_SURFACE_NOT_NULL(v80);
                  GreLockDisplayDevice(*(_QWORD *)(v17 + 48));
                }
                v81 = *((_QWORD *)a1 + 5);
                v82 = 0LL;
                if ( v81
                  && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 112) & 0x4000) != 0
                   || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v81) + 112) < 0)
                  && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v81) + 112) & 0x200) == 0 )
                {
                  v82 = SURFOBJ_TO_SURFACE_NOT_NULL(v81);
                  GreLockDisplayDevice(*(_QWORD *)(v82 + 48));
                }
                if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 112) & 0x400) != 0
                  || (v83 = (struct _SURFOBJ *)*((_QWORD *)v79 + 20), !v83->hdev) )
                {
                  v113 = (struct _SURFOBJ *)*((_QWORD *)a1 + 5);
                  if ( v113->iType == 1
                    && bAllowShareAccess(v113)
                    && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v114, v115, v116)
                    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v117, v118, v119) + 280)
                    && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v120, v121, v122) + 104)
                     || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v123, v124, v125) + 108))
                    && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v123, v124, v125)
                                              + 280)
                                  + 20LL) & 0x400) != 0 )
                  {
LABEL_98:
                    v126 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v96, v97, v98) + 280) + 80LL);
                    goto LABEL_109;
                  }
                  v127 = (struct _SURFOBJ *)*((_QWORD *)a1 + 5);
                  if ( (v127->iType != 1
                     || !bAllowShareAccess(v127)
                     || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v128, v129, v130)
                     || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v131, v132, v133) + 280)
                     || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v134, v135, v136) + 104)
                     && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v137, v138, v139) + 108))
                    && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 112) & 0x400) != 0 )
                  {
                    v112 = *((_QWORD *)a1 + 5);
                    goto LABEL_107;
                  }
                }
                else
                {
                  if ( v83->iType == 1
                    && bAllowShareAccess(v83)
                    && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v84, v85, v86)
                    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v87, v88, v89) + 280)
                    && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v90, v91, v92) + 104)
                     || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v93, v94, v95) + 108))
                    && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v93, v94, v95)
                                              + 280)
                                  + 20LL) & 0x400) != 0 )
                  {
                    goto LABEL_98;
                  }
                  v99 = (struct _SURFOBJ *)*((_QWORD *)v79 + 20);
                  if ( (v99->iType != 1
                     || !bAllowShareAccess(v99)
                     || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v100, v101, v102)
                     || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v103, v104, v105) + 280)
                     || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v106, v107, v108) + 104)
                     && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v109, v110, v111) + 108))
                    && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v79 + 20)) + 112) & 0x400) != 0 )
                  {
                    v112 = *((_QWORD *)v79 + 20);
LABEL_107:
                    v126 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(v112 + 24) + 1352LL);
                    goto LABEL_109;
                  }
                }
                v126 = EngCopyBits;
LABEL_109:
                OffCopyBits(
                  (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v126,
                  (LONG *)&gptlZero,
                  *((_QWORD *)a1 + 5),
                  (int *)v140 + 42,
                  *((_QWORD *)v79 + 20),
                  &v151,
                  0LL,
                  &v149,
                  &v149);
                if ( v82 )
                  GreUnlockDisplayDevice(*(_QWORD *)(v82 + 48));
                if ( !v17 )
                {
LABEL_115:
                  v6 = v146;
                  v14 = (struct _RECTL *)((char *)a1 + 48);
                  v15 = v141;
                  break;
                }
LABEL_112:
                GreUnlockDisplayDevice(*(_QWORD *)(v17 + 48));
LABEL_113:
                if ( !a5 || !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v147, &v140) )
                  goto LABEL_115;
              }
            }
          }
        }
        while ( v15 );
        ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v147);
      }
    }
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v148, v10, v11, v12);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v143);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v142);
}
