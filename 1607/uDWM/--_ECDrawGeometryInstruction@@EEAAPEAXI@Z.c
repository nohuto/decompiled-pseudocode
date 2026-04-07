/*
 * XREFs of ??_ECDrawGeometryInstruction@@EEAAPEAXI@Z @ 0x180017C40
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18001F3D0 (--1CVisual@@MEAA@XZ.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180020310 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 * Callees:
 *     ??_ECCachedVisualImageBrushResource@@MEAAPEAXI@Z @ 0x180009CC0 (--_ECCachedVisualImageBrushResource@@MEAAPEAXI@Z.c)
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x180019FD0 (--_GCResource@@MEAAPEAXI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002ADD0 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

CDrawGeometryInstruction *__fastcall CDrawGeometryInstruction::`vector deleting destructor'(
        CDrawGeometryInstruction *this,
        char a2)
{
  volatile signed __int32 *v3; // rcx
  volatile signed __int32 *v5; // rcx
  void (__fastcall *v6)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  void *(__fastcall *v8)(CResource *__hidden, unsigned int); // rax
  CCachedVisualImageBrushResource *(__fastcall *v9)(CCachedVisualImageBrushResource *, char); // rax

  *(_QWORD *)this = &CDrawGeometryInstruction::`vftable';
  v3 = (volatile signed __int32 *)*((_QWORD *)this + 3);
  if ( v3 && _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
  {
    v8 = **(void *(__fastcall ***)(CResource *__hidden, unsigned int))v3;
    if ( v8 == CResource::`scalar deleting destructor' )
      CResource::`scalar deleting destructor'((CResource *)v3, 1u);
    else
      v8((CResource *)v3, 1u);
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
