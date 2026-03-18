/*
 * XREFs of ?RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C028FCB0
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002CCC0 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     EngStrokePath @ 0x1C013CBC0 (EngStrokePath.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C028BE5C (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C028E398 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??1REDIROPEN@@QEAA@XZ @ 0x1C028E3EC (--1REDIROPEN@@QEAA@XZ.c)
 */

__int64 __fastcall RedirStrokePath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pbo,
        POINTL *a6,
        LINEATTRS *a7,
        MIX a8)
{
  MIX mix; // r15d
  LINEATTRS *plineattrs; // r12
  POINTL *pptlBrushOrg; // r13
  __int64 v15; // rbx
  _QWORD *i; // rbx
  __int64 v17; // r9
  __int64 v18; // r9
  unsigned int v19; // r8d
  __int64 v21; // [rsp+50h] [rbp-88h] BYREF
  struct SURFACE *v22; // [rsp+58h] [rbp-80h] BYREF
  _BYTE v23[80]; // [rsp+60h] [rbp-78h] BYREF
  __int64 HDEV; // [rsp+E0h] [rbp+8h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v22, a1);
  mix = a8;
  plineattrs = a7;
  pptlBrushOrg = a6;
  if ( a1 )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v15 = HDEV;
      if ( HDEV )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v23, (struct PDEVOBJ *)&HDEV);
        if ( (*(_DWORD *)(v15 + 56) & 0x20000) != 0 )
        {
          for ( i = **(_QWORD ***)(v15 + 1824); i; i = (_QWORD *)*i )
          {
            v17 = i[6];
            HDEV = v17;
            if ( v17 )
            {
              if ( (*(_DWORD *)(v17 + 1848) & 0x8000000) != 0 && (*(_DWORD *)(v17 + 2152) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v17 + 1816) + 176LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v21,
                    (struct PDEVOBJ *)&HDEV,
                    a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*(_QWORD *)(v18 + 1816) + 176LL))(
                    a1,
                    ppo,
                    pco,
                    pxo,
                    pbo,
                    pptlBrushOrg,
                    plineattrs,
                    mix);
                  if ( v21 )
                    *(_WORD *)(v21 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v23);
      }
    }
  }
  EngStrokePath(a1, ppo, pco, pxo, pbo, pptlBrushOrg, plineattrs, mix);
  REDIROPEN::~REDIROPEN(&v22);
  return v19;
}
