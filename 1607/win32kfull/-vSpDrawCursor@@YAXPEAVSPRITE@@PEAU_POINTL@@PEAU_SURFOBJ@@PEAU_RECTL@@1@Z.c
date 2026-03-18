/*
 * XREFs of ?vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z @ 0x1C0273C94
 * Callers:
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0271C40 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C003A36C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C003A3A4 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     OffBitBlt @ 0x1C0102BB8 (OffBitBlt.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C01033E8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 */

void __fastcall vSpDrawCursor(
        struct SPRITE *a1,
        struct _POINTL *a2,
        struct _SURFOBJ *a3,
        struct _RECTL *a4,
        struct _POINTL *a5)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rbp
  __int64 v12; // rbx
  BOOL (__stdcall *v13)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // r12
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
  BOOL (__stdcall *v29)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  struct _POINTL *v42; // r14
  POINTL *v43; // r13
  __int64 v44; // rbp
  int y; // eax
  __int64 v46; // r14
  __int64 v47; // rbx
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
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  struct _RECTL *v75; // [rsp+40h] [rbp-78h]
  __int64 v76; // [rsp+70h] [rbp-48h] BYREF
  __int64 v77; // [rsp+78h] [rbp-40h]
  LONG x; // [rsp+C0h] [rbp+8h] BYREF
  int v79; // [rsp+C4h] [rbp+Ch]
  int *v80; // [rsp+C8h] [rbp+10h]
  __int64 v81; // [rsp+D8h] [rbp+20h]

  v81 = (__int64)a4;
  v80 = (int *)a2;
  if ( *((_QWORD *)a1 + 15) )
  {
    v8 = *((_QWORD *)a1 + 2);
    v76 = 0LL;
    v9 = SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)(v8 + 40));
    if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                          &v76,
                          0LL,
                          0,
                          (__int64)ppalMono,
                          *(_QWORD *)(v9 + 120),
                          (__int64)ppalDefault,
                          (__int64)ppalDefault,
                          0,
                          0xFFFFFF,
                          0,
                          0) )
    {
LABEL_60:
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v76);
      return;
    }
    v10 = 0LL;
    if ( a3
      && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x4000) != 0
       || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) < 0)
      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x200) == 0 )
    {
      v10 = SURFOBJ_TO_SURFACE_NOT_NULL(a3);
      GreLockDisplayDevice(*(_QWORD *)(v10 + 48));
    }
    v11 = *((_QWORD *)a1 + 15);
    v12 = 0LL;
    if ( v11
      && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 15)) + 112) & 0x4000) != 0
       || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11) + 112) < 0)
      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11) + 112) & 0x200) == 0 )
    {
      v12 = SURFOBJ_TO_SURFACE_NOT_NULL(v11);
      GreLockDisplayDevice(*(_QWORD *)(v12 + 48));
    }
    v13 = EngBitBlt;
    if ( a3->iType == 1 )
    {
      if ( bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15, v16)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18, v19) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v21, v22) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24, v25) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24, v25) + 280) + 20LL) & 1) != 0 )
      {
        v29 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27, v28) + 280) + 72LL);
        goto LABEL_30;
      }
      if ( a3->iType == 1
        && bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30, v31, v32)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33, v34, v35) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v36, v37, v38) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39, v40, v41) + 108)) )
      {
        goto LABEL_29;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 1) == 0 )
LABEL_29:
      v29 = EngBitBlt;
    else
      v29 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a3->hdev + 168);
LABEL_30:
    v42 = a5;
    v75 = a4;
    v43 = &gptlZero;
    v77 = v76;
    OffBitBlt(
      (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64, __int64, _DWORD *, int))v29,
      v80,
      (__int64)a3,
      &gptlZero,
      *((_QWORD *)a1 + 15),
      0LL,
      0LL,
      v76,
      v75,
      a5,
      0LL,
      0LL,
      0LL,
      34952);
    if ( v12 )
      GreUnlockDisplayDevice(*(_QWORD *)(v12 + 48));
    v44 = *((_QWORD *)a1 + 16);
    x = v42->x;
    if ( v44 )
    {
      y = v42->y;
      v43 = (POINTL *)((char *)a1 + 136);
      v46 = 0LL;
    }
    else
    {
      v44 = *((_QWORD *)a1 + 15);
      y = v42->y + (*(int *)(v44 + 36) >> 1);
      v46 = v77;
    }
    v79 = y;
    v47 = 0LL;
    if ( v44
      && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v44) + 112) & 0x4000) != 0
       || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v44) + 112) < 0)
      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v44) + 112) & 0x200) == 0 )
    {
      v47 = SURFOBJ_TO_SURFACE_NOT_NULL(v44);
      GreLockDisplayDevice(*(_QWORD *)(v47 + 48));
    }
    if ( a3->iType == 1 )
    {
      if ( bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v48, v49, v50)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v51, v52, v53) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v54, v55, v56) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v57, v58, v59) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v57, v58, v59) + 280) + 20LL) & 1) != 0 )
      {
        v13 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v60, v61, v62) + 280) + 72LL);
LABEL_56:
        OffBitBlt(
          (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64, __int64, _DWORD *, int))v13,
          v80,
          (__int64)a3,
          v43,
          v44,
          0LL,
          0LL,
          v46,
          (_DWORD *)v81,
          &x,
          0LL,
          0LL,
          0LL,
          26214);
        if ( v47 )
          GreUnlockDisplayDevice(*(_QWORD *)(v47 + 48));
        if ( v10 )
          GreUnlockDisplayDevice(*(_QWORD *)(v10 + 48));
        goto LABEL_60;
      }
      if ( a3->iType == 1
        && bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v63, v64, v65)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v66, v67, v68) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v69, v70, v71) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v72, v73, v74) + 108)) )
      {
        goto LABEL_56;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 1) != 0 )
      v13 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a3->hdev + 168);
    goto LABEL_56;
  }
}
