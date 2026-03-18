/*
 * XREFs of ?BmpDevTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C028C440
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C028AA58 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C028AAAC (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??1BMPDEVOPEN@@QEAA@XZ @ 0x1C028AAD0 (--1BMPDEVOPEN@@QEAA@XZ.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C028C658 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 */

__int64 __fastcall BmpDevTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        unsigned int a7,
        unsigned int a8)
{
  unsigned int v12; // r14d
  HDEV hdev; // rbx
  unsigned int v14; // eax
  __int64 v15; // rax
  struct _DISPSURF *v16; // rsi
  __int64 v17; // r9
  __int64 v18; // r9
  __int64 v19; // rbx
  struct _SURFOBJ *DevBitmap; // rdi
  struct _SURFOBJ *v21; // rax
  __int64 v23; // [rsp+50h] [rbp-48h] BYREF
  __int64 v24; // [rsp+58h] [rbp-40h] BYREF
  struct SURFACE *v25; // [rsp+60h] [rbp-38h] BYREF
  struct SURFACE *v26; // [rsp+68h] [rbp-30h] BYREF
  unsigned int v27; // [rsp+A0h] [rbp+8h]

  v12 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v26, a1);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v25, a2);
  if ( a1 )
  {
    hdev = a1->hdev;
    v14 = (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x8000) != 0
        ? (*((__int64 (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _RECTL *, unsigned int, unsigned int))hdev
           + 413))(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8)
        : ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _RECTL *, unsigned int, unsigned int))EngTransparentBlt)(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8);
    v12 = v14;
    v27 = v14;
    v15 = UserGetHDEV();
    if ( v15 )
    {
      if ( (*(_DWORD *)(v15 + 56) & 0x20000000) != 0 )
      {
        v16 = **(struct _DISPSURF ***)(v15 + 1824);
        if ( v16 )
        {
          do
          {
            v17 = *((_QWORD *)v16 + 6);
            v23 = v17;
            if ( v17 )
            {
              if ( (*(_DWORD *)(v17 + 1848) & 0x8000000) != 0 && (*(_DWORD *)(v17 + 2152) & 0x9000) == 0x9000 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v17 + 1816) + 656LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v24,
                    (struct PDEVOBJ *)&v23,
                    a1);
                  v19 = *(_QWORD *)(v18 + 1816);
                  DevBitmap = GetDevBitmap(v16, a2);
                  v21 = GetDevBitmap(v16, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _RECTL *, unsigned int, unsigned int))(v19 + 656))(
                    v21,
                    DevBitmap,
                    a3,
                    a4,
                    a5,
                    a6,
                    a7,
                    a8);
                  if ( v24 )
                    *(_WORD *)(v24 + 78) &= ~0x8000u;
                }
              }
            }
            v16 = *(struct _DISPSURF **)v16;
          }
          while ( v16 );
          v12 = v27;
        }
      }
    }
  }
  BMPDEVOPEN::~BMPDEVOPEN(&v25);
  BMPDEVOPEN::~BMPDEVOPEN(&v26);
  return v12;
}
