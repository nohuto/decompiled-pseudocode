/*
 * XREFs of ??_ECAtlasedImage@@MEAAPEAXI@Z @ 0x18002AE80
 * Callers:
 *     ?RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ @ 0x18001DA58 (-RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180025DA0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x1800368D0 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 * Callees:
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x180019FD0 (--_GCResource@@MEAAPEAXI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002ADD0 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

CAtlasedImage *__fastcall CAtlasedImage::`vector deleting destructor'(CAtlasedImage *this, char a2)
{
  __int64 v3; // rcx
  CResource *v5; // rcx
  void (__fastcall *v6)(WPF::ProcessHeapImpl *, void *); // rax
  unsigned __int32 v8; // esi
  CResource *(__fastcall *v9)(CResource *, char); // rax

  *(_QWORD *)this = &CAtlasedImage::`vftable';
  v3 = *((_QWORD *)this + 9);
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v3)(v3, 1LL);
    *((_QWORD *)this + 9) = 0LL;
  }
  v5 = (CResource *)*((_QWORD *)this + 11);
  if ( v5 )
  {
    v8 = _InterlockedExchangeAdd((volatile signed __int32 *)v5 + 2, 0xFFFFFFFF);
    if ( v8 == 1 )
    {
      v9 = **(CResource *(__fastcall ***)(CResource *, char))v5;
      if ( v9 == CResource::`scalar deleting destructor' )
        CResource::`scalar deleting destructor'(v5, 1);
      else
        v9(v5, v8);
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
