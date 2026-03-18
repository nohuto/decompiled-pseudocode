/*
 * XREFs of SFMLOGICALSURFACE_CreateHLSURFCloneWrap @ 0x1C000A8A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
HLSURF __fastcall SFMLOGICALSURFACE_CreateHLSURFCloneWrap(
        HDEV a1,
        struct SFMLOGICALSURFACE *a2,
        int a3,
        int a4,
        int a5)
{
  return SFMLOGICALSURFACE::CreateHLSURFClone(a1, a2, a3, a4, a5);
}
