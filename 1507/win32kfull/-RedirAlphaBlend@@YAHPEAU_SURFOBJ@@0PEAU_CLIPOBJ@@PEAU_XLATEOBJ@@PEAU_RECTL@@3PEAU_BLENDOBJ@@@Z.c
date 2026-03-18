/*
 * XREFs of ?RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C028E5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00192B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0019730 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     EngAlphaBlend @ 0x1C0034230 (EngAlphaBlend.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C028C03C (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C028DBE8 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C028E578 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??1REDIROPEN@@QEAA@XZ @ 0x1C028E5CC (--1REDIROPEN@@QEAA@XZ.c)
 */

__int64 __fastcall RedirAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDest,
        RECTL *prclSrc,
        BLENDOBJ *pBlendObj)
{
  __int64 v11; // rbx
  struct _DISPSURF *i; // rsi
  __int64 v13; // r9
  __int64 v14; // r9
  __int64 v15; // rbx
  struct _SURFOBJ *DevBitmap; // rdi
  struct _SURFOBJ *v17; // rax
  unsigned int v18; // r8d
  struct SURFACE *v20; // [rsp+48h] [rbp-71h] BYREF
  struct SURFACE *v21; // [rsp+50h] [rbp-69h] BYREF
  __int64 v22; // [rsp+58h] [rbp-61h] BYREF
  _BYTE v23[32]; // [rsp+68h] [rbp-51h] BYREF
  _BYTE v24[80]; // [rsp+88h] [rbp-31h] BYREF
  __int64 HDEV; // [rsp+108h] [rbp+4Fh] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v21, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v20, a2);
  if ( a1 )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v11 = HDEV;
      if ( HDEV )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v23, (struct PDEVOBJ *)&HDEV);
        if ( (*(_DWORD *)(v11 + 56) & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(v11 + 1824); i; i = *(struct _DISPSURF **)i )
          {
            v13 = *((_QWORD *)i + 6);
            HDEV = v13;
            if ( v13 )
            {
              if ( (*(_DWORD *)(v13 + 1848) & 0x8000000) != 0 && (*(_DWORD *)(v13 + 2152) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v13 + 1816) + 632LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v22,
                    (struct PDEVOBJ *)&HDEV,
                    a1);
                  v15 = *(_QWORD *)(v14 + 1816);
                  DevBitmap = GetDevBitmap(i, a2);
                  v17 = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(v15 + 632))(
                    v17,
                    DevBitmap,
                    pco,
                    pxlo,
                    prclDest,
                    prclSrc,
                    pBlendObj);
                  if ( v22 )
                    *(_WORD *)(v22 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v23);
        DCOBJ::~DCOBJ((DCOBJ *)v24);
      }
    }
  }
  EngAlphaBlend(a1, a2, pco, pxlo, prclDest, prclSrc, pBlendObj);
  REDIROPEN::~REDIROPEN(&v20);
  REDIROPEN::~REDIROPEN(&v21);
  return v18;
}
