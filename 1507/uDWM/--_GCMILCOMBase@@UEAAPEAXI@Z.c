/*
 * XREFs of ??_GCMILCOMBase@@UEAAPEAXI@Z @ 0x18009EDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
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
