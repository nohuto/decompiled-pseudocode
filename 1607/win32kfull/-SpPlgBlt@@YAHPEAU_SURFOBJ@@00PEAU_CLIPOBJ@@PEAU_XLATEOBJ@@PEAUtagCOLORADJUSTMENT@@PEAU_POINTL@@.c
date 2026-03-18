/*
 * XREFs of ?SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C026B7A0
 * Callers:
 *     <none>
 * Callees:
 *     EngPlgBlt @ 0x1C0001FC0 (EngPlgBlt.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C003DE00 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C003E0B4 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C0102D58 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C01033E8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     OffPlgBlt @ 0x1C02C359C (OffPlgBlt.c)
 */

__int64 __fastcall SpPlgBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlBrushOrg,
        POINTFIX *pptfx,
        struct _RECTL *a9,
        struct _POINTL *a10,
        ULONG iMode)
{
  unsigned int v13; // r13d
  FIX x; // ecx
  bool v15; // zf
  bool v16; // sf
  bool v17; // of
  BOOL v18; // edx
  FIX y; // ecx
  int v20; // r10d
  HDEV hdev; // rax
  int v22; // r11d
  struct _SURFOBJ *v23; // rsi
  __int64 v24; // rbx
  __int64 v25; // rdi
  USHORT *p_iType; // r12
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
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v43; // r9
  BOOL (__stdcall *v44)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG); // rcx
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
  struct _SURFOBJ *v57; // [rsp+70h] [rbp-90h] BYREF
  __int64 v58; // [rsp+78h] [rbp-88h] BYREF
  struct _CLIPOBJ *v59; // [rsp+80h] [rbp-80h] BYREF
  POINTL *pptl; // [rsp+88h] [rbp-78h]
  RECTL *prcl; // [rsp+90h] [rbp-70h]
  struct _POINTL v62; // [rsp+98h] [rbp-68h] BYREF
  __int64 v63; // [rsp+A0h] [rbp-60h]
  __int64 v64; // [rsp+A8h] [rbp-58h]
  __int64 v65; // [rsp+B0h] [rbp-50h]
  __int64 v66; // [rsp+B8h] [rbp-48h]
  struct _RECTL v67; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v68[114]; // [rsp+D0h] [rbp-30h] BYREF

  prcl = a9;
  v13 = 1;
  pptl = a10;
  v57 = a1;
  x = pptfx[1].x;
  v17 = __OFSUB__(x, pptfx->x);
  v15 = x == pptfx->x;
  v16 = x - pptfx->x < 0;
  v59 = a4;
  v18 = !(v16 ^ v17 | v15);
  v66 = (__int64)a3;
  v17 = __OFSUB__(x, pptfx[3].x);
  v15 = x == pptfx[3].x;
  v16 = x - pptfx[3].x < 0;
  y = pptfx[1].y;
  v65 = (__int64)pxlo;
  v64 = (__int64)pca;
  v63 = (__int64)pptlBrushOrg;
  v20 = v18 == !(v16 ^ v17 | v15);
  hdev = a2->hdev;
  v22 = y > pptfx->y == y > pptfx[3].y;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 17) != a2 )
  {
    if ( pptfx[v20].x > pptfx[v20 ^ 3LL].x )
      v20 ^= 3u;
    if ( pptfx[v22].y > pptfx[v22 ^ 3LL].y )
      v22 ^= 3u;
    v67.left = (pptfx[v20].x >> 4) - 1;
    v67.top = (pptfx[v22].y >> 4) - 1;
    v67.right = ((pptfx[v20 ^ 3LL].x + 15) >> 4) + 1;
    v67.bottom = ((pptfx[v22 ^ 3LL].y + 15) >> 4) + 1;
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v68, a1, a4, &v67);
    while ( 1 )
    {
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v68, &v57, &v62, &v59) )
        return v13;
      v23 = v57;
      v24 = 0LL;
      v58 = 0LL;
      if ( v57
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v57) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v23) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v23) + 112) & 0x200) == 0 )
      {
        v24 = SURFOBJ_TO_SURFACE_NOT_NULL(v23);
        v58 = v24;
        GreLockDisplayDevice(*(_QWORD *)(v24 + 48));
      }
      v25 = 0LL;
      if ( ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x200) == 0 )
      {
        v25 = SURFOBJ_TO_SURFACE_NOT_NULL(a2);
        GreLockDisplayDevice(*(_QWORD *)(v25 + 48));
      }
      if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v58, &v59) )
        break;
LABEL_37:
      if ( v25 )
        GreUnlockDisplayDevice(*(_QWORD *)(v25 + 48));
      if ( v24 )
        GreUnlockDisplayDevice(*(_QWORD *)(v24 + 48));
    }
    p_iType = &v23->iType;
    if ( v23->iType == 1 )
    {
      if ( bAllowShareAccess(v23) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27, v28, v29)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30, v31, v32) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33, v34, v35) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v36, v37, v38) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v36, v37, v38) + 280) + 20LL) & 4) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39, v40, v41);
          v24 = v58;
          LODWORD(v23) = (_DWORD)v57;
          v44 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 128LL);
LABEL_36:
          v13 &= OffPlgBlt(
                   (int)v44,
                   (int)&v62,
                   (int)v23,
                   v43,
                   (__int64)a2,
                   v66,
                   v59,
                   v65,
                   v64,
                   v63,
                   (__int64)pptfx,
                   (__int64)prcl,
                   (__int64)pptl,
                   iMode);
          goto LABEL_37;
        }
        v24 = v58;
        v23 = v57;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v23) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v45, v46, v47)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v48, v49, v50) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v51, v52, v53) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v54, v55, v43) + 108)) )
        {
          v24 = v58;
          LODWORD(v23) = (_DWORD)v57;
LABEL_35:
          v44 = EngPlgBlt;
          goto LABEL_36;
        }
        v24 = v58;
        v23 = v57;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v23) + 112) & 4) != 0 )
    {
      v44 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))*((_QWORD *)v23->hdev + 175);
      goto LABEL_36;
    }
    goto LABEL_35;
  }
  return EngPlgBlt(a1, a2, a3, a4, pxlo, pca, pptlBrushOrg, pptfx, prcl, pptl, iMode);
}
