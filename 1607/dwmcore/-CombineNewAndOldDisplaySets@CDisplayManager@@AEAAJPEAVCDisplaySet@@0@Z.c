/*
 * XREFs of ?CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z @ 0x1801617C0
 * Callers:
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x1800382E4 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateCompari.c)
 * Callees:
 *     ?IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z @ 0x180034634 (-IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z.c)
 *     ?ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ @ 0x180036330 (-ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDisplay@CDisplaySet@@IEAAXIPEAVCDisplay@@@Z @ 0x180161BE8 (-SetDisplay@CDisplaySet@@IEAAXIPEAVCDisplay@@@Z.c)
 */

__int64 __fastcall CDisplayManager::CombineNewAndOldDisplaySets(
        CDisplayManager *this,
        struct CDisplaySet *a2,
        struct CDisplaySet *a3)
{
  __int64 i; // rbx
  __int64 j; // rsi
  struct CDisplay *v7; // rdx
  int v8; // eax
  unsigned int v9; // ebx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 18); i = (unsigned int)(i + 1) )
  {
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)a3 + 18); j = (unsigned int)(j + 1) )
    {
      if ( CDisplay::IsRenderTargetEquivalentTo(
             *(CDisplay **)(*((_QWORD *)a2 + 6) + 8 * i),
             *(const struct CDisplay **)(*((_QWORD *)a3 + 6) + 8 * j)) )
      {
        CDisplaySet::SetDisplay(a2, i, v7);
      }
    }
  }
  v8 = CDisplaySet::ArrangeCloneDisplays(a2);
  v9 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1D5u);
  return v9;
}
