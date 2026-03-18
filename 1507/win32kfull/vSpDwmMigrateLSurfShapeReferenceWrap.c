/*
 * XREFs of vSpDwmMigrateLSurfShapeReferenceWrap @ 0x1C0100C30
 * Callers:
 *     <none>
 * Callees:
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C00118C0 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 */

_BOOL8 __fastcall vSpDwmMigrateLSurfShapeReferenceWrap(_QWORD *a1, SFMLOGICALSURFACE *this, __int64 a3)
{
  SFMLOGICALSURFACE::SetShape(this, a1, 0LL);
  return SFMLOGICALSURFACE::SetShape(this, a1, (struct _SURFOBJ *)(a3 + 24));
}
