/*
 * XREFs of ?RedirNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_BLENDOBJ@@PEAX@Z @ 0x1C028F1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002CCC0 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     EngNineGrid @ 0x1C00C1A30 (EngNineGrid.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C028BE5C (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C028DA08 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C028E398 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??1REDIROPEN@@QEAA@XZ @ 0x1C028E3EC (--1REDIROPEN@@QEAA@XZ.c)
 */

__int64 __fastcall RedirNineGrid(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct NINEGRID *a7,
        struct _BLENDOBJ *a8,
        void *a9)
{
  __int64 v13; // rbx
  struct _DISPSURF *i; // rsi
  __int64 v15; // r9
  __int64 v16; // r9
  __int64 v17; // rbx
  struct _SURFOBJ *DevBitmap; // rdi
  struct _SURFOBJ *v19; // rax
  unsigned int v20; // r8d
  __int64 v22; // [rsp+58h] [rbp-61h] BYREF
  struct SURFACE *v23; // [rsp+60h] [rbp-59h] BYREF
  struct SURFACE *v24[2]; // [rsp+68h] [rbp-51h] BYREF
  _BYTE v25[80]; // [rsp+78h] [rbp-41h] BYREF
  __int64 HDEV; // [rsp+F8h] [rbp+3Fh] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)v24, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v23, a2);
  if ( a1 )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v13 = HDEV;
      if ( HDEV )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v25, (struct PDEVOBJ *)&HDEV);
        if ( (*(_DWORD *)(v13 + 56) & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(v13 + 1824); i; i = *(struct _DISPSURF **)i )
          {
            v15 = *((_QWORD *)i + 6);
            HDEV = v15;
            if ( v15 )
            {
              if ( (*(_DWORD *)(v15 + 1848) & 0x8000000) != 0 && (*(_DWORD *)(v15 + 2152) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v15 + 1816) + 792LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v22,
                    (struct PDEVOBJ *)&HDEV,
                    a1);
                  v17 = *(_QWORD *)(v16 + 1816);
                  DevBitmap = GetDevBitmap(i, a2);
                  v19 = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _RECTL *, struct NINEGRID *, struct _BLENDOBJ *, void *))(v17 + 792))(
                    v19,
                    DevBitmap,
                    a3,
                    a4,
                    a5,
                    a6,
                    a7,
                    a8,
                    a9);
                  if ( v22 )
                    *(_WORD *)(v22 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v25);
      }
    }
  }
  EngNineGrid((int)a1, (__int64)a2, (int)a3, (int)a4, (__int64)a5, (__int64)a6, (__int64)a7, (int *)a8);
  REDIROPEN::~REDIROPEN(&v23);
  REDIROPEN::~REDIROPEN(v24);
  return v20;
}
