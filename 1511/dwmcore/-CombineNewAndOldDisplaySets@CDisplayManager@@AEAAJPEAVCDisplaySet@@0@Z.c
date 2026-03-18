/*
 * XREFs of ?CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z @ 0x1800B64F0
 * Callers:
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x18006F0C8 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateCompari.c)
 * Callees:
 *     ?ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ @ 0x180070180 (-ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDisplay@CDisplaySet@@IEAAXIPEAVCDisplay@@@Z @ 0x1801389DC (-SetDisplay@CDisplaySet@@IEAAXIPEAVCDisplay@@@Z.c)
 *     ?IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z @ 0x18013A064 (-IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z.c)
 */

__int64 __fastcall CDisplayManager::CombineNewAndOldDisplaySets(
        CDisplayManager *this,
        struct CDisplaySet *a2,
        struct CDisplaySet *a3)
{
  __int64 i; // rbx
  __int64 j; // rsi
  int v7; // eax
  unsigned int v8; // ebx
  struct CDisplay *v10; // rdx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 18); i = (unsigned int)(i + 1) )
  {
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)a3 + 18); j = (unsigned int)(j + 1) )
    {
      if ( CDisplay::IsRenderTargetEquivalentTo(
             *(CDisplay **)(*((_QWORD *)a2 + 6) + 8 * i),
             *(const struct CDisplay **)(*((_QWORD *)a3 + 6) + 8 * j)) )
      {
        CDisplaySet::SetDisplay(a2, i, v10);
      }
    }
  }
  v7 = CDisplaySet::ArrangeCloneDisplays(a2);
  v8 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x136u);
  return v8;
}
