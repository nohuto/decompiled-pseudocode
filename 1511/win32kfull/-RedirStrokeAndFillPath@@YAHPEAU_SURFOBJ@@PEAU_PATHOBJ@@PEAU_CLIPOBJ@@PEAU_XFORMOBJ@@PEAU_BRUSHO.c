/*
 * XREFs of ?RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C028FB20
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002CCC0 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     EngStrokeAndFillPath @ 0x1C027D410 (EngStrokeAndFillPath.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C028BE5C (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C028E398 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??1REDIROPEN@@QEAA@XZ @ 0x1C028E3EC (--1REDIROPEN@@QEAA@XZ.c)
 */

__int64 __fastcall RedirStrokeAndFillPath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pboStroke,
        LINEATTRS *plineattrs,
        BRUSHOBJ *pboFill,
        POINTL *pptlBrushOrg,
        MIX mixFill,
        FLONG flOptions)
{
  __int64 v14; // rbx
  _QWORD *i; // r9
  __int64 v16; // rax
  unsigned int v17; // r8d
  __int64 v19; // [rsp+50h] [rbp-78h] BYREF
  struct SURFACE *v20; // [rsp+58h] [rbp-70h] BYREF
  _BYTE v21[80]; // [rsp+60h] [rbp-68h] BYREF
  __int64 HDEV; // [rsp+D0h] [rbp+8h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v20, a1);
  if ( a1 )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v14 = HDEV;
      if ( HDEV )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v21, (struct PDEVOBJ *)&HDEV);
        if ( (*(_DWORD *)(v14 + 56) & 0x20000) != 0 )
        {
          for ( i = **(_QWORD ***)(v14 + 1824); i; i = (_QWORD *)*i )
          {
            v16 = i[6];
            HDEV = v16;
            if ( v16 )
            {
              if ( (*(_DWORD *)(v16 + 1848) & 0x8000000) != 0 && (*(_DWORD *)(v16 + 2152) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v16 + 1816) + 192LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v19,
                    (struct PDEVOBJ *)&HDEV,
                    a1);
                  if ( v19 )
                    *(_WORD *)(v19 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v21);
      }
    }
  }
  EngStrokeAndFillPath(a1, ppo, pco, pxo, pboStroke, plineattrs, pboFill, pptlBrushOrg, mixFill, flOptions);
  REDIROPEN::~REDIROPEN(&v20);
  return v17;
}
