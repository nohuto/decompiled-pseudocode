/*
 * XREFs of ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1C02764A4
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C026E6A4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C01033E8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffCopyBits @ 0x1C0103410 (OffCopyBits.c)
 *     ?pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C01317D8 (-pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?cSpSubtract@@YAKPEBU_RECTL@@0PEAU1@@Z @ 0x1C026FD3C (-cSpSubtract@@YAKPEBU_RECTL@@0PEAU1@@Z.c)
 *     ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0274404 (-vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C02786A8 (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
 */

void __fastcall vSpSmallUnderlayCopy(
        struct SPRITE *a1,
        struct _POINTL *a2,
        struct _SURFOBJ *a3,
        struct _POINTL *a4,
        struct _SURFOBJ *a5,
        int a6,
        int a7,
        struct _RECTL *a8,
        struct _RECTL *a9)
{
  __int64 v9; // r15
  __int64 v12; // rdi
  __int64 v13; // rbx
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
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  HDEV hdev; // rax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  BOOL (__stdcall *v54)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
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
  struct _POINTL *v67; // rsi
  int v68; // ebx
  struct _RECTL *v69; // rdi
  struct SPRITE *i; // rax
  int v71; // r12d
  __int64 v72; // rbx
  __int64 v73; // rsi
  __int64 v74; // rdi
  struct _SURFOBJ *v75; // rcx
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
  struct _SURFOBJ *v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rdx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // rdx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rdx
  __int64 v102; // r8
  __int64 v103; // r9
  BOOL (__stdcall *v104)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  __int64 v105; // rdx
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // rdx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 v111; // rdx
  __int64 v112; // r8
  __int64 v113; // r9
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
  struct SPRITE *v129; // r15
  int v130; // [rsp+50h] [rbp-A1h]
  struct _RECTL v133; // [rsp+70h] [rbp-81h] BYREF
  _DWORD v134[4]; // [rsp+80h] [rbp-71h] BYREF
  struct _RECTL v135; // [rsp+90h] [rbp-61h] BYREF
  struct _RECTL v136[4]; // [rsp+A0h] [rbp-51h] BYREF

  v9 = *((_QWORD *)a1 + 2);
  if ( (*(_DWORD *)(*(_QWORD *)v9 + 56LL) & 0x400) == 0 )
  {
    if ( !bIntersect(a9, a8, &v133) )
    {
      v67 = a2;
LABEL_53:
      v68 = 0;
      v130 = cSpSubtract(a8, a9, v136);
      do
        vSpReadFromScreen((struct _SPRITESTATE *)v9, v67, a3, &v136[v68++]);
      while ( v68 != v130 );
      v69 = a8;
      for ( i = pSpFindInZ(*(struct SPRITE **)(v9 + 16), a8); ; i = pSpFindInZ(*((struct SPRITE **)v129 + 3), v69) )
      {
        v129 = i;
        if ( !i )
          return;
        if ( i == a1 )
          goto LABEL_109;
        v71 = 0;
        do
        {
          if ( !bIntersect(&v136[v71], (const struct _RECTL *)v129 + 5, &v135) )
            goto LABEL_107;
          v72 = 0LL;
          if ( a3
            && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x4000) != 0
             || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) < 0)
            && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x200) == 0 )
          {
            v72 = SURFOBJ_TO_SURFACE_NOT_NULL(a3);
            GreLockDisplayDevice(*(_QWORD *)(v72 + 48));
          }
          v73 = *((_QWORD *)v129 + 20);
          v74 = 0LL;
          if ( v73
            && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v129 + 20)) + 112) & 0x4000) != 0
             || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v73) + 112) < 0)
            && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v73) + 112) & 0x200) == 0 )
          {
            v74 = SURFOBJ_TO_SURFACE_NOT_NULL(v73);
            GreLockDisplayDevice(*(_QWORD *)(v74 + 48));
          }
          if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x400) != 0
            || (v75 = (struct _SURFOBJ *)*((_QWORD *)v129 + 20), !v75->hdev) )
          {
            if ( a3->iType == 1 )
            {
              if ( bAllowShareAccess(a3)
                && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v105, v106, v107)
                && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v108, v109, v110) + 280)
                && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v111, v112, v113) + 104)
                 || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v114, v115, v116) + 108))
                && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v114, v115, v116)
                                          + 280)
                              + 20LL) & 0x400) != 0 )
              {
LABEL_93:
                v104 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v88, v89, v90) + 280) + 80LL);
                goto LABEL_103;
              }
              if ( a3->iType == 1
                && bAllowShareAccess(a3)
                && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v117, v118, v119)
                && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v120, v121, v122) + 280)
                && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v123, v124, v125) + 104)
                 || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v126, v127, v128) + 108)) )
              {
                goto LABEL_102;
              }
            }
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x400) == 0 )
              goto LABEL_102;
            v104 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)a3->hdev + 169);
          }
          else
          {
            if ( v75->iType == 1
              && bAllowShareAccess(v75)
              && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v76, v77, v78)
              && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v79, v80, v81) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v82, v83, v84) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v85, v86, v87) + 108))
              && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v85, v86, v87) + 280)
                            + 20LL) & 0x400) != 0 )
            {
              goto LABEL_93;
            }
            v91 = (struct _SURFOBJ *)*((_QWORD *)v129 + 20);
            if ( v91->iType == 1
              && bAllowShareAccess(v91)
              && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v92, v93, v94)
              && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v95, v96, v97) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v98, v99, v100) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v101, v102, v103) + 108))
              || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v129 + 20)) + 112) & 0x400) == 0 )
            {
LABEL_102:
              v104 = EngCopyBits;
              goto LABEL_103;
            }
            v104 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(*((_QWORD *)v129 + 20) + 24LL) + 1352LL);
          }
