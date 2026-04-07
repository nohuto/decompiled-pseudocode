/*
 * XREFs of ??_GCResource@@MEAAPEAXI@Z @ 0x180019FD0
 * Callers:
 *     ??_ECDrawGeometryInstruction@@EEAAPEAXI@Z @ 0x180017C40 (--_ECDrawGeometryInstruction@@EEAAPEAXI@Z.c)
 *     ??_ECDrawAtlasedRectsInstruction@@EEAAPEAXI@Z @ 0x1800193E0 (--_ECDrawAtlasedRectsInstruction@@EEAAPEAXI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??_ECBitmapSource@@MEAAPEAXI@Z @ 0x180019C30 (--_ECBitmapSource@@MEAAPEAXI@Z.c)
 *     ??_GCCanvas@@MEAAPEAXI@Z @ 0x18001C560 (--_GCCanvas@@MEAAPEAXI@Z.c)
 *     ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@@Z @ 0x18001D2A0 (-CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x18001D3B0 (-UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18001F3D0 (--1CVisual@@MEAA@XZ.c)
 *     ??_ECAtlasedImage@@MEAAPEAXI@Z @ 0x18002AE80 (--_ECAtlasedImage@@MEAAPEAXI@Z.c)
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E2B0 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E5D0 (-GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

CResource *__fastcall CResource::`scalar deleting destructor'(CResource *this, char a2)
{
  void (__fastcall *v4)(WPF::ProcessHeapImpl *__hidden, void *); // rax

  *(_QWORD *)this = &CResource::`vftable';
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 120LL))(
    *((_QWORD *)this + 2),
    *((unsigned int *)this + 6));
  *(_QWORD *)this = &CBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v4 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      HeapFree(g_hProcessHeap, 0, this);
    else
      v4(WPF::g_pProcessHeap, this);
  }
  return this;
}
