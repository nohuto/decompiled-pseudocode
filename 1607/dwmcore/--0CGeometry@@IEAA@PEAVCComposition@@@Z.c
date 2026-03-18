/*
 * XREFs of ??0CGeometry@@IEAA@PEAVCComposition@@@Z @ 0x18002CB90
 * Callers:
 *     ??0CCombinedGeometry@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z @ 0x1800201E4 (--0CCombinedGeometry@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z.c)
 *     ??0CRectangleGeometry@@IEAA@PEAVCComposition@@@Z @ 0x180095DC8 (--0CRectangleGeometry@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CGeometryGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z @ 0x18012AE48 (--0CGeometryGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z.c)
 * Callees:
 *     ??0CPropertyChangeResource@@QEAA@PEAVCComposition@@@Z @ 0x180023F70 (--0CPropertyChangeResource@@QEAA@PEAVCComposition@@@Z.c)
 */

CGeometry *__fastcall CGeometry::CGeometry(CGeometry *this, struct CComposition *a2)
{
  CGeometry *result; // rax

  CPropertyChangeResource::CPropertyChangeResource(this, a2);
  *((_QWORD *)this + 19) = 0LL;
  result = this;
  *((_BYTE *)this + 160) = 0;
  *((_DWORD *)this + 8) |= 1u;
  return result;
}
