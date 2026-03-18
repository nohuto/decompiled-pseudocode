/*
 * XREFs of ??_GCCompositionSpotLight@@UEAAPEAXI@Z @ 0x180150EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CCompositionLight@@UEAA@XZ @ 0x18014FFC4 (--1CCompositionLight@@UEAA@XZ.c)
 */

struct CResource **__fastcall CCompositionSpotLight::`scalar deleting destructor'(struct CResource **this, char a2)
{
  *this = (struct CResource *)&CCompositionSpotLight::`vftable';
  CResource::UnRegisterNotifierInternal((CResource *)this, this[24]);
  this[24] = 0LL;
  CCompositionLight::~CCompositionLight((CCompositionLight *)this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct CResource **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
