/*
 * XREFs of ??_ECDrawGeometryInstruction@@EEAAPEAXI@Z @ 0x18001A6F0
 * Callers:
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180023350 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 * Callees:
 *     ??_ECCachedVisualImageBrushResource@@MEAAPEAXI@Z @ 0x180013F50 (--_ECCachedVisualImageBrushResource@@MEAAPEAXI@Z.c)
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x18001D1A0 (--_GCResource@@MEAAPEAXI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002B450 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

CDrawGeometryInstruction *__fastcall CDrawGeometryInstruction::`vector deleting destructor'(
        CDrawGeometryInstruction *this,
        char a2)
{
  volatile signed __int32 *v2; // rbx
  volatile signed __int32 *v5; // rbx
  void (__fastcall *v6)(WPF::ProcessHeapImpl *__hidden, void *); // rsi
  void *(__fastcall *v8)(CResource *__hidden, unsigned int); // rsi
  CCachedVisualImageBrushResource *(__fastcall *v9)(CCachedVisualImageBrushResource *, char); // rsi

  v2 = (volatile signed __int32 *)*((_QWORD *)this + 3);
  *(_QWORD *)this = &CDrawGeometryInstruction::`vftable';
  if ( v2 && _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
  {
    v8 = **(void *(__fastcall ***)(CResource *__hidden, unsigned int))v2;
    if ( v8 == CResource::`scalar deleting destructor' )
      CResource::`scalar deleting destructor'((CResource *)v2, 1u);
    else
      v8((CResource *)v2, 1u);
  }
  v5 = (volatile signed __int32 *)*((_QWORD *)this + 2);
  if ( v5 && _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
  {
    v9 = **(CCachedVisualImageBrushResource *(__fastcall ***)(CCachedVisualImageBrushResource *, char))v5;
    if ( (char *)v9 == (char *)CResource::`scalar deleting destructor' )
    {
      CResource::`scalar deleting destructor'((CResource *)v5, 1u);
    }
    else if ( v9 == CCachedVisualImageBrushResource::`vector deleting destructor' )
    {
      CCachedVisualImageBrushResource::`vector deleting destructor'((CCachedVisualImageBrushResource *)v5, 1);
    }
    else
    {
      v9((CCachedVisualImageBrushResource *)v5, 1);
    }
  }
  *(_QWORD *)this = &CBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v6 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v6 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v6(WPF::g_pProcessHeap, this);
  }
  return this;
}