LABEL_103:
          OffCopyBits(
            (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v104,
            (LONG *)a2,
            (__int64)a3,
            (int *)v129 + 42,
            *((_QWORD *)v129 + 20),
            0LL,
            0LL,
            &v135,
            &v135);
          if ( v74 )
            GreUnlockDisplayDevice(*(_QWORD *)(v74 + 48));
          if ( v72 )
            GreUnlockDisplayDevice(*(_QWORD *)(v72 + 48));
LABEL_107:
          ++v71;
        }
        while ( v71 != v130 );
        v69 = a8;
LABEL_109:
        SINGLEREADERLOCK::vUnlock((struct SPRITE *)((char *)v129 + 248));
      }
    }
    v12 = 0LL;
    v134[0] = a6 + v133.left;
    v134[2] = a6 + v133.right;
    v134[1] = a7 + v133.top;
    v134[3] = a7 + v133.bottom;
    if ( a3
      && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x4000) != 0
       || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) < 0)
      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x200) == 0 )
    {
      v12 = SURFOBJ_TO_SURFACE_NOT_NULL(a3);
      GreLockDisplayDevice(*(_QWORD *)(v12 + 48));
    }
    v13 = 0LL;
    if ( a5
      && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a5) + 112) & 0x4000) != 0
       || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a5) + 112) < 0)
      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a5) + 112) & 0x200) == 0 )
    {
      v13 = SURFOBJ_TO_SURFACE_NOT_NULL(a5);
      GreLockDisplayDevice(*(_QWORD *)(v13 + 48));
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x400) == 0 && a5->hdev )
    {
      if ( a5->iType != 1 )
      {
LABEL_28:
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a5) + 112) & 0x400) != 0 )
        {
          hdev = a5->hdev;
LABEL_46:
          v54 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)hdev + 169);
          goto LABEL_48;
        }
        goto LABEL_47;
      }
      if ( !bAllowShareAccess(a5)
        || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15, v16)
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18, v19) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v21, v22) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24, v25) + 108)
        || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24, v25) + 280) + 20LL) & 0x400) == 0 )
      {
        if ( a5->iType == 1
          && bAllowShareAccess(a5)
          && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29, v30, v31)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32, v33, v34) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35, v36, v37) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v38, v39, v40) + 108)) )
        {
          goto LABEL_47;
        }
        goto LABEL_28;
      }
LABEL_37:
      v54 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27, v28) + 280)
                                                                                                 + 80LL);
LABEL_48:
      v67 = a2;
      OffCopyBits(
        (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v54,
        (LONG *)a2,
        (__int64)a3,
        (int *)a4,
        (__int64)a5,
        0LL,
        0LL,
        &v133,
        v134);
      if ( v13 )
        GreUnlockDisplayDevice(*(_QWORD *)(v13 + 48));
      if ( v12 )
        GreUnlockDisplayDevice(*(_QWORD *)(v12 + 48));
      goto LABEL_53;
    }
    if ( a3->iType == 1 )
    {
      if ( bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v42, v43, v44)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v45, v46, v47) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v48, v49, v50) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v51, v52, v53) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v51, v52, v53) + 280) + 20LL) & 0x400) != 0 )
      {
        goto LABEL_37;
      }
      if ( a3->iType == 1
        && bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v55, v56, v57)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v58, v59, v60) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v61, v62, v63) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v64, v65, v66) + 108)) )
      {
        goto LABEL_47;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x400) != 0 )
    {
      hdev = a3->hdev;
      goto LABEL_46;
    }
LABEL_47:
    v54 = EngCopyBits;
    goto LABEL_48;
  }
}
