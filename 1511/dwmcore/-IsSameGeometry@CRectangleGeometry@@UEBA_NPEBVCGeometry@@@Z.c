/*
 * XREFs of ?IsSameGeometry@CRectangleGeometry@@UEBA_NPEBVCGeometry@@@Z @ 0x180065450
 * Callers:
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x18004D54C (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 * Callees:
 *     ??8CRoundedRectangleGeometryData@@QEBA_NAEBU0@@Z @ 0x18001CB8C (--8CRoundedRectangleGeometryData@@QEBA_NAEBU0@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

char __fastcall CRectangleGeometry::IsSameGeometry(CRectangleGeometry *this, const struct CGeometry *a2)
{
  char v2; // di

  v2 = 0;
  if ( a2 && (*(unsigned __int8 (__fastcall **)(const struct CGeometry *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 67LL) )
    return CRoundedRectangleGeometryData::operator==((float *)this + 26, (float *)a2 + 26);
  return v2;
}
