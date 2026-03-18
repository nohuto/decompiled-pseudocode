/*
 * XREFs of ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C02734C0
 * Callers:
 *     EngControlSprites @ 0x1C02786E0 (EngControlSprites.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0055CE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0055D10 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C01033E8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffCopyBits @ 0x1C0103410 (OffCopyBits.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C0103C74 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0103CE8 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C0103E38 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C011C4C8 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z @ 0x1C0269154 (--0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QEAA@XZ @ 0x1C02692A0 (--1UNDODESKTOPCOORD@@QEAA@XZ.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C026C844 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C027492C (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 */

void __fastcall vSpDeviceControlSprites(HDEV a1, struct EWNDOBJ *a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  HDEV v6; // rdi
  int v7; // eax
  struct SPRITE *v8; // rsi
  int v9; // r12d
  struct _SURFOBJ *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  struct _SURFOBJ *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  struct _SURFOBJ *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  BOOL (__stdcall *v53)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  struct _SURFOBJ *v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  int v67; // r12d
  struct SPRITE *v68; // rsi
  struct _SURFOBJ *v69; // rcx
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
  struct _SURFOBJ *v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rdx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rdx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // rax
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
  BOOL (__stdcall *v112)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
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
  __int64 v126; // rdx
  __int64 v127; // r8
  __int64 v128; // r9
  struct SPRITE *v129; // [rsp+58h] [rbp-B0h] BYREF
  HDEV v130; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v131[16]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v132[96]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v133[96]; // [rsp+D8h] [rbp-30h] BYREF
  struct _SPRITESTATE *v134[24]; // [rsp+138h] [rbp+30h] BYREF
  struct _RECTL v135; // [rsp+1F8h] [rbp+F0h] BYREF
  struct _RECTL v136; // [rsp+208h] [rbp+100h] BYREF

  v130 = a1;
  v5 = a3;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v134, (struct PDEVOBJ *)&v130, a3, a4);
  v6 = v130 + 24;
  UNDODESKTOPCOORD::UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v131, a2, (struct _SPRITESTATE *)(v130 + 24));
  if ( v5 != 1 )
  {
    *((_DWORD *)a2 + 46) &= ~0x1000000u;
    vSpComputeUnlockedRegion((struct _SPRITESTATE *)v6);
    if ( (*((_DWORD *)a2 + 46) & 0x2000000) == 0
      || !bIntersect((const struct _RECTL *)((char *)a2 + 4), (const struct _RECTL *)v6 + 3, &v136) )
    {
      goto LABEL_87;
    }
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v132, (struct _SPRITESTATE *)v6, &v136, 0, 0LL);
    while ( 1 )
    {
      v67 = ENUMAREAS::bEnum((ENUMAREAS *)v132, &v129, &v135);
      if ( v129 )
        break;
LABEL_85:
      if ( !v67 )
      {
        vSpRedrawArea((struct _SPRITESTATE *)v6, &v136, 1);
        ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v132);
        goto LABEL_87;
      }
    }
    while ( 1 )
    {
      v68 = v129;
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v129 + 20)) + 112) & 0x400) != 0
        || (v69 = (struct _SURFOBJ *)*((_QWORD *)v6 + 5), !v69->hdev) )
      {
        v99 = (struct _SURFOBJ *)*((_QWORD *)v68 + 20);
        if ( v99->iType != 1
          || !bAllowShareAccess(v99)
          || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v100, v101, v102)
          || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v103, v104, v105) + 280)
          || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v106, v107, v108) + 104)
          && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v109, v110, v111) + 108)
          || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v109, v110, v111) + 280)
                        + 20LL) & 0x400) == 0 )
        {
          v113 = (struct _SURFOBJ *)*((_QWORD *)v68 + 20);
          if ( v113->iType == 1
            && bAllowShareAccess(v113)
            && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v114, v115, v116)
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v117, v118, v119) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v120, v121, v122) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v123, v124, v125) + 108))
            || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v68 + 20)) + 112) & 0x400) == 0 )
          {
LABEL_83:
            v112 = EngCopyBits;
            goto LABEL_84;
          }
          v98 = *((_QWORD *)v68 + 20);
          goto LABEL_82;
        }
      }
      else if ( v69->iType != 1
             || !bAllowShareAccess(v69)
             || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v70, v71, v72)
             || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v73, v74, v75) + 280)
             || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v76, v77, v78) + 104)
             && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v79, v80, v81) + 108)
             || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v79, v80, v81) + 280)
                           + 20LL) & 0x400) == 0 )
      {
        v85 = (struct _SURFOBJ *)*((_QWORD *)v6 + 5);
        if ( v85->iType == 1
          && bAllowShareAccess(v85)
          && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v86, v87, v88)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v89, v90, v91) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v92, v93, v94) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v95, v96, v97) + 108))
          || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v6 + 5)) + 112) & 0x400) == 0 )
        {
          goto LABEL_83;
        }
        v98 = *((_QWORD *)v6 + 5);
