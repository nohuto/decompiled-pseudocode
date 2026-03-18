/*
 * XREFs of ?IsEquivalentTo@CDisplaySet@@AEBA_NPEBV1@_N@Z @ 0x180070238
 * Callers:
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x18006F0C8 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateCompari.c)
 * Callees:
 *     ?IsEquivalentTo@CDisplay@@AEBA_NPEBV1@_N@Z @ 0x180070BB4 (-IsEquivalentTo@CDisplay@@AEBA_NPEBV1@_N@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18008C5F0 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

char __fastcall CDisplaySet::IsEquivalentTo(CDisplaySet *this, const struct CDisplaySet *a2, bool a3)
{
  __int64 v4; // r10
  __int64 v5; // r11
  unsigned int v6; // edi
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // r14

  if ( (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
                          (char *)this + 24,
                          (char *)a2 + 24) )
  {
    v6 = *(_DWORD *)(v5 + 72);
    if ( v6 == *(_DWORD *)(v4 + 72) )
    {
      v7 = 0LL;
      if ( !v6 )
        return 1;
      v8 = *(_QWORD *)(v4 + 48);
      v9 = *(_QWORD *)(v5 + 48);
      while ( CDisplay::IsEquivalentTo(*(CDisplay **)(v9 + 8 * v7), *(const struct CDisplay **)(v8 + 8 * v7), a3) )
      {
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= v6 )
          return 1;
      }
    }
  }
  return 0;
}
