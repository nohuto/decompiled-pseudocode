/*
 * XREFs of ?UpdateCheckPlaneWithIndependentFlip3@DXGDEVICE@@QEAAJIIPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@@Z @ 0x1C018B8D0
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C015C0E8 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ConvertPackedAttributesToKMT3@@YAXAEBU_VIDSCH_LAYER_ATTRIBUTE@@PEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@@Z @ 0x1C018682C (-ConvertPackedAttributesToKMT3@@YAXAEBU_VIDSCH_LAYER_ATTRIBUTE@@PEAU_D3DKMT_MULTIPLANE_OVERLAY_A.c)
 */

__int64 __fastcall DXGDEVICE::UpdateCheckPlaneWithIndependentFlip3(
        DXGDEVICE *this,
        unsigned int a2,
        int a3,
        struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *a4)
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
  struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 v18; // [rsp+40h] [rbp-68h] BYREF
  int v19; // [rsp+B0h] [rbp+8h] BYREF
  int v20; // [rsp+C0h] [rbp+18h] BYREF

  v20 = a3;
  v7 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 2000LL);
  v8 = 32 * v7;
  if ( !is_mul_ok(v7, 0x20uLL) )
    v8 = -1LL;
  v9 = (char *)operator new(v8, 0x4B677844u, PagedPool);
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
    memset(&v18, 0, 0x50uLL);
    ConvertPackedAttributesToKMT3((const struct _VIDSCH_LAYER_ATTRIBUTE *)&v14[32 * v20], &v18);
    SrcRect = v18.SrcRect;
    a4->ColorSpace = v18.ColorSpace;
    a4->SrcRect = SrcRect;
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
