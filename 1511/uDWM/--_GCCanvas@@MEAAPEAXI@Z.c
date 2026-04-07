/*
 * XREFs of ??_GCCanvas@@MEAAPEAXI@Z @ 0x18001F750
 * Callers:
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18001FE50 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x18001D1A0 (--_GCResource@@MEAAPEAXI@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18001FE50 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180023350 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002B450 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

CCanvas *__fastcall CCanvas::`scalar deleting destructor'(CCanvas *this, char a2)
{
  volatile signed __int32 *v4; // rdi
  CResource *(__fastcall *v5)(CResource *, char); // rbp
  volatile signed __int32 *v6; // rdi
  CResource *(__fastcall *v7)(CResource *, char); // rsi
  CBaseObject *v8; // rcx
  void (__fastcall *v9)(WPF::ProcessHeapImpl *__hidden, void *); // rsi

  *(_QWORD *)this = &CVisual::`vftable';
  CVisual::ClearInstructions(this);
  VisualCollection::RemoveAll((CCanvas *)((char *)this + 32));
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 11);
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      v5 = **(CResource *(__fastcall ***)(CResource *, char))v4;
      if ( v5 == CResource::`scalar deleting destructor' )
        CResource::`scalar deleting destructor'((CResource *)v4, 1);
      else
        v5((CResource *)v4, 1);
    }
    *((_QWORD *)this + 11) = 0LL;
  }
  v6 = (volatile signed __int32 *)*((_QWORD *)this + 2);
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      v7 = **(CResource *(__fastcall ***)(CResource *, char))v6;
      if ( v7 == CResource::`scalar deleting destructor' )
        CResource::`scalar deleting destructor'((CResource *)v6, 1);
      else
        v7((CResource *)v6, 1);
    }
    *((_QWORD *)this + 2) = 0LL;
  }
  v8 = (CBaseObject *)*((_QWORD *)this + 12);
  if ( v8 )
  {
    CBaseObject::Release(v8);
    *((_QWORD *)this + 12) = 0LL;
  }
  if ( *((_QWORD *)this + 29) != *((_QWORD *)this + 30) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 29));
    *((_QWORD *)this + 29) = 0LL;
  }
  *((_QWORD *)this + 4) = &VisualCollection::`vftable';
  if ( *((_QWORD *)this + 6) != *((_QWORD *)this + 7) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 6));
    *((_QWORD *)this + 6) = 0LL;
  }
  *(_QWORD *)this = &CBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v9 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v9 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v9(WPF::g_pProcessHeap, this);
  }
  return this;
}
