/*
 * XREFs of ??_ECAtlasedImage@@MEAAPEAXI@Z @ 0x180028500
 * Callers:
 *     ?RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ @ 0x18001B628 (-RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180035DD0 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 * Callees:
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x180017890 (--_GCResource@@MEAAPEAXI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180028450 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

CAtlasedImage *__fastcall CAtlasedImage::`vector deleting destructor'(CAtlasedImage *this, char a2)
{
  __int64 v2; // rsi
  volatile signed __int32 *v5; // rdi
  CResource *(__fastcall *v6)(CResource *, char); // rsi
  void (__fastcall *v7)(WPF::ProcessHeapImpl *, void *); // rsi

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
      v6 = **(CResource *(__fastcall ***)(CResource *, char))v5;
      if ( v6 == CResource::`scalar deleting destructor' )
        CResource::`scalar deleting destructor'((CResource *)v5, 1);
      else
        v6((CResource *)v5, 1);
    }
    *((_QWORD *)this + 11) = 0LL;
  }
  *(_QWORD *)this = &CBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v7 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v7 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v7(WPF::g_pProcessHeap, this);
  }
  return this;
}
