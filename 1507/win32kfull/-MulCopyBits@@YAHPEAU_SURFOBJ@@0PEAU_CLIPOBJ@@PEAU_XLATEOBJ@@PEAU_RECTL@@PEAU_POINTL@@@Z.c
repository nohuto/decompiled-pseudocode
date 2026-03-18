/*
 * XREFs of ?MulCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C0295540
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C026C228 (--1MULTISURF@@QEAA@XZ.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C028C03C (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C0294520 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0294690 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z @ 0x1C02946D8 (-IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0294EE0 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0299694 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C0299AA4 (-bNextSurface@MSURF@@QEAAHXZ.c)
 */

int __fastcall MulCopyBits(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6)
{
  int v10; // edi
  int i; // eax
  int v12; // eax
  DHSURF dhsurf; // rsi
  int v14; // eax
  int v15; // eax
  _QWORD v17[2]; // [rsp+60h] [rbp-A0h] BYREF
  HDEV hdev; // [rsp+70h] [rbp-90h] BYREF
  __int64 v19; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v20[64]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v21; // [rsp+C0h] [rbp-40h]
  struct _SURFOBJ *v22; // [rsp+C8h] [rbp-38h]
  __int64 v23; // [rsp+D0h] [rbp-30h]
  _BYTE v24[96]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v25; // [rsp+150h] [rbp+50h]

  if ( (unsigned int)IsMetaRedirectionBitmap(a2) )
  {
    v10 = 1;
    for ( i = MSURF::bFindSurface((MSURF *)v20, a2, a3, a5); ; i = MSURF::bNextSurface((MSURF *)v20) )
    {
      if ( !i )
        return v10;
      v17[0] = 0LL;
      hdev = v22->hdev;
      if ( ((_DWORD)hdev[538] & 0x8000) == 0 )
      {
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 116) & 0x10) != 0 )
          SURFREFVIEW::bMap((SURFREFVIEW *)v17, v22);
        if ( (unsigned int)IsMetaDevBitmapForMirroring(a1) )
        {
          MULTISURF::MULTISURF((MULTISURF *)v24, a1);
          if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v22) + 112) & 0x400) != 0 )
            v12 = (*(__int64 (__fastcall **)(__int64, struct _SURFOBJ *, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(*(_QWORD *)(v21 + 56) + 2872LL))(
                    v25,
                    v22,
                    v23,
                    a4,
                    a5,
                    a6);
          else
            v12 = ((__int64 (__fastcall *)(__int64, struct _SURFOBJ *, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))EngCopyBits)(
                    v25,
                    v22,
                    v23,
                    a4,
                    a5,
                    a6);
          v10 &= v12;
          MULTISURF::~MULTISURF((MULTISURF *)v24);
        }
      }
      if ( (unsigned int)IsMetaDevBitmapForMirroring(a1) )
        break;
      if ( (unsigned int)IsMetaRedirectionBitmap(a1) )
      {
        dhsurf = a1->dhsurf;
LABEL_16:
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v22) + 112) & 0x400) != 0 )
          v14 = (*(__int64 (__fastcall **)(_QWORD, struct _SURFOBJ *, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(*(_QWORD *)(v21 + 56) + 2872LL))(
                  *(_QWORD *)(*((_QWORD *)dhsurf + 1) + 8LL * *(unsigned int *)(v21 + 16)),
                  v22,
                  v23,
                  a4,
                  a5,
                  a6);
        else
          v14 = ((__int64 (__fastcall *)(_QWORD, struct _SURFOBJ *, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))EngCopyBits)(
                  *(_QWORD *)(*((_QWORD *)dhsurf + 1) + 8LL * *(unsigned int *)(v21 + 16)),
                  v22,
                  v23,
                  a4,
                  a5,
                  a6);
        v10 &= v14;
        goto LABEL_25;
      }
      MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION((MARK_ACCDRV_NOTIFICATION *)&v19, (struct PDEVOBJ *)&hdev, a1);
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v22) + 112) & 0x400) != 0 )
        v15 = (*(__int64 (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(*(_QWORD *)(v21 + 56) + 2872LL))(
                a1,
                v22,
                v23,
                a4,
                a5,
                a6);
      else
        v15 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))EngCopyBits)(
                a1,
                v22,
                v23,
                a4,
                a5,
                a6);
      v10 &= v15;
      if ( v19 )
        *(_WORD *)(v19 + 78) &= ~0x8000u;
LABEL_25:
      SURFREFVIEW::bUnMapImmediate((SURFREFVIEW *)v17);
      v17[0] = 0LL;
      SURFREFVIEW::bUnMap((SURFREFVIEW *)v17);
    }
    dhsurf = a1->dhsurf;
    if ( !*(_QWORD *)(*((_QWORD *)a1->dhsurf + 1) + 8LL * *(unsigned int *)(v21 + 16)) )
      goto LABEL_25;
    goto LABEL_16;
  }
  return MulBitBlt(a1, a2, 0LL, a3, a4, a5, a6, 0LL, 0LL, 0LL, 0xCCCCu);
}
