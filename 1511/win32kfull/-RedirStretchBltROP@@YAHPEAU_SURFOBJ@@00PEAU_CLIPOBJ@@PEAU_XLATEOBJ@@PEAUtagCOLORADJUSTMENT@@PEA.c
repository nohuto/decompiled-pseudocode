/*
 * XREFs of ?RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C028F890
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002CCC0 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     EngStretchBltROP @ 0x1C00EF920 (EngStretchBltROP.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C028BE5C (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C028DA08 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C028E398 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??1REDIROPEN@@QEAA@XZ @ 0x1C028E3EC (--1REDIROPEN@@QEAA@XZ.c)
 */

__int64 __fastcall RedirStretchBltROP(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlHTOrg,
        RECTL *prclDest,
        RECTL *prclSrc,
        POINTL *pptlMask,
        ULONG iMode,
        BRUSHOBJ *pbo,
        DWORD rop4)
{
  CLIPOBJ *v15; // rdi
  __int64 v17; // rbx
  struct _DISPSURF *v18; // r14
  __int64 v19; // r9
  __int64 v20; // r9
  __int64 v21; // rbx
  struct _SURFOBJ *DevBitmap; // rsi
  struct _SURFOBJ *v23; // rdi
  struct _SURFOBJ *v24; // rax
  unsigned int v25; // r8d
  struct SURFACE *v27; // [rsp+70h] [rbp-69h] BYREF
  __int64 v28; // [rsp+78h] [rbp-61h] BYREF
  struct SURFACE *v29; // [rsp+80h] [rbp-59h] BYREF
  struct SURFACE *v30; // [rsp+88h] [rbp-51h] BYREF
  _BYTE v31[128]; // [rsp+90h] [rbp-49h] BYREF
  __int64 HDEV; // [rsp+120h] [rbp+47h] BYREF
  CLIPOBJ *v33; // [rsp+138h] [rbp+5Fh]

  v33 = pco;
  v15 = pco;
  REDIROPEN::REDIROPEN((REDIROPEN *)&v29, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v27, a2);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v30, a3);
  if ( a1 )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v17 = HDEV;
      if ( HDEV )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v31, (struct PDEVOBJ *)&HDEV);
        if ( (*(_DWORD *)(v17 + 56) & 0x20000) != 0 )
        {
          v18 = **(struct _DISPSURF ***)(v17 + 1824);
          if ( v18 )
          {
            do
            {
              v19 = *((_QWORD *)v18 + 6);
              HDEV = v19;
              if ( v19 )
              {
                if ( (*(_DWORD *)(v19 + 1848) & 0x8000000) != 0 && (*(_DWORD *)(v19 + 2152) & 0x8000) != 0 )
                {
                  if ( *(_QWORD *)(*(_QWORD *)(v19 + 1816) + 616LL) )
                  {
                    MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                      (MARK_ACCDRV_NOTIFICATION *)&v28,
                      (struct PDEVOBJ *)&HDEV,
                      a1);
                    v21 = *(_QWORD *)(v20 + 1816);
                    DevBitmap = GetDevBitmap(v18, a3);
                    v23 = GetDevBitmap(v18, a2);
                    v24 = GetDevBitmap(v18, a1);
                    (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))(v21 + 616))(
                      v24,
                      v23,
                      DevBitmap,
                      v33,
                      pxlo,
                      pca,
                      pptlHTOrg,
                      prclDest,
                      prclSrc,
                      pptlMask,
                      iMode,
                      pbo,
                      rop4);
                    if ( v28 )
                      *(_WORD *)(v28 + 78) &= ~0x8000u;
                  }
                }
              }
              v18 = *(struct _DISPSURF **)v18;
            }
            while ( v18 );
            v15 = v33;
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v31);
      }
    }
  }
  EngStretchBltROP(a1, a2, a3, v15, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode, pbo, rop4);
  REDIROPEN::~REDIROPEN(&v30);
  REDIROPEN::~REDIROPEN(&v27);
  REDIROPEN::~REDIROPEN(&v29);
  return v25;
}
