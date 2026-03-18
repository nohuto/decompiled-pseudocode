/*
 * XREFs of ?BmpDevNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_BLENDOBJ@@PEAX@Z @ 0x1C028B760
 * Callers:
 *     <none>
 * Callees:
 *     EngNineGrid @ 0x1C00D3830 (EngNineGrid.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C028AA58 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C028AAAC (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??1BMPDEVOPEN@@QEAA@XZ @ 0x1C028AAD0 (--1BMPDEVOPEN@@QEAA@XZ.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C028C658 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 */

__int64 __fastcall BmpDevNineGrid(
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
  unsigned int v13; // r14d
  __int64 HDEV; // rax
  struct _DISPSURF *i; // rsi
  __int64 v16; // r9
  __int64 v17; // r9
  __int64 v18; // rbx
  struct _SURFOBJ *DevBitmap; // rdi
  struct _SURFOBJ *v20; // rax
  __int64 v22; // [rsp+50h] [rbp-48h] BYREF
  __int64 v23; // [rsp+58h] [rbp-40h] BYREF
  struct SURFACE *v24; // [rsp+60h] [rbp-38h] BYREF
  struct SURFACE *v25; // [rsp+68h] [rbp-30h] BYREF

  v13 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v25, a1);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v24, a2);
  if ( a1 )
  {
    v13 = EngNineGrid((int)a1, (__int64)a2, (int)a3, (int)a4, (__int64)a5, (__int64)a6, (__int64)a7, (int *)a8);
    HDEV = UserGetHDEV();
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 56) & 0x20000000) != 0 )
      {
        for ( i = **(struct _DISPSURF ***)(HDEV + 1824); i; i = *(struct _DISPSURF **)i )
        {
          v16 = *((_QWORD *)i + 6);
          v22 = v16;
          if ( v16 )
          {
            if ( (*(_DWORD *)(v16 + 1848) & 0x8000000) != 0 && (*(_DWORD *)(v16 + 2152) & 0x9000) == 0x9000 )
            {
              if ( *(_QWORD *)(*(_QWORD *)(v16 + 1816) + 792LL) )
              {
                MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                  (MARK_ACCDRV_NOTIFICATION *)&v23,
                  (struct PDEVOBJ *)&v22,
                  a1);
                v18 = *(_QWORD *)(v17 + 1816);
                DevBitmap = GetDevBitmap(i, a2);
                v20 = GetDevBitmap(i, a1);
                (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _RECTL *, struct NINEGRID *, struct _BLENDOBJ *, void *))(v18 + 792))(
                  v20,
                  DevBitmap,
                  a3,
                  a4,
                  a5,
                  a6,
                  a7,
                  a8,
                  a9);
                if ( v23 )
                  *(_WORD *)(v23 + 78) &= ~0x8000u;
              }
            }
          }
        }
      }
    }
  }
  BMPDEVOPEN::~BMPDEVOPEN(&v24);
  BMPDEVOPEN::~BMPDEVOPEN(&v25);
  return v13;
}
