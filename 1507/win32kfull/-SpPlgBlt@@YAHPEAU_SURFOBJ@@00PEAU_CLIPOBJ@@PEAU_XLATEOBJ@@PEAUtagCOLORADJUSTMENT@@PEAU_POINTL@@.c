/*
 * XREFs of ?SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C026E770
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C00206C4 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0020980 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     EngPlgBlt @ 0x1C00C8FF0 (EngPlgBlt.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00E16E8 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C014CB38 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     OffPlgBlt @ 0x1C02C1064 (OffPlgBlt.c)
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
  __int64 ThreadWin32Thread; // rax
  int v28; // r9d
  BOOL (__stdcall *v29)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG); // rcx
  struct _SURFOBJ *v31; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+78h] [rbp-88h] BYREF
  struct _CLIPOBJ *v33; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL v34; // [rsp+88h] [rbp-78h] BYREF
  RECTL *prcl; // [rsp+90h] [rbp-70h]
  POINTL *pptl; // [rsp+98h] [rbp-68h]
  __int64 v37; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  __int64 v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h]
  struct _RECTL v41; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v42[114]; // [rsp+D0h] [rbp-30h] BYREF

  prcl = a9;
  v13 = 1;
  pptl = a10;
  v31 = a1;
  x = pptfx[1].x;
  v17 = __OFSUB__(x, pptfx->x);
  v15 = x == pptfx->x;
  v16 = x - pptfx->x < 0;
  v33 = a4;
  v18 = !(v16 ^ v17 | v15);
  v38 = (__int64)a3;
  v17 = __OFSUB__(x, pptfx[3].x);
  v15 = x == pptfx[3].x;
  v16 = x - pptfx[3].x < 0;
  y = pptfx[1].y;
  v40 = (__int64)pxlo;
  v37 = (__int64)pca;
  v39 = (__int64)pptlBrushOrg;
  v20 = v18 == !(v16 ^ v17 | v15);
  hdev = a2->hdev;
  v22 = y > pptfx->y == y > pptfx[3].y;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 17) != a2 )
  {
    if ( pptfx[v20].x > pptfx[v20 ^ 3LL].x )
      v20 ^= 3u;
    if ( pptfx[v22].y > pptfx[v22 ^ 3LL].y )
      v22 ^= 3u;
    v41.left = (pptfx[v20].x >> 4) - 1;
    v41.top = (pptfx[v22].y >> 4) - 1;
    v41.right = ((pptfx[v20 ^ 3LL].x + 15) >> 4) + 1;
    v41.bottom = ((pptfx[v22 ^ 3LL].y + 15) >> 4) + 1;
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v42, a1, a4, &v41);
    while ( 1 )
    {
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v42, &v31, &v34, &v33) )
        return v13;
      v23 = v31;
      v24 = 0LL;
      v32 = 0LL;
      if ( v31
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v31) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v23) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v23) + 112) & 0x200) == 0 )
      {
        v24 = SURFOBJ_TO_SURFACE_NOT_NULL(v23);
        v32 = v24;
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
      if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v32, &v33) )
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
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 4) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          v24 = v32;
          LODWORD(v23) = (_DWORD)v31;
          v29 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 128LL);
LABEL_36:
          v13 &= OffPlgBlt(
                   (int)v29,
                   (int)&v34,
                   (int)v23,
                   v28,
                   (__int64)a2,
                   v38,
                   v33,
                   v40,
                   v37,
                   v39,
                   (__int64)pptfx,
                   (__int64)prcl,
                   (__int64)pptl,
                   iMode);
          goto LABEL_37;
        }
        v24 = v32;
        v23 = v31;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v23) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
        {
          v24 = v32;
          LODWORD(v23) = (_DWORD)v31;
LABEL_35:
          v29 = EngPlgBlt;
          goto LABEL_36;
        }
        v24 = v32;
        v23 = v31;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v23) + 112) & 4) != 0 )
    {
      v29 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))*((_QWORD *)v23->hdev + 175);
      goto LABEL_36;
    }
    goto LABEL_35;
  }
  return EngPlgBlt(a1, a2, a3, a4, pxlo, pca, pptlBrushOrg, pptfx, prcl, pptl, iMode);
}
