/*
 * XREFs of ?BmpDevTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C028C250
 * Callers:
 *     <none>
 * Callees:
 *     EngTextOut @ 0x1C0032E10 (EngTextOut.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C028AA58 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C028AAAC (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??1BMPDEVOPEN@@QEAA@XZ @ 0x1C028AAD0 (--1BMPDEVOPEN@@QEAA@XZ.c)
 */

__int64 __fastcall BmpDevTextOut(
        struct _SURFOBJ *a1,
        STROBJ *pstro,
        FONTOBJ *pfo,
        CLIPOBJ *pco,
        RECTL *prclExtra,
        RECTL *prclOpaque,
        BRUSHOBJ *pboFore,
        BRUSHOBJ *pboOpaque,
        POINTL *pptlOrg,
        MIX mix)
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
    v14 = EngTextOut(a1, pstro, pfo, pco, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix);
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
              if ( *(_QWORD *)(*(_QWORD *)(v17 + 1816) + 248LL) )
              {
                MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                  (MARK_ACCDRV_NOTIFICATION *)&v21,
                  (struct PDEVOBJ *)&v20,
                  a1);
                (*(void (__fastcall **)(struct _SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*(_QWORD *)(v18 + 1816) + 248LL))(
                  a1,
                  pstro,
                  pfo,
                  pco,
                  prclExtra,
                  prclOpaque,
                  pboFore,
                  pboOpaque,
                  pptlOrg,
                  mix);
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
