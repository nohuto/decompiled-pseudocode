/*
 * XREFs of ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x1C0052108
 * Callers:
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z @ 0x1C005264C (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C00EF478 (GreTransferDwmStateToSpriteState.c)
 * Callees:
 *     GreDereferenceObject @ 0x1C00D7D48 (GreDereferenceObject.c)
 */

void __fastcall SFMLOGICALSURFACE::CleanupShape(SFMLOGICALSURFACE *this, HSURF *a2)
{
  if ( (*((_DWORD *)this + 62) & 0x20) != 0 )
  {
    if ( a2 )
      GreDereferenceObject(a2[4]);
    *((_DWORD *)this + 62) &= ~0x20u;
  }
}
