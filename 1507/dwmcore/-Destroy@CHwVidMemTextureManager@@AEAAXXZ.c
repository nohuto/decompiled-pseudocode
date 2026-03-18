/*
 * XREFs of ?Destroy@CHwVidMemTextureManager@@AEAAXXZ @ 0x18014368C
 * Callers:
 *     ??_ECHwLinearGradientColorSource@@MEAAPEAXI@Z @ 0x180143080 (--_ECHwLinearGradientColorSource@@MEAAPEAXI@Z.c)
 *     ?Realize@CHwLinearGradientColorSource@@UEAAJXZ @ 0x180143360 (-Realize@CHwLinearGradientColorSource@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 */

void __fastcall CHwVidMemTextureManager::Destroy(CHwVidMemTextureManager *this)
{
  CMILPoolResource *v2; // rcx
  CMILPoolResource *v3; // rcx

  v2 = (CMILPoolResource *)*((_QWORD *)this + 1);
  if ( v2 )
    CMILPoolResource::Release(v2);
  v3 = (CMILPoolResource *)*((_QWORD *)this + 2);
  if ( v3 )
    CMILPoolResource::Release(v3);
}
