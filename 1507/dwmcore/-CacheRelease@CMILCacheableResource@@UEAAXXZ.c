/*
 * XREFs of ?CacheRelease@CMILCacheableResource@@UEAAXXZ @ 0x180057070
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CMILCacheableResource::CacheRelease(CMILCacheableResource *this)
{
  (*(void (__fastcall **)(CMILCacheableResource *))(*(_QWORD *)this + 8LL))(this);
}
