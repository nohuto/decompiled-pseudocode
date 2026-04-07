/*
 * XREFs of ??_ECAtlasedImage@@MEAAPEAXI@Z @ 0x18002B500
 * Callers:
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180014970 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ @ 0x180020C38 (-RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ.c)
 * Callees:
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x18001D1A0 (--_GCResource@@MEAAPEAXI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002B450 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

CAtlasedImage *__fastcall CAtlasedImage::`vector deleting destructor'(CAtlasedImage *this, char a2)
{
  __int64 v2; // rsi
  volatile signed __int32 *v5; // rdi
  void (__fastcall *v6)(WPF::ProcessHeapImpl *, void *); // rsi
  CResource *(__fastcall *v8)(CResource *, char); // rsi

  v2 = *((_QWORD *)this + 9);
  *(_QWORD *)this = &CAtlasedImage::`vftable';
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v2)(v2, 1LL);
    *((_QWORD *)this + 9) = 0LL;
  }
  v5 = (volatile signed __int32 *)*((_QWORD *)this + 11);
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      v8 = **(CResource *(__fastcall ***)(CResource *, char))v5;
      if ( v8 == CResource::`scalar deleting destructor' )
        CResource::`scalar deleting destructor'((CResource *)v5, 1);
      else
        v8((CResource *)v5, 1);
    }
    *((_QWORD *)this + 11) = 0LL;
  }
  *(_QWORD *)this = &CBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v6 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v6 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v6(WPF::g_pProcessHeap, this);
  }
  return this;
}
