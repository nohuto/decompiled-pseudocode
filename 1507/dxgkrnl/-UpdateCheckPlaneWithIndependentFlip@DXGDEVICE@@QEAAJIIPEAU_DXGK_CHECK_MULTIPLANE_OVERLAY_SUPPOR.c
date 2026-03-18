/*
 * XREFs of ?UpdateCheckPlaneWithIndependentFlip@DXGDEVICE@@QEAAJIIPEAU_DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE@@@Z @ 0x1C0160028
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEAH@Z @ 0x1C0134428 (-CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ConvertPackedAttributesToDDI@@YAXAEBU_VIDSCH_LAYER_ATTRIBUTE@@PEAU_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x1C015CA14 (-ConvertPackedAttributesToDDI@@YAXAEBU_VIDSCH_LAYER_ATTRIBUTE@@PEAU_DXGK_MULTIPLANE_OVERLAY_ATTR.c)
 */

__int64 __fastcall DXGDEVICE::UpdateCheckPlaneWithIndependentFlip(
        DXGDEVICE *this,
        unsigned int a2,
        int a3,
        struct _DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *a4)
{
  unsigned __int64 v7; // rbx
  SIZE_T v8; // rax
  char *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char *v14; // rdi
  __int64 v15; // rax
  RECT SrcRect; // xmm0
  struct _DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES v18; // [rsp+40h] [rbp-78h] BYREF
  int v19; // [rsp+C0h] [rbp+8h] BYREF
  int v20; // [rsp+D0h] [rbp+18h] BYREF

  v20 = a3;
  v7 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 1856LL);
  v8 = 32 * v7;
  if ( !is_mul_ok(v7, 0x20uLL) )
    v8 = -1LL;
  v9 = (char *)operator new[](v8, 0x4B677844u, PagedPool);
  v14 = v9;
  if ( v9 )
  {
    v19 = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, char *, _QWORD, int *, int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                 + 376LL)
                                                                                     + 8LL)
                                                                         + 328LL))(
      *(_QWORD *)(*((_QWORD *)this + 2) + 384LL),
      a2,
      v9,
      0LL,
      &v19,
      &v20);
    memset(&v18, 0, sizeof(v18));
    ConvertPackedAttributesToDDI((const struct _VIDSCH_LAYER_ATTRIBUTE *)&v14[32 * v20], &v18);
    SrcRect = v18.SrcRect;
    a4->PlaneAttributes.YCbCrFlags.Value = v18.YCbCrFlags.Value;
    a4->PlaneAttributes.SrcRect = SrcRect;
    operator delete(v14);
    return 0LL;
  }
  else
  {
    v15 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
    *(_QWORD *)(v15 + 24) = v7;
    WdLogEvent5_WdWarning(v15);
    return 3221225495LL;
  }
}
