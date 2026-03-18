/*
 * XREFs of ?BmpDevStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C028BC10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C028AA58 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C028AAAC (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??1BMPDEVOPEN@@QEAA@XZ @ 0x1C028AAD0 (--1BMPDEVOPEN@@QEAA@XZ.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C028C658 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 */

__int64 __fastcall BmpDevStretchBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct tagCOLORADJUSTMENT *a6,
        struct _POINTL *a7,
        struct _RECTL *a8,
        struct _RECTL *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  unsigned int v15; // r15d
  HDEV hdev; // rbx
  unsigned int v17; // eax
  __int64 v18; // rax
  struct _DISPSURF *v19; // r14
  __int64 v20; // r9
  __int64 v21; // r9
  __int64 v22; // rbx
  struct _SURFOBJ *DevBitmap; // rsi
  struct _SURFOBJ *v24; // rdi
  struct _SURFOBJ *v25; // rax
  __int64 v27; // [rsp+60h] [rbp-68h] BYREF
  __int64 v28; // [rsp+68h] [rbp-60h] BYREF
  struct SURFACE *v29; // [rsp+70h] [rbp-58h] BYREF
  struct SURFACE *v30; // [rsp+78h] [rbp-50h] BYREF
  struct SURFACE *v31[9]; // [rsp+80h] [rbp-48h] BYREF
  unsigned int v32; // [rsp+D0h] [rbp+8h]

  v15 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)v31, a1);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v30, a2);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v29, a3);
  if ( a1 )
  {
    hdev = a1->hdev;
    v17 = (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 2) != 0
        ? (*((__int64 (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct tagCOLORADJUSTMENT *, struct _POINTL *, struct _RECTL *, struct _RECTL *, struct _POINTL *, unsigned int))hdev
           + 359))(
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
        : ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct tagCOLORADJUSTMENT *, struct _POINTL *, struct _RECTL *, struct _RECTL *, struct _POINTL *, unsigned int))EngStretchBlt)(
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
    v32 = v17;
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
            v27 = v20;
            if ( v20 )
            {
              if ( (*(_DWORD *)(v20 + 1848) & 0x8000000) != 0 && (*(_DWORD *)(v20 + 2152) & 0x9000) == 0x9000 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v20 + 1816) + 224LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v28,
                    (struct PDEVOBJ *)&v27,
                    a1);
                  v22 = *(_QWORD *)(v21 + 1816);
                  DevBitmap = GetDevBitmap(v19, a3);
                  v24 = GetDevBitmap(v19, a2);
                  v25 = GetDevBitmap(v19, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct tagCOLORADJUSTMENT *, struct _POINTL *, struct _RECTL *, struct _RECTL *, struct _POINTL *, unsigned int))(v22 + 224))(
                    v25,
                    v24,
                    DevBitmap,
                    a4,
                    a5,
                    a6,
                    a7,
                    a8,
                    a9,
                    a10,
                    a11);
                  if ( v28 )
                    *(_WORD *)(v28 + 78) &= ~0x8000u;
                }
              }
            }
            v19 = *(struct _DISPSURF **)v19;
          }
          while ( v19 );
          v15 = v32;
        }
      }
    }
  }
  BMPDEVOPEN::~BMPDEVOPEN(&v29);
  BMPDEVOPEN::~BMPDEVOPEN(&v30);
  BMPDEVOPEN::~BMPDEVOPEN(v31);
  return v15;
}
