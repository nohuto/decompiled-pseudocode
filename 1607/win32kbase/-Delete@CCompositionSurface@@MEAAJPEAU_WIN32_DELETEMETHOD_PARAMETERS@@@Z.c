/*
 * XREFs of ?Delete@CCompositionSurface@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z @ 0x1C001B780
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ @ 0x1C001B590 (-ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ.c)
 */

__int64 __fastcall CCompositionSurface::Delete(CCompositionSurface *this, struct _WIN32_DELETEMETHOD_PARAMETERS *a2)
{
  CCompositionSurface::ReleaseAllBuffers(this);
  return 0LL;
}
