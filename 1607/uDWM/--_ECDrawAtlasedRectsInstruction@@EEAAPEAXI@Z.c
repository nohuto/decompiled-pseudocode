/*
 * XREFs of ??_ECDrawAtlasedRectsInstruction@@EEAAPEAXI@Z @ 0x1800193E0
 * Callers:
 *     ?UpdateAtlas@CTopLevelAtlasedRectsVisual@@UEAAJXZ @ 0x180019590 (-UpdateAtlas@CTopLevelAtlasedRectsVisual@@UEAAJXZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18001F3D0 (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x180019FD0 (--_GCResource@@MEAAPEAXI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002ADD0 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

CDrawAtlasedRectsInstruction *__fastcall CDrawAtlasedRectsInstruction::`vector deleting destructor'(
        CDrawAtlasedRectsInstruction *this,
        char a2)
{
  volatile signed __int32 *v4; // rcx
  void *(__fastcall *v5)(CResource *__hidden, unsigned int); // rax
  __int64 v6; // rcx
  void (__fastcall *v7)(WPF::ProcessHeapImpl *__hidden, void *); // rax

  *(_QWORD *)this = &CDrawAtlasedRectsInstruction::`vftable';
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      v5 = **(void *(__fastcall ***)(CResource *__hidden, unsigned int))v4;
      if ( v5 == CResource::`scalar deleting destructor' )
        CResource::`scalar deleting destructor'((CResource *)v4, 1u);
      else
        v5((CResource *)v4, 1u);
    }
    *((_QWORD *)this + 2) = 0LL;
  }
  v6 = *((_QWORD *)this + 3);
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v6)(v6, 1LL);
    *((_QWORD *)this + 3) = 0LL;
  }
  *(_QWORD *)this = &CBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v7 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v7 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v7(WPF::g_pProcessHeap, this);
  }
  return this;
}
