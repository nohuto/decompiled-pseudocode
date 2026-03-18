/*
 * XREFs of ?BmpDevBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C028C0A0
 * Callers:
 *     ?BmpDevCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C028C330 (-BmpDevCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C028BE08 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C028BE5C (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??1BMPDEVOPEN@@QEAA@XZ @ 0x1C028BE80 (--1BMPDEVOPEN@@QEAA@XZ.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C028DA08 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 */

__int64 __fastcall BmpDevBitBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  unsigned int v15; // r14d
  HDEV hdev; // rbx
  unsigned int v17; // eax
  __int64 v18; // rax
  struct _DISPSURF *v19; // rsi
  __int64 v20; // r9
  __int64 v21; // r9
  __int64 v22; // rbx
  struct _SURFOBJ *DevBitmap; // rdi
  struct _SURFOBJ *v24; // rax
  __int64 v26; // [rsp+60h] [rbp-58h] BYREF
  __int64 v27; // [rsp+68h] [rbp-50h] BYREF
  struct SURFACE *v28; // [rsp+70h] [rbp-48h] BYREF
  struct SURFACE *v29; // [rsp+78h] [rbp-40h] BYREF
  struct SURFACE *v30[2]; // [rsp+80h] [rbp-38h] BYREF
  unsigned int v31; // [rsp+C0h] [rbp+8h]

  v15 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)v30, a1);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v29, a2);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v28, a3);
  if ( a1 )
  {
    hdev = a1->hdev;
    v17 = (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 1) != 0
        ? (*((__int64 (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))hdev
           + 358))(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8,
            a9,
            a10,
            a11)
        : ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))EngBitBlt)(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8,
            a9,
            a10,
            a11);
    v15 = v17;
    v31 = v17;
    v18 = UserGetHDEV();
    if ( v18 )
    {
      if ( (*(_DWORD *)(v18 + 56) & 0x20000000) != 0 )
      {
        v19 = **(struct _DISPSURF ***)(v18 + 1824);
        if ( v19 )
        {
          do
          {
            v20 = *((_QWORD *)v19 + 6);
            v26 = v20;
            if ( v20 )
            {
              if ( (*(_DWORD *)(v20 + 1848) & 0x8000000) != 0 && (*(_DWORD *)(v20 + 2152) & 0x9000) == 0x9000 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v20 + 1816) + 208LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v27,
                    (struct PDEVOBJ *)&v26,
                    a1);
                  v22 = *(_QWORD *)(v21 + 1816);
                  DevBitmap = GetDevBitmap(v19, a2);
                  v24 = GetDevBitmap(v19, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))(v22 + 208))(
                    v24,
                    DevBitmap,
                    a3,
                    a4,
                    a5,
                    a6,
                    a7,
                    a8,
                    a9,
                    a10,
                    a11);
                  if ( v27 )
                    *(_WORD *)(v27 + 78) &= ~0x8000u;
                }
              }
            }
            v19 = *(struct _DISPSURF **)v19;
          }
          while ( v19 );
          v15 = v31;
        }
      }
    }
  }
  BMPDEVOPEN::~BMPDEVOPEN(&v28);
  BMPDEVOPEN::~BMPDEVOPEN(&v29);
  BMPDEVOPEN::~BMPDEVOPEN(v30);
  return v15;
}
