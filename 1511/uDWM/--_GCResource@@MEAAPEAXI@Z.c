/*
 * XREFs of ??_GCResource@@MEAAPEAXI@Z @ 0x18001D1A0
 * Callers:
 *     ??_ECDrawGeometryInstruction@@EEAAPEAXI@Z @ 0x18001A6F0 (--_ECDrawGeometryInstruction@@EEAAPEAXI@Z.c)
 *     ??_ECDrawAtlasedRectsInstruction@@EEAAPEAXI@Z @ 0x18001C350 (--_ECDrawAtlasedRectsInstruction@@EEAAPEAXI@Z.c)
 *     ??_ECBitmapSource@@MEAAPEAXI@Z @ 0x18001CAE0 (--_ECBitmapSource@@MEAAPEAXI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??_GCCanvas@@MEAAPEAXI@Z @ 0x18001F750 (--_GCCanvas@@MEAAPEAXI@Z.c)
 *     ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@@Z @ 0x1800204B0 (-CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x1800205D0 (-UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180022130 (--1CVisual@@MEAA@XZ.c)
 *     ??_ECAtlasedImage@@MEAAPEAXI@Z @ 0x18002B500 (--_ECAtlasedImage@@MEAAPEAXI@Z.c)
 *     ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E470 (-GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E890 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

CResource *__fastcall CResource::`scalar deleting destructor'(CResource *this, char a2)
{
  unsigned int v3; // edx
  void (__fastcall *v5)(WPF::ProcessHeapImpl *__hidden, void *); // rdi

  v3 = *((_DWORD *)this + 6);
  *(_QWORD *)this = &CResource::`vftable';
  MilResource_ReleaseOnChannel(*((struct MIL_CHANNEL__ **)this + 2), v3, 0LL);
  *(_QWORD *)this = &CBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v5 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v5 == WPF::ProcessHeapImpl::Free )
      HeapFree(g_hProcessHeap, 0, this);
    else
      v5(WPF::g_pProcessHeap, this);
  }
  return this;
}
