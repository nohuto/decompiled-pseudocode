/*
 * XREFs of ?BmpDevGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C028C770
 * Callers:
 *     <none>
 * Callees:
 *     EngGradientFill @ 0x1C00DF0D0 (EngGradientFill.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C028BE08 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C028BE5C (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??1BMPDEVOPEN@@QEAA@XZ @ 0x1C028BE80 (--1BMPDEVOPEN@@QEAA@XZ.c)
 */

__int64 __fastcall BmpDevGradientFill(
        struct _SURFOBJ *a1,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        TRIVERTEX *pVertex,
        ULONG nVertex,
        PVOID pMesh,
        ULONG nMesh,
        RECTL *prclExtents,
        POINTL *pptlDitherOrg,
        ULONG ulMode)
{
  unsigned int v14; // esi
  __int64 HDEV; // rax
  _QWORD *i; // rbx
  __int64 v17; // r9
  __int64 v18; // r9
  __int64 v20; // [rsp+60h] [rbp-48h] BYREF
  __int64 v21; // [rsp+68h] [rbp-40h] BYREF
  struct SURFACE *v22[2]; // [rsp+70h] [rbp-38h] BYREF

  v14 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)v22, a1);
  if ( a1 )
  {
    v14 = EngGradientFill(a1, pco, pxlo, pVertex, nVertex, pMesh, nMesh, prclExtents, pptlDitherOrg, ulMode);
    HDEV = UserGetHDEV();
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 56) & 0x20000000) != 0 )
      {
        for ( i = **(_QWORD ***)(HDEV + 1824); i; i = (_QWORD *)*i )
        {
          v17 = i[6];
          v20 = v17;
          if ( v17 )
          {
            if ( (*(_DWORD *)(v17 + 1848) & 0x8000000) != 0 && (*(_DWORD *)(v17 + 2152) & 0x9000) == 0x9000 )
            {
              if ( *(_QWORD *)(*(_QWORD *)(v17 + 1816) + 608LL) )
              {
                MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                  (MARK_ACCDRV_NOTIFICATION *)&v21,
                  (struct PDEVOBJ *)&v20,
                  a1);
                (*(void (__fastcall **)(struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(*(_QWORD *)(v18 + 1816) + 608LL))(
                  a1,
                  pco,
                  pxlo,
                  pVertex,
                  nVertex,
                  pMesh,
                  nMesh,
                  prclExtents,
                  pptlDitherOrg,
                  ulMode);
                if ( v21 )
                  *(_WORD *)(v21 + 78) &= ~0x8000u;
              }
            }
          }
        }
      }
    }
  }
  BMPDEVOPEN::~BMPDEVOPEN(v22);
  return v14;
}
