/*
 * XREFs of ?BmpDevFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C028B230
 * Callers:
 *     <none>
 * Callees:
 *     EngFillPath @ 0x1C0015B00 (EngFillPath.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C028AA58 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C028AAAC (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??1BMPDEVOPEN@@QEAA@XZ @ 0x1C028AAD0 (--1BMPDEVOPEN@@QEAA@XZ.c)
 */

__int64 __fastcall BmpDevFillPath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        MIX mix,
        FLONG flOptions)
{
  unsigned int v11; // esi
  __int64 HDEV; // rax
  _QWORD *i; // rbx
  __int64 v14; // r9
  __int64 v15; // r9
  __int64 v17; // [rsp+40h] [rbp-48h] BYREF
  __int64 v18; // [rsp+48h] [rbp-40h] BYREF
  struct SURFACE *v19[2]; // [rsp+50h] [rbp-38h] BYREF

  v11 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)v19, a1);
  if ( a1 )
  {
    v11 = EngFillPath(a1, ppo, pco, pbo, pptlBrushOrg, mix, flOptions);
    HDEV = UserGetHDEV();
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 56) & 0x20000000) != 0 )
      {
        for ( i = **(_QWORD ***)(HDEV + 1824); i; i = (_QWORD *)*i )
        {
          v14 = i[6];
          v17 = v14;
          if ( v14 )
          {
            if ( (*(_DWORD *)(v14 + 1848) & 0x8000000) != 0 && (*(_DWORD *)(v14 + 2152) & 0x9000) == 0x9000 )
            {
              if ( *(_QWORD *)(*(_QWORD *)(v14 + 1816) + 184LL) )
              {
                MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                  (MARK_ACCDRV_NOTIFICATION *)&v18,
                  (struct PDEVOBJ *)&v17,
                  a1);
                (*(void (__fastcall **)(struct _SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_QWORD *)(v15 + 1816) + 184LL))(
                  a1,
                  ppo,
                  pco,
                  pbo,
                  pptlBrushOrg,
                  mix,
                  flOptions);
                if ( v18 )
                  *(_WORD *)(v18 + 78) &= ~0x8000u;
              }
            }
          }
        }
      }
    }
  }
  BMPDEVOPEN::~BMPDEVOPEN(v19);
  return v11;
}
