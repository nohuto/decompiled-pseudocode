/*
 * XREFs of ??_GCMILCOMBase@@UEAAPEAXI@Z @ 0x18015AA00
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

CMILCOMBase *__fastcall CMILCOMBase::`scalar deleting destructor'(CMILCOMBase *this, char a2)
{
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CMILCOMBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
