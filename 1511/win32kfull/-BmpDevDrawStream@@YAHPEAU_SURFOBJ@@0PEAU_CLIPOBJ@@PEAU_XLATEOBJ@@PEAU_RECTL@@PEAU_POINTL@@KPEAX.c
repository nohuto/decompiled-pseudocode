/*
 * XREFs of ?BmpDevDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C028C380
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C028BE08 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C028BE5C (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??1BMPDEVOPEN@@QEAA@XZ @ 0x1C028BE80 (--1BMPDEVOPEN@@QEAA@XZ.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C028DA08 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 */

__int64 __fastcall BmpDevDrawStream(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6,
        unsigned int a7,
        void *a8,
        struct _DSSTATE *a9)
{
  unsigned int v13; // r14d
  HDEV hdev; // rbx
  __int64 v15; // rdx
  __int64 (__fastcall *v16)(__int64, __int64, __int64, __int64, int, struct _POINTL *, unsigned int, __int64, struct _DSSTATE *); // r10
  __int64 v17; // rax
  struct _DISPSURF *i; // rsi
  __int64 v19; // r9
  __int64 v20; // r9
  __int64 v21; // rbx
  struct _SURFOBJ *DevBitmap; // rdi
  struct _SURFOBJ *v23; // rax
  __int64 v25; // [rsp+50h] [rbp-48h] BYREF
  __int64 v26; // [rsp+58h] [rbp-40h] BYREF
  struct SURFACE *v27; // [rsp+60h] [rbp-38h] BYREF
  struct SURFACE *v28; // [rsp+68h] [rbp-30h] BYREF

  v13 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v28, a1);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v27, a2);
  if ( a1 )
  {
    hdev = a1->hdev;
    v15 = SURFOBJ_TO_SURFACE_NOT_NULL(a1);
    v16 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, int, struct _POINTL *, unsigned int, __int64, struct _DSSTATE *))EngDrawStream;
    if ( *(_QWORD *)(*(_QWORD *)(v15 + 48) + 3440LL) )
      v16 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, struct _POINTL *, unsigned int, __int64, struct _DSSTATE *))(*(_QWORD *)(v15 + 48) + 3440LL);
    if ( *(int *)(v15 + 112) >= 0 && (((_DWORD)hdev[14] & 0x20000) == 0 || *(_WORD *)(v15 + 100) != 3) )
      v16 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, int, struct _POINTL *, unsigned int, __int64, struct _DSSTATE *))EngDrawStream;
    v13 = v16((__int64)a1, (__int64)a2, (__int64)a3, (__int64)a4, (int)a5, a6, a7, (__int64)a8, a9);
    v17 = UserGetHDEV();
    if ( v17 )
    {
      if ( (*(_DWORD *)(v17 + 56) & 0x20000000) != 0 )
      {
        for ( i = **(struct _DISPSURF ***)(v17 + 1824); i; i = *(struct _DISPSURF **)i )
        {
          v19 = *((_QWORD *)i + 6);
          v25 = v19;
          if ( v19 )
          {
            if ( (*(_DWORD *)(v19 + 1848) & 0x8000000) != 0 && (*(_DWORD *)(v19 + 2152) & 0x9000) == 0x9000 )
            {
              if ( *(_QWORD *)(*(_QWORD *)(v19 + 1816) + 784LL) )
              {
                MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                  (MARK_ACCDRV_NOTIFICATION *)&v26,
                  (struct PDEVOBJ *)&v25,
                  a1);
                v21 = *(_QWORD *)(v20 + 1816);
                DevBitmap = GetDevBitmap(i, a2);
                v23 = GetDevBitmap(i, a1);
                (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, unsigned int, void *, struct _DSSTATE *))(v21 + 784))(
                  v23,
                  DevBitmap,
                  a3,
                  a4,
                  a5,
                  a6,
                  a7,
                  a8,
                  a9);
                if ( v26 )
                  *(_WORD *)(v26 + 78) &= ~0x8000u;
              }
            }
          }
        }
      }
    }
  }
  BMPDEVOPEN::~BMPDEVOPEN(&v27);
  BMPDEVOPEN::~BMPDEVOPEN(&v28);
  return v13;
}
