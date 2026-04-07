/*
 * XREFs of ?EdgeBorderMustBeOpaque@CTopLevelWindow@@AEAAHXZ @ 0x18002A5DC
 * Callers:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180024B70 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ @ 0x180026560 (-UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTopLevelWindow::EdgeBorderMustBeOpaque(CTopLevelWindow *this)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 1408)
    || (unsigned int)IsWindowArranged(*(_QWORD *)(*((_QWORD *)this + 93) + 40LL))
    || (*((_BYTE *)this + 608) & 0x20) != 0 )
  {
    return 1;
  }
  return v1;
}
