/*
 * XREFs of ??_GCPushTransformInstruction@@EEAAPEAXI@Z @ 0x180014DE0
 * Callers:
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x18001DF40 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 * Callees:
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x180017890 (--_GCResource@@MEAAPEAXI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180028450 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

CPushTransformInstruction *__fastcall CPushTransformInstruction::`scalar deleting destructor'(
        CPushTransformInstruction *this,
        char a2)
{
  volatile signed __int32 *v2; // rdi
  void (__fastcall *v5)(WPF::ProcessHeapImpl *__hidden, void *); // rsi
  void *(__fastcall *v7)(CResource *__hidden, unsigned int); // rsi

  v2 = (volatile signed __int32 *)*((_QWORD *)this + 2);
  *(_QWORD *)this = &CPushTransformInstruction::`vftable';
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      v7 = **(void *(__fastcall ***)(CResource *__hidden, unsigned int))v2;
      if ( v7 == CResource::`scalar deleting destructor' )
        CResource::`scalar deleting destructor'((CResource *)v2, 1u);
      else
        v7((CResource *)v2, 1u);
    }
    *((_QWORD *)this + 2) = 0LL;
  }
  *(_QWORD *)this = &CBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v5 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v5 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v5(WPF::g_pProcessHeap, this);
  }
  return this;
}
