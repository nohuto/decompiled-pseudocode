/*
 * XREFs of ?Destroy@CHwVidMemTextureManager@@AEAAXXZ @ 0x180181E6C
 * Callers:
 *     ??_ECHwLinearGradientColorSource@@MEAAPEAXI@Z @ 0x180181B00 (--_ECHwLinearGradientColorSource@@MEAAPEAXI@Z.c)
 *     ?Realize@CHwLinearGradientColorSource@@UEAAJXZ @ 0x180181CF0 (-Realize@CHwLinearGradientColorSource@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
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
