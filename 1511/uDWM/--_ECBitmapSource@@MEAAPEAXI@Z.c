/*
 * XREFs of ??_ECBitmapSource@@MEAAPEAXI@Z @ 0x18001CAE0
 * Callers:
 *     ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x18001BA30 (-ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 * Callees:
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x18001D1A0 (--_GCResource@@MEAAPEAXI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002B450 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

CBitmapSource *__fastcall CBitmapSource::`vector deleting destructor'(CBitmapSource *this, char a2)
{
  volatile signed __int32 *v2; // rbx
  __int64 v5; // rsi
  void (__fastcall *v6)(WPF::ProcessHeapImpl *__hidden, void *); // rsi
  void *(__fastcall *v8)(CResource *__hidden, unsigned int); // rsi

  v2 = (volatile signed __int32 *)*((_QWORD *)this + 2);
  *(_QWORD *)this = &CBitmapSource::`vftable';
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      v8 = **(void *(__fastcall ***)(CResource *__hidden, unsigned int))v2;
      if ( v8 == CResource::`scalar deleting destructor' )
        CResource::`scalar deleting destructor'((CResource *)v2, 1u);
      else
        v8((CResource *)v2, 1u);
    }
    *((_QWORD *)this + 2) = 0LL;
  }
  v5 = *((_QWORD *)this + 12);
  if ( v5 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 16LL))(*((_QWORD *)this + 12));
    *((_QWORD *)this + 12) = 0LL;
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
