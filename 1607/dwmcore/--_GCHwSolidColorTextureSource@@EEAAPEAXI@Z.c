/*
 * XREFs of ??_GCHwSolidColorTextureSource@@EEAAPEAXI@Z @ 0x18017C480
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CHwSolidColorTextureSource *__fastcall CHwSolidColorTextureSource::`scalar deleting destructor'(
        CHwSolidColorTextureSource *this,
        char a2)
{
  CMILPoolResource *v4; // rcx

  *(_QWORD *)this = &CHwSolidColorTextureSource::`vftable';
  v4 = (CMILPoolResource *)*((_QWORD *)this + 13);
  if ( v4 )
    CMILPoolResource::Release(v4);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CHwSolidColorTextureSource *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
