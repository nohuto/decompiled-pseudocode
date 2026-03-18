/*
 * XREFs of ?RemoveClippedD2D1CommandListForAllContexts@CCompositionSurfaceBitmap@@UEAAXPEAVCPolygon@@@Z @ 0x18010A840
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveID2DCommandList@CD2DCommandList@@QEAAXPEAVCPolygon@@@Z @ 0x1801388CC (-RemoveID2DCommandList@CD2DCommandList@@QEAAXPEAVCPolygon@@@Z.c)
 */

void __fastcall CCompositionSurfaceBitmap::RemoveClippedD2D1CommandListForAllContexts(
        CCompositionSurfaceBitmap *this,
        struct CPolygon *a2)
{
  unsigned int i; // ebx

  for ( i = 0; i < *((_DWORD *)this + 98); ++i )
    CD2DCommandList::RemoveID2DCommandList(*(CD2DCommandList **)(*((_QWORD *)this + 46) + 16LL * i), a2);
}
