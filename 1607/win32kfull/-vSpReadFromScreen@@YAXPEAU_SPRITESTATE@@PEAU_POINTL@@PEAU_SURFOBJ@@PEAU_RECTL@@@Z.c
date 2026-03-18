/*
 * XREFs of ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0274404
 * Callers:
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0271710 (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1C02764A4 (-vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z.c)
 *     vSpUnTearDownSprites @ 0x1C02790C0 (vSpUnTearDownSprites.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C003A36C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C003A3A4 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C004998C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00499C0 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C01033E8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffCopyBits @ 0x1C0103410 (OffCopyBits.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C0269230 (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C026C7EC (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C027109C (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 */

void __fastcall vSpReadFromScreen(struct _SPRITESTATE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  struct REGION *v4; // rbx
  int v8; // eax
  __int64 v9; // rbx
  struct _SURFOBJ *v10; // rsi
  __int64 v11; // r15
  __int64 v12; // rax
  POINTL *v13; // r12
  __int64 v14; // rbx
  __int64 v15; // rdi
  BOOL (__stdcall *v16)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rbx
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
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  HDEV hdev; // rax
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // [rsp+60h] [rbp-A0h] BYREF
  struct _CLIPOBJ *v70; // [rsp+68h] [rbp-98h]
  __int64 v71; // [rsp+70h] [rbp-90h]
  __int64 v72; // [rsp+78h] [rbp-88h]
  int v73[2]; // [rsp+80h] [rbp-80h]
  _BYTE v74[32]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v75; // [rsp+A8h] [rbp-58h]
  REGION *v76[11]; // [rsp+B0h] [rbp-50h] BYREF
  int v77; // [rsp+108h] [rbp+8h]
  int v78; // [rsp+130h] [rbp+30h]
  __int64 v79; // [rsp+140h] [rbp+40h]
  int v80; // [rsp+148h] [rbp+48h]

  v4 = (struct REGION *)*((_QWORD *)a1 + 130);
  *(_QWORD *)v73 = a2;
  v76[10] = 0LL;
  v77 = 0;
  v79 = 0LL;
  v78 = 1;
  v76[7] = 0LL;
  v80 = 0;
  v70 = 0LL;
  if ( v4 )
  {
    v8 = bConcurrent(a1, (__int64)a2, (__int64)a3, (__int64)a4);
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v76, v8, v4, (struct ERECTL *)a4, 0);
    if ( ERECTL::bEmpty((ERECTL *)((char *)v76 + 4)) )
      goto LABEL_64;
    v70 = (struct _CLIPOBJ *)v76;
  }
  v9 = *((_QWORD *)a1 + 5);
  v72 = 0LL;
  if ( v9
    && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v9) + 112) & 0x4000) != 0
     || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v9) + 112) & 0x80000000) != 0)
    && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v9) + 112) & 0x200) == 0 )
  {
    v72 = SURFOBJ_TO_SURFACE_NOT_NULL(v9);
    GreLockDisplayDevice(*(_QWORD *)(v72 + 48));
  }
  v71 = 0LL;
  if ( a3
    && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x4000) != 0
     || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x80000000) != 0)
    && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x200) == 0 )
  {
    v71 = SURFOBJ_TO_SURFACE_NOT_NULL(a3);
    GreLockDisplayDevice(*(_QWORD *)(v71 + 48));
  }
  v10 = (struct _SURFOBJ *)*((_QWORD *)a1 + 5);
  v11 = 0LL;
  v12 = SURFOBJ_TO_SURFACE(v10);
  v69 = 0LL;
  v13 = &gptlZero;
  if ( !v12 )
    goto LABEL_60;
  v14 = *(_QWORD *)(v12 + 48);
  if ( (*(_DWORD *)(v12 + 112) & 0x80000) == 0 || (v15 = *(_QWORD *)(v14 + 40), v14 == v15) )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x400) == 0 && v10->hdev )
    {
      if ( v10->iType != 1 )
      {
LABEL_39:
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10) + 112) & 0x400) != 0 )
        {
          hdev = v10->hdev;
LABEL_57:
          v16 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)hdev + 169);
          goto LABEL_59;
        }
        goto LABEL_58;
      }
      if ( !bAllowShareAccess(v10)
        || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18, v19)
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v21, v22) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24, v25) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27, v28) + 108)
        || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27, v28) + 280) + 20LL) & 0x400) == 0 )
      {
        if ( v10->iType == 1
          && bAllowShareAccess(v10)
          && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32, v33, v34)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35, v36, v37) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v38, v39, v40) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v41, v42, v43) + 108)) )
        {
          goto LABEL_58;
        }
        goto LABEL_39;
      }
LABEL_48:
      v16 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29, v30, v31) + 280)
                                                                                                 + 80LL);
LABEL_59:
      OffCopyBits(
        (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v16,
        *(LONG **)v73,
        (__int64)a3,
        (int *)v13,
        (__int64)v10,
        v70,
        v11,
        a4,
        a4);
      goto LABEL_60;
    }
    if ( a3->iType == 1 )
    {
      if ( bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v45, v46, v47)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v48, v49, v50) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v51, v52, v53) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v54, v55, v56) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v54, v55, v56) + 280) + 20LL) & 0x400) != 0 )
      {
        goto LABEL_48;
      }
      if ( a3->iType == 1
        && bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v57, v58, v59)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v60, v61, v62) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v63, v64, v65) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v66, v67, v68) + 108)) )
      {
        goto LABEL_58;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x400) != 0 )
    {
      hdev = a3->hdev;
      goto LABEL_57;
    }
LABEL_58:
    v16 = EngCopyBits;
    goto LABEL_59;
  }
  v13 = (POINTL *)(v14 + 2608);
  SURFREF::SURFREF((SURFREF *)v74, *(HSURF *)(v12 + 136));
  if ( v75
    && (unsigned int)EXLATEOBJ::bInitXlateObj(
                       &v69,
                       0LL,
                       0,
                       *(_QWORD *)(v15 + 1832),
                       *(_QWORD *)(v14 + 1832),
                       (__int64)ppalDefault,
                       (__int64)ppalDefault,
                       0,
                       0,
                       0,
                       0x2000) )
  {
    v11 = v69;
    if ( v75 )
      v10 = (struct _SURFOBJ *)(v75 + 24);
    else
      v10 = 0LL;
    v16 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v15 + 2864);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v74);
    goto LABEL_59;
  }
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v74);
LABEL_60:
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v69);
  if ( v71 )
    GreUnlockDisplayDevice(*(_QWORD *)(v71 + 48));
  if ( v72 )
    GreUnlockDisplayDevice(*(_QWORD *)(v72 + 48));
LABEL_64:
  ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED(v76);
}
