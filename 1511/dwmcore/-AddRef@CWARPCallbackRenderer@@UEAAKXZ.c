/*
 * XREFs of ?AddRef@CWARPCallbackRenderer@@UEAAKXZ @ 0x1800BE470
 * Callers:
 *     ?AddRef@CHwCacheablePoolBrush@@WCA@EAAKXZ @ 0x1800BE480 (-AddRef@CHwCacheablePoolBrush@@WCA@EAAKXZ.c)
 *     ?AddRef@CHwCacheablePoolBrush@@W7EAAKXZ @ 0x1800BF600 (-AddRef@CHwCacheablePoolBrush@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWARPCallbackRenderer::AddRef(CWARPCallbackRenderer *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 4);
}
