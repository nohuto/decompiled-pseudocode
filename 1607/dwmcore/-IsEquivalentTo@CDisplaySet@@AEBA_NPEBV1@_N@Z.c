/*
 * XREFs of ?IsEquivalentTo@CDisplaySet@@AEBA_NPEBV1@_N@Z @ 0x1800363E8
 * Callers:
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x1800382E4 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateCompari.c)
 * Callees:
 *     ?IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z @ 0x180034634 (-IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z.c)
 *     ?IsEquivalentTo@CDisplay@@AEBA_NPEBV1@_N@Z @ 0x180034BA8 (-IsEquivalentTo@CDisplay@@AEBA_NPEBV1@_N@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800ACBEC (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

char __fastcall CDisplaySet::IsEquivalentTo(CDisplaySet *this, const struct CDisplaySet *a2)
{
  __int64 v2; // r10
  __int64 v3; // r11
  unsigned int v4; // edi
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // r15
  const struct CDisplay *v8; // rsi
  CDisplay *v9; // rbp

  if ( (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
                          (char *)this + 24,
                          (char *)a2 + 24) )
  {
    v4 = *(_DWORD *)(v3 + 72);
    if ( v4 == *(_DWORD *)(v2 + 72) )
    {
      v5 = 0LL;
      if ( !v4 )
        return 1;
      v6 = *(_QWORD *)(v2 + 48);
      v7 = *(_QWORD *)(v3 + 48);
      while ( 1 )
      {
        v8 = *(const struct CDisplay **)(v6 + 8 * v5);
        v9 = *(CDisplay **)(v7 + 8 * v5);
        if ( !CDisplay::IsEquivalentTo(v9, v8) || !CDisplay::IsRenderTargetEquivalentTo(v9, v8) )
          break;
        v5 = (unsigned int)(v5 + 1);
        if ( (unsigned int)v5 >= v4 )
          return 1;
      }
    }
  }
  return 0;
}
