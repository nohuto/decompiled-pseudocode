/*
 * XREFs of ?RemoveClippedD2D1CommandListForAllContexts@CPrimitiveGroup@@UEAAXPEAVCPolygon@@@Z @ 0x18010C900
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveID2DCommandList@CD2DCommandList@@QEAAXPEAVCPolygon@@@Z @ 0x1801388CC (-RemoveID2DCommandList@CD2DCommandList@@QEAAXPEAVCPolygon@@@Z.c)
 */

void __fastcall CPrimitiveGroup::RemoveClippedD2D1CommandListForAllContexts(CPrimitiveGroup *this, struct CPolygon *a2)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 28); i = (unsigned int)(i + 1) )
    CD2DCommandList::RemoveID2DCommandList(*(CD2DCommandList **)(*((_QWORD *)this + 11) + 8 * i), a2);
}
