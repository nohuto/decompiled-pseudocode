/*
 * XREFs of ?CreateGeometryGroup@CD2DFactory@@QEAAJW4D2D1_FILL_MODE@@PEAPEAUID2D1Geometry@@IPEAPEAUID2D1GeometryGroup@@@Z @ 0x180163E84
 * Callers:
 *     ?IntersectGeometryWithSafeBounds@CD2DContext@@MEAAJPEAUID2D1Geometry@@0PEBUD2D_MATRIX_3X2_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAU2@@Z @ 0x180177720 (-IntersectGeometryWithSafeBounds@CD2DContext@@MEAAJPEAUID2D1Geometry@@0PEBUD2D_MATRIX_3X2_F@@PEA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DFactory::CreateGeometryGroup(
        CD2DFactory *this,
        enum D2D1_FILL_MODE a2,
        struct ID2D1Geometry **a3,
        __int64 a4,
        struct ID2D1GeometryGroup **a5)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct ID2D1Geometry **, __int64, struct ID2D1GeometryGroup **))(**((_QWORD **)this + 3) + 64LL))(
           *((_QWORD *)this + 3),
           0LL,
           a3,
           2LL,
           a5);
}
