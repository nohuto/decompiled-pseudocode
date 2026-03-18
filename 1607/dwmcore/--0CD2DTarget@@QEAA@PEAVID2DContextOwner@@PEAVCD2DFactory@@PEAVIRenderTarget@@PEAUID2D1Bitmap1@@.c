/*
 * XREFs of ??0CD2DTarget@@QEAA@PEAVID2DContextOwner@@PEAVCD2DFactory@@PEAVIRenderTarget@@PEAUID2D1Bitmap1@@PEAUID2D1PrivateDepthBuffer@@@Z @ 0x1800AD6C0
 * Callers:
 *     ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x18007DE20 (-PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CD2DTarget *__fastcall CD2DTarget::CD2DTarget(
        CD2DTarget *this,
        struct ID2DContextOwner *a2,
        struct CD2DFactory *a3,
        struct IRenderTarget *a4,
        struct ID2D1Bitmap1 *a5,
        struct ID2D1PrivateDepthBuffer *a6)
{
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 13) = 0;
  *(_QWORD *)this = a2;
  *((_QWORD *)this + 1) = a3;
  *((_BYTE *)this + 48) = 0;
  *((_BYTE *)this + 56) = 0;
  *((_QWORD *)this + 3) = a4;
  if ( a4 )
    (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a4 + 8LL))(a4);
  *((_QWORD *)this + 4) = a5;
  if ( a5 )
    (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)a5 + 8LL))(a5);
  *((_QWORD *)this + 5) = a6;
  if ( a6 )
    (*(void (__fastcall **)(struct ID2D1PrivateDepthBuffer *))(*(_QWORD *)a6 + 8LL))(a6);
  return this;
}
