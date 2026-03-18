/*
 * XREFs of ?SpStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C00E0E90
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C00206C4 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0020980 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     EngStretchBlt @ 0x1C0035220 (EngStretchBlt.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C009DA98 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     OffStretchBlt @ 0x1C00E1400 (OffStretchBlt.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00E16E8 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C014CB38 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall SpStretchBlt(
        SURFOBJ *psoDest,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlHTOrg,
        RECTL *prclDest,
        RECTL *prclSrc,
        struct _POINTL *pptlMask,
        ULONG iMode)
{
  unsigned int v12; // r12d
  HDEV hdev; // rax
  struct _SURFOBJ *v14; // r10
  struct _CLIPOBJ *v15; // r11
  struct _SURFOBJ *v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // rdi
  USHORT *p_iType; // r14
  int v20; // r9d
  BOOL (__stdcall *v21)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // rcx
  __int64 ThreadWin32Thread; // rax
  struct _SURFOBJ *v24; // [rsp+70h] [rbp-90h] BYREF
  __int64 v25; // [rsp+78h] [rbp-88h] BYREF
  struct _CLIPOBJ *v26[2]; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL v27[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v28; // [rsp+A0h] [rbp-60h]
  __int64 v29; // [rsp+A8h] [rbp-58h]
  __int64 v30; // [rsp+B0h] [rbp-50h]
  __int64 v31; // [rsp+B8h] [rbp-48h]
  __int64 v32; // [rsp+C0h] [rbp-40h]
  __int64 v33; // [rsp+C8h] [rbp-38h]
  struct _RECTL v34; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v35[114]; // [rsp+E0h] [rbp-20h] BYREF

  v12 = 1;
  hdev = a2->hdev;
  v24 = psoDest;
  v26[0] = a4;
  v31 = (__int64)a3;
  v29 = (__int64)pxlo;
  v32 = (__int64)pca;
  v33 = (__int64)pptlHTOrg;
  v28 = (__int64)prclSrc;
  v30 = (__int64)pptlMask;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 17) != a2 )
  {
    v27[0].x = prclDest->left;
    v27[0].y = prclDest->top;
    v27[1] = *(struct _POINTL *)&prclDest->right;
    v34 = *(struct _RECTL *)&v27[0].x;
    ERECTL::vOrder((ERECTL *)&v34);
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v35, v14, v15, &v34);
    while ( 1 )
    {
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v35, &v24, v27, v26) )
        return v12;
      v16 = v24;
      v17 = 0LL;
      v25 = 0LL;
      if ( v24
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v24) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 112) & 0x200) == 0 )
      {
        v17 = SURFOBJ_TO_SURFACE_NOT_NULL(v16);
        v25 = v17;
        GreLockDisplayDevice(*(_QWORD *)(v17 + 48));
      }
      v18 = 0LL;
      if ( ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x200) == 0 )
      {
        v18 = SURFOBJ_TO_SURFACE_NOT_NULL(a2);
        GreLockDisplayDevice(*(_QWORD *)(v18 + 48));
      }
      if ( (unsigned int)NEEDDDILOCK::bRender((NEEDDDILOCK *)&v25, v26) )
        break;
LABEL_14:
      if ( v18 )
        GreUnlockDisplayDevice(*(_QWORD *)(v18 + 48));
      if ( v17 )
        GreUnlockDisplayDevice(*(_QWORD *)(v17 + 48));
    }
    p_iType = &v16->iType;
    if ( v16->iType == 1 )
    {
      if ( (unsigned int)bAllowShareAccess(v16) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 2) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          v17 = v25;
          LODWORD(v16) = (_DWORD)v24;
          v21 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 88LL);
          goto LABEL_13;
        }
        v17 = v25;
        v16 = v24;
      }
      if ( *p_iType == 1 && (unsigned int)bAllowShareAccess(v16) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
        {
          v17 = v25;
          LODWORD(v16) = (_DWORD)v24;
          goto LABEL_40;
        }
        v17 = v25;
        v16 = v24;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 112) & 2) != 0 )
    {
      v21 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))*((_QWORD *)v16->hdev + 170);
LABEL_13:
      v12 &= OffStretchBlt(
               (int)v21,
               (int)v27,
               (int)v16,
               v20,
               (__int64)a2,
               v31,
               v26[0],
               v29,
               v32,
               v33,
               (__int64)prclDest,
               v28,
               v30,
               iMode);
      goto LABEL_14;
    }
LABEL_40:
    v21 = EngStretchBlt;
    goto LABEL_13;
  }
  return EngStretchBlt(psoDest, a2, a3, a4, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode);
}
