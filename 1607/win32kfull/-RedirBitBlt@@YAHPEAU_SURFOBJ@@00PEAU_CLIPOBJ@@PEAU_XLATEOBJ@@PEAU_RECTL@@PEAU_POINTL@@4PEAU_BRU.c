/*
 * XREFs of ?RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C028D240
 * Callers:
 *     ?RedirCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C028D490 (-RedirCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 * Callees:
 *     EngBitBlt @ 0x1C00477E0 (EngBitBlt.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048990 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0048D90 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C028AAAC (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C028C658 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C028CFD8 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??1REDIROPEN@@QEAA@XZ @ 0x1C028D02C (--1REDIROPEN@@QEAA@XZ.c)
 */

__int64 __fastcall RedirBitBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclTrg,
        POINTL *pptlSrc,
        POINTL *pptlMask,
        BRUSHOBJ *pbo,
        POINTL *pptlBrush,
        ROP4 rop4)
{
  __int64 v15; // rbx
  struct _DISPSURF *i; // rsi
  __int64 v17; // r9
  __int64 v18; // r9
  __int64 v19; // rbx
  struct _SURFOBJ *DevBitmap; // rdi
  struct _SURFOBJ *v21; // rax
  unsigned int v22; // r8d
  __int64 v24; // [rsp+68h] [rbp-89h] BYREF
  struct SURFACE *v25; // [rsp+70h] [rbp-81h] BYREF
  struct SURFACE *v26; // [rsp+78h] [rbp-79h] BYREF
  struct SURFACE *v27; // [rsp+80h] [rbp-71h] BYREF
  _BYTE v28[32]; // [rsp+88h] [rbp-69h] BYREF
  _BYTE v29[80]; // [rsp+A8h] [rbp-49h] BYREF
  __int64 HDEV; // [rsp+128h] [rbp+37h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v27, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v26, a2);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v25, a3);
  if ( a1 )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v15 = HDEV;
      if ( HDEV )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v28, (struct PDEVOBJ *)&HDEV);
        if ( (*(_DWORD *)(v15 + 56) & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(v15 + 1824); i; i = *(struct _DISPSURF **)i )
          {
            v17 = *((_QWORD *)i + 6);
            HDEV = v17;
            if ( v17 )
            {
              if ( (*(_DWORD *)(v17 + 1848) & 0x8000000) != 0 && (*(_DWORD *)(v17 + 2152) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v17 + 1816) + 208LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v24,
                    (struct PDEVOBJ *)&HDEV,
                    a1);
                  v19 = *(_QWORD *)(v18 + 1816);
                  DevBitmap = GetDevBitmap(i, a2);
                  v21 = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(v19 + 208))(
                    v21,
                    DevBitmap,
                    a3,
                    pco,
                    pxlo,
                    prclTrg,
                    pptlSrc,
                    pptlMask,
                    pbo,
                    pptlBrush,
                    rop4);
                  if ( v24 )
                    *(_WORD *)(v24 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v28);
        DCOBJ::~DCOBJ((DCOBJ *)v29);
      }
    }
  }
  EngBitBlt(a1, a2, a3, pco, pxlo, prclTrg, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
  REDIROPEN::~REDIROPEN(&v25);
  REDIROPEN::~REDIROPEN(&v26);
  REDIROPEN::~REDIROPEN(&v27);
  return v22;
}
