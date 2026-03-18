/*
 * XREFs of ?CacheRelease@CMILCacheableResource@@UEAAXXZ @ 0x180014EF0
 * Callers:
 *     ??1CMILResourceCache@@IEAA@XZ @ 0x18008A754 (--1CMILResourceCache@@IEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CMILCacheableResource::CacheRelease(CMILCacheableResource *this)
{
  (*(void (__fastcall **)(CMILCacheableResource *))(*(_QWORD *)this + 8LL))(this);
}
