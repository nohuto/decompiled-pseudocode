/*
 * XREFs of ?DrawTextW@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@W4D2D1_DRAW_TEXT_OPTIONS@@W4DWRITE_MEASURING_MODE@@@Z @ 0x180176BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18007C698 (-SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIAL.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x18007C9A4 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18007CA60 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::DrawTextW(
        struct ID2D1PrivateCompositorRenderer **this,
        const struct ID2DContextOwner *a2,
        unsigned __int16 *a3,
        unsigned int a4,
        struct IDWriteTextFormat *a5,
        const struct D2D_RECT_F *a6,
        const struct _D3DCOLORVALUE *a7,
        enum D2D1_ANTIALIAS_MODE a8,
        enum D2D1_PRIMITIVE_BLEND a9,
        enum D2D1_DRAW_TEXT_OPTIONS a10,
        enum DWRITE_MEASURING_MODE a11)
{
  CD2DContext::FlushDrawList(this);
  CD2DContext::EnsureBeginDraw((CD2DContext *)this);
  CD2DContext::SetCommonState((CD2DContext *)this, a2, a9, &a8, 0LL);
  (*(void (__fastcall **)(struct ID2D1PrivateCompositorRenderer *, const struct _D3DCOLORVALUE *))(*(_QWORD *)this[23]
                                                                                                 + 64LL))(
    this[23],
    a7);
  (*(void (__fastcall **)(struct ID2D1PrivateCompositorRenderer *, unsigned __int16 *, _QWORD, struct IDWriteTextFormat *, const struct D2D_RECT_F *, struct ID2D1PrivateCompositorRenderer *, enum D2D1_DRAW_TEXT_OPTIONS, enum DWRITE_MEASURING_MODE))(*(_QWORD *)this[5] + 216LL))(
    this[5],
    a3,
    a4,
    a5,
    a6,
    this[23],
    a10,
    a11);
  return 0LL;
}