LABEL_82:
        v112 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(v98 + 24) + 1352LL);
        goto LABEL_84;
      }
      v112 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v82, v83, v84) + 280)
                                                                                                  + 80LL);
LABEL_84:
      OffCopyBits(
        (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v112,
        (LONG *)v129 + 42,
        *((_QWORD *)v68 + 20),
        (int *)&gptlZero,
        *((_QWORD *)v6 + 5),
        (struct _CLIPOBJ *)a2,
        0LL,
        &v135,
        &v135);
      if ( !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v132, &v129) )
        goto LABEL_85;
    }
  }
  *((_DWORD *)a2 + 46) |= 0x1000000u;
  if ( (*((_DWORD *)a2 + 46) & 0x2000000) != 0
    && bIntersect((const struct _RECTL *)((char *)a2 + 4), (const struct _RECTL *)v6 + 3, &v136) )
  {
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v133, (struct _SPRITESTATE *)v6, &v136, 0, 0LL);
    while ( 1 )
    {
      v7 = ENUMAREAS::bEnum((ENUMAREAS *)v133, &v129, &v135);
      v8 = v129;
      v9 = v7;
      if ( v129 )
        break;
LABEL_42:
      if ( !v9 )
      {
        ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v133);
        goto LABEL_44;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v6 + 5)) + 112) & 0x400) != 0
      || (v10 = (struct _SURFOBJ *)*((_QWORD *)v8 + 20), !v10->hdev) )
    {
      v40 = (struct _SURFOBJ *)*((_QWORD *)v6 + 5);
      if ( v40->iType != 1
        || !bAllowShareAccess(v40)
        || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v41, v42, v43)
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v44, v45, v46) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v47, v48, v49) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v50, v51, v52) + 108)
        || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v50, v51, v52) + 280) + 20LL) & 0x400) == 0 )
      {
        v54 = (struct _SURFOBJ *)*((_QWORD *)v6 + 5);
        if ( (v54->iType != 1
           || !bAllowShareAccess(v54)
           || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v55, v56, v57)
           || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v58, v59, v60) + 280)
           || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v61, v62, v63) + 104)
           && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v64, v65, v66) + 108))
          && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v6 + 5)) + 112) & 0x400) != 0 )
        {
          v39 = *((_QWORD *)v6 + 5);
          goto LABEL_39;
        }
LABEL_40:
        v53 = EngCopyBits;
        goto LABEL_41;
      }
    }
    else if ( v10->iType != 1
           || !bAllowShareAccess(v10)
           || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13)
           || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15, v16) + 280)
           || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18, v19) + 104)
           && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v21, v22) + 108)
           || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v21, v22) + 280)
                         + 20LL) & 0x400) == 0 )
    {
      v26 = (struct _SURFOBJ *)*((_QWORD *)v8 + 20);
      if ( (v26->iType != 1
         || !bAllowShareAccess(v26)
         || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27, v28, v29)
         || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30, v31, v32) + 280)
         || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33, v34, v35) + 104)
         && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v36, v37, v38) + 108))
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v8 + 20)) + 112) & 0x400) != 0 )
      {
        v39 = *((_QWORD *)v8 + 20);
LABEL_39:
        v53 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(v39 + 24) + 1352LL);
        goto LABEL_41;
      }
      goto LABEL_40;
    }
    v53 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24, v25) + 280)
                                                                                               + 80LL);
LABEL_41:
    OffCopyBits(
      (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v53,
      (LONG *)&gptlZero,
      *((_QWORD *)v6 + 5),
      (int *)v129 + 42,
      *((_QWORD *)v129 + 20),
      (struct _CLIPOBJ *)a2,
      0LL,
      &v135,
      &v135);
    goto LABEL_42;
  }
LABEL_44:
  vSpComputeUnlockedRegion((struct _SPRITESTATE *)v6);
LABEL_87:
  UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v131);
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v134, v126, v127, v128);
}
