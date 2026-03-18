/*
 * XREFs of ?BmpDevAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C028BEA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C028BE08 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C028BE5C (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??1BMPDEVOPEN@@QEAA@XZ @ 0x1C028BE80 (--1BMPDEVOPEN@@QEAA@XZ.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C028DA08 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 */

__int64 __fastcall BmpDevAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BLENDOBJ *a7)
{
  unsigned int v11; // r14d
  HDEV hdev; // rbx
  unsigned int v13; // eax
  __int64 v14; // rax
  struct _DISPSURF *v15; // rsi
  __int64 v16; // r9
  __int64 v17; // r9
  __int64 v18; // rbx
  struct _SURFOBJ *DevBitmap; // rdi
  struct _SURFOBJ *v20; // rax
  __int64 v22; // [rsp+40h] [rbp-48h] BYREF
  __int64 v23; // [rsp+48h] [rbp-40h] BYREF
  struct SURFACE *v24; // [rsp+50h] [rbp-38h] BYREF
  struct SURFACE *v25; // [rsp+58h] [rbp-30h] BYREF
  unsigned int v26; // [rsp+90h] [rbp+8h]

  v11 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v25, a1);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v24, a2);
  if ( a1 )
  {
    hdev = a1->hdev;
    v13 = (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x10000) != 0
        ? (*((__int64 (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _RECTL *, struct _BLENDOBJ *))hdev
           + 411))(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7)
        : ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _RECTL *, struct _BLENDOBJ *))EngAlphaBlend)(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7);
    v11 = v13;
    v26 = v13;
    v14 = UserGetHDEV();
    if ( v14 )
    {
      if ( (*(_DWORD *)(v14 + 56) & 0x20000000) != 0 )
      {
        v15 = **(struct _DISPSURF ***)(v14 + 1824);
        if ( v15 )
        {
          do
          {
            v16 = *((_QWORD *)v15 + 6);
            v22 = v16;
            if ( v16 )
            {
              if ( (*(_DWORD *)(v16 + 1848) & 0x8000000) != 0 && (*(_DWORD *)(v16 + 2152) & 0x9000) == 0x9000 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v16 + 1816) + 632LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v23,
                    (struct PDEVOBJ *)&v22,
                    a1);
                  v18 = *(_QWORD *)(v17 + 1816);
                  DevBitmap = GetDevBitmap(v15, a2);
                  v20 = GetDevBitmap(v15, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _RECTL *, struct _BLENDOBJ *))(v18 + 632))(
                    v20,
                    DevBitmap,
                    a3,
                    a4,
                    a5,
                    a6,
                    a7);
                  if ( v23 )
                    *(_WORD *)(v23 + 78) &= ~0x8000u;
                }
              }
            }
            v15 = *(struct _DISPSURF **)v15;
          }
          while ( v15 );
          v11 = v26;
        }
      }
    }
  }
  BMPDEVOPEN::~BMPDEVOPEN(&v24);
  BMPDEVOPEN::~BMPDEVOPEN(&v25);
  return v11;
}
