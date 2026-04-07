/*
 * XREFs of ??_GCCanvas@@MEAAPEAXI@Z @ 0x18001C560
 * Callers:
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18001CBB0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x180019FD0 (--_GCResource@@MEAAPEAXI@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18001CBB0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180020310 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002ADD0 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

CCanvas *__fastcall CCanvas::`scalar deleting destructor'(CCanvas *this, char a2)
{
  volatile signed __int32 *v4; // rcx
  CResource *(__fastcall *v5)(CResource *, char); // rax
  CResource *v6; // rcx
  unsigned __int32 v7; // edi
  CResource *(__fastcall *v8)(CResource *, char); // rax
  CBaseObject *v9; // rcx
  void (__fastcall *v10)(WPF::ProcessHeapImpl *__hidden, void *); // rax

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
  v6 = (CResource *)*((_QWORD *)this + 2);
  if ( v6 )
  {
    v7 = _InterlockedExchangeAdd((volatile signed __int32 *)v6 + 2, 0xFFFFFFFF);
    if ( v7 == 1 )
    {
      v8 = **(CResource *(__fastcall ***)(CResource *, char))v6;
      if ( v8 == CResource::`scalar deleting destructor' )
        CResource::`scalar deleting destructor'(v6, 1);
      else
        v8(v6, v7);
    }
    *((_QWORD *)this + 2) = 0LL;
  }
  v9 = (CBaseObject *)*((_QWORD *)this + 12);
  if ( v9 )
  {
    CBaseObject::Release(v9);
    *((_QWORD *)this + 12) = 0LL;
  }
  if ( *((_QWORD *)this + 29) != *((_QWORD *)this + 30) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 29) = 0LL;
  }
  *((_QWORD *)this + 4) = &VisualCollection::`vftable';
  if ( *((_QWORD *)this + 6) != *((_QWORD *)this + 7) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 6) = 0LL;
  }
  *(_QWORD *)this = &CBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v10 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v10 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v10(WPF::g_pProcessHeap, this);
  }
  return this;
}
