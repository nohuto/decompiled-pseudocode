/*
 * XREFs of ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180072A80
 * Callers:
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x18003EA98 (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 *     ?ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ @ 0x18003EBD0 (-ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ.c)
 *     ?IsEquivalentTo@CDWMDisplay@@AEBA_NPEBV1@@Z @ 0x180072AEC (-IsEquivalentTo@CDWMDisplay@@AEBA_NPEBV1@@Z.c)
 * Callees:
 *     ?IsRectEmpty@@YA_NAEBUtagRECT@@@Z @ 0x180041A60 (-IsRectEmpty@@YA_NAEBUtagRECT@@@Z.c)
 *     ?IsInfinite@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ @ 0x180072BC4 (-IsInfinite@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ.c)
 */

char __fastcall TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
        const struct tagRECT *a1,
        _DWORD *a2)
{
  bool v2; // al
  const struct tagRECT *v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8

  if ( a1->left == *a2 && a1->top == a2[1] && a1->right == a2[2] && a1->bottom == a2[3]
    || (v2 = IsRectEmpty(a1), v5 = 0LL, v2) && IsRectEmpty(v3)
    || (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsInfinite(v4, v5)
    && (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsInfinite(v7, v6) )
  {
    LOBYTE(v6) = 1;
  }
  return v6;
}
