/*
 * XREFs of ?RedirStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C028E2A0
 * Callers:
 *     <none>
 * Callees:
 *     EngStretchBlt @ 0x1C0038960 (EngStretchBlt.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048990 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0048D90 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C028AAAC (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C028C658 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C028CFD8 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??1REDIROPEN@@QEAA@XZ @ 0x1C028D02C (--1REDIROPEN@@QEAA@XZ.c)
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
  __int64 v25; // [rsp+60h] [rbp-89h] BYREF
  struct SURFACE *v26; // [rsp+68h] [rbp-81h] BYREF
  struct SURFACE *v27; // [rsp+70h] [rbp-79h] BYREF
  struct SURFACE *v28; // [rsp+78h] [rbp-71h] BYREF
  _BYTE v29[32]; // [rsp+80h] [rbp-69h] BYREF
  _BYTE v30[128]; // [rsp+A0h] [rbp-49h] BYREF
  __int64 HDEV; // [rsp+130h] [rbp+47h] BYREF
  CLIPOBJ *v32; // [rsp+148h] [rbp+5Fh]

  v32 = pco;
  v13 = pco;
  REDIROPEN::REDIROPEN((REDIROPEN *)&v28, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v27, a2);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v26, a3);
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
                      (MARK_ACCDRV_NOTIFICATION *)&v25,
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
                      v32,
                      pxlo,
                      pca,
                      pptlHTOrg,
                      prclDest,
                      prclSrc,
                      pptlMask,
                      iMode);
                    if ( v25 )
                      *(_WORD *)(v25 + 78) &= ~0x8000u;
                  }
                }
              }
              v16 = *(struct _DISPSURF **)v16;
            }
            while ( v16 );
            v13 = v32;
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v29);
        DCOBJ::~DCOBJ((DCOBJ *)v30);
      }
    }
  }
  EngStretchBlt(a1, a2, a3, v13, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode);
  REDIROPEN::~REDIROPEN(&v26);
  REDIROPEN::~REDIROPEN(&v27);
  REDIROPEN::~REDIROPEN(&v28);
  return v23;
}
