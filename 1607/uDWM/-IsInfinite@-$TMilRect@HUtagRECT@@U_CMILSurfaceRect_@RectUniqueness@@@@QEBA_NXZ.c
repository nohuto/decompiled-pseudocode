/*
 * XREFs of ?IsInfinite@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ @ 0x180072BC4
 * Callers:
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180072A80 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsInfinite(_DWORD *a1)
{
  return *a1 <= TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::sc_rcInfinite && a1[2] >= dword_1800B7638
      || a1[1] <= dword_1800B7634 && a1[3] >= dword_1800B763C;
}
