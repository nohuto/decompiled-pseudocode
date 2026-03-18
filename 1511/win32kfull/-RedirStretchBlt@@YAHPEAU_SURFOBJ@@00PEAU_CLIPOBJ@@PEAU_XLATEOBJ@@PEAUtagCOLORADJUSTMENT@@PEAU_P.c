/*
 * XREFs of ?RedirStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C028F630
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002CCC0 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     EngStretchBlt @ 0x1C003E600 (EngStretchBlt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C028BE5C (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C028DA08 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C028E398 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??1REDIROPEN@@QEAA@XZ @ 0x1C028E3EC (--1REDIROPEN@@QEAA@XZ.c)
 */

__int64 __fastcall RedirStretchBlt(
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
        ULONG iMode)
{
  CLIPOBJ *v13; // rdi
  __int64 v15; // rbx
  struct _DISPSURF *v16; // r14
  __int64 v17; // r9
  __int64 v18; // r9
  __int64 v19; // rbx
  struct _SURFOBJ *DevBitmap; // rsi
  struct _SURFOBJ *v21; // rdi
  struct _SURFOBJ *v22; // rax
  unsigned int v23; // r8d
  struct SURFACE *v25; // [rsp+60h] [rbp-69h] BYREF
  __int64 v26; // [rsp+68h] [rbp-61h] BYREF
  struct SURFACE *v27; // [rsp+70h] [rbp-59h] BYREF
  struct SURFACE *v28; // [rsp+78h] [rbp-51h] BYREF
  _BYTE v29[128]; // [rsp+80h] [rbp-49h] BYREF
  __int64 HDEV; // [rsp+110h] [rbp+47h] BYREF
  CLIPOBJ *v31; // [rsp+128h] [rbp+5Fh]

  v31 = pco;
  v13 = pco;
  REDIROPEN::REDIROPEN((REDIROPEN *)&v27, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v25, a2);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v28, a3);
  if ( a1 )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v15 = HDEV;
      if ( HDEV )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v29, (struct PDEVOBJ *)&HDEV);
        if ( (*(_DWORD *)(v15 + 56) & 0x20000) != 0 )
        {
          v16 = **(struct _DISPSURF ***)(v15 + 1824);
          if ( v16 )
          {
            do
            {
              v17 = *((_QWORD *)v16 + 6);
              HDEV = v17;
              if ( v17 )
              {
                if ( (*(_DWORD *)(v17 + 1848) & 0x8000000) != 0 && (*(_DWORD *)(v17 + 2152) & 0x8000) != 0 )
                {
                  if ( *(_QWORD *)(*(_QWORD *)(v17 + 1816) + 224LL) )
                  {
                    MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                      (MARK_ACCDRV_NOTIFICATION *)&v26,
                      (struct PDEVOBJ *)&HDEV,
                      a1);
                    v19 = *(_QWORD *)(v18 + 1816);
                    DevBitmap = GetDevBitmap(v16, a3);
                    v21 = GetDevBitmap(v16, a2);
                    v22 = GetDevBitmap(v16, a1);
                    (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v19 + 224))(
                      v22,
                      v21,
                      DevBitmap,
                      v31,
                      pxlo,
                      pca,
                      pptlHTOrg,
                      prclDest,
                      prclSrc,
                      pptlMask,
                      iMode);
                    if ( v26 )
                      *(_WORD *)(v26 + 78) &= ~0x8000u;
                  }
                }
              }
              v16 = *(struct _DISPSURF **)v16;
            }
            while ( v16 );
            v13 = v31;
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v29);
      }
    }
  }
  EngStretchBlt(a1, a2, a3, v13, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode);
  REDIROPEN::~REDIROPEN(&v28);
  REDIROPEN::~REDIROPEN(&v25);
  REDIROPEN::~REDIROPEN(&v27);
  return v23;
}
