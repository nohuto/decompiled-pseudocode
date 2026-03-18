/*
 * XREFs of ?AddRef@CWARPCallbackRenderer@@UEAAKXZ @ 0x18009AF20
 * Callers:
 *     ?AddRef@CHwCacheablePoolBrush@@W7EAAKXZ @ 0x18009B6B0 (-AddRef@CHwCacheablePoolBrush@@W7EAAKXZ.c)
 *     ?AddRef@CHwCacheablePoolBrush@@WCA@EAAKXZ @ 0x18009B6C0 (-AddRef@CHwCacheablePoolBrush@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWARPCallbackRenderer::AddRef(CWARPCallbackRenderer *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 4);
}
