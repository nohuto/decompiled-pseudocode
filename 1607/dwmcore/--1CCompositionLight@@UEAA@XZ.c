/*
 * XREFs of ??1CCompositionLight@@UEAA@XZ @ 0x18014FFC4
 * Callers:
 *     ??_GCCompositionLight@@UEAAPEAXI@Z @ 0x180150010 (--_GCCompositionLight@@UEAAPEAXI@Z.c)
 *     ??_ECCompositionAmbientLight@@UEAAPEAXI@Z @ 0x180150430 (--_ECCompositionAmbientLight@@UEAAPEAXI@Z.c)
 *     ??_GCCompositionDistantLight@@UEAAPEAXI@Z @ 0x1801505C0 (--_GCCompositionDistantLight@@UEAAPEAXI@Z.c)
 *     ??_ECCompositionPointLight@@UEAAPEAXI@Z @ 0x1801509B0 (--_ECCompositionPointLight@@UEAAPEAXI@Z.c)
 *     ??_GCCompositionSpotLight@@UEAAPEAXI@Z @ 0x180150EC0 (--_GCCompositionSpotLight@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?RemoveAllTargets@CCompositionLight@@AEAAXXZ @ 0x1801502A8 (-RemoveAllTargets@CCompositionLight@@AEAAXXZ.c)
 */

void __fastcall CCompositionLight::~CCompositionLight(CCompositionLight *this)
{
  *(_QWORD *)this = &CCompositionLight::`vftable';
  CCompositionLight::RemoveAllTargets(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 136);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
