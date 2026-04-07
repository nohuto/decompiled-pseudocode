/*
 * XREFs of ??_GCNullAnimatedVisual@@UEAAPEAXI@Z @ 0x18004B748
 * Callers:
 *     ??_ECNullAnimatedVisual@@W7EAAPEAXI@Z @ 0x180050530 (--_ECNullAnimatedVisual@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

CNullAnimatedVisual *__fastcall CNullAnimatedVisual::`scalar deleting destructor'(CNullAnimatedVisual *this, char a2)
{
  *((_QWORD *)this + 1) = &CBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CNullAnimatedVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
