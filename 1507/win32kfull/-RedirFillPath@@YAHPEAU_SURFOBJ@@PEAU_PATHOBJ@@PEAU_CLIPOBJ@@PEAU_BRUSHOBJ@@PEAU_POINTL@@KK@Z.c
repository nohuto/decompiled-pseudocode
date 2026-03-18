/*
 * XREFs of ?RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C028EE20
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00192B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0019730 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     EngFillPath @ 0x1C00CD5A0 (EngFillPath.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C028C03C (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C028E578 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??1REDIROPEN@@QEAA@XZ @ 0x1C028E5CC (--1REDIROPEN@@QEAA@XZ.c)
 */

__int64 __fastcall RedirFillPath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        POINTL *a5,
        MIX a6,
        FLONG a7)
{
  FLONG flOptions; // r15d
  MIX mix; // r12d
  POINTL *pptlBrushOrg; // r13
  __int64 v14; // rbx
  _QWORD *i; // rbx
  __int64 v16; // r9
  __int64 v17; // r9
  unsigned int v18; // r8d
  struct SURFACE *v20; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+48h] [rbp-A0h] BYREF
  _BYTE v22[32]; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v23[80]; // [rsp+70h] [rbp-78h] BYREF
  __int64 HDEV; // [rsp+F0h] [rbp+8h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v20, a1);
  flOptions = a7;
  mix = a6;
  pptlBrushOrg = a5;
  if ( a1 )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v14 = HDEV;
      if ( HDEV )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v22, (struct PDEVOBJ *)&HDEV);
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
                if ( *(_QWORD *)(*(_QWORD *)(v16 + 1816) + 184LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v21,
                    (struct PDEVOBJ *)&HDEV,
                    a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_QWORD *)(v17 + 1816) + 184LL))(
                    a1,
                    ppo,
                    pco,
                    pbo,
                    pptlBrushOrg,
                    mix,
                    flOptions);
                  if ( v21 )
                    *(_WORD *)(v21 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v22);
        DCOBJ::~DCOBJ((DCOBJ *)v23);
      }
    }
  }
  EngFillPath(a1, ppo, pco, pbo, pptlBrushOrg, mix, flOptions);
  REDIROPEN::~REDIROPEN(&v20);
  return v18;
}
