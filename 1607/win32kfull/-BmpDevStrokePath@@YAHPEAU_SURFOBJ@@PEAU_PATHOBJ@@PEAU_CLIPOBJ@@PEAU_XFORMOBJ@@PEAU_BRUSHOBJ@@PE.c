/*
 * XREFs of ?BmpDevStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C028C0A0
 * Callers:
 *     <none>
 * Callees:
 *     EngStrokePath @ 0x1C000F530 (EngStrokePath.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C028AA58 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C028AAAC (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??1BMPDEVOPEN@@QEAA@XZ @ 0x1C028AAD0 (--1BMPDEVOPEN@@QEAA@XZ.c)
 */

__int64 __fastcall BmpDevStrokePath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        LINEATTRS *plineattrs,
        MIX mix)
{
  unsigned int v12; // esi
  __int64 HDEV; // rax
  _QWORD *i; // rbx
  __int64 v15; // r9
  __int64 v16; // r9
  __int64 v18; // [rsp+50h] [rbp-48h] BYREF
  __int64 v19; // [rsp+58h] [rbp-40h] BYREF
  struct SURFACE *v20[2]; // [rsp+60h] [rbp-38h] BYREF

  v12 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)v20, a1);
  if ( a1 )
  {
    v12 = EngStrokePath(a1, ppo, pco, pxo, pbo, pptlBrushOrg, plineattrs, mix);
    HDEV = UserGetHDEV();
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 56) & 0x20000000) != 0 )
      {
        for ( i = **(_QWORD ***)(HDEV + 1824); i; i = (_QWORD *)*i )
        {
          v15 = i[6];
          v18 = v15;
          if ( v15 )
          {
            if ( (*(_DWORD *)(v15 + 1848) & 0x8000000) != 0 && (*(_DWORD *)(v15 + 2152) & 0x9000) == 0x9000 )
            {
              if ( *(_QWORD *)(*(_QWORD *)(v15 + 1816) + 176LL) )
              {
                MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                  (MARK_ACCDRV_NOTIFICATION *)&v19,
                  (struct PDEVOBJ *)&v18,
                  a1);
                (*(void (__fastcall **)(struct _SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*(_QWORD *)(v16 + 1816) + 176LL))(
                  a1,
                  ppo,
                  pco,
                  pxo,
                  pbo,
                  pptlBrushOrg,
                  plineattrs,
                  mix);
                if ( v19 )
                  *(_WORD *)(v19 + 78) &= ~0x8000u;
              }
            }
          }
        }
      }
    }
  }
  BMPDEVOPEN::~BMPDEVOPEN(v20);
  return v12;
}
