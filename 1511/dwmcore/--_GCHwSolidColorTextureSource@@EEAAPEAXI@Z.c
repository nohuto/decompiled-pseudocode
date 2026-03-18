/*
 * XREFs of ??_GCHwSolidColorTextureSource@@EEAAPEAXI@Z @ 0x180151020
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
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
